/* SourceInterfaces.c generated by valac 0.34.4, the Vala compiler
 * generated from SourceInterfaces.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */
/* See the note in MediaInterfaces.vala for some thoughts on the theory of expanding Shotwell's*/
/* features via interfaces rather than class hierarchies.*/
/* Indexable DataSources provide raw strings that may be searched against (and, in the future,*/
/* indexed) for free-text search queries.  DataSources implementing Indexable must prepare and*/
/* store (i.e. cache) these strings using prepare_indexable_string(s), as preparing the strings*/
/* for each call is expensive.*/
/**/
/* When the indexable string has changed, the object should fire an alteration of*/
/* "indexable:keywords".  The prepare methods will not do this.*/

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_DATA_OBJECT (data_object_get_type ())
#define DATA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DATA_OBJECT, DataObject))
#define DATA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DATA_OBJECT, DataObjectClass))
#define IS_DATA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DATA_OBJECT))
#define IS_DATA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DATA_OBJECT))
#define DATA_OBJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DATA_OBJECT, DataObjectClass))

typedef struct _DataObject DataObject;
typedef struct _DataObjectClass DataObjectClass;

#define TYPE_DATA_SOURCE (data_source_get_type ())
#define DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DATA_SOURCE, DataSource))
#define DATA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DATA_SOURCE, DataSourceClass))
#define IS_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DATA_SOURCE))
#define IS_DATA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DATA_SOURCE))
#define DATA_SOURCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DATA_SOURCE, DataSourceClass))

typedef struct _DataSource DataSource;
typedef struct _DataSourceClass DataSourceClass;

#define TYPE_INDEXABLE (indexable_get_type ())
#define INDEXABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_INDEXABLE, Indexable))
#define IS_INDEXABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_INDEXABLE))
#define INDEXABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TYPE_INDEXABLE, IndexableIface))

typedef struct _Indexable Indexable;
typedef struct _IndexableIface IndexableIface;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))

struct _IndexableIface {
	GTypeInterface parent_iface;
	const gchar* (*get_indexable_keywords) (Indexable* self);
};



GType data_object_get_type (void) G_GNUC_CONST;
GType data_source_get_type (void) G_GNUC_CONST;
GType indexable_get_type (void) G_GNUC_CONST;
const gchar* indexable_get_indexable_keywords (Indexable* self);
gchar* indexable_prepare_indexable_string (const gchar* str);
gboolean is_string_empty (const gchar* s);
gchar* string_remove_diacritics (const gchar* istring);
gchar* indexable_prepare_indexable_strings (gchar** strs, int strs_length1);


const gchar* indexable_get_indexable_keywords (Indexable* self) {
#line 19 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	g_return_val_if_fail (IS_INDEXABLE (self), NULL);
#line 19 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	return INDEXABLE_GET_INTERFACE (self)->get_indexable_keywords (self);
#line 78 "SourceInterfaces.c"
}


gchar* indexable_prepare_indexable_string (const gchar* str) {
	gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
#line 22 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp0_ = str;
#line 22 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp1_ = is_string_empty (_tmp0_);
#line 22 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	if (_tmp1_) {
#line 23 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		result = NULL;
#line 23 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		return result;
#line 101 "SourceInterfaces.c"
	}
#line 24 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp2_ = str;
#line 24 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp3_ = g_utf8_strdown (_tmp2_, (gssize) -1);
#line 24 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp4_ = _tmp3_;
#line 24 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp5_ = string_remove_diacritics (_tmp4_);
#line 24 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp6_ = _tmp5_;
#line 24 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_g_free0 (_tmp4_);
#line 24 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	result = _tmp6_;
#line 24 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	return result;
#line 119 "SourceInterfaces.c"
}


gchar* indexable_prepare_indexable_strings (gchar** strs, int strs_length1) {
	gchar* result = NULL;
	gboolean _tmp0_ = FALSE;
	gchar** _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
	GString* builder = NULL;
	GString* _tmp3_ = NULL;
	gint ctr = 0;
	const gchar* _tmp21_ = NULL;
	GString* _tmp22_ = NULL;
	const gchar* _tmp23_ = NULL;
	gboolean _tmp24_ = FALSE;
	gchar* _tmp27_ = NULL;
#line 28 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp1_ = strs;
#line 28 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp1__length1 = strs_length1;
#line 28 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	if (_tmp1_ == NULL) {
#line 28 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		_tmp0_ = TRUE;
#line 144 "SourceInterfaces.c"
	} else {
		gchar** _tmp2_ = NULL;
		gint _tmp2__length1 = 0;
#line 28 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		_tmp2_ = strs;
#line 28 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		_tmp2__length1 = strs_length1;
#line 28 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		_tmp0_ = _tmp2__length1 == 0;
#line 154 "SourceInterfaces.c"
	}
#line 28 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	if (_tmp0_) {
#line 29 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		result = NULL;
#line 29 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		return result;
#line 162 "SourceInterfaces.c"
	}
#line 31 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp3_ = g_string_new ("");
#line 31 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	builder = _tmp3_;
#line 32 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	ctr = 0;
#line 170 "SourceInterfaces.c"
	{
		gboolean _tmp4_ = FALSE;
#line 33 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		_tmp4_ = TRUE;
#line 33 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		while (TRUE) {
#line 177 "SourceInterfaces.c"
			gchar** _tmp8_ = NULL;
			gint _tmp8__length1 = 0;
			gint _tmp9_ = 0;
			const gchar* _tmp10_ = NULL;
			gboolean _tmp11_ = FALSE;
#line 33 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
			if (!_tmp4_) {
#line 185 "SourceInterfaces.c"
				gint _tmp5_ = 0;
				gint _tmp6_ = 0;
				gchar** _tmp7_ = NULL;
				gint _tmp7__length1 = 0;
#line 39 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp5_ = ctr;
#line 39 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				ctr = _tmp5_ + 1;
#line 39 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp6_ = ctr;
#line 39 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp7_ = strs;
#line 39 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp7__length1 = strs_length1;
#line 39 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				if (!(_tmp6_ < _tmp7__length1)) {
#line 39 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
					break;
#line 204 "SourceInterfaces.c"
				}
			}
#line 33 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
			_tmp4_ = FALSE;
#line 34 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
			_tmp8_ = strs;
#line 34 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
			_tmp8__length1 = strs_length1;
#line 34 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
			_tmp9_ = ctr;
#line 34 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
			_tmp10_ = _tmp8_[_tmp9_];
#line 34 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
			_tmp11_ = is_string_empty (_tmp10_);
#line 34 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
			if (!_tmp11_) {
#line 221 "SourceInterfaces.c"
				GString* _tmp12_ = NULL;
				gchar** _tmp13_ = NULL;
				gint _tmp13__length1 = 0;
				gint _tmp14_ = 0;
				const gchar* _tmp15_ = NULL;
				gchar* _tmp16_ = NULL;
				gchar* _tmp17_ = NULL;
				gint _tmp18_ = 0;
				gchar** _tmp19_ = NULL;
				gint _tmp19__length1 = 0;
#line 35 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp12_ = builder;
#line 35 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp13_ = strs;
#line 35 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp13__length1 = strs_length1;
#line 35 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp14_ = ctr;
#line 35 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp15_ = _tmp13_[_tmp14_];
#line 35 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp16_ = g_utf8_strdown (_tmp15_, (gssize) -1);
#line 35 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp17_ = _tmp16_;
#line 35 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				g_string_append (_tmp12_, _tmp17_);
#line 35 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_g_free0 (_tmp17_);
#line 36 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp18_ = ctr;
#line 36 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp19_ = strs;
#line 36 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				_tmp19__length1 = strs_length1;
#line 36 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
				if (_tmp18_ < (_tmp19__length1 - 1)) {
#line 258 "SourceInterfaces.c"
					GString* _tmp20_ = NULL;
#line 37 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
					_tmp20_ = builder;
#line 37 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
					g_string_append_c (_tmp20_, ' ');
#line 264 "SourceInterfaces.c"
				}
			}
		}
	}
#line 41 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp22_ = builder;
#line 41 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp23_ = _tmp22_->str;
#line 41 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp24_ = is_string_empty (_tmp23_);
#line 41 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	if (!_tmp24_) {
#line 277 "SourceInterfaces.c"
		GString* _tmp25_ = NULL;
		const gchar* _tmp26_ = NULL;
#line 41 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		_tmp25_ = builder;
#line 41 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		_tmp26_ = _tmp25_->str;
#line 41 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		_tmp21_ = _tmp26_;
#line 286 "SourceInterfaces.c"
	} else {
#line 41 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		_tmp21_ = NULL;
#line 290 "SourceInterfaces.c"
	}
#line 41 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_tmp27_ = g_strdup (_tmp21_);
#line 41 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	result = _tmp27_;
#line 41 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	_g_string_free0 (builder);
#line 41 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	return result;
#line 300 "SourceInterfaces.c"
}


static void indexable_base_init (IndexableIface * iface) {
#line 18 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	static gboolean initialized = FALSE;
#line 18 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
	if (!initialized) {
#line 18 "/home/jens/Source/shotwell/src/core/SourceInterfaces.vala"
		initialized = TRUE;
#line 311 "SourceInterfaces.c"
	}
}


GType indexable_get_type (void) {
	static volatile gsize indexable_type_id__volatile = 0;
	if (g_once_init_enter (&indexable_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (IndexableIface), (GBaseInitFunc) indexable_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType indexable_type_id;
		indexable_type_id = g_type_register_static (G_TYPE_INTERFACE, "Indexable", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (indexable_type_id, TYPE_DATA_SOURCE);
		g_once_init_leave (&indexable_type_id__volatile, indexable_type_id);
	}
	return indexable_type_id__volatile;
}


