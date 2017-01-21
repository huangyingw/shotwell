/* DataImports.c generated by valac 0.34.4, the Vala compiler
 * generated from DataImports.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */
/* This file is the master unit file for the DataImports unit.  It should be edited to include
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
#include "shotwell-plugin-dev-1.0.h"
#include <glib/gi18n-lib.h>




void data_imports_init (GError** error);
static void _vala_array_add68 (gchar*** array, int* length, int* size, gchar* value);
void plugins_register_extension_point (GType type, const gchar* name, const gchar* icon_name, gchar** core_ids, int core_ids_length1);
#define RESOURCES_IMPORT "import"
void data_imports_terminate (void);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static void _vala_array_add68 (gchar*** array, int* length, int* size, gchar* value) {
#line 20 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	if ((*length) == (*size)) {
#line 20 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 20 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
		*array = g_renew (gchar*, *array, (*size) + 1);
#line 45 "DataImports.c"
	}
#line 20 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	(*array)[(*length)++] = value;
#line 20 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	(*array)[*length] = NULL;
#line 51 "DataImports.c"
}


void data_imports_init (GError** error) {
	gchar** core_ids = NULL;
	gchar** _tmp0_ = NULL;
	gint core_ids_length1 = 0;
	gint _core_ids_size_ = 0;
	gchar** _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
	gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gchar** _tmp4_ = NULL;
	gint _tmp4__length1 = 0;
#line 19 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	_tmp0_ = g_new0 (gchar*, 0 + 1);
#line 19 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	core_ids = _tmp0_;
#line 19 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	core_ids_length1 = 0;
#line 19 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	_core_ids_size_ = core_ids_length1;
#line 20 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	_tmp1_ = core_ids;
#line 20 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	_tmp1__length1 = core_ids_length1;
#line 20 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	_tmp2_ = g_strdup ("org.yorba.shotwell.dataimports.fspot");
#line 20 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	_vala_array_add68 (&core_ids, &core_ids_length1, &_core_ids_size_, _tmp2_);
#line 22 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	_tmp3_ = _ ("Data Imports");
#line 22 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	_tmp4_ = core_ids;
#line 22 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	_tmp4__length1 = core_ids_length1;
#line 22 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	plugins_register_extension_point (SPIT_DATA_IMPORTS_TYPE_SERVICE, _tmp3_, RESOURCES_IMPORT, _tmp4_, _tmp4__length1);
#line 18 "/home/jens/Source/shotwell/src/data_imports/DataImports.vala"
	core_ids = (_vala_array_free (core_ids, core_ids_length1, (GDestroyNotify) g_free), NULL);
#line 92 "DataImports.c"
}


void data_imports_terminate (void) {
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



