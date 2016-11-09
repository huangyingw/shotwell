/* Searches.c generated by valac 0.34.2, the Vala compiler
 * generated from Searches.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */
/* This file is the master unit file for the Searches unit.  It should be edited to include
 * whatever code is deemed necessary.
 *
 * The init() and terminate() methods are mandatory.
 *
 * If the unit needs to be configured prior to initialization, add the proper parameters to
 * the preconfigure() method, implement it, and ensure in init() that it's been called.
 */

#include <glib.h>
#include <glib-object.h>




void searches_preconfigure (void);
void searches_init (GError** error);
void searches_sidebar_entry_init (void);
void searches_terminate (void);
void searches_sidebar_entry_terminate (void);


void searches_preconfigure (void) {
}


void searches_init (GError** error) {
#line 23 "/home/jens/Source/shotwell/src/searches/Searches.vala"
	searches_sidebar_entry_init ();
#line 39 "Searches.c"
}


void searches_terminate (void) {
#line 27 "/home/jens/Source/shotwell/src/searches/Searches.vala"
	searches_sidebar_entry_terminate ();
#line 46 "Searches.c"
}



