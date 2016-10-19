/* Events.c generated by valac 0.34.1, the Vala compiler
 * generated from Events.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */

#include <glib.h>
#include <glib-object.h>




void events_init (GError** error);
void events_branch_init (void);
void events_terminate (void);
void events_branch_terminate (void);


void events_init (GError** error) {
#line 10 "/home/jens/Source/shotwell/src/events/Events.vala"
	events_branch_init ();
#line 26 "Events.c"
}


void events_terminate (void) {
#line 14 "/home/jens/Source/shotwell/src/events/Events.vala"
	events_branch_terminate ();
#line 33 "Events.c"
}



