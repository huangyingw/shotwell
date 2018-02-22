/* _ThreadsInternals.c generated by valac 0.36.6, the Vala compiler
 * generated from _ThreadsInternals.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 *
 * Auto-generated file.  Do not modify!
 */

#include <glib.h>
#include <glib-object.h>



extern gint threads__unit_init_count;
gint threads__unit_init_count = 0;

void threads_init_entry (GError** error);
void unit_init_entry (GError** error);
void threads_init (GError** error);
void threads_terminate_entry (void);
void threads_terminate (void);
void unit_terminate_entry (void);


void threads_init_entry (GError** error) {
	gint _tmp0_;
	GError * _inner_error_ = NULL;
#line 14 "/shotwell/src/.unitize/_ThreadsInternals.vala"
	_tmp0_ = threads__unit_init_count;
#line 14 "/shotwell/src/.unitize/_ThreadsInternals.vala"
	threads__unit_init_count = _tmp0_ + 1;
#line 14 "/shotwell/src/.unitize/_ThreadsInternals.vala"
	if (_tmp0_ != 0) {
#line 15 "/shotwell/src/.unitize/_ThreadsInternals.vala"
		return;
#line 40 "_ThreadsInternals.c"
	}
#line 17 "/shotwell/src/.unitize/_ThreadsInternals.vala"
	unit_init_entry (&_inner_error_);
#line 17 "/shotwell/src/.unitize/_ThreadsInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/shotwell/src/.unitize/_ThreadsInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/shotwell/src/.unitize/_ThreadsInternals.vala"
		return;
#line 50 "_ThreadsInternals.c"
	}
#line 19 "/shotwell/src/.unitize/_ThreadsInternals.vala"
	threads_init (&_inner_error_);
#line 19 "/shotwell/src/.unitize/_ThreadsInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 19 "/shotwell/src/.unitize/_ThreadsInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 19 "/shotwell/src/.unitize/_ThreadsInternals.vala"
		return;
#line 60 "_ThreadsInternals.c"
	}
}


void threads_terminate_entry (void) {
	gboolean _tmp0_ = FALSE;
	gint _tmp1_;
#line 23 "/shotwell/src/.unitize/_ThreadsInternals.vala"
	_tmp1_ = threads__unit_init_count;
#line 23 "/shotwell/src/.unitize/_ThreadsInternals.vala"
	if (_tmp1_ == 0) {
#line 23 "/shotwell/src/.unitize/_ThreadsInternals.vala"
		_tmp0_ = TRUE;
#line 74 "_ThreadsInternals.c"
	} else {
		gint _tmp2_;
		gint _tmp3_;
#line 23 "/shotwell/src/.unitize/_ThreadsInternals.vala"
		_tmp2_ = threads__unit_init_count;
#line 23 "/shotwell/src/.unitize/_ThreadsInternals.vala"
		threads__unit_init_count = _tmp2_ - 1;
#line 23 "/shotwell/src/.unitize/_ThreadsInternals.vala"
		_tmp3_ = threads__unit_init_count;
#line 23 "/shotwell/src/.unitize/_ThreadsInternals.vala"
		_tmp0_ = _tmp3_ != 0;
#line 86 "_ThreadsInternals.c"
	}
#line 23 "/shotwell/src/.unitize/_ThreadsInternals.vala"
	if (_tmp0_) {
#line 24 "/shotwell/src/.unitize/_ThreadsInternals.vala"
		return;
#line 92 "_ThreadsInternals.c"
	}
#line 26 "/shotwell/src/.unitize/_ThreadsInternals.vala"
	threads_terminate ();
#line 28 "/shotwell/src/.unitize/_ThreadsInternals.vala"
	unit_terminate_entry ();
#line 98 "_ThreadsInternals.c"
}



