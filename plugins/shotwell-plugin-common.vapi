/* shotwell-plugin-common.vapi generated by valac 0.34.4, do not modify. */

namespace Publishing {
	namespace RESTSupport {
		[CCode (cheader_filename = "shotwell-plugin-common.h")]
		public class Argument {
			public string key;
			public string value;
			public Argument (string key, string value);
			public static int compare (Publishing.RESTSupport.Argument arg1, Publishing.RESTSupport.Argument arg2);
			public static Publishing.RESTSupport.Argument[] sort (Publishing.RESTSupport.Argument[] inputArray);
			public string to_string ();
		}
		[CCode (cheader_filename = "shotwell-plugin-common.h")]
		public abstract class BatchUploader {
			public BatchUploader (Publishing.RESTSupport.Session session, Spit.Publishing.Publishable[] publishables);
			protected abstract Publishing.RESTSupport.Transaction create_transaction (Spit.Publishing.Publishable publishable);
			protected Spit.Publishing.Publishable get_current_publishable ();
			protected Publishing.RESTSupport.Session get_session ();
			public void upload (Spit.Publishing.ProgressCallback? status_updated = null);
			public signal void upload_complete (int num_photos_published);
			public signal void upload_error (Spit.Publishing.PublishingError err);
		}
		[CCode (cheader_filename = "shotwell-plugin-common.h")]
		public abstract class GooglePublisher : GLib.Object, Spit.Publishing.Publisher {
			public class AuthenticatedTransaction : Publishing.RESTSupport.Transaction {
				public AuthenticatedTransaction (Publishing.RESTSupport.GoogleSession session, string endpoint_url, Publishing.RESTSupport.HttpMethod method);
			}
			protected GooglePublisher (Spit.Publishing.Service service, Spit.Publishing.PluginHost host, string scope);
			protected abstract void do_logout ();
			protected unowned Spit.Publishing.PluginHost get_host ();
			protected Publishing.RESTSupport.GoogleSession get_session ();
			public abstract bool is_running ();
			protected abstract void on_login_flow_complete ();
			public abstract void start ();
			protected void start_oauth_flow (string? refresh_token = null);
			public abstract void stop ();
		}
		[CCode (cheader_filename = "shotwell-plugin-common.h")]
		public abstract class GoogleSession : Publishing.RESTSupport.Session {
			public GoogleSession ();
			public abstract void deauthenticate ();
			public abstract string get_access_token ();
			public abstract string get_refresh_token ();
			public abstract string get_user_name ();
		}
		[CCode (cheader_filename = "shotwell-plugin-common.h")]
		public abstract class Session {
			public Session (string? endpoint_url = null);
			public bool are_transactions_stopped ();
			public string? get_endpoint_url ();
			public abstract bool is_authenticated ();
			protected void notify_authenticated ();
			protected void notify_authentication_failed (Spit.Publishing.PublishingError err);
			protected void notify_wire_message_unqueued (Soup.Message message);
			public void send_wire_message (Soup.Message message);
			public void set_insecure ();
			public void stop_transactions ();
			public signal void authenticated ();
			public signal void authentication_failed (Spit.Publishing.PublishingError err);
			public signal void wire_message_unqueued (Soup.Message message);
		}
		[CCode (cheader_filename = "shotwell-plugin-common.h")]
		public class Transaction {
			public Transaction (Publishing.RESTSupport.Session parent_session, Publishing.RESTSupport.HttpMethod method = HttpMethod.POST);
			public void add_argument (string name, string value);
			protected virtual void add_header (string key, string value);
			protected void check_response (Soup.Message message) throws Spit.Publishing.PublishingError;
			public string detailed_error_from_tls_flags (out GLib.TlsCertificate cert);
			public virtual void execute () throws Spit.Publishing.PublishingError;
			public Publishing.RESTSupport.Argument[] get_arguments ();
			public string? get_endpoint_url ();
			public bool get_is_executed ();
			public Soup.Message get_message ();
			public Publishing.RESTSupport.HttpMethod get_method ();
			public Publishing.RESTSupport.Session get_parent_session ();
			public string get_response ();
			public unowned Soup.MessageHeaders get_response_headers ();
			public Publishing.RESTSupport.Argument[] get_sorted_arguments ();
			public uint get_status_code ();
			protected void send () throws Spit.Publishing.PublishingError;
			protected void set_custom_payload (string? custom_payload, string payload_content_type, ulong payload_length = 0);
			protected void set_is_executed (bool is_executed);
			protected void set_message (Soup.Message message);
			public Transaction.with_endpoint_url (Publishing.RESTSupport.Session parent_session, string endpoint_url, Publishing.RESTSupport.HttpMethod method = HttpMethod.POST);
			public signal void chunk_transmitted (int bytes_written_so_far, int total_bytes);
			public signal void completed ();
			public signal void network_error (Spit.Publishing.PublishingError err);
		}
		[CCode (cheader_filename = "shotwell-plugin-common.h")]
		public class UploadTransaction : Publishing.RESTSupport.Transaction {
			protected GLib.HashTable<string,string> binary_disposition_table;
			protected Gee.HashMap<string,string> message_headers;
			protected string mime_type;
			protected Spit.Publishing.Publishable publishable;
			public UploadTransaction (Publishing.RESTSupport.Session session, Spit.Publishing.Publishable publishable);
			protected override void add_header (string key, string value);
			public override void execute () throws Spit.Publishing.PublishingError;
			protected void set_binary_disposition_table (GLib.HashTable<string,string> new_disp_table);
			public UploadTransaction.with_endpoint_url (Publishing.RESTSupport.Session session, Spit.Publishing.Publishable publishable, string endpoint_url);
		}
		[CCode (cheader_filename = "shotwell-plugin-common.h")]
		public class XmlDocument {
			public delegate string? CheckForErrorResponse (Publishing.RESTSupport.XmlDocument doc);
			public Xml.Node* get_named_child (Xml.Node* parent, string child_name) throws Spit.Publishing.PublishingError;
			public string get_property_value (Xml.Node* node, string property_key) throws Spit.Publishing.PublishingError;
			public Xml.Node* get_root_node ();
			public static Publishing.RESTSupport.XmlDocument parse_string (string? input_string, Publishing.RESTSupport.XmlDocument.CheckForErrorResponse check_for_error_response) throws Spit.Publishing.PublishingError;
		}
		[CCode (cheader_filename = "shotwell-plugin-common.h")]
		public enum HttpMethod {
			GET,
			POST,
			PUT;
			public string to_string ();
			public static Publishing.RESTSupport.HttpMethod from_string (string str);
		}
		[CCode (cheader_filename = "shotwell-plugin-common.h")]
		public static string asciify_string (string s);
		[CCode (cheader_filename = "shotwell-plugin-common.h")]
		public static string decimal_entity_encode (string source);
		[CCode (cheader_filename = "shotwell-plugin-common.h")]
		public static string hmac_sha1 (string key, string message);
	}
}
namespace Resources {
	[CCode (cheader_filename = "shotwell-plugin-common.h")]
	public const string LICENSE;
	[CCode (cheader_filename = "shotwell-plugin-common.h", cname = "PLUGIN_RESOURCE_PATH")]
	public const string RESOURCE_PATH;
	[CCode (cheader_filename = "shotwell-plugin-common.h")]
	public const string TRANSLATORS;
	[CCode (cheader_filename = "shotwell-plugin-common.h")]
	public const string WEBSITE_NAME;
	[CCode (cheader_filename = "shotwell-plugin-common.h")]
	public const string WEBSITE_URL;
	[CCode (cheader_filename = "shotwell-plugin-common.h")]
	public static Gdk.Pixbuf[]? load_from_resource (string resource_path);
	[CCode (cheader_filename = "shotwell-plugin-common.h")]
	public static Gdk.Pixbuf[]? load_icon_set (GLib.File? icon_file);
}
namespace Shotwell {
	namespace Plugins {
		namespace Common {
			[CCode (cheader_filename = "shotwell-plugin-common.h")]
			public abstract class BuilderPane : Spit.Publishing.DialogPane, GLib.Object {
				public BuilderPane ();
				public override void constructed ();
				public Gtk.Builder get_builder ();
				public virtual Gtk.Widget get_default_widget ();
				public virtual void on_pane_installed ();
				public virtual void on_pane_uninstalled ();
				public bool connect_signals { get; construct; }
				public string default_id { owned get; construct; }
				public Spit.Publishing.DialogPane.GeometryOptions preferred_geometry { get; construct; }
				public string resource_path { owned get; construct; }
			}
			[CCode (cheader_filename = "shotwell-plugin-common.h")]
			public abstract class WebAuthenticationPane : Spit.Publishing.DialogPane, GLib.Object {
				public WebAuthenticationPane ();
				public override void constructed ();
				public WebKit.WebView get_view ();
				public abstract void on_page_load ();
				protected void set_cursor (Gdk.CursorType type);
				public string login_uri { owned get; construct; }
				public Spit.Publishing.DialogPane.GeometryOptions preferred_geometry { get; construct; }
			}
		}
	}
}