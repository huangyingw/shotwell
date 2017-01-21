/* Direct.c generated by valac 0.34.4, the Vala compiler
 * generated from Direct.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */
/* This file is the master unit file for the Direct unit.  It should be edited to include
 * whatever code is deemed necessary.
 *
 * The init() and terminate() methods are mandatory.
 *
 * If the unit needs to be configured prior to initialization, add the proper parameters to
 * the preconfigure() method, implement it, and ensure in init() that it's been called.
 */

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);


extern GFile* direct_initial_file;
GFile* direct_initial_file = NULL;

void direct_preconfigure (GFile* initial_file);
void direct_init (GError** error);
void direct_photo_init (GFile* initial_file);
void direct_terminate (void);
void direct_photo_terminate (void);


static gpointer _g_object_ref0 (gpointer self) {
#line 21 "/home/jens/Source/shotwell/src/direct/Direct.vala"
	return self ? g_object_ref (self) : NULL;
#line 43 "Direct.c"
}


void direct_preconfigure (GFile* initial_file) {
	GFile* _tmp0_ = NULL;
	GFile* _tmp1_ = NULL;
#line 20 "/home/jens/Source/shotwell/src/direct/Direct.vala"
	g_return_if_fail (G_IS_FILE (initial_file));
#line 21 "/home/jens/Source/shotwell/src/direct/Direct.vala"
	_tmp0_ = initial_file;
#line 21 "/home/jens/Source/shotwell/src/direct/Direct.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 21 "/home/jens/Source/shotwell/src/direct/Direct.vala"
	_g_object_unref0 (direct_initial_file);
#line 21 "/home/jens/Source/shotwell/src/direct/Direct.vala"
	direct_initial_file = _tmp1_;
#line 60 "Direct.c"
}


void direct_init (GError** error) {
	GFile* _tmp0_ = NULL;
	GFile* _tmp1_ = NULL;
#line 25 "/home/jens/Source/shotwell/src/direct/Direct.vala"
	_tmp0_ = direct_initial_file;
#line 25 "/home/jens/Source/shotwell/src/direct/Direct.vala"
	_vala_assert (_tmp0_ != NULL, "initial_file != null");
#line 27 "/home/jens/Source/shotwell/src/direct/Direct.vala"
	_tmp1_ = direct_initial_file;
#line 27 "/home/jens/Source/shotwell/src/direct/Direct.vala"
	direct_photo_init (_tmp1_);
#line 75 "Direct.c"
}


void direct_terminate (void) {
#line 31 "/home/jens/Source/shotwell/src/direct/Direct.vala"
	direct_photo_terminate ();
#line 82 "Direct.c"
}



