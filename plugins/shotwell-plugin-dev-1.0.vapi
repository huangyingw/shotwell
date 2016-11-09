/* shotwell-plugin-dev-1.0.vapi generated by valac 0.34.1, do not modify. */

namespace Spit {
	namespace DataImports {
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface DataImporter : GLib.Object {
			public abstract Spit.DataImports.Service get_service ();
			public abstract bool is_running ();
			public abstract void on_file_selected (GLib.File file);
			public abstract void on_library_selected (Spit.DataImports.ImportableLibrary library);
			protected virtual void reserved0 ();
			protected virtual void reserved1 ();
			protected virtual void reserved2 ();
			protected virtual void reserved3 ();
			protected virtual void reserved4 ();
			protected virtual void reserved5 ();
			protected virtual void reserved6 ();
			protected virtual void reserved7 ();
			public abstract void start ();
			public abstract void stop ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface DialogPane : GLib.Object {
			public enum GeometryOptions {
				NONE,
				EXTENDED_SIZE,
				RESIZABLE,
				COLOSSAL_SIZE
			}
			public abstract Spit.DataImports.DialogPane.GeometryOptions get_preferred_geometry ();
			public abstract Gtk.Widget get_widget ();
			public abstract void on_pane_installed ();
			public abstract void on_pane_uninstalled ();
			protected virtual void reserved0 ();
			protected virtual void reserved1 ();
			protected virtual void reserved2 ();
			protected virtual void reserved3 ();
			protected virtual void reserved4 ();
			protected virtual void reserved5 ();
			protected virtual void reserved6 ();
			protected virtual void reserved7 ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface ImportableEvent : GLib.Object {
			public abstract string get_name ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface ImportableLibrary : GLib.Object {
			public abstract string get_display_name ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface ImportableMediaItem : GLib.Object {
			public abstract Spit.DataImports.ImportableEvent? get_event ();
			public abstract time_t? get_exposure_time ();
			public abstract string get_filename ();
			public abstract string get_folder_path ();
			public abstract Spit.DataImports.ImportableRating get_rating ();
			public abstract Spit.DataImports.ImportableTag[] get_tags ();
			public abstract string? get_title ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface ImportableRating : GLib.Object {
			public abstract int get_value ();
			public abstract bool is_rejected ();
			public abstract bool is_unrated ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface ImportableTag : GLib.Object {
			public abstract string get_name ();
			public abstract Spit.DataImports.ImportableTag? get_parent ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface PluginHost : GLib.Object, Spit.HostInterface {
			public enum ButtonMode {
				CLOSE,
				CANCEL
			}
			public abstract void finalize_import (Spit.DataImports.ImportedItemsCountCallback report_imported_items_count, string? finalize_message = null);
			public abstract Spit.DataImports.DataImporter get_data_importer ();
			public abstract void install_dialog_pane (Spit.DataImports.DialogPane pane, Spit.DataImports.PluginHost.ButtonMode mode = ButtonMode.CANCEL);
			public abstract void install_import_progress_pane (string message);
			public abstract void install_library_selection_pane (string welcome_message, Spit.DataImports.ImportableLibrary[] discovered_libraries, string? file_select_label);
			public abstract void install_static_message_pane (string message, Spit.DataImports.PluginHost.ButtonMode mode = ButtonMode.CANCEL);
			public abstract void post_error (GLib.Error err);
			public abstract void post_error_message (string msg);
			public abstract void prepare_media_items_for_import (Spit.DataImports.ImportableMediaItem[] items, double progress, double host_progress_delta = 0.0, string? progress_message = null);
			protected virtual void reserved0 ();
			protected virtual void reserved1 ();
			protected virtual void reserved2 ();
			protected virtual void reserved3 ();
			protected virtual void reserved4 ();
			protected virtual void reserved5 ();
			protected virtual void reserved6 ();
			protected virtual void reserved7 ();
			public abstract void start_importing ();
			public abstract void stop_importing ();
			public abstract void update_import_progress_pane (double progress, string? progress_message = null);
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface Service : GLib.Object, Spit.Pluggable {
			public abstract Spit.DataImports.DataImporter create_data_importer (Spit.DataImports.PluginHost host);
			protected virtual void reserved0 ();
			protected virtual void reserved1 ();
			protected virtual void reserved2 ();
			protected virtual void reserved3 ();
			protected virtual void reserved4 ();
			protected virtual void reserved5 ();
			protected virtual void reserved6 ();
			protected virtual void reserved7 ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public errordomain DataImportError {
			UNSUPPORTED_VERSION
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public delegate void ImportedItemsCountCallback (int imported_items_count);
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public const int CURRENT_INTERFACE;
	}
	namespace Publishing {
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface DialogPane : GLib.Object {
			public enum GeometryOptions {
				NONE,
				EXTENDED_SIZE,
				RESIZABLE,
				COLOSSAL_SIZE
			}
			public abstract Spit.Publishing.DialogPane.GeometryOptions get_preferred_geometry ();
			public abstract Gtk.Widget get_widget ();
			public abstract void on_pane_installed ();
			public abstract void on_pane_uninstalled ();
			protected virtual void reserved0 ();
			protected virtual void reserved1 ();
			protected virtual void reserved2 ();
			protected virtual void reserved3 ();
			protected virtual void reserved4 ();
			protected virtual void reserved5 ();
			protected virtual void reserved6 ();
			protected virtual void reserved7 ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface PluginHost : GLib.Object, Spit.HostInterface {
			public enum ButtonMode {
				CLOSE,
				CANCEL
			}
			public abstract Spit.Publishing.Publisher.MediaType get_publishable_media_type ();
			public abstract Spit.Publishing.Publishable[] get_publishables ();
			public abstract Spit.Publishing.Publisher get_publisher ();
			public abstract void install_account_fetch_wait_pane ();
			public abstract void install_dialog_pane (Spit.Publishing.DialogPane pane, Spit.Publishing.PluginHost.ButtonMode mode = ButtonMode.CANCEL);
			public abstract void install_login_wait_pane ();
			public abstract void install_pango_message_pane (string markup, Spit.Publishing.PluginHost.ButtonMode mode = ButtonMode.CANCEL);
			public abstract void install_static_message_pane (string message, Spit.Publishing.PluginHost.ButtonMode mode = ButtonMode.CANCEL);
			public abstract void install_success_pane ();
			public abstract void install_welcome_pane (string welcome_message, Spit.Publishing.LoginCallback on_login_clicked);
			public abstract void post_error (GLib.Error err);
			protected virtual void reserved0 ();
			protected virtual void reserved1 ();
			protected virtual void reserved2 ();
			protected virtual void reserved3 ();
			protected virtual void reserved4 ();
			protected virtual void reserved5 ();
			protected virtual void reserved6 ();
			protected virtual void reserved7 ();
			public abstract Spit.Publishing.ProgressCallback? serialize_publishables (int content_major_axis, bool strip_metadata = false);
			public abstract void set_dialog_default_widget (Gtk.Widget widget);
			public abstract void set_service_locked (bool is_locked);
			public abstract void stop_publishing ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface Publishable : GLib.Object {
			public const string PARAM_STRING_BASENAME;
			public const string PARAM_STRING_COMMENT;
			public const string PARAM_STRING_EVENTCOMMENT;
			public const string PARAM_STRING_TITLE;
			public abstract GLib.DateTime get_exposure_date_time ();
			public abstract Spit.Publishing.Publisher.MediaType get_media_type ();
			public abstract string? get_param_string (string name);
			public abstract string[] get_publishing_keywords ();
			public abstract string get_publishing_name ();
			public abstract GLib.File? get_serialized_file ();
			protected virtual void reserved0 ();
			protected virtual void reserved1 ();
			protected virtual void reserved2 ();
			protected virtual void reserved3 ();
			protected virtual void reserved4 ();
			protected virtual void reserved5 ();
			protected virtual void reserved6 ();
			protected virtual void reserved7 ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface Publisher : GLib.Object {
			public enum MediaType {
				NONE,
				PHOTO,
				VIDEO
			}
			public abstract Spit.Publishing.Service get_service ();
			public abstract bool is_running ();
			protected virtual void reserved0 ();
			protected virtual void reserved1 ();
			protected virtual void reserved2 ();
			protected virtual void reserved3 ();
			protected virtual void reserved4 ();
			protected virtual void reserved5 ();
			protected virtual void reserved6 ();
			protected virtual void reserved7 ();
			public abstract void start ();
			public abstract void stop ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface Service : GLib.Object, Spit.Pluggable {
			public abstract Spit.Publishing.Publisher create_publisher (Spit.Publishing.PluginHost host);
			public abstract Spit.Publishing.Publisher.MediaType get_supported_media ();
			protected virtual void reserved0 ();
			protected virtual void reserved1 ();
			protected virtual void reserved2 ();
			protected virtual void reserved3 ();
			protected virtual void reserved4 ();
			protected virtual void reserved5 ();
			protected virtual void reserved6 ();
			protected virtual void reserved7 ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public errordomain PublishingError {
			NO_ANSWER,
			COMMUNICATION_FAILED,
			PROTOCOL_ERROR,
			SERVICE_ERROR,
			MALFORMED_RESPONSE,
			LOCAL_FILE_ERROR,
			EXPIRED_SESSION,
			SSL_FAILED
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public delegate void LoginCallback ();
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public delegate void ProgressCallback (int file_number, double fraction_complete);
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public const int CURRENT_INTERFACE;
	}
	namespace Transitions {
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public class Motion : GLib.Object {
			public Motion (Spit.Transitions.Direction direction, int fps, int duration_msec);
			public double get_alpha (int frame_number);
			protected virtual void reserved0 ();
			protected virtual void reserved1 ();
			protected virtual void reserved2 ();
			protected virtual void reserved3 ();
			protected virtual void reserved4 ();
			protected virtual void reserved5 ();
			protected virtual void reserved6 ();
			protected virtual void reserved7 ();
			public Spit.Transitions.Direction direction { get; private set; }
			public int duration_msec { get; private set; }
			public int fps { get; private set; }
			public int tick_msec { get; }
			public int total_frames { get; }
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public class Visuals : GLib.Object {
			public Visuals (Gdk.Pixbuf? from_pixbuf, Gdk.Rectangle from_pos, Gdk.Pixbuf? to_pixbuf, Gdk.Rectangle to_pos, Gdk.RGBA bg_color);
			protected virtual void reserved0 ();
			protected virtual void reserved1 ();
			protected virtual void reserved2 ();
			protected virtual void reserved3 ();
			protected virtual void reserved4 ();
			protected virtual void reserved5 ();
			protected virtual void reserved6 ();
			protected virtual void reserved7 ();
			public Gdk.RGBA bg_color { get; private set; }
			public Gdk.Pixbuf? from_pixbuf { get; private set; }
			public Gdk.Rectangle from_pos { get; private set; }
			public Gdk.Pixbuf? to_pixbuf { get; private set; }
			public Gdk.Rectangle to_pos { get; private set; }
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface Descriptor : GLib.Object, Spit.Pluggable {
			public abstract Spit.Transitions.Effect create (Spit.HostInterface host);
			protected virtual void reserved0 ();
			protected virtual void reserved1 ();
			protected virtual void reserved2 ();
			protected virtual void reserved3 ();
			protected virtual void reserved4 ();
			protected virtual void reserved5 ();
			protected virtual void reserved6 ();
			protected virtual void reserved7 ();
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public interface Effect : GLib.Object {
			public abstract void advance (Spit.Transitions.Visuals visuals, Spit.Transitions.Motion motion, int frame_number);
			public abstract void cancel ();
			public abstract void get_fps (out int desired_fps, out int min_fps);
			public abstract bool needs_clear_background ();
			public abstract void paint (Spit.Transitions.Visuals visuals, Spit.Transitions.Motion motion, Cairo.Context ctx, int width, int height, int frame_number);
			protected virtual void reserved0 ();
			protected virtual void reserved1 ();
			protected virtual void reserved2 ();
			protected virtual void reserved3 ();
			protected virtual void reserved4 ();
			protected virtual void reserved5 ();
			protected virtual void reserved6 ();
			protected virtual void reserved7 ();
			public abstract void start (Spit.Transitions.Visuals visuals, Spit.Transitions.Motion motion);
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public enum Direction {
			LEFT,
			RIGHT,
			FORWARD,
			BACKWARD
		}
		[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
		public const int CURRENT_INTERFACE;
	}
	[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
	public interface HostInterface : GLib.Object {
		public abstract bool get_config_bool (string key, bool def);
		public abstract double get_config_double (string key, double def);
		public abstract int get_config_int (string key, int def);
		public abstract string? get_config_string (string key, string? def);
		public abstract GLib.File get_module_file ();
		protected virtual void reserved0 ();
		protected virtual void reserved1 ();
		protected virtual void reserved2 ();
		protected virtual void reserved3 ();
		protected virtual void reserved4 ();
		protected virtual void reserved5 ();
		protected virtual void reserved6 ();
		protected virtual void reserved7 ();
		public abstract void set_config_bool (string key, bool val);
		public abstract void set_config_double (string key, double val);
		public abstract void set_config_int (string key, int val);
		public abstract void set_config_string (string key, string? val);
		public abstract void unset_config_key (string key);
	}
	[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
	public interface Module : GLib.Object {
		public abstract unowned string get_id ();
		public abstract unowned string get_module_name ();
		public abstract unowned Spit.Pluggable[]? get_pluggables ();
		public abstract unowned string get_version ();
		protected virtual void reserved0 ();
		protected virtual void reserved1 ();
		protected virtual void reserved2 ();
		protected virtual void reserved3 ();
		protected virtual void reserved4 ();
		protected virtual void reserved5 ();
		protected virtual void reserved6 ();
		protected virtual void reserved7 ();
	}
	[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
	public interface Pluggable : GLib.Object {
		public abstract void activation (bool enabled);
		public abstract unowned string get_id ();
		public abstract void get_info (ref Spit.PluggableInfo info);
		public abstract int get_pluggable_interface (int min_host_interface, int max_host_interface);
		public abstract unowned string get_pluggable_name ();
		protected virtual void reserved0 ();
		protected virtual void reserved1 ();
		protected virtual void reserved2 ();
		protected virtual void reserved3 ();
		protected virtual void reserved4 ();
		protected virtual void reserved5 ();
		protected virtual void reserved6 ();
		protected virtual void reserved7 ();
	}
	[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
	public struct EntryPointParams {
		public int host_min_spit_interface;
		public int host_max_spit_interface;
		public int module_spit_interface;
		public GLib.File module_file;
	}
	[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
	public struct PluggableInfo {
		public string? version;
		public string? brief_description;
		public string? authors;
		public string? copyright;
		public string? license;
		public bool is_license_wordwrapped;
		public string? website_url;
		public string? website_name;
		public string? translators;
		public Gdk.Pixbuf[]? icons;
	}
	[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h", has_target = false)]
	public delegate Spit.Module? EntryPoint (Spit.EntryPointParams* @params);
	[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
	public const int CURRENT_INTERFACE;
	[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
	public const string ENTRY_POINT_NAME;
	[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
	public const int UNSUPPORTED_INTERFACE;
	[CCode (cheader_filename = "shotwell-plugin-dev-1.0.h")]
	public static int negotiate_interfaces (int min_host_interface, int max_host_interface, int plugin_interface);
}