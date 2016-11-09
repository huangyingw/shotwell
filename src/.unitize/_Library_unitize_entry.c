/* _Library_unitize_entry.c generated by valac 0.34.2, the Vala compiler
 * generated from _Library_unitize_entry.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 *
 * Auto-generated file.  Do not modify!
 */

#include <glib.h>
#include <glib-object.h>




void library_app_init (GError** error);
void library_init_entry (GError** error);
void library_app_terminate (void);
void library_terminate_entry (void);


void library_app_init (GError** error) {
	GError * _inner_error_ = NULL;
#line 12 "/home/jens/Source/shotwell/src/.unitize/_Library_unitize_entry.vala"
	library_init_entry (&_inner_error_);
#line 12 "/home/jens/Source/shotwell/src/.unitize/_Library_unitize_entry.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 12 "/home/jens/Source/shotwell/src/.unitize/_Library_unitize_entry.vala"
		g_propagate_error (error, _inner_error_);
#line 12 "/home/jens/Source/shotwell/src/.unitize/_Library_unitize_entry.vala"
		return;
#line 35 "_Library_unitize_entry.c"
	}
}


void library_app_terminate (void) {
#line 16 "/home/jens/Source/shotwell/src/.unitize/_Library_unitize_entry.vala"
	library_terminate_entry ();
#line 43 "_Library_unitize_entry.c"
}



