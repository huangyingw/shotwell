/* Slideshow.c generated by valac 0.34.4, the Vala compiler
 * generated from Slideshow.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include "shotwell-plugin-dev-1.0.h"
#include <glib/gi18n-lib.h>




void slideshow_init (GError** error);
static void _vala_array_add33 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add34 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add35 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add36 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add37 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add38 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add39 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add40 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add41 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add42 (gchar*** array, int* length, int* size, gchar* value);
void plugins_register_extension_point (GType type, const gchar* name, const gchar* icon_name, gchar** core_ids, int core_ids_length1);
#define RESOURCES_ICON_SLIDESHOW_EXTENSION_POINT "slideshow-extension-point"
void transition_effects_manager_init (void);
void slideshow_terminate (void);
void transition_effects_manager_terminate (void);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static void _vala_array_add33 (gchar*** array, int* length, int* size, gchar* value) {
#line 11 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	if ((*length) == (*size)) {
#line 11 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 11 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*array = g_renew (gchar*, *array, (*size) + 1);
#line 48 "Slideshow.c"
	}
#line 11 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[(*length)++] = value;
#line 11 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[*length] = NULL;
#line 54 "Slideshow.c"
}


static void _vala_array_add34 (gchar*** array, int* length, int* size, gchar* value) {
#line 12 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	if ((*length) == (*size)) {
#line 12 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 12 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*array = g_renew (gchar*, *array, (*size) + 1);
#line 65 "Slideshow.c"
	}
#line 12 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[(*length)++] = value;
#line 12 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[*length] = NULL;
#line 71 "Slideshow.c"
}


static void _vala_array_add35 (gchar*** array, int* length, int* size, gchar* value) {
#line 13 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	if ((*length) == (*size)) {
#line 13 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 13 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*array = g_renew (gchar*, *array, (*size) + 1);
#line 82 "Slideshow.c"
	}
#line 13 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[(*length)++] = value;
#line 13 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[*length] = NULL;
#line 88 "Slideshow.c"
}


static void _vala_array_add36 (gchar*** array, int* length, int* size, gchar* value) {
#line 14 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	if ((*length) == (*size)) {
#line 14 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 14 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*array = g_renew (gchar*, *array, (*size) + 1);
#line 99 "Slideshow.c"
	}
#line 14 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[(*length)++] = value;
#line 14 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[*length] = NULL;
#line 105 "Slideshow.c"
}


static void _vala_array_add37 (gchar*** array, int* length, int* size, gchar* value) {
#line 15 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	if ((*length) == (*size)) {
#line 15 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 15 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*array = g_renew (gchar*, *array, (*size) + 1);
#line 116 "Slideshow.c"
	}
#line 15 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[(*length)++] = value;
#line 15 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[*length] = NULL;
#line 122 "Slideshow.c"
}


static void _vala_array_add38 (gchar*** array, int* length, int* size, gchar* value) {
#line 16 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	if ((*length) == (*size)) {
#line 16 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 16 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*array = g_renew (gchar*, *array, (*size) + 1);
#line 133 "Slideshow.c"
	}
#line 16 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[(*length)++] = value;
#line 16 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[*length] = NULL;
#line 139 "Slideshow.c"
}


static void _vala_array_add39 (gchar*** array, int* length, int* size, gchar* value) {
#line 17 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	if ((*length) == (*size)) {
#line 17 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 17 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*array = g_renew (gchar*, *array, (*size) + 1);
#line 150 "Slideshow.c"
	}
#line 17 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[(*length)++] = value;
#line 17 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[*length] = NULL;
#line 156 "Slideshow.c"
}


static void _vala_array_add40 (gchar*** array, int* length, int* size, gchar* value) {
#line 18 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	if ((*length) == (*size)) {
#line 18 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 18 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*array = g_renew (gchar*, *array, (*size) + 1);
#line 167 "Slideshow.c"
	}
#line 18 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[(*length)++] = value;
#line 18 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[*length] = NULL;
#line 173 "Slideshow.c"
}


static void _vala_array_add41 (gchar*** array, int* length, int* size, gchar* value) {
#line 19 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	if ((*length) == (*size)) {
#line 19 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 19 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*array = g_renew (gchar*, *array, (*size) + 1);
#line 184 "Slideshow.c"
	}
#line 19 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[(*length)++] = value;
#line 19 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[*length] = NULL;
#line 190 "Slideshow.c"
}


static void _vala_array_add42 (gchar*** array, int* length, int* size, gchar* value) {
#line 20 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	if ((*length) == (*size)) {
#line 20 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 20 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
		*array = g_renew (gchar*, *array, (*size) + 1);
#line 201 "Slideshow.c"
	}
#line 20 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[(*length)++] = value;
#line 20 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	(*array)[*length] = NULL;
#line 207 "Slideshow.c"
}


void slideshow_init (GError** error) {
	gchar** core_ids = NULL;
	gchar** _tmp0_ = NULL;
	gint core_ids_length1 = 0;
	gint _core_ids_size_ = 0;
	gchar** _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
	gchar* _tmp2_ = NULL;
	gchar** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	gchar* _tmp4_ = NULL;
	gchar** _tmp5_ = NULL;
	gint _tmp5__length1 = 0;
	gchar* _tmp6_ = NULL;
	gchar** _tmp7_ = NULL;
	gint _tmp7__length1 = 0;
	gchar* _tmp8_ = NULL;
	gchar** _tmp9_ = NULL;
	gint _tmp9__length1 = 0;
	gchar* _tmp10_ = NULL;
	gchar** _tmp11_ = NULL;
	gint _tmp11__length1 = 0;
	gchar* _tmp12_ = NULL;
	gchar** _tmp13_ = NULL;
	gint _tmp13__length1 = 0;
	gchar* _tmp14_ = NULL;
	gchar** _tmp15_ = NULL;
	gint _tmp15__length1 = 0;
	gchar* _tmp16_ = NULL;
	gchar** _tmp17_ = NULL;
	gint _tmp17__length1 = 0;
	gchar* _tmp18_ = NULL;
	gchar** _tmp19_ = NULL;
	gint _tmp19__length1 = 0;
	gchar* _tmp20_ = NULL;
	const gchar* _tmp21_ = NULL;
	gchar** _tmp22_ = NULL;
	gint _tmp22__length1 = 0;
#line 10 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp0_ = g_new0 (gchar*, 0 + 1);
#line 10 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	core_ids = _tmp0_;
#line 10 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	core_ids_length1 = 0;
#line 10 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_core_ids_size_ = core_ids_length1;
#line 11 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp1_ = core_ids;
#line 11 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp1__length1 = core_ids_length1;
#line 11 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp2_ = g_strdup ("org.yorba.shotwell.transitions.crumble");
#line 11 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_vala_array_add33 (&core_ids, &core_ids_length1, &_core_ids_size_, _tmp2_);
#line 12 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp3_ = core_ids;
#line 12 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp3__length1 = core_ids_length1;
#line 12 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp4_ = g_strdup ("org.yorba.shotwell.transitions.fade");
#line 12 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_vala_array_add34 (&core_ids, &core_ids_length1, &_core_ids_size_, _tmp4_);
#line 13 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp5_ = core_ids;
#line 13 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp5__length1 = core_ids_length1;
#line 13 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp6_ = g_strdup ("org.yorba.shotwell.transitions.slide");
#line 13 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_vala_array_add35 (&core_ids, &core_ids_length1, &_core_ids_size_, _tmp6_);
#line 14 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp7_ = core_ids;
#line 14 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp7__length1 = core_ids_length1;
#line 14 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp8_ = g_strdup ("org.yorba.shotwell.transitions.blinds");
#line 14 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_vala_array_add36 (&core_ids, &core_ids_length1, &_core_ids_size_, _tmp8_);
#line 15 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp9_ = core_ids;
#line 15 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp9__length1 = core_ids_length1;
#line 15 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp10_ = g_strdup ("org.yorba.shotwell.transitions.circle");
#line 15 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_vala_array_add37 (&core_ids, &core_ids_length1, &_core_ids_size_, _tmp10_);
#line 16 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp11_ = core_ids;
#line 16 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp11__length1 = core_ids_length1;
#line 16 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp12_ = g_strdup ("org.yorba.shotwell.transitions.circles");
#line 16 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_vala_array_add38 (&core_ids, &core_ids_length1, &_core_ids_size_, _tmp12_);
#line 17 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp13_ = core_ids;
#line 17 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp13__length1 = core_ids_length1;
#line 17 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp14_ = g_strdup ("org.yorba.shotwell.transitions.clock");
#line 17 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_vala_array_add39 (&core_ids, &core_ids_length1, &_core_ids_size_, _tmp14_);
#line 18 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp15_ = core_ids;
#line 18 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp15__length1 = core_ids_length1;
#line 18 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp16_ = g_strdup ("org.yorba.shotwell.transitions.stripes");
#line 18 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_vala_array_add40 (&core_ids, &core_ids_length1, &_core_ids_size_, _tmp16_);
#line 19 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp17_ = core_ids;
#line 19 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp17__length1 = core_ids_length1;
#line 19 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp18_ = g_strdup ("org.yorba.shotwell.transitions.squares");
#line 19 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_vala_array_add41 (&core_ids, &core_ids_length1, &_core_ids_size_, _tmp18_);
#line 20 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp19_ = core_ids;
#line 20 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp19__length1 = core_ids_length1;
#line 20 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp20_ = g_strdup ("org.yorba.shotwell.transitions.chess");
#line 20 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_vala_array_add42 (&core_ids, &core_ids_length1, &_core_ids_size_, _tmp20_);
#line 22 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp21_ = _ ("Slideshow Transitions");
#line 22 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp22_ = core_ids;
#line 22 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	_tmp22__length1 = core_ids_length1;
#line 22 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	plugins_register_extension_point (SPIT_TRANSITIONS_TYPE_DESCRIPTOR, _tmp21_, RESOURCES_ICON_SLIDESHOW_EXTENSION_POINT, _tmp22_, _tmp22__length1);
#line 24 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	transition_effects_manager_init ();
#line 9 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	core_ids = (_vala_array_free (core_ids, core_ids_length1, (GDestroyNotify) g_free), NULL);
#line 349 "Slideshow.c"
}


void slideshow_terminate (void) {
#line 28 "/home/jens/Source/shotwell/src/slideshow/Slideshow.vala"
	transition_effects_manager_terminate ();
#line 356 "Slideshow.c"
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



