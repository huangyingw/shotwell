/* Folders.c generated by valac 0.34.2, the Vala compiler
 * generated from Folders.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */
/* This file is the master unit file for the Folders unit.  It should be edited to include
 * whatever code is deemed necessary.
 *
 * The init() and terminate() methods are mandatory.
 *
 * If the unit needs to be configured prior to initialization, add the proper parameters to
 * the preconfigure() method, implement it, and ensure in init() that it's been called.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>

#define _g_free0(var) (var = (g_free (var), NULL))


extern gchar* folders_icon;
gchar* folders_icon = NULL;
extern gchar* folders_have_photos_icon;
gchar* folders_have_photos_icon = NULL;

void folders_init (GError** error);
#define RESOURCES_ICON_FOLDER "folder"
#define RESOURCES_ICON_FOLDER_DOCUMENTS "folder-documents"
void folders_terminate (void);


void folders_init (GError** error) {
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 22 "/home/jens/Source/shotwell/src/folders/Folders.vala"
	_tmp0_ = g_strdup (RESOURCES_ICON_FOLDER);
#line 22 "/home/jens/Source/shotwell/src/folders/Folders.vala"
	_g_free0 (folders_icon);
#line 22 "/home/jens/Source/shotwell/src/folders/Folders.vala"
	folders_icon = _tmp0_;
#line 23 "/home/jens/Source/shotwell/src/folders/Folders.vala"
	_tmp1_ = g_strdup (RESOURCES_ICON_FOLDER_DOCUMENTS);
#line 23 "/home/jens/Source/shotwell/src/folders/Folders.vala"
	_g_free0 (folders_have_photos_icon);
#line 23 "/home/jens/Source/shotwell/src/folders/Folders.vala"
	folders_have_photos_icon = _tmp1_;
#line 53 "Folders.c"
}


void folders_terminate (void) {
#line 27 "/home/jens/Source/shotwell/src/folders/Folders.vala"
	_g_free0 (folders_icon);
#line 27 "/home/jens/Source/shotwell/src/folders/Folders.vala"
	folders_icon = NULL;
#line 28 "/home/jens/Source/shotwell/src/folders/Folders.vala"
	_g_free0 (folders_have_photos_icon);
#line 28 "/home/jens/Source/shotwell/src/folders/Folders.vala"
	folders_have_photos_icon = NULL;
#line 66 "Folders.c"
}



