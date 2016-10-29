/* Debug.c generated by valac 0.34.1, the Vala compiler
 * generated from Debug.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU LGPL (version 2.1 or later).
 * See the COPYING file in this distribution.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <gio/gio.h>
#include <glib/gstdio.h>
#include <time.h>
#include <unistd.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _fclose0(var) ((var == NULL) ? NULL : (var = (fclose (var), NULL)))


extern GLogLevelFlags debug_log_mask;
GLogLevelFlags debug_log_mask = 0;
extern gchar* debug_log_app_version_prefix;
gchar* debug_log_app_version_prefix = NULL;
extern FILE* debug_log_out;
FILE* debug_log_out = NULL;
extern FILE* debug_log_err;
FILE* debug_log_err = NULL;
extern FILE* debug_log_file_stream;
FILE* debug_log_file_stream = NULL;

#define DEBUG_DEFAULT_LOG_MASK ((G_LOG_LEVEL_CRITICAL | G_LOG_LEVEL_WARNING) | G_LOG_LEVEL_MESSAGE)
#define DEBUG_VIEWER_PREFIX "V"
#define DEBUG_LIBRARY_PREFIX "L"
void debug_init (const gchar* app_version_prefix);
GFile* app_dirs_get_log_file (void);
void debug_info_handler (const gchar* domain, GLogLevelFlags flags, const gchar* message);
static void _debug_info_handler_glog_func (const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message, gpointer self);
void debug_debug_handler (const gchar* domain, GLogLevelFlags flags, const gchar* message);
static void _debug_debug_handler_glog_func (const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message, gpointer self);
void debug_message_handler (const gchar* domain, GLogLevelFlags flags, const gchar* message);
static void _debug_message_handler_glog_func (const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message, gpointer self);
void debug_warning_handler (const gchar* domain, GLogLevelFlags flags, const gchar* message);
static void _debug_warning_handler_glog_func (const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message, gpointer self);
void debug_critical_handler (const gchar* domain, GLogLevelFlags flags, const gchar* message);
static void _debug_critical_handler_glog_func (const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message, gpointer self);
void debug_terminate (void);
gboolean debug_is_enabled (GLogLevelFlags flag);
void debug_log (FILE* stream, const gchar* prefix, const gchar* message);


static gpointer _g_object_ref0 (gpointer self) {
#line 37 "/home/jens/Source/shotwell/src/Debug.vala"
	return self ? g_object_ref (self) : NULL;
#line 61 "Debug.c"
}


static void _debug_info_handler_glog_func (const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message, gpointer self) {
#line 82 "/home/jens/Source/shotwell/src/Debug.vala"
	debug_info_handler (log_domain, log_levels, message);
#line 68 "Debug.c"
}


static void _debug_debug_handler_glog_func (const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message, gpointer self) {
#line 83 "/home/jens/Source/shotwell/src/Debug.vala"
	debug_debug_handler (log_domain, log_levels, message);
#line 75 "Debug.c"
}


static void _debug_message_handler_glog_func (const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message, gpointer self) {
#line 84 "/home/jens/Source/shotwell/src/Debug.vala"
	debug_message_handler (log_domain, log_levels, message);
#line 82 "Debug.c"
}


static void _debug_warning_handler_glog_func (const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message, gpointer self) {
#line 85 "/home/jens/Source/shotwell/src/Debug.vala"
	debug_warning_handler (log_domain, log_levels, message);
#line 89 "Debug.c"
}


static void _debug_critical_handler_glog_func (const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message, gpointer self) {
#line 86 "/home/jens/Source/shotwell/src/Debug.vala"
	debug_critical_handler (log_domain, log_levels, message);
#line 96 "Debug.c"
}


void debug_init (const gchar* app_version_prefix) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	FILE* _tmp2_ = NULL;
	FILE* _tmp3_ = NULL;
	gchar* log_file_error_msg = NULL;
	GFile* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	GFile* log_file = NULL;
	GFile* _tmp7_ = NULL;
	GFile* _tmp8_ = NULL;
	const gchar* _tmp34_ = NULL;
	gboolean _tmp55_ = FALSE;
	GLogLevelFlags _tmp56_ = 0;
	const gchar* _tmp58_ = NULL;
	GError * _inner_error_ = NULL;
#line 27 "/home/jens/Source/shotwell/src/Debug.vala"
	g_return_if_fail (app_version_prefix != NULL);
#line 28 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp0_ = app_version_prefix;
#line 28 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 28 "/home/jens/Source/shotwell/src/Debug.vala"
	_g_free0 (debug_log_app_version_prefix);
#line 28 "/home/jens/Source/shotwell/src/Debug.vala"
	debug_log_app_version_prefix = _tmp1_;
#line 31 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp2_ = stdout;
#line 31 "/home/jens/Source/shotwell/src/Debug.vala"
	debug_log_out = _tmp2_;
#line 32 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp3_ = stderr;
#line 32 "/home/jens/Source/shotwell/src/Debug.vala"
	debug_log_err = _tmp3_;
#line 34 "/home/jens/Source/shotwell/src/Debug.vala"
	log_file_error_msg = NULL;
#line 37 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp5_ = debug_log_app_version_prefix;
#line 37 "/home/jens/Source/shotwell/src/Debug.vala"
	if (g_strcmp0 (_tmp5_, DEBUG_LIBRARY_PREFIX) == 0) {
#line 140 "Debug.c"
		GFile* _tmp6_ = NULL;
#line 37 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp6_ = app_dirs_get_log_file ();
#line 37 "/home/jens/Source/shotwell/src/Debug.vala"
		_g_object_unref0 (_tmp4_);
#line 37 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp4_ = _tmp6_;
#line 148 "Debug.c"
	} else {
#line 37 "/home/jens/Source/shotwell/src/Debug.vala"
		_g_object_unref0 (_tmp4_);
#line 37 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp4_ = NULL;
#line 154 "Debug.c"
	}
#line 37 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp7_ = _g_object_ref0 (_tmp4_);
#line 37 "/home/jens/Source/shotwell/src/Debug.vala"
	log_file = _tmp7_;
#line 38 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp8_ = log_file;
#line 38 "/home/jens/Source/shotwell/src/Debug.vala"
	if (_tmp8_ != NULL) {
#line 164 "Debug.c"
		GFile* log_dir = NULL;
		GFile* _tmp9_ = NULL;
		GFile* _tmp10_ = NULL;
		GFile* _tmp23_ = NULL;
		gchar* _tmp24_ = NULL;
		gchar* _tmp25_ = NULL;
		FILE* _tmp26_ = NULL;
		FILE* _tmp27_ = NULL;
#line 39 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp9_ = log_file;
#line 39 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp10_ = g_file_get_parent (_tmp9_);
#line 39 "/home/jens/Source/shotwell/src/Debug.vala"
		log_dir = _tmp10_;
#line 179 "Debug.c"
		{
			GFile* _tmp11_ = NULL;
			gboolean _tmp12_ = FALSE;
#line 41 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp11_ = log_dir;
#line 41 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp12_ = g_file_query_exists (_tmp11_, NULL);
#line 41 "/home/jens/Source/shotwell/src/Debug.vala"
			if (_tmp12_ == FALSE) {
#line 189 "Debug.c"
				gboolean _tmp13_ = FALSE;
				GFile* _tmp14_ = NULL;
				gboolean _tmp15_ = FALSE;
#line 42 "/home/jens/Source/shotwell/src/Debug.vala"
				_tmp14_ = log_dir;
#line 42 "/home/jens/Source/shotwell/src/Debug.vala"
				_tmp15_ = g_file_make_directory_with_parents (_tmp14_, NULL, &_inner_error_);
#line 42 "/home/jens/Source/shotwell/src/Debug.vala"
				_tmp13_ = _tmp15_;
#line 42 "/home/jens/Source/shotwell/src/Debug.vala"
				if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 201 "Debug.c"
					goto __catch434_g_error;
				}
#line 42 "/home/jens/Source/shotwell/src/Debug.vala"
				if (!_tmp13_) {
#line 206 "Debug.c"
					GFile* _tmp16_ = NULL;
					gchar* _tmp17_ = NULL;
					gchar* _tmp18_ = NULL;
					gchar* _tmp19_ = NULL;
#line 43 "/home/jens/Source/shotwell/src/Debug.vala"
					_tmp16_ = log_dir;
#line 43 "/home/jens/Source/shotwell/src/Debug.vala"
					_tmp17_ = g_file_get_path (_tmp16_);
#line 43 "/home/jens/Source/shotwell/src/Debug.vala"
					_tmp18_ = _tmp17_;
#line 43 "/home/jens/Source/shotwell/src/Debug.vala"
					_tmp19_ = g_strdup_printf ("Unable to create data directory %s", _tmp18_);
#line 43 "/home/jens/Source/shotwell/src/Debug.vala"
					_g_free0 (log_file_error_msg);
#line 43 "/home/jens/Source/shotwell/src/Debug.vala"
					log_file_error_msg = _tmp19_;
#line 43 "/home/jens/Source/shotwell/src/Debug.vala"
					_g_free0 (_tmp18_);
#line 225 "Debug.c"
				}
			}
		}
		goto __finally434;
		__catch434_g_error:
		{
			GError* err = NULL;
			GError* _tmp20_ = NULL;
			const gchar* _tmp21_ = NULL;
			gchar* _tmp22_ = NULL;
#line 40 "/home/jens/Source/shotwell/src/Debug.vala"
			err = _inner_error_;
#line 40 "/home/jens/Source/shotwell/src/Debug.vala"
			_inner_error_ = NULL;
#line 47 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp20_ = err;
#line 47 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp21_ = _tmp20_->message;
#line 47 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp22_ = g_strdup (_tmp21_);
#line 47 "/home/jens/Source/shotwell/src/Debug.vala"
			_g_free0 (log_file_error_msg);
#line 47 "/home/jens/Source/shotwell/src/Debug.vala"
			log_file_error_msg = _tmp22_;
#line 40 "/home/jens/Source/shotwell/src/Debug.vala"
			_g_error_free0 (err);
#line 252 "Debug.c"
		}
		__finally434:
#line 40 "/home/jens/Source/shotwell/src/Debug.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 40 "/home/jens/Source/shotwell/src/Debug.vala"
			_g_object_unref0 (log_dir);
#line 40 "/home/jens/Source/shotwell/src/Debug.vala"
			_g_object_unref0 (log_file);
#line 40 "/home/jens/Source/shotwell/src/Debug.vala"
			_g_object_unref0 (_tmp4_);
#line 40 "/home/jens/Source/shotwell/src/Debug.vala"
			_g_free0 (log_file_error_msg);
#line 40 "/home/jens/Source/shotwell/src/Debug.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 40 "/home/jens/Source/shotwell/src/Debug.vala"
			g_clear_error (&_inner_error_);
#line 40 "/home/jens/Source/shotwell/src/Debug.vala"
			return;
#line 271 "Debug.c"
		}
#line 53 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp23_ = log_file;
#line 53 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp24_ = g_file_get_path (_tmp23_);
#line 53 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp25_ = _tmp24_;
#line 53 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp26_ = g_fopen (_tmp25_, "w");
#line 53 "/home/jens/Source/shotwell/src/Debug.vala"
		_fclose0 (debug_log_file_stream);
#line 53 "/home/jens/Source/shotwell/src/Debug.vala"
		debug_log_file_stream = _tmp26_;
#line 53 "/home/jens/Source/shotwell/src/Debug.vala"
		_g_free0 (_tmp25_);
#line 54 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp27_ = debug_log_file_stream;
#line 54 "/home/jens/Source/shotwell/src/Debug.vala"
		if (_tmp27_ != NULL) {
#line 291 "Debug.c"
			FILE* _tmp28_ = NULL;
			FILE* _tmp29_ = NULL;
#line 55 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp28_ = debug_log_file_stream;
#line 55 "/home/jens/Source/shotwell/src/Debug.vala"
			debug_log_out = _tmp28_;
#line 56 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp29_ = debug_log_file_stream;
#line 56 "/home/jens/Source/shotwell/src/Debug.vala"
			debug_log_err = _tmp29_;
#line 302 "Debug.c"
		} else {
			GFile* _tmp30_ = NULL;
			gchar* _tmp31_ = NULL;
			gchar* _tmp32_ = NULL;
			gchar* _tmp33_ = NULL;
#line 58 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp30_ = log_file;
#line 58 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp31_ = g_file_get_path (_tmp30_);
#line 58 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp32_ = _tmp31_;
#line 58 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp33_ = g_strdup_printf ("Unable to open or create log file %s", _tmp32_);
#line 58 "/home/jens/Source/shotwell/src/Debug.vala"
			_g_free0 (log_file_error_msg);
#line 58 "/home/jens/Source/shotwell/src/Debug.vala"
			log_file_error_msg = _tmp33_;
#line 58 "/home/jens/Source/shotwell/src/Debug.vala"
			_g_free0 (_tmp32_);
#line 322 "Debug.c"
		}
#line 38 "/home/jens/Source/shotwell/src/Debug.vala"
		_g_object_unref0 (log_dir);
#line 326 "Debug.c"
	}
#line 62 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp34_ = g_getenv ("SHOTWELL_LOG");
#line 62 "/home/jens/Source/shotwell/src/Debug.vala"
	if (_tmp34_ != NULL) {
#line 63 "/home/jens/Source/shotwell/src/Debug.vala"
		debug_log_mask = G_LOG_LEVEL_MASK;
#line 334 "Debug.c"
	} else {
		GLogLevelFlags _tmp35_ = 0;
		const gchar* _tmp36_ = NULL;
		GLogLevelFlags _tmp39_ = 0;
		const gchar* _tmp40_ = NULL;
		GLogLevelFlags _tmp43_ = 0;
		const gchar* _tmp44_ = NULL;
		GLogLevelFlags _tmp47_ = 0;
		const gchar* _tmp48_ = NULL;
		GLogLevelFlags _tmp51_ = 0;
		const gchar* _tmp52_ = NULL;
#line 65 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp36_ = g_getenv ("SHOTWELL_INFO");
#line 65 "/home/jens/Source/shotwell/src/Debug.vala"
		if (_tmp36_ != NULL) {
#line 350 "Debug.c"
			GLogLevelFlags _tmp37_ = 0;
#line 66 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp37_ = debug_log_mask;
#line 66 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp35_ = _tmp37_ | G_LOG_LEVEL_INFO;
#line 356 "Debug.c"
		} else {
			GLogLevelFlags _tmp38_ = 0;
#line 67 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp38_ = debug_log_mask;
#line 67 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp35_ = _tmp38_;
#line 363 "Debug.c"
		}
#line 65 "/home/jens/Source/shotwell/src/Debug.vala"
		debug_log_mask = _tmp35_;
#line 68 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp40_ = g_getenv ("SHOTWELL_DEBUG");
#line 68 "/home/jens/Source/shotwell/src/Debug.vala"
		if (_tmp40_ != NULL) {
#line 371 "Debug.c"
			GLogLevelFlags _tmp41_ = 0;
#line 69 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp41_ = debug_log_mask;
#line 69 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp39_ = _tmp41_ | G_LOG_LEVEL_DEBUG;
#line 377 "Debug.c"
		} else {
			GLogLevelFlags _tmp42_ = 0;
#line 70 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp42_ = debug_log_mask;
#line 70 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp39_ = _tmp42_;
#line 384 "Debug.c"
		}
#line 68 "/home/jens/Source/shotwell/src/Debug.vala"
		debug_log_mask = _tmp39_;
#line 71 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp44_ = g_getenv ("SHOTWELL_MESSAGE");
#line 71 "/home/jens/Source/shotwell/src/Debug.vala"
		if (_tmp44_ != NULL) {
#line 392 "Debug.c"
			GLogLevelFlags _tmp45_ = 0;
#line 72 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp45_ = debug_log_mask;
#line 72 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp43_ = _tmp45_ | G_LOG_LEVEL_MESSAGE;
#line 398 "Debug.c"
		} else {
			GLogLevelFlags _tmp46_ = 0;
#line 73 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp46_ = debug_log_mask;
#line 73 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp43_ = _tmp46_;
#line 405 "Debug.c"
		}
#line 71 "/home/jens/Source/shotwell/src/Debug.vala"
		debug_log_mask = _tmp43_;
#line 74 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp48_ = g_getenv ("SHOTWELL_WARNING");
#line 74 "/home/jens/Source/shotwell/src/Debug.vala"
		if (_tmp48_ != NULL) {
#line 413 "Debug.c"
			GLogLevelFlags _tmp49_ = 0;
#line 75 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp49_ = debug_log_mask;
#line 75 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp47_ = _tmp49_ | G_LOG_LEVEL_WARNING;
#line 419 "Debug.c"
		} else {
			GLogLevelFlags _tmp50_ = 0;
#line 76 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp50_ = debug_log_mask;
#line 76 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp47_ = _tmp50_;
#line 426 "Debug.c"
		}
#line 74 "/home/jens/Source/shotwell/src/Debug.vala"
		debug_log_mask = _tmp47_;
#line 77 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp52_ = g_getenv ("SHOTWELL_CRITICAL");
#line 77 "/home/jens/Source/shotwell/src/Debug.vala"
		if (_tmp52_ != NULL) {
#line 434 "Debug.c"
			GLogLevelFlags _tmp53_ = 0;
#line 78 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp53_ = debug_log_mask;
#line 78 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp51_ = _tmp53_ | G_LOG_LEVEL_CRITICAL;
#line 440 "Debug.c"
		} else {
			GLogLevelFlags _tmp54_ = 0;
#line 79 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp54_ = debug_log_mask;
#line 79 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp51_ = _tmp54_;
#line 447 "Debug.c"
		}
#line 77 "/home/jens/Source/shotwell/src/Debug.vala"
		debug_log_mask = _tmp51_;
#line 451 "Debug.c"
	}
#line 82 "/home/jens/Source/shotwell/src/Debug.vala"
	g_log_set_handler (NULL, G_LOG_LEVEL_INFO, _debug_info_handler_glog_func, NULL);
#line 83 "/home/jens/Source/shotwell/src/Debug.vala"
	g_log_set_handler (NULL, G_LOG_LEVEL_DEBUG, _debug_debug_handler_glog_func, NULL);
#line 84 "/home/jens/Source/shotwell/src/Debug.vala"
	g_log_set_handler (NULL, G_LOG_LEVEL_MESSAGE, _debug_message_handler_glog_func, NULL);
#line 85 "/home/jens/Source/shotwell/src/Debug.vala"
	g_log_set_handler (NULL, G_LOG_LEVEL_WARNING, _debug_warning_handler_glog_func, NULL);
#line 86 "/home/jens/Source/shotwell/src/Debug.vala"
	g_log_set_handler (NULL, G_LOG_LEVEL_CRITICAL, _debug_critical_handler_glog_func, NULL);
#line 88 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp56_ = debug_log_mask;
#line 88 "/home/jens/Source/shotwell/src/Debug.vala"
	if (_tmp56_ == 0) {
#line 467 "Debug.c"
		GFile* _tmp57_ = NULL;
#line 88 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp57_ = log_file;
#line 88 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp55_ = _tmp57_ != NULL;
#line 473 "Debug.c"
	} else {
#line 88 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp55_ = FALSE;
#line 477 "Debug.c"
	}
#line 88 "/home/jens/Source/shotwell/src/Debug.vala"
	if (_tmp55_) {
#line 91 "/home/jens/Source/shotwell/src/Debug.vala"
		debug_log_mask = DEBUG_DEFAULT_LOG_MASK;
#line 483 "Debug.c"
	}
#line 94 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp58_ = log_file_error_msg;
#line 94 "/home/jens/Source/shotwell/src/Debug.vala"
	if (_tmp58_ != NULL) {
#line 489 "Debug.c"
		const gchar* _tmp59_ = NULL;
#line 95 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp59_ = log_file_error_msg;
#line 95 "/home/jens/Source/shotwell/src/Debug.vala"
		g_warning ("Debug.vala:95: %s", _tmp59_);
#line 495 "Debug.c"
	}
#line 27 "/home/jens/Source/shotwell/src/Debug.vala"
	_g_object_unref0 (log_file);
#line 27 "/home/jens/Source/shotwell/src/Debug.vala"
	_g_object_unref0 (_tmp4_);
#line 27 "/home/jens/Source/shotwell/src/Debug.vala"
	_g_free0 (log_file_error_msg);
#line 503 "Debug.c"
}


void debug_terminate (void) {
}


gboolean debug_is_enabled (GLogLevelFlags flag) {
	gboolean result = FALSE;
	GLogLevelFlags _tmp0_ = 0;
	GLogLevelFlags _tmp1_ = 0;
#line 103 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp0_ = debug_log_mask;
#line 103 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp1_ = flag;
#line 103 "/home/jens/Source/shotwell/src/Debug.vala"
	result = (_tmp0_ & _tmp1_) > 0;
#line 103 "/home/jens/Source/shotwell/src/Debug.vala"
	return result;
#line 523 "Debug.c"
}


static void g_time_local (time_t time, struct tm* result) {
	struct tm _result_ = {0};
	struct tm _tmp0_ = {0};
#line 2750 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	localtime_r (&time, &_tmp0_);
#line 2750 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_result_ = _tmp0_;
#line 2751 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	*result = _result_;
#line 2751 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	return;
#line 538 "Debug.c"
}


static gchar* g_time_to_string (struct tm *self) {
	gchar* result = NULL;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	gint _tmp4_ = 0;
	gint _tmp5_ = 0;
	gchar* _tmp6_ = NULL;
#line 2755 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp0_ = (*self).tm_year;
#line 2755 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp1_ = (*self).tm_mon;
#line 2755 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp2_ = (*self).tm_mday;
#line 2755 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp3_ = (*self).tm_hour;
#line 2755 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp4_ = (*self).tm_min;
#line 2755 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp5_ = (*self).tm_sec;
#line 2755 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp6_ = g_strdup_printf ("%04d-%02d-%02d %02d:%02d:%02d", _tmp0_ + 1900, _tmp1_ + 1, _tmp2_, _tmp3_, _tmp4_, _tmp5_);
#line 2755 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	result = _tmp6_;
#line 2755 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	return result;
#line 569 "Debug.c"
}


void debug_log (FILE* stream, const gchar* prefix, const gchar* message) {
	time_t now = 0;
	time_t _tmp0_ = 0;
	FILE* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	pid_t _tmp3_ = 0;
	struct tm _tmp4_ = {0};
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	const gchar* _tmp7_ = NULL;
	const gchar* _tmp8_ = NULL;
	FILE* _tmp9_ = NULL;
#line 106 "/home/jens/Source/shotwell/src/Debug.vala"
	g_return_if_fail (stream != NULL);
#line 106 "/home/jens/Source/shotwell/src/Debug.vala"
	g_return_if_fail (prefix != NULL);
#line 106 "/home/jens/Source/shotwell/src/Debug.vala"
	g_return_if_fail (message != NULL);
#line 107 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp0_ = time (NULL);
#line 107 "/home/jens/Source/shotwell/src/Debug.vala"
	now = _tmp0_;
#line 108 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp1_ = stream;
#line 108 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp2_ = debug_log_app_version_prefix;
#line 108 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp3_ = getpid ();
#line 108 "/home/jens/Source/shotwell/src/Debug.vala"
	g_time_local (now, &_tmp4_);
#line 108 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp5_ = g_time_to_string (&_tmp4_);
#line 108 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp6_ = _tmp5_;
#line 108 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp7_ = prefix;
#line 108 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp8_ = message;
#line 108 "/home/jens/Source/shotwell/src/Debug.vala"
	fprintf (_tmp1_, "%s %d %s [%s] %s\n", _tmp2_, (gint) _tmp3_, _tmp6_, _tmp7_, _tmp8_);
#line 108 "/home/jens/Source/shotwell/src/Debug.vala"
	_g_free0 (_tmp6_);
#line 115 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp9_ = stream;
#line 115 "/home/jens/Source/shotwell/src/Debug.vala"
	fflush (_tmp9_);
#line 619 "Debug.c"
}


void debug_info_handler (const gchar* domain, GLogLevelFlags flags, const gchar* message) {
	gboolean _tmp0_ = FALSE;
#line 118 "/home/jens/Source/shotwell/src/Debug.vala"
	g_return_if_fail (message != NULL);
#line 119 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp0_ = debug_is_enabled (G_LOG_LEVEL_INFO);
#line 119 "/home/jens/Source/shotwell/src/Debug.vala"
	if (_tmp0_) {
#line 631 "Debug.c"
		FILE* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
#line 120 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp1_ = debug_log_out;
#line 120 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp2_ = message;
#line 120 "/home/jens/Source/shotwell/src/Debug.vala"
		debug_log (_tmp1_, "INF", _tmp2_);
#line 640 "Debug.c"
	}
}


void debug_debug_handler (const gchar* domain, GLogLevelFlags flags, const gchar* message) {
	gboolean _tmp0_ = FALSE;
#line 123 "/home/jens/Source/shotwell/src/Debug.vala"
	g_return_if_fail (message != NULL);
#line 124 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp0_ = debug_is_enabled (G_LOG_LEVEL_DEBUG);
#line 124 "/home/jens/Source/shotwell/src/Debug.vala"
	if (_tmp0_) {
#line 653 "Debug.c"
		FILE* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
#line 125 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp1_ = debug_log_out;
#line 125 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp2_ = message;
#line 125 "/home/jens/Source/shotwell/src/Debug.vala"
		debug_log (_tmp1_, "DBG", _tmp2_);
#line 662 "Debug.c"
	}
}


void debug_message_handler (const gchar* domain, GLogLevelFlags flags, const gchar* message) {
	gboolean _tmp0_ = FALSE;
#line 128 "/home/jens/Source/shotwell/src/Debug.vala"
	g_return_if_fail (message != NULL);
#line 129 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp0_ = debug_is_enabled (G_LOG_LEVEL_MESSAGE);
#line 129 "/home/jens/Source/shotwell/src/Debug.vala"
	if (_tmp0_) {
#line 675 "Debug.c"
		FILE* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
#line 130 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp1_ = debug_log_err;
#line 130 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp2_ = message;
#line 130 "/home/jens/Source/shotwell/src/Debug.vala"
		debug_log (_tmp1_, "MSG", _tmp2_);
#line 684 "Debug.c"
	}
}


void debug_warning_handler (const gchar* domain, GLogLevelFlags flags, const gchar* message) {
	gboolean _tmp0_ = FALSE;
#line 133 "/home/jens/Source/shotwell/src/Debug.vala"
	g_return_if_fail (message != NULL);
#line 134 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp0_ = debug_is_enabled (G_LOG_LEVEL_WARNING);
#line 134 "/home/jens/Source/shotwell/src/Debug.vala"
	if (_tmp0_) {
#line 697 "Debug.c"
		FILE* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
#line 135 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp1_ = debug_log_err;
#line 135 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp2_ = message;
#line 135 "/home/jens/Source/shotwell/src/Debug.vala"
		debug_log (_tmp1_, "WRN", _tmp2_);
#line 706 "Debug.c"
	}
}


void debug_critical_handler (const gchar* domain, GLogLevelFlags flags, const gchar* message) {
	gboolean _tmp0_ = FALSE;
#line 138 "/home/jens/Source/shotwell/src/Debug.vala"
	g_return_if_fail (message != NULL);
#line 139 "/home/jens/Source/shotwell/src/Debug.vala"
	_tmp0_ = debug_is_enabled (G_LOG_LEVEL_CRITICAL);
#line 139 "/home/jens/Source/shotwell/src/Debug.vala"
	if (_tmp0_) {
#line 719 "Debug.c"
		FILE* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
		FILE* _tmp3_ = NULL;
#line 140 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp1_ = debug_log_err;
#line 140 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp2_ = message;
#line 140 "/home/jens/Source/shotwell/src/Debug.vala"
		debug_log (_tmp1_, "CRT", _tmp2_);
#line 141 "/home/jens/Source/shotwell/src/Debug.vala"
		_tmp3_ = debug_log_file_stream;
#line 141 "/home/jens/Source/shotwell/src/Debug.vala"
		if (_tmp3_ != NULL) {
#line 733 "Debug.c"
			FILE* _tmp4_ = NULL;
			const gchar* _tmp5_ = NULL;
#line 142 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp4_ = stderr;
#line 142 "/home/jens/Source/shotwell/src/Debug.vala"
			_tmp5_ = message;
#line 142 "/home/jens/Source/shotwell/src/Debug.vala"
			debug_log (_tmp4_, "CRT", _tmp5_);
#line 742 "Debug.c"
		}
	}
}



