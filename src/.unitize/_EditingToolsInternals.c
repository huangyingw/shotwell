/* _EditingToolsInternals.c generated by valac 0.34.7, the Vala compiler
 * generated from _EditingToolsInternals.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 *
 * Auto-generated file.  Do not modify!
 */

#include <glib.h>
#include <glib-object.h>



extern gint editing_tools__unit_init_count;
gint editing_tools__unit_init_count = 0;

void editing_tools_init_entry (GError** error);
void unit_init_entry (GError** error);
void editing_tools_init (GError** error);
void editing_tools_terminate_entry (void);
void editing_tools_terminate (void);
void unit_terminate_entry (void);


void editing_tools_init_entry (GError** error) {
	gint _tmp0_ = 0;
	GError * _inner_error_ = NULL;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
	_tmp0_ = editing_tools__unit_init_count;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
	editing_tools__unit_init_count = _tmp0_ + 1;
#line 14 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
	if (_tmp0_ != 0) {
#line 15 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
		return;
#line 40 "_EditingToolsInternals.c"
	}
#line 17 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
	unit_init_entry (&_inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 17 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 17 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
		return;
#line 50 "_EditingToolsInternals.c"
	}
#line 19 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
	editing_tools_init (&_inner_error_);
#line 19 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 19 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
		g_propagate_error (error, _inner_error_);
#line 19 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
		return;
#line 60 "_EditingToolsInternals.c"
	}
}


void editing_tools_terminate_entry (void) {
	gboolean _tmp0_ = FALSE;
	gint _tmp1_ = 0;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
	_tmp1_ = editing_tools__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
	if (_tmp1_ == 0) {
#line 23 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
		_tmp0_ = TRUE;
#line 74 "_EditingToolsInternals.c"
	} else {
		gint _tmp2_ = 0;
		gint _tmp3_ = 0;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
		_tmp2_ = editing_tools__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
		editing_tools__unit_init_count = _tmp2_ - 1;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
		_tmp3_ = editing_tools__unit_init_count;
#line 23 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
		_tmp0_ = _tmp3_ != 0;
#line 86 "_EditingToolsInternals.c"
	}
#line 23 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
	if (_tmp0_) {
#line 24 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
		return;
#line 92 "_EditingToolsInternals.c"
	}
#line 26 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
	editing_tools_terminate ();
#line 28 "/home/jens/Source/shotwell/src/.unitize/_EditingToolsInternals.vala"
	unit_terminate_entry ();
#line 98 "_EditingToolsInternals.c"
}



