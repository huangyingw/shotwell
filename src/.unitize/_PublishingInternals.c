/* _PublishingInternals.c generated by valac 0.32.1, the Vala compiler
 * generated from _PublishingInternals.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 *
 * Auto-generated file.  Do not modify!
 */

#include <glib.h>
#include <glib-object.h>



extern gint publishing__unit_init_count;
gint publishing__unit_init_count = 0;

void publishing_init_entry (GError** error);
void unit_init_entry (GError** error);
void plugins_init_entry (GError** error);
void publishing_init (GError** error);
void publishing_terminate_entry (void);
void publishing_terminate (void);
void unit_terminate_entry (void);
void plugins_terminate_entry (void);


void publishing_init_entry (GError** error) {
	gint _tmp0_ = 0;
	GError * _inner_error_ = NULL;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	_tmp0_ = publishing__unit_init_count;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	publishing__unit_init_count = _tmp0_ + 1;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	if (_tmp0_ != 0) {
#line 15 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
		return;
#line 42 "_PublishingInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	unit_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
		return;
#line 52 "_PublishingInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	plugins_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
		return;
#line 62 "_PublishingInternals.c"
	}
#line 19 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	publishing_init (&_inner_error_);
#line 19 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 19 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 19 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
		return;
#line 72 "_PublishingInternals.c"
	}
}


void publishing_terminate_entry (void) {
	gboolean _tmp0_ = FALSE;
	gint _tmp1_ = 0;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	_tmp1_ = publishing__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	if (_tmp1_ == 0) {
#line 23 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
		_tmp0_ = TRUE;
#line 86 "_PublishingInternals.c"
	} else {
		gint _tmp2_ = 0;
		gint _tmp3_ = 0;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
		_tmp2_ = publishing__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
		publishing__unit_init_count = _tmp2_ - 1;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
		_tmp3_ = publishing__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
		_tmp0_ = _tmp3_ != 0;
#line 98 "_PublishingInternals.c"
	}
#line 23 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	if (_tmp0_) {
#line 24 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
		return;
#line 104 "_PublishingInternals.c"
	}
#line 26 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	publishing_terminate ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	unit_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_PublishingInternals.vala"
	plugins_terminate_entry ();
#line 112 "_PublishingInternals.c"
}



