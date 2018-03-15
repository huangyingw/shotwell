/* _UnitInternals.c generated by valac 0.34.7, the Vala compiler
 * generated from _UnitInternals.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 *
 * Auto-generated file.  Do not modify!
 */

#include <glib.h>
#include <glib-object.h>



extern gint unit__unit_init_count;
gint unit__unit_init_count = 0;

void unit_init_entry (GError** error);
void unit_init (GError** error);
void unit_terminate_entry (void);
void unit_terminate (void);


void unit_init_entry (GError** error) {
	gint _tmp0_ = 0;
	GError * _inner_error_ = NULL;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
	_tmp0_ = unit__unit_init_count;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
	unit__unit_init_count = _tmp0_ + 1;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
	if (_tmp0_ != 0) {
#line 15 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
		return;
#line 38 "_UnitInternals.c"
	}
#line 19 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
	unit_init (&_inner_error_);
#line 19 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 19 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 19 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
		return;
#line 48 "_UnitInternals.c"
	}
}


void unit_terminate_entry (void) {
	gboolean _tmp0_ = FALSE;
	gint _tmp1_ = 0;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
	_tmp1_ = unit__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
	if (_tmp1_ == 0) {
#line 23 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
		_tmp0_ = TRUE;
#line 62 "_UnitInternals.c"
	} else {
		gint _tmp2_ = 0;
		gint _tmp3_ = 0;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
		_tmp2_ = unit__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
		unit__unit_init_count = _tmp2_ - 1;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
		_tmp3_ = unit__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
		_tmp0_ = _tmp3_ != 0;
#line 74 "_UnitInternals.c"
	}
#line 23 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
	if (_tmp0_) {
#line 24 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
		return;
#line 80 "_UnitInternals.c"
	}
#line 26 "/home/jens/Source/shotwell/src/.unitize/_UnitInternals.vala"
	unit_terminate ();
#line 84 "_UnitInternals.c"
}



