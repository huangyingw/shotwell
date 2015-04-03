/* Copyright 2011-2015 Yorba Foundation
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

namespace Searches {

// preconfigure may be deleted if not used.
public void preconfigure() {
}

public void init() throws Error {
    Searches.SidebarEntry.init();
}

public void terminate() {
    Searches.SidebarEntry.terminate();
}

}

