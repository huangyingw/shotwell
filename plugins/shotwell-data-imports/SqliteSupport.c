/* SqliteSupport.c generated by valac 0.34.4, the Vala compiler
 * generated from SqliteSupport.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU LGPL (version 2.1 or later).
 * See the COPYING file in this distribution.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>
#include <gobject/gvaluecollector.h>


#define TYPE_IMPORTABLE_DATABASE_TABLE (importable_database_table_get_type ())
#define IMPORTABLE_DATABASE_TABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_IMPORTABLE_DATABASE_TABLE, ImportableDatabaseTable))
#define IMPORTABLE_DATABASE_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_IMPORTABLE_DATABASE_TABLE, ImportableDatabaseTableClass))
#define IS_IMPORTABLE_DATABASE_TABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_IMPORTABLE_DATABASE_TABLE))
#define IS_IMPORTABLE_DATABASE_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_IMPORTABLE_DATABASE_TABLE))
#define IMPORTABLE_DATABASE_TABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_IMPORTABLE_DATABASE_TABLE, ImportableDatabaseTableClass))

typedef struct _ImportableDatabaseTable ImportableDatabaseTable;
typedef struct _ImportableDatabaseTableClass ImportableDatabaseTableClass;
typedef struct _ImportableDatabaseTablePrivate ImportableDatabaseTablePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _ParamSpecImportableDatabaseTable ParamSpecImportableDatabaseTable;

typedef enum  {
	DATABASE_ERROR_ERROR,
	DATABASE_ERROR_BACKING,
	DATABASE_ERROR_MEMORY,
	DATABASE_ERROR_ABORT,
	DATABASE_ERROR_LIMITS,
	DATABASE_ERROR_TYPESPEC
} DatabaseError;
#define DATABASE_ERROR database_error_quark ()
struct _ImportableDatabaseTable {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ImportableDatabaseTablePrivate * priv;
	gchar* table_name;
};

struct _ImportableDatabaseTableClass {
	GTypeClass parent_class;
	void (*finalize) (ImportableDatabaseTable *self);
};

struct _ParamSpecImportableDatabaseTable {
	GParamSpec parent_instance;
};


static gpointer importable_database_table_parent_class = NULL;
extern sqlite3* importable_database_table_db;
sqlite3* importable_database_table_db = NULL;

GQuark database_error_quark (void);
gpointer importable_database_table_ref (gpointer instance);
void importable_database_table_unref (gpointer instance);
GParamSpec* param_spec_importable_database_table (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_importable_database_table (GValue* value, gpointer v_object);
void value_take_importable_database_table (GValue* value, gpointer v_object);
gpointer value_get_importable_database_table (const GValue* value);
GType importable_database_table_get_type (void) G_GNUC_CONST;
enum  {
	IMPORTABLE_DATABASE_TABLE_DUMMY_PROPERTY
};
void importable_database_table_set_table_name (ImportableDatabaseTable* self, const gchar* table_name);
void importable_database_table_throw_error (const gchar* method, gint res, GError** error);
ImportableDatabaseTable* importable_database_table_construct (GType object_type);
static void importable_database_table_finalize (ImportableDatabaseTable* obj);


GQuark database_error_quark (void) {
	return g_quark_from_static_string ("database_error-quark");
}


void importable_database_table_set_table_name (ImportableDatabaseTable* self, const gchar* table_name) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	g_return_if_fail (IS_IMPORTABLE_DATABASE_TABLE (self));
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	g_return_if_fail (table_name != NULL);
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	_tmp0_ = table_name;
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	_g_free0 (self->table_name);
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	self->table_name = _tmp1_;
#line 99 "SqliteSupport.c"
}


void importable_database_table_throw_error (const gchar* method, gint res, GError** error) {
	gchar* msg = NULL;
	const gchar* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	sqlite3* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gint _tmp5_ = 0;
	GError * _inner_error_ = NULL;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	g_return_if_fail (method != NULL);
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	_tmp0_ = method;
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	_tmp1_ = res;
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	_tmp2_ = importable_database_table_db;
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	_tmp3_ = sqlite3_errmsg (_tmp2_);
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	_tmp4_ = g_strdup_printf ("(%s) [%d] - %s", _tmp0_, _tmp1_, _tmp3_);
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	msg = _tmp4_;
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	_tmp5_ = res;
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	switch (_tmp5_) {
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_OK:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_DONE:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_ROW:
#line 136 "SqliteSupport.c"
		{
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_g_free0 (msg);
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			return;
#line 142 "SqliteSupport.c"
		}
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_PERM:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_BUSY:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_READONLY:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_IOERR:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_CORRUPT:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_CANTOPEN:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_NOLFS:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_AUTH:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_FORMAT:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_NOTADB:
#line 164 "SqliteSupport.c"
		{
			const gchar* _tmp6_ = NULL;
			GError* _tmp7_ = NULL;
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_tmp6_ = msg;
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_tmp7_ = g_error_new_literal (DATABASE_ERROR, DATABASE_ERROR_BACKING, _tmp6_);
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_inner_error_ = _tmp7_;
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			if (_inner_error_->domain == DATABASE_ERROR) {
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_propagate_error (error, _inner_error_);
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				_g_free0 (msg);
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				return;
#line 182 "SqliteSupport.c"
			} else {
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				_g_free0 (msg);
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_clear_error (&_inner_error_);
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				return;
#line 192 "SqliteSupport.c"
			}
		}
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_NOMEM:
#line 197 "SqliteSupport.c"
		{
			const gchar* _tmp8_ = NULL;
			GError* _tmp9_ = NULL;
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_tmp8_ = msg;
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_tmp9_ = g_error_new_literal (DATABASE_ERROR, DATABASE_ERROR_MEMORY, _tmp8_);
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_inner_error_ = _tmp9_;
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			if (_inner_error_->domain == DATABASE_ERROR) {
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_propagate_error (error, _inner_error_);
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				_g_free0 (msg);
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				return;
#line 215 "SqliteSupport.c"
			} else {
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				_g_free0 (msg);
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_clear_error (&_inner_error_);
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				return;
#line 225 "SqliteSupport.c"
			}
		}
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_ABORT:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_LOCKED:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_INTERRUPT:
#line 234 "SqliteSupport.c"
		{
			const gchar* _tmp10_ = NULL;
			GError* _tmp11_ = NULL;
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_tmp10_ = msg;
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_tmp11_ = g_error_new_literal (DATABASE_ERROR, DATABASE_ERROR_ABORT, _tmp10_);
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_inner_error_ = _tmp11_;
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			if (_inner_error_->domain == DATABASE_ERROR) {
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_propagate_error (error, _inner_error_);
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				_g_free0 (msg);
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				return;
#line 252 "SqliteSupport.c"
			} else {
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				_g_free0 (msg);
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_clear_error (&_inner_error_);
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				return;
#line 262 "SqliteSupport.c"
			}
		}
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_FULL:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_EMPTY:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_TOOBIG:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_CONSTRAINT:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_RANGE:
#line 275 "SqliteSupport.c"
		{
			const gchar* _tmp12_ = NULL;
			GError* _tmp13_ = NULL;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_tmp12_ = msg;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_tmp13_ = g_error_new_literal (DATABASE_ERROR, DATABASE_ERROR_LIMITS, _tmp12_);
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_inner_error_ = _tmp13_;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			if (_inner_error_->domain == DATABASE_ERROR) {
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_propagate_error (error, _inner_error_);
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				_g_free0 (msg);
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				return;
#line 293 "SqliteSupport.c"
			} else {
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				_g_free0 (msg);
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_clear_error (&_inner_error_);
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				return;
#line 303 "SqliteSupport.c"
			}
		}
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_SCHEMA:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_MISMATCH:
#line 310 "SqliteSupport.c"
		{
			const gchar* _tmp14_ = NULL;
			GError* _tmp15_ = NULL;
#line 66 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_tmp14_ = msg;
#line 66 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_tmp15_ = g_error_new_literal (DATABASE_ERROR, DATABASE_ERROR_TYPESPEC, _tmp14_);
#line 66 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_inner_error_ = _tmp15_;
#line 66 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			if (_inner_error_->domain == DATABASE_ERROR) {
#line 66 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_propagate_error (error, _inner_error_);
#line 66 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				_g_free0 (msg);
#line 66 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				return;
#line 328 "SqliteSupport.c"
			} else {
#line 66 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				_g_free0 (msg);
#line 66 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 66 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_clear_error (&_inner_error_);
#line 66 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				return;
#line 338 "SqliteSupport.c"
			}
		}
		default:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_ERROR:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_INTERNAL:
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		case SQLITE_MISUSE:
#line 348 "SqliteSupport.c"
		{
			const gchar* _tmp16_ = NULL;
			GError* _tmp17_ = NULL;
#line 72 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_tmp16_ = msg;
#line 72 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_tmp17_ = g_error_new_literal (DATABASE_ERROR, DATABASE_ERROR_ERROR, _tmp16_);
#line 72 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			_inner_error_ = _tmp17_;
#line 72 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			if (_inner_error_->domain == DATABASE_ERROR) {
#line 72 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_propagate_error (error, _inner_error_);
#line 72 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				_g_free0 (msg);
#line 72 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				return;
#line 366 "SqliteSupport.c"
			} else {
#line 72 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				_g_free0 (msg);
#line 72 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 72 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				g_clear_error (&_inner_error_);
#line 72 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
				return;
#line 376 "SqliteSupport.c"
			}
		}
	}
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	_g_free0 (msg);
#line 382 "SqliteSupport.c"
}


ImportableDatabaseTable* importable_database_table_construct (GType object_type) {
	ImportableDatabaseTable* self = NULL;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	self = (ImportableDatabaseTable*) g_type_create_instance (object_type);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	return self;
#line 392 "SqliteSupport.c"
}


static void value_importable_database_table_init (GValue* value) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	value->data[0].v_pointer = NULL;
#line 399 "SqliteSupport.c"
}


static void value_importable_database_table_free_value (GValue* value) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	if (value->data[0].v_pointer) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		importable_database_table_unref (value->data[0].v_pointer);
#line 408 "SqliteSupport.c"
	}
}


static void value_importable_database_table_copy_value (const GValue* src_value, GValue* dest_value) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	if (src_value->data[0].v_pointer) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		dest_value->data[0].v_pointer = importable_database_table_ref (src_value->data[0].v_pointer);
#line 418 "SqliteSupport.c"
	} else {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		dest_value->data[0].v_pointer = NULL;
#line 422 "SqliteSupport.c"
	}
}


static gpointer value_importable_database_table_peek_pointer (const GValue* value) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	return value->data[0].v_pointer;
#line 430 "SqliteSupport.c"
}


static gchar* value_importable_database_table_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	if (collect_values[0].v_pointer) {
#line 437 "SqliteSupport.c"
		ImportableDatabaseTable* object;
		object = collect_values[0].v_pointer;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		if (object->parent_instance.g_class == NULL) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 444 "SqliteSupport.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 448 "SqliteSupport.c"
		}
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		value->data[0].v_pointer = importable_database_table_ref (object);
#line 452 "SqliteSupport.c"
	} else {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		value->data[0].v_pointer = NULL;
#line 456 "SqliteSupport.c"
	}
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	return NULL;
#line 460 "SqliteSupport.c"
}


static gchar* value_importable_database_table_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	ImportableDatabaseTable** object_p;
	object_p = collect_values[0].v_pointer;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	if (!object_p) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 471 "SqliteSupport.c"
	}
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	if (!value->data[0].v_pointer) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		*object_p = NULL;
#line 477 "SqliteSupport.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		*object_p = value->data[0].v_pointer;
#line 481 "SqliteSupport.c"
	} else {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		*object_p = importable_database_table_ref (value->data[0].v_pointer);
#line 485 "SqliteSupport.c"
	}
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	return NULL;
#line 489 "SqliteSupport.c"
}


GParamSpec* param_spec_importable_database_table (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecImportableDatabaseTable* spec;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_IMPORTABLE_DATABASE_TABLE), NULL);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	return G_PARAM_SPEC (spec);
#line 503 "SqliteSupport.c"
}


gpointer value_get_importable_database_table (const GValue* value) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_IMPORTABLE_DATABASE_TABLE), NULL);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	return value->data[0].v_pointer;
#line 512 "SqliteSupport.c"
}


void value_set_importable_database_table (GValue* value, gpointer v_object) {
	ImportableDatabaseTable* old;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_IMPORTABLE_DATABASE_TABLE));
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	old = value->data[0].v_pointer;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	if (v_object) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_IMPORTABLE_DATABASE_TABLE));
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		value->data[0].v_pointer = v_object;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		importable_database_table_ref (value->data[0].v_pointer);
#line 532 "SqliteSupport.c"
	} else {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		value->data[0].v_pointer = NULL;
#line 536 "SqliteSupport.c"
	}
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	if (old) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		importable_database_table_unref (old);
#line 542 "SqliteSupport.c"
	}
}


void value_take_importable_database_table (GValue* value, gpointer v_object) {
	ImportableDatabaseTable* old;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_IMPORTABLE_DATABASE_TABLE));
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	old = value->data[0].v_pointer;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	if (v_object) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_IMPORTABLE_DATABASE_TABLE));
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		value->data[0].v_pointer = v_object;
#line 561 "SqliteSupport.c"
	} else {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		value->data[0].v_pointer = NULL;
#line 565 "SqliteSupport.c"
	}
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	if (old) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		importable_database_table_unref (old);
#line 571 "SqliteSupport.c"
	}
}


static void importable_database_table_class_init (ImportableDatabaseTableClass * klass) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	importable_database_table_parent_class = g_type_class_peek_parent (klass);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	((ImportableDatabaseTableClass *) klass)->finalize = importable_database_table_finalize;
#line 581 "SqliteSupport.c"
}


static void importable_database_table_instance_init (ImportableDatabaseTable * self) {
#line 20 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	self->table_name = NULL;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	self->ref_count = 1;
#line 590 "SqliteSupport.c"
}


static void importable_database_table_finalize (ImportableDatabaseTable* obj) {
	ImportableDatabaseTable * self;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_IMPORTABLE_DATABASE_TABLE, ImportableDatabaseTable);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	g_signal_handlers_destroy (self);
#line 20 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	_g_free0 (self->table_name);
#line 602 "SqliteSupport.c"
}


GType importable_database_table_get_type (void) {
	static volatile gsize importable_database_table_type_id__volatile = 0;
	if (g_once_init_enter (&importable_database_table_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_importable_database_table_init, value_importable_database_table_free_value, value_importable_database_table_copy_value, value_importable_database_table_peek_pointer, "p", value_importable_database_table_collect_value, "p", value_importable_database_table_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (ImportableDatabaseTableClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) importable_database_table_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ImportableDatabaseTable), 0, (GInstanceInitFunc) importable_database_table_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType importable_database_table_type_id;
		importable_database_table_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ImportableDatabaseTable", &g_define_type_info, &g_define_type_fundamental_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&importable_database_table_type_id__volatile, importable_database_table_type_id);
	}
	return importable_database_table_type_id__volatile;
}


gpointer importable_database_table_ref (gpointer instance) {
	ImportableDatabaseTable* self;
	self = instance;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	g_atomic_int_inc (&self->ref_count);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	return instance;
#line 627 "SqliteSupport.c"
}


void importable_database_table_unref (gpointer instance) {
	ImportableDatabaseTable* self;
	self = instance;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		IMPORTABLE_DATABASE_TABLE_GET_CLASS (self)->finalize (self);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/SqliteSupport.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 640 "SqliteSupport.c"
	}
}



