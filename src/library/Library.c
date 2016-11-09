/* Library.c generated by valac 0.34.2, the Vala compiler
 * generated from Library.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */

#include <glib.h>
#include <glib-object.h>




void library_init (GError** error);
void library_trash_sidebar_entry_init (void);
gboolean photo_get_develop_raw_photos_to_files (void);
void photo_set_develop_raw_photos_to_files (gboolean value);
void library_terminate (void);
void library_trash_sidebar_entry_terminate (void);


void library_init (GError** error) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
#line 10 "/home/jens/Source/shotwell/src/library/Library.vala"
	library_trash_sidebar_entry_init ();
#line 11 "/home/jens/Source/shotwell/src/library/Library.vala"
	_tmp0_ = photo_get_develop_raw_photos_to_files ();
#line 11 "/home/jens/Source/shotwell/src/library/Library.vala"
	_tmp1_ = _tmp0_;
#line 11 "/home/jens/Source/shotwell/src/library/Library.vala"
	photo_set_develop_raw_photos_to_files (TRUE);
#line 36 "Library.c"
}


void library_terminate (void) {
#line 15 "/home/jens/Source/shotwell/src/library/Library.vala"
	library_trash_sidebar_entry_terminate ();
#line 43 "Library.c"
}



