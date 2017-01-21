/* system.c generated by valac 0.34.4, the Vala compiler
 * generated from system.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU LGPL (version 2.1 or later).
 * See the COPYING file in this distribution.
 */
/* Return the directory in which Shotwell is installed, or null if uninstalled.*/

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <glib/gstdio.h>
#include <stdlib.h>
#include <string.h>
#include <gdk/gdk.h>
#include <gtk/gtk.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))



GFile* get_sys_install_dir (GFile* exec_dir);
#define RESOURCES_PREFIX _PREFIX
gchar* get_nautilus_install_location (void);
void sys_show_uri (GdkScreen* screen, const gchar* uri, GError** error);
void show_file_in_nautilus (const gchar* filename, GError** error);


GFile* get_sys_install_dir (GFile* exec_dir) {
	GFile* result = NULL;
	GFile* child = NULL;
	GFile* _tmp0_ = NULL;
	GFile* _tmp1_ = NULL;
	GFile* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gboolean _tmp5_ = FALSE;
	gboolean _tmp6_ = FALSE;
#line 8 "/home/jens/Source/shotwell/src/util/system.vala"
	g_return_val_if_fail (G_IS_FILE (exec_dir), NULL);
#line 10 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp0_ = exec_dir;
#line 10 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp1_ = g_file_get_child (_tmp0_, "ui");
#line 10 "/home/jens/Source/shotwell/src/util/system.vala"
	child = _tmp1_;
#line 12 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp2_ = child;
#line 12 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp3_ = g_file_get_path (_tmp2_);
#line 12 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp4_ = _tmp3_;
#line 12 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp5_ = g_file_test (_tmp4_, G_FILE_TEST_IS_DIR | G_FILE_TEST_EXISTS);
#line 12 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp6_ = !_tmp5_;
#line 12 "/home/jens/Source/shotwell/src/util/system.vala"
	_g_free0 (_tmp4_);
#line 12 "/home/jens/Source/shotwell/src/util/system.vala"
	if (_tmp6_) {
#line 65 "system.c"
		GFile* _tmp7_ = NULL;
#line 13 "/home/jens/Source/shotwell/src/util/system.vala"
		_tmp7_ = g_file_new_for_path (RESOURCES_PREFIX);
#line 13 "/home/jens/Source/shotwell/src/util/system.vala"
		result = _tmp7_;
#line 13 "/home/jens/Source/shotwell/src/util/system.vala"
		_g_object_unref0 (child);
#line 13 "/home/jens/Source/shotwell/src/util/system.vala"
		return result;
#line 75 "system.c"
	}
#line 16 "/home/jens/Source/shotwell/src/util/system.vala"
	result = NULL;
#line 16 "/home/jens/Source/shotwell/src/util/system.vala"
	_g_object_unref0 (child);
#line 16 "/home/jens/Source/shotwell/src/util/system.vala"
	return result;
#line 83 "system.c"
}


gchar* get_nautilus_install_location (void) {
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
#line 20 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp0_ = g_find_program_in_path ("nautilus");
#line 20 "/home/jens/Source/shotwell/src/util/system.vala"
	result = _tmp0_;
#line 20 "/home/jens/Source/shotwell/src/util/system.vala"
	return result;
#line 96 "system.c"
}


void sys_show_uri (GdkScreen* screen, const gchar* uri, GError** error) {
	GdkScreen* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GError * _inner_error_ = NULL;
#line 23 "/home/jens/Source/shotwell/src/util/system.vala"
	g_return_if_fail (GDK_IS_SCREEN (screen));
#line 23 "/home/jens/Source/shotwell/src/util/system.vala"
	g_return_if_fail (uri != NULL);
#line 24 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp0_ = screen;
#line 24 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp1_ = uri;
#line 24 "/home/jens/Source/shotwell/src/util/system.vala"
	gtk_show_uri (_tmp0_, _tmp1_, (guint32) GDK_CURRENT_TIME, &_inner_error_);
#line 24 "/home/jens/Source/shotwell/src/util/system.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 24 "/home/jens/Source/shotwell/src/util/system.vala"
		g_propagate_error (error, _inner_error_);
#line 24 "/home/jens/Source/shotwell/src/util/system.vala"
		return;
#line 120 "system.c"
	}
}


void show_file_in_nautilus (const gchar* filename, GError** error) {
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	GError * _inner_error_ = NULL;
#line 27 "/home/jens/Source/shotwell/src/util/system.vala"
	g_return_if_fail (filename != NULL);
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp0_ = get_nautilus_install_location ();
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp1_ = _tmp0_;
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp2_ = g_strconcat (_tmp1_, " ", NULL);
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp3_ = _tmp2_;
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp4_ = filename;
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp5_ = g_strconcat (_tmp3_, _tmp4_, NULL);
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
	_tmp6_ = _tmp5_;
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
	g_spawn_command_line_async (_tmp6_, &_inner_error_);
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
	_g_free0 (_tmp6_);
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
	_g_free0 (_tmp3_);
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
	_g_free0 (_tmp1_);
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
		g_propagate_error (error, _inner_error_);
#line 28 "/home/jens/Source/shotwell/src/util/system.vala"
		return;
#line 164 "system.c"
	}
}



