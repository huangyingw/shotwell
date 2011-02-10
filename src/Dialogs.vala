/* Copyright 2009-2011 Yorba Foundation
 *
 * This software is licensed under the GNU LGPL (version 2.1 or later).
 * See the COPYING file in this distribution. 
 */

namespace ExportUI {
private static File current_export_dir = null;

public File? choose_file(string current_file_basename) {
    if (current_export_dir == null)
        current_export_dir = File.new_for_path(Environment.get_home_dir());

    string file_chooser_title = VideoReader.is_supported_video_filename(current_file_basename) ?
        _("Export Video") : _("Export Photo");
        
    Gtk.FileChooserDialog chooser = new Gtk.FileChooserDialog(file_chooser_title,
        AppWindow.get_instance(), Gtk.FileChooserAction.SAVE, Gtk.STOCK_CANCEL, 
        Gtk.ResponseType.CANCEL, Gtk.STOCK_SAVE, Gtk.ResponseType.ACCEPT, null);
    chooser.set_do_overwrite_confirmation(true);
    chooser.set_current_folder(current_export_dir.get_path());
    chooser.set_current_name(current_file_basename);
    chooser.set_local_only(false);

    File file = null;
    if (chooser.run() == Gtk.ResponseType.ACCEPT) {
        file = File.new_for_path(chooser.get_filename());
        current_export_dir = file.get_parent();
    }
    
    chooser.destroy();
    
    return file;
}

public File? choose_dir(string? user_title = null) {
    if (current_export_dir == null)
        current_export_dir = File.new_for_path(Environment.get_home_dir());

    if (user_title == null)
        user_title = _("Export Photos");

    Gtk.FileChooserDialog chooser = new Gtk.FileChooserDialog(user_title,
        AppWindow.get_instance(), Gtk.FileChooserAction.SELECT_FOLDER, Gtk.STOCK_CANCEL, 
        Gtk.ResponseType.CANCEL, Gtk.STOCK_OK, Gtk.ResponseType.ACCEPT, null);
    chooser.set_current_folder(current_export_dir.get_path());
    chooser.set_local_only(false);
    
    File dir = null;
    if (chooser.run() == Gtk.ResponseType.ACCEPT) {
        dir = File.new_for_path(chooser.get_filename());
        current_export_dir = dir;
    }
    
    chooser.destroy();
    
    return dir;
}
}

// Ticket #3023
// Attempt to replace the system error with something friendlier
// if we can't copy an image over for editing in an external tool.
public void open_external_editor_error_dialog(Error err, Photo photo) {
    // Did we fail because we can't write to this directory?
    if (err is IOError.PERMISSION_DENIED || err is FileError.PERM) {
         // Yes - display an alternate error message here.
         AppWindow.error_message(          
            _("Shotwell couldn't create a file for editing this photo because you do not have " + 
            "permission to write to %s.").printf(photo.get_master_file().get_parent().get_path()));
    } else {
        // No - something else is wrong, display the error message 
        // the system gave us.
        AppWindow.error_message(Resources.launch_editor_failed(err));
    }         
}

public Gtk.ResponseType export_error_dialog(File dest, bool photos_remaining) {
    string message = _("Unable to export the following photo due to a file error.\n\n") +
        dest.get_path();

    Gtk.ResponseType response = Gtk.ResponseType.NONE;

    if (photos_remaining) {
        message += _("\n\nWould you like to continue exporting?");
        response = AppWindow.affirm_cancel_question(message, _("Con_tinue"));
    } else {
        AppWindow.error_message(message);
    }

    return response;
}


public class ExportDialog : Gtk.Dialog {
    public const int DEFAULT_SCALE = 1200;

    // "Unmodified" and "Current," though they appear in the "Format:" popup menu, really
    // aren't formats so much as they are operating modes that determine specific formats.
    // Hereafter we'll refer to these as "special formats."
    public const int NUM_SPECIAL_FORMATS = 2;
    public const string UNMODIFIED_FORMAT_LABEL = _("Unmodified");
    public const string CURRENT_FORMAT_LABEL = _("Current");
    
    public const ScaleConstraint[] CONSTRAINT_ARRAY = { ScaleConstraint.ORIGINAL,
        ScaleConstraint.DIMENSIONS, ScaleConstraint.WIDTH, ScaleConstraint.HEIGHT };
    
    public const Jpeg.Quality[] QUALITY_ARRAY = { Jpeg.Quality.LOW, Jpeg.Quality.MEDIUM, 
        Jpeg.Quality.HIGH, Jpeg.Quality.MAXIMUM };

    private static ScaleConstraint current_constraint = ScaleConstraint.ORIGINAL;
    private static ExportFormatParameters current_parameters = ExportFormatParameters.current();
    private static int current_scale = DEFAULT_SCALE;
    
    private Gtk.Table table = new Gtk.Table(0, 0, false);
    private Gtk.ComboBox quality_combo;
    private Gtk.ComboBox constraint_combo;
    private Gtk.ComboBox format_combo;
    private Gee.ArrayList<string> format_options = new Gee.ArrayList<string>();
    private Gtk.Entry pixels_entry;
    private Gtk.Widget ok_button;
    private bool in_insert = false;
    
    public ExportDialog(string title) {
        this.title = title;
        has_separator = false;
        allow_grow = false;

        quality_combo = new Gtk.ComboBox.text();
        int ctr = 0;
        foreach (Jpeg.Quality quality in QUALITY_ARRAY) {
            quality_combo.append_text(quality.to_string());
            if (quality == current_parameters.quality)
                quality_combo.set_active(ctr);
            ctr++;
        }
        
        constraint_combo = new Gtk.ComboBox.text();
        ctr = 0;
        foreach (ScaleConstraint constraint in CONSTRAINT_ARRAY) {
            constraint_combo.append_text(constraint.to_string());
            if (constraint == current_constraint)
                constraint_combo.set_active(ctr);
            ctr++;
        }

        format_combo = new Gtk.ComboBox.text();
        format_add_option(UNMODIFIED_FORMAT_LABEL);
        format_add_option(CURRENT_FORMAT_LABEL);
        foreach (PhotoFileFormat format in PhotoFileFormat.get_writeable()) {
            format_add_option(format.get_properties().get_user_visible_name());
        }

        pixels_entry = new Gtk.Entry();
        pixels_entry.set_max_length(6);
        pixels_entry.set_size_request(60, -1);
        pixels_entry.set_text("%d".printf(current_scale));
        
        // register after preparation to avoid signals during init
        constraint_combo.changed.connect(on_constraint_changed);
        format_combo.changed.connect(on_format_changed);
        pixels_entry.changed.connect(on_pixels_changed);
        pixels_entry.insert_text.connect(on_pixels_insert_text);
        pixels_entry.activate.connect(on_activate);

        // layout controls
        add_label(_("_Format:"), 0, 0, format_combo);
        add_control(format_combo, 1, 0);

        add_label(_("_Quality:"), 0, 1, quality_combo);
        add_control(quality_combo, 1, 1);
        
        add_label(_("_Scaling constraint:"), 0, 2, constraint_combo);
        add_control(constraint_combo, 1, 2);

        Gtk.Label pixels_label = new Gtk.Label.with_mnemonic(_(" _pixels"));
        pixels_label.set_mnemonic_widget(pixels_entry);
        
        Gtk.HBox pixels_box = new Gtk.HBox(false, 0);
        pixels_box.pack_start(pixels_entry, false, false, 0);
        pixels_box.pack_end(pixels_label, false, false, 0);
        add_control(pixels_box, 1, 3);
        
        ((Gtk.VBox) get_content_area()).add(table);
        
        // add buttons to action area
        add_button(Gtk.STOCK_CANCEL, Gtk.ResponseType.CANCEL);
        ok_button = add_button(Gtk.STOCK_OK, Gtk.ResponseType.OK);

        ok_button.set_flags(ok_button.get_flags() | Gtk.WidgetFlags.CAN_DEFAULT | Gtk.WidgetFlags.HAS_DEFAULT);
        set_default(ok_button);

        if (current_constraint == ScaleConstraint.ORIGINAL) {
            pixels_entry.sensitive = false;
            quality_combo.sensitive = false;
        }

        ok_button.grab_focus();
    }
    
    private void format_add_option(string format_name) {
        format_options.add(format_name);
        format_combo.append_text(format_name);
    }
    
    private void format_set_active_text(string text) {
        int selection_ticker = 0;

        foreach (string current_text in format_options) {
            if (current_text == text) {
                format_combo.set_active(selection_ticker);
                return;
            }
            selection_ticker++;
        }
        
        error("format_set_active_text: text '%s' isn't in combo box", text);
    }
    
    private PhotoFileFormat get_specified_format() {
        int index = format_combo.get_active();
        assert(index >= NUM_SPECIAL_FORMATS);

        index -= NUM_SPECIAL_FORMATS;
        PhotoFileFormat[] writeable_formats = PhotoFileFormat.get_writeable();
        return writeable_formats[index];
    }
    
    private string get_label_for_parameters(ExportFormatParameters params) {
        switch(params.mode) {
            case ExportFormatMode.UNMODIFIED:
                return UNMODIFIED_FORMAT_LABEL;
            
            case ExportFormatMode.CURRENT:
                return CURRENT_FORMAT_LABEL;
            
            case ExportFormatMode.SPECIFIED:
                return params.specified_format.get_properties().get_user_visible_name();            
            
            default:
                error("get_label_for_parameters: unrecognized export format mode");
        }
    }
    
    // unlike other parameters, which should be persisted across dialog executions, the
    // format parameters must be set each time the dialog is executed -- this is why
    // it's passed qualified as ref and not as out
    public bool execute(out int scale, out ScaleConstraint constraint,
        ref ExportFormatParameters parameters) {
        show_all();

        // if the export format mode isn't set to last (i.e., don't use the persisted settings),
        // reset the scale constraint to original size
        if (parameters.mode != ExportFormatMode.LAST) {
            current_constraint = constraint = ScaleConstraint.ORIGINAL;
            constraint_combo.set_active(0);
        }

        if (parameters.mode == ExportFormatMode.LAST)
            parameters = current_parameters;
        else if (parameters.mode == ExportFormatMode.SPECIFIED && !parameters.specified_format.can_write())
            parameters.specified_format = PhotoFileFormat.get_system_default_format();

        format_set_active_text(get_label_for_parameters(parameters));
        on_format_changed();
        
        bool ok = (run() == Gtk.ResponseType.OK);
        if (ok) {
            int index = constraint_combo.get_active();
            assert(index >= 0);
            constraint = CONSTRAINT_ARRAY[index];
            current_constraint = constraint;
            
            scale = pixels_entry.get_text().to_int();
            if (constraint != ScaleConstraint.ORIGINAL)
                assert(scale > 0);
            current_scale = scale;
            
            if (format_combo.get_active_text() == UNMODIFIED_FORMAT_LABEL) {
                parameters.mode = current_parameters.mode = ExportFormatMode.UNMODIFIED;
            } else if (format_combo.get_active_text() == CURRENT_FORMAT_LABEL) {
                parameters.mode = current_parameters.mode = ExportFormatMode.CURRENT;
            } else {
                parameters.mode = current_parameters.mode = ExportFormatMode.SPECIFIED;
                parameters.specified_format = current_parameters.specified_format = get_specified_format();
                if (current_parameters.specified_format == PhotoFileFormat.JFIF)
                    parameters.quality = current_parameters.quality = QUALITY_ARRAY[quality_combo.get_active()];
            }
        }
        
        destroy();
        
        return ok;
    }
    
    private void add_label(string text, int x, int y, Gtk.Widget? widget = null) {
        Gtk.Alignment left_aligned = new Gtk.Alignment(0.0f, 0.5f, 0, 0);
        
        Gtk.Label new_label = new Gtk.Label.with_mnemonic(text);
        new_label.set_use_underline(true);
        
        if (widget != null)
            new_label.set_mnemonic_widget(widget);
        
        left_aligned.add(new_label);
        
        table.attach(left_aligned, x, x + 1, y, y + 1, Gtk.AttachOptions.FILL, Gtk.AttachOptions.FILL, 
            10, 5);
    }
    
    private void add_control(Gtk.Widget widget, int x, int y) {
        Gtk.Alignment left_aligned = new Gtk.Alignment(0, 0.5f, 0, 0);
        left_aligned.add(widget);
        
        table.attach(left_aligned, x, x + 1, y, y + 1, Gtk.AttachOptions.FILL, Gtk.AttachOptions.FILL,
            10, 5);
    }
    
    private void on_constraint_changed() {
        bool original = CONSTRAINT_ARRAY[constraint_combo.get_active()] == ScaleConstraint.ORIGINAL;
        bool jpeg = format_combo.get_active_text() ==
            PhotoFileFormat.JFIF.get_properties().get_user_visible_name();
        pixels_entry.sensitive = !original;
        quality_combo.sensitive = !original && jpeg;
        if (original)
            ok_button.sensitive = true;
        else
            on_pixels_changed();
    }

    private void on_format_changed() {
        bool original = CONSTRAINT_ARRAY[constraint_combo.get_active()] == ScaleConstraint.ORIGINAL;
        
        if (format_combo.get_active_text() == UNMODIFIED_FORMAT_LABEL) {
            // if the user wishes to export the media unmodified, then we just copy the original
            // files, so parameterizing size, quality, etc. is impossible -- these are all
            // just as they are in the original file. In this case, we set the scale constraint to
            // original and lock out all the controls
            constraint_combo.set_active(0); /* 0 == original size */
            constraint_combo.set_sensitive(false);
            quality_combo.set_sensitive(false);
            pixels_entry.sensitive = false;
        } else if (format_combo.get_active_text() == CURRENT_FORMAT_LABEL) {
            // if the user wishes to export the media in its current format, we allow sizing but
            // not JPEG quality customization, because in a batch of many photos, it's not
            // guaranteed that all of them will be JPEGs or RAWs that get converted to JPEGs. Some
            // could be PNGs, and PNG has no notion of quality. So lock out the quality control.
            // If the user wants to set JPEG quality, he or she can explicitly specify the JPEG
            // format.
            constraint_combo.set_sensitive(true);
            quality_combo.set_sensitive(false);
            pixels_entry.sensitive = !original;            
        } else {
            // if the user has chosen a specific format, then allow JPEG quality customization if
            // the format is JPEG and the user is re-sizing the image, otherwise, disallow JPEG
            // quality customization; always allow scaling.
            constraint_combo.set_sensitive(true);
            bool jpeg = get_specified_format() == PhotoFileFormat.JFIF;
            quality_combo.sensitive = !original && jpeg;
        }
    }
    
    private void on_activate() {
        response(Gtk.ResponseType.OK);
    }
    
    private void on_pixels_changed() {
        ok_button.sensitive = (pixels_entry.get_text_length() > 0) && (pixels_entry.get_text().to_int() > 0);
    }
    
    private void on_pixels_insert_text(string text, int length, void *position) {
        // This is necessary because SignalHandler.block_by_func() is not properly bound
        if (in_insert)
            return;
        
        in_insert = true;
        
        if (length == -1)
            length = (int) text.length;
        
        // only permit numeric text
        string new_text = "";
        for (int ctr = 0; ctr < length; ctr++) {
            if (text[ctr].isdigit()) {
                new_text += ((char) text[ctr]).to_string();
            }
        }
        
        if (new_text.length > 0)
            pixels_entry.insert_text(new_text, (int) new_text.length, position);
        
        Signal.stop_emission_by_name(pixels_entry, "insert-text");
        
        in_insert = false;
    }
}

namespace ImportUI {
private const int REPORT_FAILURE_COUNT = 4;

private string? generate_import_failure_list(Gee.List<BatchImportResult> failed, bool show_dest_id) {
    if (failed.size == 0)
        return null;
    
    string list = "";
    for (int ctr = 0; ctr < REPORT_FAILURE_COUNT && ctr < failed.size; ctr++) {
        list += "%s\n".printf(show_dest_id ? failed.get(ctr).dest_identifier : 
            failed.get(ctr).src_identifier);
    }
    
    int remaining = failed.size - REPORT_FAILURE_COUNT;
    if (remaining > 0)
        list += _("(and %d more)\n").printf(remaining);
    
    return list;
}

public class QuestionParams {
    public string question;
    public string yes_button;
    public string no_button;
    
    public QuestionParams(string question, string yes_button, string no_button) {
        this.question = question;
        this.yes_button = yes_button;
        this.no_button = no_button;
    }
}

public bool import_has_photos(Gee.Collection<BatchImportResult> import_collection) {
    foreach (BatchImportResult current_result in import_collection) {
        if (PhotoFileFormat.get_by_file_extension(current_result.file) != PhotoFileFormat.UNKNOWN)
            return true;
    }
    return false;
}

public bool import_has_videos(Gee.Collection<BatchImportResult> import_collection) {
    foreach (BatchImportResult current_result in import_collection) {
        if (VideoReader.is_supported_video_file(current_result.file))
            return true;
    }
    return false;
}

public string get_media_specific_string(Gee.Collection<BatchImportResult> import_collection,
    string photos_msg, string videos_msg, string both_msg) {
    bool has_photos = import_has_photos(import_collection);
    bool has_videos = import_has_videos(import_collection);
        
    if (has_photos && has_videos)
        return both_msg;
    else if (has_photos)
        return photos_msg;
    else if (has_videos)
        return videos_msg;
    else
        assert_not_reached();
}

// Returns true if the user selected the yes action, false otherwise.
public bool report_manifest(ImportManifest manifest, bool show_dest_id, 
    QuestionParams? question = null) {
    string message = "";
    
    if (manifest.already_imported.size > 0) {
        string photos_message = (ngettext("1 duplicate photo was not imported:\n",
            "%d duplicate photos were not imported:\n",
            manifest.already_imported.size)).printf(manifest.already_imported.size);
        string videos_message = (ngettext("1 duplicate video was not imported:\n",
            "%d duplicate videos were not imported:\n",
            manifest.already_imported.size)).printf(manifest.already_imported.size);
        string both_message = (ngettext("1 duplicate photo/video was not imported:\n",
            "%d duplicate photos/videos were not imported:\n",
            manifest.already_imported.size)).printf(manifest.already_imported.size);

        message += get_media_specific_string(manifest.already_imported, photos_message,
            videos_message, both_message);
        
        message += generate_import_failure_list(manifest.already_imported, show_dest_id);
    }
    
    if (manifest.failed.size > 0) {
        if (message.length > 0)
            message += "\n";
        
        string photos_message = (ngettext("1 photo failed to import due to a file or hardware error:\n",
            "%d photos failed to import due to a file or hardware error:\n",
            manifest.failed.size)).printf(manifest.failed.size);
        string videos_message = (ngettext("1 video failed to import due to a file or hardware error:\n",
            "%d videos failed to import due to a file or hardware error:\n",
            manifest.failed.size)).printf(manifest.failed.size);
        string both_message = (ngettext("1 photo/video failed to import due to a file or hardware error:\n",
            "%d photos/videos failed to import due to a file or hardware error:\n",
            manifest.failed.size)).printf(manifest.failed.size);
        
        message += get_media_specific_string(manifest.failed, photos_message, videos_message,
            both_message);
        
        message += generate_import_failure_list(manifest.failed, show_dest_id);
    }
    
    if (manifest.write_failed.size > 0) {
        if (message.length > 0)
            message += "\n";
        
        string photos_message = (ngettext("1 photo failed to import because the photo library folder was not writable:\n",
            "%d photos failed to import because the photo library folder was not writable:\n",
            manifest.write_failed.size)).printf(manifest.write_failed.size);
        string videos_message = (ngettext("1 video failed to import because the photo library folder was not writable:\n",
            "%d videos failed to import because the photo library folder was not writable:\n",
            manifest.write_failed.size)).printf(manifest.write_failed.size);
        string both_message = (ngettext("1 photo/video failed to import because the photo library folder was not writable:\n",
            "%d photos/videos failed to import because the photo library folder was not writable:\n",
            manifest.write_failed.size)).printf(manifest.write_failed.size);
        
        message += get_media_specific_string(manifest.write_failed, photos_message, videos_message,
            both_message);
        
        message += generate_import_failure_list(manifest.write_failed, show_dest_id);
    }
    
    if (manifest.camera_failed.size > 0) {
        if (message.length > 0)
            message += "\n";

        string photos_message = (ngettext("1 photo failed to import due to a camera error:\n",
            "%d photos failed to import due to a camera error:\n",
            manifest.camera_failed.size)).printf(manifest.camera_failed.size);
        string videos_message = (ngettext("1 video failed to import due to a camera error:\n",
            "%d videos failed to import due to a camera error:\n",
            manifest.camera_failed.size)).printf(manifest.camera_failed.size);
        string both_message = (ngettext("1 photo/video failed to import due to a camera error:\n",
            "%d photos/videos failed to import due to a camera error:\n",
            manifest.camera_failed.size)).printf(manifest.camera_failed.size);
        
        message += get_media_specific_string(manifest.camera_failed, photos_message, videos_message,
            both_message);
        
        message += generate_import_failure_list(manifest.camera_failed, show_dest_id);
    }
    
    if (manifest.skipped_photos.size > 0) {
        if (message.length > 0)
            message += "\n";
        // we have no notion of "unsupported" video files right now in Shotwell (all
        // standard container formats are supported, it's just that the streams in them
        // might or might not be interpretable), so this message does not need to be
        // media specific
        string skipped_photos_message = (ngettext("1 unsupported photo skipped:\n",
            "%d unsupported photos skipped:\n", manifest.skipped_photos.size)).printf(
            manifest.skipped_photos.size);

        message += skipped_photos_message;
        
        message += generate_import_failure_list(manifest.skipped_photos, show_dest_id);
    }

    if (manifest.skipped_files.size > 0) {
        if (message.length > 0)
            message += "\n";

        // we have no notion of "non-video" video files right now in Shotwell, so this
        // message doesn't need to be media specific
        string skipped_files_message = (ngettext("1 non-image file skipped.\n",
            "%d non-image files skipped.\n", manifest.skipped_files.size)).printf(
            manifest.skipped_files.size);

        message += skipped_files_message;
    }
    
    if (manifest.aborted.size > 0) {
        if (message.length > 0)
            message += "\n";

        string photos_message = (ngettext("1 photo skipped due to user cancel:\n",
            "%d photos skipped due to user cancel:\n",
            manifest.aborted.size)).printf(manifest.aborted.size);
        string videos_message = (ngettext("1 video skipped due to user cancel:\n",
            "%d videos skipped due to user cancel:\n",
            manifest.aborted.size)).printf(manifest.aborted.size);
        string both_message = (ngettext("1 photo/video skipped due to user cancel:\n",
            "%d photos/videos skipped due to user cancel:\n",
            manifest.aborted.size)).printf(manifest.aborted.size);
        
        message += get_media_specific_string(manifest.aborted, photos_message, videos_message,
            both_message);
        
        message += generate_import_failure_list(manifest.aborted, show_dest_id);
    }
    
    if (manifest.success.size > 0) {
        if (message.length > 0)
            message += "\n";

        string photos_message = (ngettext("1 photo successfully imported.\n",
            "%d photos successfully imported.\n",
            manifest.success.size)).printf(manifest.success.size);
        string videos_message = (ngettext("1 video successfully imported.\n",
            "%d videos successfully imported.\n",
            manifest.success.size)).printf(manifest.success.size);
        string both_message = (ngettext("1 photo/video successfully imported.\n",
            "%d photos/videos successfully imported.\n",
            manifest.success.size)).printf(manifest.success.size);
        
        message += get_media_specific_string(manifest.success, photos_message, videos_message,
            both_message);
    }
    
    int total = manifest.success.size + manifest.failed.size + manifest.camera_failed.size
        + manifest.skipped_photos.size + manifest.skipped_files.size
        + manifest.already_imported.size + manifest.aborted.size + manifest.write_failed.size;
    assert(total == manifest.all.size);
    
    // if no media items were imported at all (i.e. an empty directory attempted), need to at least
    // report that nothing was imported
    if (total == 0)
        message += _("No photos or videos imported.\n");
    
    Gtk.MessageDialog dialog = null;
    if (question == null) {
        dialog = new Gtk.MessageDialog(AppWindow.get_instance(), Gtk.DialogFlags.MODAL,
            Gtk.MessageType.INFO, Gtk.ButtonsType.OK, "%s", message);
    } else {
        message += ("\n" + question.question);
    
        dialog = new Gtk.MessageDialog(AppWindow.get_instance(), Gtk.DialogFlags.MODAL,
            Gtk.MessageType.QUESTION, Gtk.ButtonsType.NONE, "%s", message);
        dialog.add_button(question.no_button, Gtk.ResponseType.NO);
        dialog.add_button(question.yes_button, Gtk.ResponseType.YES);
    }
    
    dialog.title = _("Import Complete");
    
    bool yes = (dialog.run() == Gtk.ResponseType.YES);
    
    dialog.destroy();
    
    return yes;
}
}

public abstract class TextEntryDialogMediator {
    private TextEntryDialog dialog;
    
    public TextEntryDialogMediator(string title, string label, string? initial_text = null,
        Gee.Collection<string>? completion_list = null, string? completion_delimiter = null) {
        Gtk.Builder builder = AppWindow.create_builder();
        dialog = builder.get_object("text_entry_dialog1") as TextEntryDialog;
        dialog.set_builder(builder);
        dialog.setup(on_modify_validate, title, label, initial_text, completion_list, completion_delimiter);
    }
    
    protected virtual bool on_modify_validate(string text) {
        return true;
    }

    protected string? _execute() {
        return dialog.execute();
    }
}

// Entry completion for values separated by separators (e.g. comma in the case of tags)
// Partly inspired by the class of the same name in gtkmm-utils by Marko Anastasov
public class EntryMultiCompletion : Gtk.EntryCompletion {
    private string delimiter;
    
    public EntryMultiCompletion(Gee.Collection<string> completion_list, string? delimiter) {
        assert(delimiter == null || delimiter.length == 1);
        this.delimiter = delimiter;
        
        set_model(create_completion_store(completion_list));
        set_text_column(0);
        set_match_func(match_func);
    }
    
    private static Gtk.ListStore create_completion_store(Gee.Collection<string> completion_list) {
        Gtk.ListStore completion_store = new Gtk.ListStore(1, typeof(string));
        Gtk.TreeIter store_iter;
        Gee.Iterator<string> completion_iter = completion_list.iterator();
        while (completion_iter.next()) {
            completion_store.append(out store_iter);
            completion_store.set(store_iter, 0, completion_iter.get(), -1);
        }
        
        return completion_store;
    }
    
    private bool match_func(Gtk.EntryCompletion completion, string key, Gtk.TreeIter iter) {
        Gtk.TreeModel model = completion.get_model();
        string possible_match;
        model.get(iter, 0, out possible_match);
        
        // Normalize key and possible matches to allow comparison of non-ASCII characters.
        // Use a "COMPOSE" normalization to allow comparison to the position value returned by 
        // Gtk.Entry, i.e. one character=one position. Using the default normalization a character
        // like "é" or "ö" would have a length of two.
        possible_match = possible_match.casefold().normalize(-1, NormalizeMode.ALL_COMPOSE);        
        string normed_key = key.normalize(-1, NormalizeMode.ALL_COMPOSE);
        
        if (delimiter == null) {
            return possible_match.has_prefix(normed_key.strip());
        } else {
            if (normed_key.contains(delimiter)) {
                // check whether cursor is before last delimiter
                long offset = normed_key.pointer_to_offset(normed_key.rchr(-1, delimiter[0]));
                int position = ((Gtk.Entry) get_entry()).get_position();
                if (position <= offset)
                    return false; // TODO: Autocompletion for tags not last in list
            }
            
            string last_part = get_last_part(normed_key.strip(), delimiter);
            
            if (last_part.length == 0) 
                return false; // need at least one character to show matches
                
            return possible_match.has_prefix(last_part.strip());
        }
    }

    public override bool match_selected(Gtk.TreeModel model, Gtk.TreeIter iter) {
        string match;
        model.get(iter, 0, out match);
        
        Gtk.Entry entry = (Gtk.Entry)get_entry();
        
        string old_text = entry.get_text();
        if (old_text.length > 0) {
            if (old_text.contains(delimiter)) {
                long start = old_text.pointer_to_offset(old_text.rchr(-1, delimiter[0]));
                old_text = old_text.substring(0, start + 1) + (delimiter != " " ? " " : "");
            } else
                old_text = "";
        }
        
        string new_text = old_text + match + delimiter + (delimiter != " " ? " " : "");
        entry.set_text(new_text);
        entry.set_position((int) new_text.length);
        
        return true;
    }
    
    // Find last string after any delimiter
    private static string get_last_part(string s, string delimiter) {
        string[] split = s.split(delimiter);
        int i = 0;
        while (split[i+1] != null)
            i++;
        
        return split[i];
    }
}

public class SetBackgroundSlideshowDialog {
    private Gtk.Dialog dialog;
    private Gtk.Label delay_value_label;
    private Gtk.Scale delay_scale;
    private int delay_value = 0;
    
    public SetBackgroundSlideshowDialog() {
        Gtk.Builder builder = AppWindow.create_builder("set_background_dialog.glade", this);
        
        dialog = builder.get_object("dialog1") as Gtk.Dialog;
        dialog.set_type_hint(Gdk.WindowTypeHint.DIALOG);
        dialog.set_parent_window(AppWindow.get_instance().get_parent_window());
        dialog.set_transient_for(AppWindow.get_instance());
        dialog.set_default_response(Gtk.ResponseType.OK);
        
        delay_value_label = builder.get_object("delay_value_label") as Gtk.Label;
        
        delay_scale = builder.get_object("delay_scale") as Gtk.Scale;
        delay_scale.value_changed.connect(on_delay_scale_value_changed);
        delay_scale.adjustment.value = 50;
    }

    private void on_delay_scale_value_changed() {
        double value = delay_scale.adjustment.value;
        
        // f(x)=x^5 allows to have fine-grained values (seconds) to the left
        // and very coarse-grained values (hours) to the right of the slider.
        // We limit maximum value to 1 day and minimum to 5 seconds.
        delay_value = (int) (Math.pow(value, 5) / Math.pow(90, 5) * 60 * 60 * 24 + 5);
        
        // convert to text and remove fractions from values > 1 minute
        string text;
        if (delay_value < 60) {
            text = ngettext("%d second", "%d seconds", delay_value).printf(delay_value);
        } else if (delay_value < 60 * 60) {
            int minutes = delay_value / 60;
            text = ngettext("%d minute", "%d minutes", minutes).printf(minutes);
            delay_value = minutes * 60; 
        } else if (delay_value < 60 * 60 * 24) {
            int hours = delay_value / (60 * 60);
            text = ngettext("%d hour", "%d hours", hours).printf(hours);
            delay_value = hours * (60 * 60);
        } else {
            text = _("1 day");
            delay_value = 60 * 60 * 24;
        }
        
        delay_value_label.label = text;
    }

    public bool execute(out int delay_value) {
        dialog.show_all();
        
        bool result = dialog.run() == Gtk.ResponseType.OK;
        
        dialog.destroy();
        
        delay_value = this.delay_value;
        
        return result;
    }
}

public class TextEntryDialog : Gtk.Dialog {
    public delegate bool OnModifyValidateType(string text);
    
    private OnModifyValidateType on_modify_validate;
    private Gtk.Entry entry;
    private Gtk.Builder builder;
    
    public void set_builder(Gtk.Builder builder) {
        this.builder = builder;
    }
    
    public void setup(OnModifyValidateType? modify_validate, string title, string label, 
        string? initial_text, Gee.Collection<string>? completion_list, string? completion_delimiter) {
        set_title(title);
        set_parent_window(AppWindow.get_instance().get_parent_window());
        set_transient_for(AppWindow.get_instance());
        on_modify_validate = modify_validate;

        Gtk.Label name_label = builder.get_object("label") as Gtk.Label;
        name_label.set_text(label);

        entry = builder.get_object("entry") as Gtk.Entry;
        entry.set_text(initial_text != null ? initial_text : "");
        entry.grab_focus();

        if (completion_list != null) { // Textfield with autocompletion
            EntryMultiCompletion completion = new EntryMultiCompletion(completion_list,
                completion_delimiter);
            entry.set_completion(completion);
        }
        
        set_default_response(Gtk.ResponseType.OK);
    }

    public string? execute() {
        string? text = null;
        
        // validate entry to start with
        set_response_sensitive(Gtk.ResponseType.OK, on_modify_validate(entry.get_text()));
        
        show_all();
        
        if (run() == Gtk.ResponseType.OK)
            text = entry.get_text();
        
        destroy();
        
        return text;
    }
    
    public void on_entry_changed() {
        set_response_sensitive(Gtk.ResponseType.OK, on_modify_validate(entry.get_text()));
    }
}

public class EventRenameDialog : TextEntryDialogMediator {
    public EventRenameDialog(string? event_name) {
        base (_("Rename Event"), _("Name:"), event_name);
    }

    public virtual string? execute() {
        return Event.prep_event_name(_execute());
    }
}

public class EditTitleDialog : TextEntryDialogMediator {
    public EditTitleDialog(string? photo_title) {
        base (_("Edit Title"), _("Title:"), photo_title);
    }

    public virtual string? execute() {
        return MediaSource.prep_title(_execute());
    }
}

// Returns: Gtk.ResponseType.YES (trash photos), Gtk.ResponseType.NO (only remove photos) and
// Gtk.ResponseType.CANCEL.
public Gtk.ResponseType remove_from_library_dialog(Gtk.Window owner, string title,
    string user_message, int count) {
    string trash_action = ngettext("_Trash File", "_Trash Files", count);
    
    Gtk.MessageDialog dialog = new Gtk.MessageDialog(owner, Gtk.DialogFlags.MODAL,
        Gtk.MessageType.WARNING, Gtk.ButtonsType.CANCEL, "%s", user_message);
    dialog.add_button(_("Only _Remove"), Gtk.ResponseType.NO);
    dialog.add_button(trash_action, Gtk.ResponseType.YES);
    dialog.title = title;
    
    Gtk.ResponseType result = (Gtk.ResponseType) dialog.run();
    
    dialog.destroy();
    
    return result;
}

// Returns: Gtk.ResponseType.YES (delete photos), Gtk.ResponseType.NO (keep photos)
public Gtk.ResponseType remove_from_filesystem_dialog(Gtk.Window owner, string title,
    string user_message) {
    Gtk.MessageDialog dialog = new Gtk.MessageDialog(owner, Gtk.DialogFlags.MODAL,
        Gtk.MessageType.QUESTION, Gtk.ButtonsType.NONE, "%s", user_message);
    dialog.add_button(_("_Keep"), Gtk.ResponseType.NO);
    dialog.add_button(_("_Delete"), Gtk.ResponseType.YES);
    dialog.set_default_response( Gtk.ResponseType.NO);
    dialog.title = title;
    
    Gtk.ResponseType result = (Gtk.ResponseType) dialog.run();
    
    dialog.destroy();
    
    return result;
}

public bool revert_editable_dialog(Gtk.Window owner, Gee.Collection<Photo> photos) {
    int count = 0;
    foreach (Photo photo in photos) {
        if (photo.has_editable())
            count++;
    }
    
    if (count == 0)
        return false;
        
    string msg = ngettext(
        "This will destroy all changes made to the external file.  Continue?",
        "This will destroy all changes made to %d external files.  Continue?",
        count).printf(count);
    string action = ngettext("Re_vert External Edit", "Re_vert External Edits", count);
    
    Gtk.MessageDialog dialog = new Gtk.MessageDialog(owner, Gtk.DialogFlags.MODAL,
        Gtk.MessageType.WARNING, Gtk.ButtonsType.NONE, "%s", msg);
    dialog.add_button(_("_Cancel"), Gtk.ResponseType.CANCEL);
    dialog.add_button(action, Gtk.ResponseType.YES);
    dialog.title = ngettext("Revert External Edit", "Revert External Edits", count);
    
    Gtk.ResponseType result = (Gtk.ResponseType) dialog.run();
    
    dialog.destroy();
    
    return result == Gtk.ResponseType.YES;
}

public bool remove_offline_dialog(Gtk.Window owner, int count) {
    if (count == 0)
        return false;
    
    string msg = ngettext(
        "This will remove the photo from the library.  Continue?",
        "This will remove %d photos from the library.  Continue?",
        count).printf(count);
    
    Gtk.MessageDialog dialog = new Gtk.MessageDialog(owner, Gtk.DialogFlags.MODAL,
        Gtk.MessageType.WARNING, Gtk.ButtonsType.NONE, "%s", msg);
    dialog.add_button(_("_Cancel"), Gtk.ResponseType.CANCEL);
    dialog.add_button(_("_Remove"), Gtk.ResponseType.OK);
    dialog.title = ngettext("Remove Photo From Library", "Remove Photos From Library", count);
    
    Gtk.ResponseType result = (Gtk.ResponseType) dialog.run();
    
    dialog.destroy();
    
    return result == Gtk.ResponseType.OK;
}

public class ProgressDialog : Gtk.Window {
    // This dialog tries to guarantee that it will be visible 
    // for at least this many milliseconds
    public const int MINIMUM_ON_SCREEN_TIME_MSEC = 500;
    
    private Gtk.ProgressBar progress_bar = new Gtk.ProgressBar();
    private Gtk.Button cancel_button = null;
    private Cancellable cancellable;
    private uint64 last_count = uint64.MAX;
    private int update_every = 1;
    private ulong time_started;
    
    public ProgressDialog(Gtk.Window? owner, string text, Cancellable? cancellable = null) {
        this.cancellable = cancellable;
        
        set_title(text);
        set_resizable(false);
        if (owner != null)
            set_transient_for(owner);
        set_modal(true);
        set_type_hint(Gdk.WindowTypeHint.DIALOG);
        
        progress_bar.set_size_request(300, -1);
        
        Gtk.VBox vbox_bar = new Gtk.VBox(false, 0);
        vbox_bar.pack_start(progress_bar, true, false, 0);
        
        if (cancellable != null) {
            cancel_button = new Gtk.Button.from_stock(Gtk.STOCK_CANCEL);
            cancel_button.clicked.connect(on_cancel);
            delete_event.connect(on_window_closed);
        }
        
        Gtk.HBox hbox = new Gtk.HBox(false, 8);
        hbox.pack_start(vbox_bar, true, false, 0);
        if (cancel_button != null)
            hbox.pack_end(cancel_button, false, false, 0);
        
        
        Gtk.Label primary_text_label = new Gtk.Label("");
        primary_text_label.set_markup("<span weight=\"bold\">%s</span>".printf(text));
        primary_text_label.set_alignment(0, 0.5f);

        Gtk.VBox vbox = new Gtk.VBox(false, 12);
        vbox.pack_start(primary_text_label, false, false, 0);
        vbox.pack_start(hbox, true, false, 0);

        Gtk.Alignment alignment = new Gtk.Alignment(0.5f, 0.5f, 1.0f, 1.0f);
        alignment.set_padding(12, 12, 12, 12);
        alignment.add(vbox);
        
        add(alignment);
        
        time_started = now_ms();
    }
    
    public override void realize() {
        base.realize();
        
        // if unable to cancel the progress bar, remove the close button
        if (cancellable == null)
            window.set_functions(Gdk.WMFunction.MOVE);
    }
    
    public void update_display_every(int update_every) {
        assert(update_every >= 1);
        
        this.update_every = update_every;
    }
    
    public void set_fraction(int current, int total) {
        set_percentage((double) current / (double) total);
    }
    
    public void set_percentage(double pct) {
        pct = pct.clamp(0.0, 1.0);
        
        maybe_show_all(pct);
        
        progress_bar.set_fraction(pct);
        progress_bar.set_text(_("%d%%").printf((int) (pct * 100.0)));
    }
    
    // This can be used as a ProgressMonitor delegate.
    public bool monitor(uint64 count, uint64 total) {
        if (last_count == uint64.MAX)
            last_count = count;
        
        if ((count - last_count) > update_every) {
            set_percentage((double) count / (double) total);
            
            // TODO: get rid of this.  non-trivial, as some progress-monitor operations are blocking
            // and need to allow the event loop to spin
            spin_event_loop();
            
            last_count = count;
        }
        
        return (cancellable != null) ? !cancellable.is_cancelled() : true;
    }
    
    public void close() {
        hide();
        destroy();
    }
    
    private bool on_window_closed() {
        on_cancel();
        return false; // return false so that the system handler will remove the window from
                      // the screen
    }
    
    private void on_cancel() {
        if (cancellable != null)
            cancellable.cancel();
        
        cancel_button.sensitive = false;
    }
    
    private void maybe_show_all(double pct) {
        // Appear only after a while because some jobs may take only a 
        // fraction of second to complete so there's no point in showing progress.
        if (!this.visible && now_ms() - time_started > MINIMUM_ON_SCREEN_TIME_MSEC) {
            // calculate percents completed in one ms
            double pps = pct * 100.0 / MINIMUM_ON_SCREEN_TIME_MSEC;
            // calculate [very rough] estimate of time to complete in ms
            double ttc = 100.0 / pps;
            // If there is still more work to do for at least MINIMUM_ON_SCREEN_TIME_MSEC, 
            // finally display the dialog.
            if (ttc > MINIMUM_ON_SCREEN_TIME_MSEC)
                show_all(); 
        }
    }
}

public class AdjustDateTimeDialog : Gtk.Dialog {
    private const int64 SECONDS_IN_DAY = 60 * 60 * 24;
    private const int64 SECONDS_IN_HOUR = 60 * 60;
    private const int64 SECONDS_IN_MINUTE = 60;
    private const int YEAR_OFFSET = 1900;
    private bool no_original_time = false;

    time_t original_time;
    Gtk.Label original_time_label;
    Gtk.Calendar calendar;
    Gtk.SpinButton hour;
    Gtk.SpinButton minute;
    Gtk.SpinButton second;
    Gtk.ComboBox system;
    Gtk.RadioButton relativity_radio_button;
    Gtk.RadioButton batch_radio_button;
    Gtk.CheckButton modify_originals_check_button;
    Gtk.Label notification;

    private enum TimeSystem {
        AM,
        PM,
        24HR;
    }    

    TimeSystem previous_time_system;

    public AdjustDateTimeDialog(PhotoSource source, int photo_count, bool display_options = true) {
        assert(source != null);

        set_modal(true);
        set_resizable(false);
        has_separator = false;
        set_transient_for(AppWindow.get_instance());

        add_buttons(Gtk.STOCK_CANCEL, Gtk.ResponseType.CANCEL, 
                    Gtk.STOCK_OK, Gtk.ResponseType.OK);
        set_title(Resources.ADJUST_DATE_TIME_LABEL);

        calendar = new Gtk.Calendar();
        calendar.day_selected.connect(on_time_changed);
        calendar.month_changed.connect(on_time_changed);
        calendar.next_year.connect(on_time_changed);
        calendar.prev_year.connect(on_time_changed);

        if (Config.get_instance().get_24_hr_time())
            hour = new Gtk.SpinButton.with_range(0, 23, 1);
        else
            hour = new Gtk.SpinButton.with_range(1, 12, 1);

        hour.output.connect(on_spin_button_output);
        hour.set_width_chars(2);  

        minute = new Gtk.SpinButton.with_range(0, 59, 1);
        minute.set_width_chars(2);
        minute.output.connect(on_spin_button_output);

        second = new Gtk.SpinButton.with_range(0, 59, 1);
        second.set_width_chars(2);
        second.output.connect(on_spin_button_output);

        system = new Gtk.ComboBox.text();
        system.append_text(_("AM"));
        system.append_text(_("PM"));
        system.append_text(_("24 Hr"));
        system.changed.connect(on_time_system_changed);

        Gtk.HBox clock = new Gtk.HBox(false, 0);

        clock.pack_start(hour, false, false, 3);
        clock.pack_start(new Gtk.Label(":"), false, false, 3); // internationalize?
        clock.pack_start(minute, false, false, 3);
        clock.pack_start(new Gtk.Label(":"), false, false, 3);
        clock.pack_start(second, false, false, 3);
        clock.pack_start(system, false, false, 3);

        set_default_response(Gtk.ResponseType.OK);
        
        relativity_radio_button = new Gtk.RadioButton.with_mnemonic(null, 
            _("_Shift photos by the same amount"));
        relativity_radio_button.set_active(Config.get_instance().get_keep_relativity());
        relativity_radio_button.sensitive = display_options && photo_count > 1;

        batch_radio_button = new Gtk.RadioButton.with_mnemonic(relativity_radio_button.get_group(),
            _("Set _all photos to this time"));
        batch_radio_button.set_active(!Config.get_instance().get_keep_relativity());
        batch_radio_button.sensitive = display_options && photo_count > 1;
        batch_radio_button.toggled.connect(on_time_changed);

        modify_originals_check_button = new Gtk.CheckButton.with_mnemonic(ngettext(
            "_Modify original file", "_Modify original files", photo_count));
        modify_originals_check_button.set_active(Config.get_instance().get_commit_metadata_to_masters() &&
            display_options);
        modify_originals_check_button.sensitive = !Config.get_instance().get_commit_metadata_to_masters() && display_options;

        Gtk.VBox time_content = new Gtk.VBox(false, 0);

        time_content.pack_start(calendar, true, false, 3);
        time_content.pack_start(clock, true, false, 3);

        if (display_options) {
            time_content.pack_start(relativity_radio_button, true, false, 3);
            time_content.pack_start(batch_radio_button, true, false, 3);
            time_content.pack_start(modify_originals_check_button, true, false, 3);
        }

        Gdk.Pixbuf preview = null;
        try {
            preview = source.get_pixbuf(Scaling.for_viewport(Dimensions(500, 
                display_options ? 280 : 200), false));
        } catch (Error err) {
            warning("Unable to fetch preview for %s", source.to_string());
        }
        
        Gtk.VBox image_content = new Gtk.VBox(false, 0);
        Gtk.Image image = (preview != null) ? new Gtk.Image.from_pixbuf(preview) : new Gtk.Image();
        original_time_label = new Gtk.Label(null);
        image_content.pack_start(image, true, false, 3);
        image_content.pack_start(original_time_label, true, false, 3);

        Gtk.HBox hbox = new Gtk.HBox(false, 0);
        hbox.pack_start(image_content, true, false, 6);
        hbox.pack_start(time_content, true, false, 6);

        Gtk.Alignment hbox_alignment = new Gtk.Alignment(0.5f, 0.5f, 0, 0);
        hbox_alignment.set_padding(6, 3, 6, 6);
        hbox_alignment.add(hbox);

        vbox.pack_start(hbox_alignment, true, false, 6);

        notification = new Gtk.Label("");
        notification.set_line_wrap(true);
        notification.set_justify(Gtk.Justification.CENTER);
        notification.set_size_request(-1, -1);
        notification.set_padding(12, 6);

        vbox.pack_start(notification, true, true, 0);
        
        original_time = source.get_exposure_time();

        if (original_time == 0) {
            original_time = time_t();
            no_original_time = true;
        }

        set_time(Time.local(original_time));
        set_original_time_label(Config.get_instance().get_24_hr_time());
    }

    private void set_time(Time time) {
        calendar.select_month(time.month, time.year + YEAR_OFFSET);
        calendar.select_day(time.day);

        if (Config.get_instance().get_24_hr_time()) {
            hour.set_value(time.hour);
            system.set_active(TimeSystem.24HR);
        } else {
            int AMPM_hour = time.hour % 12;
            hour.set_value((AMPM_hour == 0) ? 12 : AMPM_hour);
            system.set_active((time.hour >= 12) ? TimeSystem.PM : TimeSystem.AM);
        }

        minute.set_value(time.minute);
        second.set_value(time.second);

        previous_time_system = (TimeSystem) system.get_active();
    }

    private void set_original_time_label(bool use_24_hr_format) {
        if (no_original_time)
            return;

        original_time_label.set_text(_("Original: ") + 
            Time.local(original_time).format(use_24_hr_format ? _("%m/%d/%Y, %H:%M:%S") :
            _("%m/%d/%Y, %I:%M:%S %p")));
    }

    private time_t get_time() {
        Time time = Time();

        time.second = (int) second.get_value();
        time.minute = (int) minute.get_value();

        // convert to 24 hr
        int hour = (int) hour.get_value();
        time.hour = (hour == 12 && system.get_active() != TimeSystem.24HR) ? 0 : hour;
        time.hour += ((system.get_active() == TimeSystem.PM) ? 12 : 0);

        uint year, month, day;
        calendar.get_date(out year, out month, out day);
        time.year = ((int) year) - YEAR_OFFSET;
        time.month = (int) month;
        time.day = (int) day;

        time.isdst = -1;

        return time.mktime();
    }

    public bool execute(out int64 time_shift, out bool keep_relativity, 
        out bool modify_originals) {
        show_all();

        bool response = false;

        if (run() == Gtk.ResponseType.OK) {
            if (no_original_time)
                time_shift = (int64) get_time();
            else
                time_shift = (int64) (get_time() - original_time);

            keep_relativity = relativity_radio_button.get_active();

            if (relativity_radio_button.sensitive)
                Config.get_instance().set_keep_relativity(keep_relativity);

            modify_originals = modify_originals_check_button.get_active();

            if (modify_originals_check_button.sensitive)
                Config.get_instance().set_modify_originals(modify_originals);

            response = true;
        }

        destroy();

        return response;
    }

    private bool on_spin_button_output(Gtk.SpinButton button) {
        button.set_text("%02d".printf((int) button.get_value()));

        on_time_changed();

        return true;
    }

    private void on_time_changed() {
        int64 time_shift = (int64) (get_time() - original_time);

        previous_time_system = (TimeSystem) system.get_active();

        if (time_shift == 0 || no_original_time || (batch_radio_button.get_active() &&
            batch_radio_button.sensitive)) {
            notification.hide();
        } else {
            bool forward = time_shift > 0;
            int days, hours, minutes, seconds;

            time_shift = time_shift.abs();

            days = (int) (time_shift / SECONDS_IN_DAY);
            time_shift = time_shift % SECONDS_IN_DAY;
            hours = (int) (time_shift / SECONDS_IN_HOUR);
            time_shift = time_shift % SECONDS_IN_HOUR;
            minutes = (int) (time_shift / SECONDS_IN_MINUTE);
            seconds = (int) (time_shift % SECONDS_IN_MINUTE);

            string shift_status = (forward) ?
                _("Exposure time will be shifted forward by\n%d %s, %d %s, %d %s, and %d %s.") :
                _("Exposure time will be shifted backward by\n%d %s, %d %s, %d %s, and %d %s.");

            notification.set_text(shift_status.printf(days, ngettext("day", "days", days),
                hours, ngettext("hour", "hours", hours), minutes, 
                ngettext("minute", "minutes", minutes), seconds, 
                ngettext("second", "seconds", seconds)));

            notification.show();
        }
    }

    private void on_time_system_changed() {
        if (previous_time_system == system.get_active())
            return;

        Config.get_instance().set_24_hr_time(system.get_active() == TimeSystem.24HR);

        if (system.get_active() == TimeSystem.24HR) {
            int time = (hour.get_value() == 12.0) ? 0 : (int) hour.get_value();
            time = time + ((previous_time_system == TimeSystem.PM) ? 12 : 0);

            hour.set_range(0, 23);
            set_original_time_label(true);

            hour.set_value(time);
        } else {
            int AMPM_hour = ((int) hour.get_value()) % 12;

            hour.set_range(1, 12);
            set_original_time_label(false);

            hour.set_value((AMPM_hour == 0) ? 12 : AMPM_hour);
        }

        on_time_changed();
    }
}

public const int MAX_OBJECTS_DISPLAYED = 3;
public void multiple_object_error_dialog(Gee.ArrayList<DataObject> objects, string message, 
    string title) {
    string dialog_message = message + "\n";

    //add objects
    for(int i = 0; i < MAX_OBJECTS_DISPLAYED && objects.size > i; i++)
        dialog_message += "\n" + objects.get(i).to_string();

    int remainder = objects.size - MAX_OBJECTS_DISPLAYED;
    if (remainder > 0) {
        dialog_message += ngettext("\n\nAnd %d other.", "\n\nAnd %d others.",
            remainder).printf(remainder);
    }

    Gtk.MessageDialog dialog = new Gtk.MessageDialog(AppWindow.get_instance(),
        Gtk.DialogFlags.MODAL, Gtk.MessageType.ERROR, Gtk.ButtonsType.OK, "%s", dialog_message);
    
    dialog.title = title;
    
    dialog.run();
    dialog.destroy();
}

public abstract class TagsDialog : TextEntryDialogMediator {
    public TagsDialog(string title, string label, string? initial_text = null) {
        base (title, label, initial_text, Tag.global.get_all_names(), ",");
    }
}

public class AddTagsDialog : TagsDialog {
    public AddTagsDialog() {
        base (Resources.ADD_TAGS_TITLE, _("Tags (separated by commas):"));
    }

    public string[]? execute() {
        string? text = _execute();
        if (text == null)
            return null;
        
        // only want to return null if the user chose cancel, however, on_modify_validate ensures
        // that Tag.prep_tag_names won't return a zero-length array (and it never returns null)
        return Tag.prep_tag_names(text.split(","));
    }

    protected override bool on_modify_validate(string text) {
        // Can't simply call Tag.prep_tag_names().length because of this bug:
        // https://bugzilla.gnome.org/show_bug.cgi?id=602208
        string[] names = Tag.prep_tag_names(text.split(","));
        
        return names.length > 0;
    }
}

public class ModifyTagsDialog : TagsDialog {
    public ModifyTagsDialog(MediaSource source) {
        base (Resources.MODIFY_TAGS_LABEL, _("Tags (separated by commas):"), 
            get_initial_text(source));
    }
    
    private static string? get_initial_text(MediaSource source) {
        Gee.SortedSet<Tag>? sorted_tags = Tag.global.fetch_sorted_for_source(source);
        
        if (sorted_tags == null)
            return null;
        
        string[] tag_names = new string[0];
		foreach (Tag tag in sorted_tags)
            tag_names += tag.get_name();
        
        string? text = null;
        foreach (string tag in tag_names) {
            if (text == null)
                text = "";
            else
                text += ", ";
            
            text += tag;
        }
        
        return text;
    }
    
    public Gee.ArrayList<Tag>? execute() {
        string? text = _execute();
        if (text == null)
            return null;
        
        Gee.ArrayList<Tag> new_tags = new Gee.ArrayList<Tag>();
        
        // return empty list if no tags specified
        if (is_string_empty(text))
            return new_tags;
        
        // break up by comma-delimiter, prep for use, and separate into list
        string[] tag_names = Tag.prep_tag_names(text.split(","));

        foreach (string name in tag_names)
            new_tags.add(Tag.for_name(name));
        
        return new_tags;
    }
}

public class WelcomeDialog : Gtk.Dialog {
    Gtk.CheckButton hide_button;
    Gtk.CheckButton? fspot_import_check = null;
    Gtk.CheckButton? system_pictures_import_check = null;

    public WelcomeDialog(Gtk.Window owner) {
        bool show_fspot_import = is_fspot_import_possible();
        bool show_system_pictures_import = is_system_pictures_import_possible();
        Gtk.Widget ok_button = add_button(Gtk.STOCK_OK, Gtk.ResponseType.OK);
        set_title(_("Welcome!"));
        set_resizable(false);
        has_separator = false;
        set_type_hint(Gdk.WindowTypeHint.DIALOG);
        set_transient_for(owner);

        Gtk.Label primary_text = new Gtk.Label("");
        primary_text.set_markup(
            "<span size=\"large\" weight=\"bold\">%s</span>".printf(_("Welcome to Shotwell!")));
        primary_text.set_alignment(0, 0.5f);
        Gtk.Label secondary_text = new Gtk.Label("");
        if (!(show_fspot_import || show_system_pictures_import)) {
            secondary_text.set_markup("<span weight=\"normal\">%s</span>".printf(
                _("To get started, import photos in any of these ways:")));
        }
        secondary_text.set_alignment(0, 0.5f);
        Gtk.Image image = new Gtk.Image.from_pixbuf(Resources.get_icon(Resources.ICON_APP, 50));
        
        Gtk.Widget? header_text = null;
        if (show_fspot_import || show_system_pictures_import) {
            header_text = primary_text;
        } else {
            header_text = new Gtk.VBox(false, 0);
            
            ((Gtk.VBox) header_text).pack_start(primary_text, false, false, 5);
            ((Gtk.VBox) header_text).pack_start(secondary_text, false, false, 0);
        }

        Gtk.HBox header_content = new Gtk.HBox(false, 12);
        header_content.pack_start(image, false, false, 0);
        header_content.pack_start(header_text, false, false, 0);

        Gtk.Label instructions = new Gtk.Label("");
        string indent_prefix = (show_fspot_import || show_system_pictures_import) ? "   " : "";
        instructions.set_markup(((indent_prefix + "&#8226; %s\n") + (indent_prefix + "&#8226; %s\n")
            + (indent_prefix + "&#8226; %s")).printf(
            _("Choose <span weight=\"bold\">File %s Import From Folder</span>").printf("▸"),
            _("Drag and drop photos onto the Shotwell window"),
            _("Connect a camera to your computer and import")));
        instructions.set_alignment(0, 0.5f);
        
        Gtk.VBox? import_action_checkbox_packer = null;
        if (show_fspot_import || show_system_pictures_import) {
            import_action_checkbox_packer = new Gtk.VBox(false, 2);
            
            if (show_fspot_import) {
                fspot_import_check = new Gtk.CheckButton.with_mnemonic(
                    _("Import photos from your _F-Spot library"));
                import_action_checkbox_packer.add(fspot_import_check);
                fspot_import_check.set_active(true);
            }
            
            if (show_system_pictures_import) {
                system_pictures_import_check = new Gtk.CheckButton.with_mnemonic(
                    _("_Import photos from your %s folder").printf(
                    get_display_pathname(AppDirs.get_import_dir())));
                import_action_checkbox_packer.add(system_pictures_import_check);
                system_pictures_import_check.set_active(true);
            }
        }
        
        Gtk.Label? instruction_header = null;
        if (show_fspot_import || show_system_pictures_import) {
            instruction_header = new Gtk.Label(
                _("You can also import photos in any of these ways:"));
            instruction_header.set_alignment(0.0f, 0.5f);
        }
        
        Gtk.VBox content = new Gtk.VBox(false, 16);
        content.pack_start(header_content, true, true, 0);
        if (show_fspot_import || show_system_pictures_import) {
            content.add(import_action_checkbox_packer);
            content.add(instruction_header);
        }
        content.pack_start(instructions, false, false, 0);

        hide_button = new Gtk.CheckButton.with_mnemonic(_("_Don't show this message again"));
        hide_button.set_active(true);
        content.pack_start(hide_button, false, false, 6);
        
        Gtk.Alignment alignment = new Gtk.Alignment(0, 0, 0, 0);
        alignment.set_padding(12, 0, 12, 12);
        alignment.add(content);

        vbox.pack_start(alignment, false, false, 0);

        ok_button.grab_focus();
    }

    public bool execute(out bool do_fspot_import = false, out bool do_system_pictures_import = false) {
        show_all();

        bool ok = (run() == Gtk.ResponseType.OK);
        bool show_dialog = true;

        if (ok)
            show_dialog = !hide_button.get_active();
        
        if (fspot_import_check != null)
            do_fspot_import = fspot_import_check.get_active();
        if (system_pictures_import_check != null)
            do_system_pictures_import = system_pictures_import_check.get_active();

        destroy();

        return show_dialog;
    }
    
    private static bool is_system_pictures_import_possible() {
        File system_pictures = AppDirs.get_import_dir();
        if (!system_pictures.query_exists(null))
            return false;
        
        if (!(system_pictures.query_file_type(FileQueryInfoFlags.NONE, null) == FileType.DIRECTORY))
            return false;

        try {
            FileEnumerator syspics_child_enum = system_pictures.enumerate_children("standard::*",
                FileQueryInfoFlags.NONE, null);
            return (syspics_child_enum.next_file(null) != null);
        } catch (Error e) {
            return false;
        }
    }
    
    private static bool is_fspot_import_possible() {
        return AlienDb.FSpot.FSpotDatabaseDriver.is_available();
    }
}

public class PreferencesDialog {
    private class PathFormat {
        public PathFormat(string name, string? pattern) {
            this.name = name;
            this.pattern = pattern;
        }
        public string name;
        public string? pattern;
    } 
    
    private static PreferencesDialog preferences_dialog;
    private Gtk.Dialog dialog;
    private Gtk.Builder builder;
    private Gtk.Adjustment bg_color_adjustment;
    private Gtk.HScale bg_color_slider;
    private Gtk.ComboBox photo_editor_combo;
    private Gtk.ComboBox raw_editor_combo;
    private SortedList<AppInfo> external_raw_apps;
    private SortedList<AppInfo> external_photo_apps;
    private Gtk.FileChooserButton library_dir_button;
    private Gtk.ComboBox dir_pattern_combo;
    private Gtk.Entry dir_pattern_entry;
    private Gtk.Label dir_pattern_example;
    private bool allow_closing = false;
    private string? lib_dir = null;
    private Gee.ArrayList<PathFormat> path_formats = new Gee.ArrayList<PathFormat>();
    private GLib.DateTime example_date = new GLib.DateTime.local(2009, 3, 10, 18, 16, 11);
    private Gtk.CheckButton lowercase;
    private Gtk.Button close_button;

    private PreferencesDialog() {
        builder = AppWindow.create_builder();

        dialog = builder.get_object("preferences_dialog") as Gtk.Dialog;
        dialog.set_parent_window(AppWindow.get_instance().get_parent_window());
        dialog.set_transient_for(AppWindow.get_instance());
        dialog.delete_event.connect(on_delete);
        dialog.response.connect(on_close);

        bg_color_adjustment = builder.get_object("bg_color_adjustment") as Gtk.Adjustment;
        bg_color_adjustment.set_value(bg_color_adjustment.get_upper() - 
            Config.get_instance().get_bg_color().red);
        bg_color_adjustment.value_changed.connect(on_value_changed);

        bg_color_slider = builder.get_object("bg_color_slider") as Gtk.HScale;
        bg_color_slider.button_press_event.connect(on_bg_color_reset);

        library_dir_button = builder.get_object("library_dir_button") as Gtk.FileChooserButton;
        
        close_button = builder.get_object("close_button") as Gtk.Button;
        
        photo_editor_combo = builder.get_object("external_photo_editor_combo") as Gtk.ComboBox;
        raw_editor_combo = builder.get_object("external_raw_editor_combo") as Gtk.ComboBox;
        
        Gtk.Label pattern_help = builder.get_object("pattern_help") as Gtk.Label;
        pattern_help.set_markup("<a href=\"" + Resources.DIR_PATTERN_URL + "\">" + _("(Help)") + "</a>");
        
        dir_pattern_combo = new Gtk.ComboBox.text();
        Gtk.Alignment dir_choser_align = builder.get_object("dir choser") as Gtk.Alignment;
        dir_choser_align.add(dir_pattern_combo);
        dir_pattern_entry = builder.get_object("dir_pattern_entry") as Gtk.Entry;
        dir_pattern_example = builder.get_object("dynamic example") as Gtk.Label;
        add_to_dir_formats(_("Year" + Path.DIR_SEPARATOR_S + "Month" + Path.DIR_SEPARATOR_S + "Day"), 
            "%Y" + Path.DIR_SEPARATOR_S + "%m" + Path.DIR_SEPARATOR_S + "%d");
        add_to_dir_formats(_("Year" + Path.DIR_SEPARATOR_S + "Month"), "%Y" + Path.DIR_SEPARATOR_S + "%m");
        add_to_dir_formats(_("Year" + Path.DIR_SEPARATOR_S + "Month-Day"), 
            "%Y" + Path.DIR_SEPARATOR_S + "%m-%d");
        add_to_dir_formats(_("Year-Month-Day"), "%Y-%m-%d");
        add_to_dir_formats(_("Custom"), null); // Custom must always be last.
        dir_pattern_combo.changed.connect(on_dir_pattern_combo_changed);
        dir_pattern_entry.changed.connect(on_dir_pattern_entry_changed);
        
        lowercase = builder.get_object("lowercase") as Gtk.CheckButton;
        lowercase.toggled.connect(on_lowercase_toggled);

        populate_preference_options();

        photo_editor_combo.changed.connect(on_photo_editor_changed);
        raw_editor_combo.changed.connect(on_raw_editor_changed);
        
        Gtk.CheckButton auto_import_button = builder.get_object("autoimport") as Gtk.CheckButton;
        auto_import_button.set_active(Config.get_instance().get_auto_import_from_library());
        
        Gtk.CheckButton commit_metadata_button = builder.get_object("write_metadata") as Gtk.CheckButton;
        commit_metadata_button.set_active(Config.get_instance().get_commit_metadata_to_masters());
        
        dialog.map_event.connect(map_event);
    }
    
    public void populate_preference_options() {
        populate_app_combo_box(photo_editor_combo, PhotoFileFormat.get_editable_mime_types(), 
            Config.get_instance().get_external_photo_app(), out external_photo_apps);

        populate_app_combo_box(raw_editor_combo, PhotoFileFormat.RAW.get_mime_types(), 
            Config.get_instance().get_external_raw_app(), out external_raw_apps);
        
        setup_dir_pattern(dir_pattern_combo, dir_pattern_entry);
        
        lowercase.set_active(Config.get_instance().get_use_lowercase_filenames());
    }
    
    private void populate_app_combo_box(Gtk.ComboBox combo_box, string[] mime_types,
        string current_app_executable, out SortedList<AppInfo> external_apps) {
        // get list of all applications for the given mime types
        assert(mime_types.length != 0);
        external_apps = DesktopIntegration.get_apps_for_mime_types(mime_types);
        
        if (external_apps.size == 0)
            return;
        
        // populate application ComboBox with app names and icons
        Gtk.CellRendererPixbuf pixbuf_renderer = new Gtk.CellRendererPixbuf();
        Gtk.CellRendererText text_renderer = new Gtk.CellRendererText();
        combo_box.clear();
        combo_box.pack_start(pixbuf_renderer, false);
        combo_box.pack_start(text_renderer, false);
        combo_box.add_attribute(pixbuf_renderer, "pixbuf", 0);
        combo_box.add_attribute(text_renderer, "text", 1);
        
        // TODO: need more space between icons and text
        Gtk.ListStore combo_store = new Gtk.ListStore(2, typeof(Gdk.Pixbuf), typeof(string));
        Gtk.TreeIter iter;
        
        int current_app = -1;
        
        foreach (AppInfo app in external_apps) {
            combo_store.append(out iter);

            Icon app_icon = app.get_icon();
            try {
                if (app_icon is FileIcon) {
                    combo_store.set_value(iter, 0, scale_pixbuf(new Gdk.Pixbuf.from_file(
                        ((FileIcon) app_icon).get_file().get_path()), Resources.DEFAULT_ICON_SCALE,
                        Gdk.InterpType.BILINEAR, false));
                } else if (app_icon is ThemedIcon) {
                    Gdk.Pixbuf icon_pixbuf = 
                        Gtk.IconTheme.get_default().load_icon(((ThemedIcon) app_icon).get_names()[0],
                        Resources.DEFAULT_ICON_SCALE, Gtk.IconLookupFlags.FORCE_SIZE);
                    
                    combo_store.set_value(iter, 0, icon_pixbuf);
                }
            } catch (GLib.Error error) {
                warning("Error loading icon pixbuf: " + error.message);
            }

            combo_store.set_value(iter, 1, app.get_name());
            
            if (app.get_commandline() == current_app_executable)
                current_app = external_apps.index_of(app);
        }
        
        // TODO: allow users to choose unlisted applications like Nautilus's "Open with -> Other Application..."

        combo_box.set_model(combo_store);

        if (current_app != -1)
            combo_box.set_active(current_app);
    }
    
    private void setup_dir_pattern(Gtk.ComboBox combo_box, Gtk.Entry entry) {
        string? pattern = Config.get_instance().get_directory_pattern();
        bool found = false;
        if (null != pattern) {
            // Locate pre-built text.
            int i = 0;
            foreach (PathFormat pf in path_formats) {
                if (pf.pattern == pattern) {
                    combo_box.set_active(i);
                    found = true;
                    break;
                }
                i++;
            }
        } else {
            // Custom path.
            string? s = Config.get_instance().get_directory_pattern_custom();
            if (!is_string_empty(s)) {
                combo_box.set_active(path_formats.size - 1); // Assume "custom" is last.
                found = true;
            }
        }
        
        if (!found) {
            combo_box.set_active(0);
        }
        
        on_dir_pattern_combo_changed();
    }
    
    public static void show() {
        if (preferences_dialog == null) 
            preferences_dialog = new PreferencesDialog();
        
        preferences_dialog.populate_preference_options();
        preferences_dialog.dialog.show_all();
        preferences_dialog.library_dir_button.set_current_folder(AppDirs.get_import_dir().get_path());

        // Ticket #3001: Cause the dialog to become active if the user chooses 'Preferences'
        // from the menus a second time.
        preferences_dialog.dialog.present();
    }

    // For items that should only be committed when the dialog is closed, not as soon as the change
    // is made.
    private void commit_on_close() {
        Config.get_instance().commit_bg_color();
        
        Gtk.CheckButton? autoimport = builder.get_object("autoimport") as Gtk.CheckButton;
        if (autoimport != null)
            Config.get_instance().set_auto_import_from_library(autoimport.active);
        
        Gtk.CheckButton? commit_metadata = builder.get_object("write_metadata") as Gtk.CheckButton;
        if (commit_metadata != null)
            Config.get_instance().set_commit_metadata_to_masters(commit_metadata.active);
       
        if (lib_dir != null)
            AppDirs.set_import_dir(lib_dir);
        
        PathFormat pf = path_formats.get(dir_pattern_combo.get_active());
        if (null == pf.pattern) {
            Config.get_instance().set_directory_pattern_custom(dir_pattern_entry.text);
            Config.get_instance().unset_directory_pattern();
        } else {
            Config.get_instance().set_directory_pattern(pf.pattern);
        }
    }
    
    private bool on_delete() {
        if (!get_allow_closing())
            return true;
        
        commit_on_close();
        return dialog.hide_on_delete(); //prevent widgets from getting destroyed
    }
    
    private void on_close() {
        if (!get_allow_closing())
            return;
            
        dialog.hide();
        commit_on_close();
    }
    
    private void on_value_changed() {
        set_background_color(bg_color_adjustment.get_upper() - bg_color_adjustment.get_value());
    }

    private bool on_bg_color_reset(Gdk.EventButton event) {
        if (event.button == 1 && event.type == Gdk.EventType.BUTTON_PRESS
            && has_only_key_modifier(event.state, Gdk.ModifierType.CONTROL_MASK)) {
            // Left Mouse Button and CTRL pressed
            bg_color_slider.set_value(bg_color_adjustment.get_upper() - parse_color(Config.DEFAULT_BG_COLOR).red);

            return true;
        }

        return false;
    }
    
    private void on_dir_pattern_combo_changed() {
        PathFormat pf = path_formats.get(dir_pattern_combo.get_active());
        if (null == pf.pattern) {
            // Custom format.
            string? dir_pattern = Config.get_instance().get_directory_pattern_custom();
            if (is_string_empty(dir_pattern))
                dir_pattern = "";
            dir_pattern_entry.set_text(dir_pattern);
            dir_pattern_entry.editable = true;
            dir_pattern_entry.sensitive = true;
        } else {
            dir_pattern_entry.set_text(pf.pattern);
            dir_pattern_entry.editable = false;
            dir_pattern_entry.sensitive = false;
        }
    }
    
    private void on_dir_pattern_entry_changed() {
         string example = example_date.format(dir_pattern_entry.text);
         if (is_string_empty(example) && !is_string_empty(dir_pattern_entry.text)) {
            // Invalid pattern.
            dir_pattern_example.set_text(_("Invalid pattern"));
            dir_pattern_entry.set_icon_from_stock(Gtk.EntryIconPosition.SECONDARY, Gtk.STOCK_DIALOG_ERROR);
            dir_pattern_entry.set_icon_activatable(Gtk.EntryIconPosition.SECONDARY, false);
            set_allow_closing(false);
         } else {
            // Valid pattern.
            dir_pattern_example.set_text(example);
            dir_pattern_entry.set_icon_from_stock(Gtk.EntryIconPosition.SECONDARY, null);
            set_allow_closing(true);
         }
    }
    
    private void set_allow_closing(bool allow) {
        dialog.set_deletable(allow);
        close_button.set_sensitive(allow);
        allow_closing = allow;
    }
    
    private bool get_allow_closing() {
        return allow_closing;
    }

    private void set_background_color(double bg_color_value) {
        Config.get_instance().set_bg_color(to_grayscale((uint16) bg_color_value));
    }

    private Gdk.Color to_grayscale(uint16 color_value) {
        Gdk.Color color = Gdk.Color();
        
        color.red = color_value;
        color.green = color_value;
        color.blue = color_value;
        
        return color;
    }
    
    private void on_photo_editor_changed() {
        AppInfo app = external_photo_apps.get_at(photo_editor_combo.get_active());

        Config.get_instance().set_external_photo_app(DesktopIntegration.get_app_open_command(app));

        debug("setting external photo editor to: %s", DesktopIntegration.get_app_open_command(app));

    }
    
    private void on_raw_editor_changed() {
        AppInfo app = external_raw_apps.get_at(raw_editor_combo.get_active());
        
        Config.get_instance().set_external_raw_app(app.get_commandline());
        
        debug("setting external raw editor to: %s", app.get_commandline());
    }
    
    private void on_current_folder_changed() {
        lib_dir = library_dir_button.get_current_folder();
    }
    
    private bool map_event() {
        // Set the signal for the lib dir button after the dialog is displayed, 
        // because the FileChooserButton has a nasty habbit of selecting a
        // different folder when displayed if the provided path doesn't exist.
        // See ticket #3000 for more info.
        library_dir_button.current_folder_changed.connect(on_current_folder_changed);
        return true;
    }
    
    private void add_to_dir_formats(string name, string? pattern) {
        PathFormat pf = new PathFormat(name, pattern);
        path_formats.add(pf);
        dir_pattern_combo.append_text(name);
    }
    
    private void on_lowercase_toggled() {
        Config.get_instance().set_use_lowercase_filenames(lowercase.get_active());
    }
}

// This function is used to determine whether or not files should be copied or linked when imported.
// Returns ACCEPT for copy, REJECT for link, and CANCEL for (drum-roll) cancel.
public Gtk.ResponseType copy_files_dialog() {
    string msg = _("Shotwell can copy the photos into your library folder or it can import them without copying.");

    Gtk.MessageDialog dialog = new Gtk.MessageDialog(AppWindow.get_instance(), Gtk.DialogFlags.MODAL,
        Gtk.MessageType.QUESTION, Gtk.ButtonsType.CANCEL, "%s", msg);

    dialog.add_button(_("Co_py Photos"), Gtk.ResponseType.ACCEPT);
    dialog.add_button(_("_Import in Place"), Gtk.ResponseType.REJECT);
    dialog.title = _("Import to Library");

    Gtk.ResponseType result = (Gtk.ResponseType) dialog.run();
    
    dialog.destroy();

    return result;
}
