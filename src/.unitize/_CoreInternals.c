/* _CoreInternals.c generated by valac 0.36.6, the Vala compiler
 * generated from _CoreInternals.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 *
 * Auto-generated file.  Do not modify!
 */

#include <glib.h>
#include <glib-object.h>



extern gint core__unit_init_count;
gint core__unit_init_count = 0;

void core_init_entry (GError** error);
void unit_init_entry (GError** error);
void core_init (GError** error);
void core_terminate_entry (void);
void core_terminate (void);
void unit_terminate_entry (void);


void core_init_entry (GError** error) {
	gint _tmp0_;
	GError * _inner_error_ = NULL;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
	_tmp0_ = core__unit_init_count;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
	core__unit_init_count = _tmp0_ + 1;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
	if (_tmp0_ != 0) {
#line 15 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
		return;
#line 40 "_CoreInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
	unit_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
		return;
#line 50 "_CoreInternals.c"
	}
#line 19 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
	core_init (&_inner_error_);
#line 19 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 19 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 19 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
		return;
#line 60 "_CoreInternals.c"
	}
}


void core_terminate_entry (void) {
	gboolean _tmp0_ = FALSE;
	gint _tmp1_;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
	_tmp1_ = core__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
	if (_tmp1_ == 0) {
#line 23 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
		_tmp0_ = TRUE;
#line 74 "_CoreInternals.c"
	} else {
		gint _tmp2_;
		gint _tmp3_;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
		_tmp2_ = core__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
		core__unit_init_count = _tmp2_ - 1;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
		_tmp3_ = core__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
		_tmp0_ = _tmp3_ != 0;
#line 86 "_CoreInternals.c"
	}
#line 23 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
	if (_tmp0_) {
#line 24 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
		return;
#line 92 "_CoreInternals.c"
	}
#line 26 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
	core_terminate ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_CoreInternals.vala"
	unit_terminate_entry ();
#line 98 "_CoreInternals.c"
}



