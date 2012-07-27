/* Copyright 2010-2012 Yorba Foundation
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */

public class Application {
    private static Application instance = null;
    private Gtk.Application system_app = null;
    private int system_app_run_retval = 0;
    private bool direct;

    public virtual signal void starting() {
    }

    public virtual signal void exiting(bool panicked) {
    }

    private bool running = false;
    private bool exiting_fired = false;

    private Application(bool is_direct) {
        if (is_direct) {
            // we allow multiple instances of ourself in direct mode, so DON'T
            // attempt to be unique.  We don't request any command-line handling
            // here because this is processed elsewhere, and we don't need to handle
            // command lines from remote instances, since we don't care about them.
            system_app = new Gtk.Application("org.yorba.shotwell-direct", GLib.ApplicationFlags.HANDLES_OPEN |
                GLib.ApplicationFlags.NON_UNIQUE);
        } else {
            // we've been invoked in library mode; set up for uniqueness and handling
            // of incoming command lines from remote instances (needed for getting
            // storage device and camera mounts).
            system_app = new Gtk.Application("org.yorba.shotwell", GLib.ApplicationFlags.HANDLES_OPEN |
                GLib.ApplicationFlags.HANDLES_COMMAND_LINE);

            // registering is only important for uniqueness, so we do it here.
            try {
                system_app.register();
            } catch (Error e) {
                panic();
            }
        }
        
        direct = is_direct;

        system_app.command_line.connect(on_command_line);
        system_app.activate.connect(on_activated);
        system_app.startup.connect(on_activated);
    }

    /**
     * @brief This is a helper for library mode that should only be
     * called if we've gotten a camera mount and are _not_ the primary
     * instance.
     */
    public static void send_to_primary_instance(string[]? argv) {
        get_instance().system_app.run(argv);
    }
    
    /**
     * @brief A helper for library mode that tells the primary
     * instance to bring its window to the foreground.  This
     * should only be called if we are _not_ the primary instance.
     */
    public static void present_primary_instance() {
        get_instance().system_app.activate();
    }

    public static bool get_is_remote() {
        return get_instance().system_app.get_is_remote();
    }
    
    public static bool get_is_direct() {
        return get_instance().direct;
    }

    /**
     * @brief Signal handler for GApplication's 'command-line' signal.
     *
     * The most likely scenario for this to be fired is if the user
     * either tried to run us twice in library mode, or we've just gotten
     * a camera/removeable-storage mount; in either case, the remote instance
     * will trigger this and exit, and we'll need to bring the window back up...
     */
    public static void on_activated() {
        get_instance();

        LibraryWindow lw = AppWindow.get_instance() as LibraryWindow;
        if ((lw != null) && (!get_is_direct())) {
            lw.get_app().present();
        }
    }

    /**
     * @brief Signal handler for GApplication's 'command-line' signal.
     *
     * Gets fired whenever a remote instance tries to run, usually
     * with an incoming camera connection.
     *
     * @note This does _not_ get called in direct-edit mode.
     */
    public static int on_command_line(ApplicationCommandLine acl) {
        string[]? argv = acl.get_arguments();

        if (argv != null) {
            foreach (string s in argv) {
                LibraryWindow lw = AppWindow.get_instance() as LibraryWindow;
                if (lw != null) {
                    lw.mounted_camera_shell_notification(s, false);
                }
            }
        }
        on_activated();
        return 0;
    }

    /**
     * @brief Initializes the Shotwell application object and prepares
     * it for use.
     *
     * @param is_direct Whether the application was invoked in direct
     * or in library mode; defaults to FALSE, that is, library mode.
     *
     * @note This MUST be called prior to calling get_instance(), as the
     * application needs to know what mode it was brought up in; failure to
     * call this first will lead to an assertion.
     */
    public static void init(bool is_direct = false) {
        if (instance == null)
            instance = new Application(is_direct);
    }

    public static void terminate() {
        get_instance().exit();
    }

    public static Application get_instance() {
        assert (instance != null);

        return instance;
    }

    public void start(string[]? argv = null) {
        if (running)
            return;

        running = true;

        starting();

        assert(AppWindow.get_instance() != null);
        system_app.add_window(AppWindow.get_instance());
        system_app_run_retval = system_app.run(argv);

        system_app.command_line.disconnect(on_command_line);
        system_app.activate.disconnect(on_activated);
        system_app.startup.disconnect(on_activated);

        system_app.remove_window(AppWindow.get_instance());

        running = false;
    }

    public void exit() {
        // only fire this once, but thanks to terminate(), it will be fired at least once (even
        // if start() is not called and "starting" is not fired)
        if (exiting_fired || !running)
            return;

        exiting_fired = true;

        exiting(false);

        system_app.release();
    }

    // This will fire the exiting signal with panicked set to true, but only if exit() hasn't
    // already been called.  This call will immediately halt the application.
    public void panic() {
        if (!exiting_fired) {
            exiting_fired = true;
            exiting(true);
        }
        Posix.exit(1);
    }

    public int get_run_return_value() {
        return system_app_run_retval;
    }
}

