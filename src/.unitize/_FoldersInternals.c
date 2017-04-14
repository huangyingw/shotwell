/* _FoldersInternals.c generated by valac 0.34.7, the Vala compiler
 * generated from _FoldersInternals.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 *
 * Auto-generated file.  Do not modify!
 */

#include <glib.h>
#include <glib-object.h>



extern gint folders__unit_init_count;
gint folders__unit_init_count = 0;

void folders_init_entry (GError** error);
void unit_init_entry (GError** error);
void sidebar_init_entry (GError** error);
void photos_init_entry (GError** error);
void folders_init (GError** error);
void folders_terminate_entry (void);
void folders_terminate (void);
void unit_terminate_entry (void);
void sidebar_terminate_entry (void);
void photos_terminate_entry (void);


void folders_init_entry (GError** error) {
	gint _tmp0_ = 0;
	GError * _inner_error_ = NULL;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	_tmp0_ = folders__unit_init_count;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	folders__unit_init_count = _tmp0_ + 1;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	if (_tmp0_ != 0) {
#line 15 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		return;
#line 44 "_FoldersInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	unit_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		return;
#line 54 "_FoldersInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	sidebar_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		return;
#line 64 "_FoldersInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	photos_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		return;
#line 74 "_FoldersInternals.c"
	}
#line 19 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	folders_init (&_inner_error_);
#line 19 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 19 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 19 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		return;
#line 84 "_FoldersInternals.c"
	}
}


void folders_terminate_entry (void) {
	gboolean _tmp0_ = FALSE;
	gint _tmp1_ = 0;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	_tmp1_ = folders__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	if (_tmp1_ == 0) {
#line 23 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		_tmp0_ = TRUE;
#line 98 "_FoldersInternals.c"
	} else {
		gint _tmp2_ = 0;
		gint _tmp3_ = 0;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		_tmp2_ = folders__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		folders__unit_init_count = _tmp2_ - 1;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		_tmp3_ = folders__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		_tmp0_ = _tmp3_ != 0;
#line 110 "_FoldersInternals.c"
	}
#line 23 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	if (_tmp0_) {
#line 24 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
		return;
#line 116 "_FoldersInternals.c"
	}
#line 26 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	folders_terminate ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	unit_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	sidebar_terminate_entry ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_FoldersInternals.vala"
	photos_terminate_entry ();
#line 126 "_FoldersInternals.c"
}



