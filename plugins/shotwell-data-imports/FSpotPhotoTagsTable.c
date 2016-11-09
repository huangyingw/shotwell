/* FSpotPhotoTagsTable.c generated by valac 0.34.2, the Vala compiler
 * generated from FSpotPhotoTagsTable.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>


#define DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAG_ROW (data_imports_fspot_db_fspot_photo_tag_row_get_type ())
#define DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAG_ROW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAG_ROW, DataImportsFSpotDbFSpotPhotoTagRow))
#define DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAG_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAG_ROW, DataImportsFSpotDbFSpotPhotoTagRowClass))
#define DATA_IMPORTS_FSPOT_DB_IS_FSPOT_PHOTO_TAG_ROW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAG_ROW))
#define DATA_IMPORTS_FSPOT_DB_IS_FSPOT_PHOTO_TAG_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAG_ROW))
#define DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAG_ROW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAG_ROW, DataImportsFSpotDbFSpotPhotoTagRowClass))

typedef struct _DataImportsFSpotDbFSpotPhotoTagRow DataImportsFSpotDbFSpotPhotoTagRow;
typedef struct _DataImportsFSpotDbFSpotPhotoTagRowClass DataImportsFSpotDbFSpotPhotoTagRowClass;
typedef struct _DataImportsFSpotDbFSpotPhotoTagRowPrivate DataImportsFSpotDbFSpotPhotoTagRowPrivate;

#define TYPE_IMPORTABLE_DATABASE_TABLE (importable_database_table_get_type ())
#define IMPORTABLE_DATABASE_TABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_IMPORTABLE_DATABASE_TABLE, ImportableDatabaseTable))
#define IMPORTABLE_DATABASE_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_IMPORTABLE_DATABASE_TABLE, ImportableDatabaseTableClass))
#define IS_IMPORTABLE_DATABASE_TABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_IMPORTABLE_DATABASE_TABLE))
#define IS_IMPORTABLE_DATABASE_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_IMPORTABLE_DATABASE_TABLE))
#define IMPORTABLE_DATABASE_TABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_IMPORTABLE_DATABASE_TABLE, ImportableDatabaseTableClass))

typedef struct _ImportableDatabaseTable ImportableDatabaseTable;
typedef struct _ImportableDatabaseTableClass ImportableDatabaseTableClass;
typedef struct _ImportableDatabaseTablePrivate ImportableDatabaseTablePrivate;

#define DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_TABLE (data_imports_fspot_db_fspot_database_table_get_type ())
#define DATA_IMPORTS_FSPOT_DB_FSPOT_DATABASE_TABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_TABLE, DataImportsFSpotDbFSpotDatabaseTable))
#define DATA_IMPORTS_FSPOT_DB_FSPOT_DATABASE_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_TABLE, DataImportsFSpotDbFSpotDatabaseTableClass))
#define DATA_IMPORTS_FSPOT_DB_IS_FSPOT_DATABASE_TABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_TABLE))
#define DATA_IMPORTS_FSPOT_DB_IS_FSPOT_DATABASE_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_TABLE))
#define DATA_IMPORTS_FSPOT_DB_FSPOT_DATABASE_TABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_TABLE, DataImportsFSpotDbFSpotDatabaseTableClass))

typedef struct _DataImportsFSpotDbFSpotDatabaseTable DataImportsFSpotDbFSpotDatabaseTable;
typedef struct _DataImportsFSpotDbFSpotDatabaseTableClass DataImportsFSpotDbFSpotDatabaseTableClass;
typedef struct _DataImportsFSpotDbFSpotDatabaseTablePrivate DataImportsFSpotDbFSpotDatabaseTablePrivate;

#define DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_TABLE_BEHAVIOR (data_imports_fspot_db_fspot_table_behavior_get_type ())
#define DATA_IMPORTS_FSPOT_DB_FSPOT_TABLE_BEHAVIOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_TABLE_BEHAVIOR, DataImportsFSpotDbFSpotTableBehavior))
#define DATA_IMPORTS_FSPOT_DB_IS_FSPOT_TABLE_BEHAVIOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_TABLE_BEHAVIOR))
#define DATA_IMPORTS_FSPOT_DB_FSPOT_TABLE_BEHAVIOR_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_TABLE_BEHAVIOR, DataImportsFSpotDbFSpotTableBehaviorIface))

typedef struct _DataImportsFSpotDbFSpotTableBehavior DataImportsFSpotDbFSpotTableBehavior;
typedef struct _DataImportsFSpotDbFSpotTableBehaviorIface DataImportsFSpotDbFSpotTableBehaviorIface;

#define DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_TABLE (data_imports_fspot_db_fspot_photo_tags_table_get_type ())
#define DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAGS_TABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_TABLE, DataImportsFSpotDbFSpotPhotoTagsTable))
#define DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAGS_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_TABLE, DataImportsFSpotDbFSpotPhotoTagsTableClass))
#define DATA_IMPORTS_FSPOT_DB_IS_FSPOT_PHOTO_TAGS_TABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_TABLE))
#define DATA_IMPORTS_FSPOT_DB_IS_FSPOT_PHOTO_TAGS_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_TABLE))
#define DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAGS_TABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_TABLE, DataImportsFSpotDbFSpotPhotoTagsTableClass))

typedef struct _DataImportsFSpotDbFSpotPhotoTagsTable DataImportsFSpotDbFSpotPhotoTagsTable;
typedef struct _DataImportsFSpotDbFSpotPhotoTagsTableClass DataImportsFSpotDbFSpotPhotoTagsTableClass;
typedef struct _DataImportsFSpotDbFSpotPhotoTagsTablePrivate DataImportsFSpotDbFSpotPhotoTagsTablePrivate;

#define DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_BEHAVIOR (data_imports_fspot_db_fspot_database_behavior_get_type ())
#define DATA_IMPORTS_FSPOT_DB_FSPOT_DATABASE_BEHAVIOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_BEHAVIOR, DataImportsFSpotDbFSpotDatabaseBehavior))
#define DATA_IMPORTS_FSPOT_DB_FSPOT_DATABASE_BEHAVIOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_BEHAVIOR, DataImportsFSpotDbFSpotDatabaseBehaviorClass))
#define DATA_IMPORTS_FSPOT_DB_IS_FSPOT_DATABASE_BEHAVIOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_BEHAVIOR))
#define DATA_IMPORTS_FSPOT_DB_IS_FSPOT_DATABASE_BEHAVIOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_BEHAVIOR))
#define DATA_IMPORTS_FSPOT_DB_FSPOT_DATABASE_BEHAVIOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_BEHAVIOR, DataImportsFSpotDbFSpotDatabaseBehaviorClass))

typedef struct _DataImportsFSpotDbFSpotDatabaseBehavior DataImportsFSpotDbFSpotDatabaseBehavior;
typedef struct _DataImportsFSpotDbFSpotDatabaseBehaviorClass DataImportsFSpotDbFSpotDatabaseBehaviorClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_V0_BEHAVIOR (data_imports_fspot_db_fspot_photo_tags_v0_behavior_get_type ())
#define DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAGS_V0_BEHAVIOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_V0_BEHAVIOR, DataImportsFSpotDbFSpotPhotoTagsV0Behavior))
#define DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAGS_V0_BEHAVIOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_V0_BEHAVIOR, DataImportsFSpotDbFSpotPhotoTagsV0BehaviorClass))
#define DATA_IMPORTS_FSPOT_DB_IS_FSPOT_PHOTO_TAGS_V0_BEHAVIOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_V0_BEHAVIOR))
#define DATA_IMPORTS_FSPOT_DB_IS_FSPOT_PHOTO_TAGS_V0_BEHAVIOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_V0_BEHAVIOR))
#define DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAGS_V0_BEHAVIOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_V0_BEHAVIOR, DataImportsFSpotDbFSpotPhotoTagsV0BehaviorClass))

typedef struct _DataImportsFSpotDbFSpotPhotoTagsV0Behavior DataImportsFSpotDbFSpotPhotoTagsV0Behavior;
typedef struct _DataImportsFSpotDbFSpotPhotoTagsV0BehaviorClass DataImportsFSpotDbFSpotPhotoTagsV0BehaviorClass;
typedef struct _DataImportsFSpotDbFSpotPhotoTagsV0BehaviorPrivate DataImportsFSpotDbFSpotPhotoTagsV0BehaviorPrivate;

struct _DataImportsFSpotDbFSpotPhotoTagRow {
	GObject parent_instance;
	DataImportsFSpotDbFSpotPhotoTagRowPrivate * priv;
	gint64 photo_id;
	gint64 tag_id;
};

struct _DataImportsFSpotDbFSpotPhotoTagRowClass {
	GObjectClass parent_class;
};

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

struct _DataImportsFSpotDbFSpotTableBehaviorIface {
	GTypeInterface parent_iface;
	gchar* (*get_table_name) (DataImportsFSpotDbFSpotTableBehavior* self);
	gchar** (*list_columns) (DataImportsFSpotDbFSpotTableBehavior* self, int* result_length1);
	void (*build_row) (DataImportsFSpotDbFSpotTableBehavior* self, sqlite3_stmt* stmt, gpointer* row, gint offset);
};

struct _DataImportsFSpotDbFSpotDatabaseTable {
	ImportableDatabaseTable parent_instance;
	DataImportsFSpotDbFSpotDatabaseTablePrivate * priv;
	sqlite3* fspot_db;
	DataImportsFSpotDbFSpotTableBehavior* behavior;
};

struct _DataImportsFSpotDbFSpotDatabaseTableClass {
	ImportableDatabaseTableClass parent_class;
};

struct _DataImportsFSpotDbFSpotPhotoTagsTable {
	DataImportsFSpotDbFSpotDatabaseTable parent_instance;
	DataImportsFSpotDbFSpotPhotoTagsTablePrivate * priv;
};

struct _DataImportsFSpotDbFSpotPhotoTagsTableClass {
	DataImportsFSpotDbFSpotDatabaseTableClass parent_class;
};

struct _DataImportsFSpotDbFSpotPhotoTagsV0Behavior {
	GObject parent_instance;
	DataImportsFSpotDbFSpotPhotoTagsV0BehaviorPrivate * priv;
};

struct _DataImportsFSpotDbFSpotPhotoTagsV0BehaviorClass {
	GObjectClass parent_class;
};


static gpointer data_imports_fspot_db_fspot_photo_tag_row_parent_class = NULL;
static gpointer data_imports_fspot_db_fspot_photo_tags_table_parent_class = NULL;
static gpointer data_imports_fspot_db_fspot_photo_tags_v0_behavior_parent_class = NULL;
static DataImportsFSpotDbFSpotPhotoTagsV0Behavior* data_imports_fspot_db_fspot_photo_tags_v0_behavior_instance;
static DataImportsFSpotDbFSpotPhotoTagsV0Behavior* data_imports_fspot_db_fspot_photo_tags_v0_behavior_instance = NULL;
static DataImportsFSpotDbFSpotTableBehaviorIface* data_imports_fspot_db_fspot_photo_tags_v0_behavior_data_imports_fspot_db_fspot_table_behavior_parent_iface = NULL;

GType data_imports_fspot_db_fspot_photo_tag_row_get_type (void) G_GNUC_CONST;
enum  {
	DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAG_ROW_DUMMY_PROPERTY
};
DataImportsFSpotDbFSpotPhotoTagRow* data_imports_fspot_db_fspot_photo_tag_row_new (void);
DataImportsFSpotDbFSpotPhotoTagRow* data_imports_fspot_db_fspot_photo_tag_row_construct (GType object_type);
static void data_imports_fspot_db_fspot_photo_tag_row_finalize (GObject* obj);
gpointer importable_database_table_ref (gpointer instance);
void importable_database_table_unref (gpointer instance);
GParamSpec* param_spec_importable_database_table (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_importable_database_table (GValue* value, gpointer v_object);
void value_take_importable_database_table (GValue* value, gpointer v_object);
gpointer value_get_importable_database_table (const GValue* value);
GType importable_database_table_get_type (void) G_GNUC_CONST;
GType data_imports_fspot_db_fspot_database_table_get_type (void) G_GNUC_CONST;
GType data_imports_fspot_db_fspot_table_behavior_get_type (void) G_GNUC_CONST;
GType data_imports_fspot_db_fspot_photo_tags_table_get_type (void) G_GNUC_CONST;
enum  {
	DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAGS_TABLE_DUMMY_PROPERTY
};
#define DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAGS_TABLE_TABLE_NAME "Photo_Tags"
GType data_imports_fspot_db_fspot_database_behavior_get_type (void) G_GNUC_CONST;
DataImportsFSpotDbFSpotPhotoTagsTable* data_imports_fspot_db_fspot_photo_tags_table_new (sqlite3* db, DataImportsFSpotDbFSpotDatabaseBehavior* db_behavior);
DataImportsFSpotDbFSpotPhotoTagsTable* data_imports_fspot_db_fspot_photo_tags_table_construct (GType object_type, sqlite3* db, DataImportsFSpotDbFSpotDatabaseBehavior* db_behavior);
DataImportsFSpotDbFSpotDatabaseTable* data_imports_fspot_db_fspot_database_table_construct (GType object_type, GType t_type, GBoxedCopyFunc t_dup_func, GDestroyNotify t_destroy_func, sqlite3* db);
void data_imports_fspot_db_fspot_database_table_set_behavior (DataImportsFSpotDbFSpotDatabaseTable* self, DataImportsFSpotDbFSpotTableBehavior* behavior);
DataImportsFSpotDbFSpotTableBehavior* data_imports_fspot_db_fspot_database_behavior_get_photo_tags_behavior (DataImportsFSpotDbFSpotDatabaseBehavior* self);
GType data_imports_fspot_db_fspot_photo_tags_v0_behavior_get_type (void) G_GNUC_CONST;
enum  {
	DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAGS_V0_BEHAVIOR_DUMMY_PROPERTY
};
static DataImportsFSpotDbFSpotPhotoTagsV0Behavior* data_imports_fspot_db_fspot_photo_tags_v0_behavior_new (void);
static DataImportsFSpotDbFSpotPhotoTagsV0Behavior* data_imports_fspot_db_fspot_photo_tags_v0_behavior_construct (GType object_type);
DataImportsFSpotDbFSpotPhotoTagsV0Behavior* data_imports_fspot_db_fspot_photo_tags_v0_behavior_get_instance (void);
static gchar* data_imports_fspot_db_fspot_photo_tags_v0_behavior_real_get_table_name (DataImportsFSpotDbFSpotTableBehavior* base);
static gchar** data_imports_fspot_db_fspot_photo_tags_v0_behavior_real_list_columns (DataImportsFSpotDbFSpotTableBehavior* base, int* result_length1);
static void data_imports_fspot_db_fspot_photo_tags_v0_behavior_real_build_row (DataImportsFSpotDbFSpotTableBehavior* base, sqlite3_stmt* stmt, DataImportsFSpotDbFSpotPhotoTagRow** row, gint offset);
static void data_imports_fspot_db_fspot_photo_tags_v0_behavior_finalize (GObject* obj);


DataImportsFSpotDbFSpotPhotoTagRow* data_imports_fspot_db_fspot_photo_tag_row_construct (GType object_type) {
	DataImportsFSpotDbFSpotPhotoTagRow * self = NULL;
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	self = (DataImportsFSpotDbFSpotPhotoTagRow*) g_object_new (object_type, NULL);
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	return self;
#line 205 "FSpotPhotoTagsTable.c"
}


DataImportsFSpotDbFSpotPhotoTagRow* data_imports_fspot_db_fspot_photo_tag_row_new (void) {
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	return data_imports_fspot_db_fspot_photo_tag_row_construct (DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAG_ROW);
#line 212 "FSpotPhotoTagsTable.c"
}


static void data_imports_fspot_db_fspot_photo_tag_row_class_init (DataImportsFSpotDbFSpotPhotoTagRowClass * klass) {
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	data_imports_fspot_db_fspot_photo_tag_row_parent_class = g_type_class_peek_parent (klass);
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	G_OBJECT_CLASS (klass)->finalize = data_imports_fspot_db_fspot_photo_tag_row_finalize;
#line 221 "FSpotPhotoTagsTable.c"
}


static void data_imports_fspot_db_fspot_photo_tag_row_instance_init (DataImportsFSpotDbFSpotPhotoTagRow * self) {
}


static void data_imports_fspot_db_fspot_photo_tag_row_finalize (GObject* obj) {
	DataImportsFSpotDbFSpotPhotoTagRow * self;
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAG_ROW, DataImportsFSpotDbFSpotPhotoTagRow);
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	G_OBJECT_CLASS (data_imports_fspot_db_fspot_photo_tag_row_parent_class)->finalize (obj);
#line 235 "FSpotPhotoTagsTable.c"
}


/**
 * The value object for the "photo_tags" table, representing a single database row.
 */
GType data_imports_fspot_db_fspot_photo_tag_row_get_type (void) {
	static volatile gsize data_imports_fspot_db_fspot_photo_tag_row_type_id__volatile = 0;
	if (g_once_init_enter (&data_imports_fspot_db_fspot_photo_tag_row_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DataImportsFSpotDbFSpotPhotoTagRowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) data_imports_fspot_db_fspot_photo_tag_row_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DataImportsFSpotDbFSpotPhotoTagRow), 0, (GInstanceInitFunc) data_imports_fspot_db_fspot_photo_tag_row_instance_init, NULL };
		GType data_imports_fspot_db_fspot_photo_tag_row_type_id;
		data_imports_fspot_db_fspot_photo_tag_row_type_id = g_type_register_static (G_TYPE_OBJECT, "DataImportsFSpotDbFSpotPhotoTagRow", &g_define_type_info, 0);
		g_once_init_leave (&data_imports_fspot_db_fspot_photo_tag_row_type_id__volatile, data_imports_fspot_db_fspot_photo_tag_row_type_id);
	}
	return data_imports_fspot_db_fspot_photo_tag_row_type_id__volatile;
}


DataImportsFSpotDbFSpotPhotoTagsTable* data_imports_fspot_db_fspot_photo_tags_table_construct (GType object_type, sqlite3* db, DataImportsFSpotDbFSpotDatabaseBehavior* db_behavior) {
	DataImportsFSpotDbFSpotPhotoTagsTable* self = NULL;
	sqlite3* _tmp0_ = NULL;
	DataImportsFSpotDbFSpotDatabaseBehavior* _tmp1_ = NULL;
	DataImportsFSpotDbFSpotTableBehavior* _tmp2_ = NULL;
	DataImportsFSpotDbFSpotTableBehavior* _tmp3_ = NULL;
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	g_return_val_if_fail (db != NULL, NULL);
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	g_return_val_if_fail (DATA_IMPORTS_FSPOT_DB_IS_FSPOT_DATABASE_BEHAVIOR (db_behavior), NULL);
#line 24 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp0_ = db;
#line 24 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	self = (DataImportsFSpotDbFSpotPhotoTagsTable*) data_imports_fspot_db_fspot_database_table_construct (object_type, DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAG_ROW, (GBoxedCopyFunc) g_object_ref, g_object_unref, _tmp0_);
#line 25 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp1_ = db_behavior;
#line 25 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp2_ = data_imports_fspot_db_fspot_database_behavior_get_photo_tags_behavior (_tmp1_);
#line 25 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp3_ = _tmp2_;
#line 25 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	data_imports_fspot_db_fspot_database_table_set_behavior (G_TYPE_CHECK_INSTANCE_CAST (self, DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_TABLE, DataImportsFSpotDbFSpotDatabaseTable), _tmp3_);
#line 25 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_g_object_unref0 (_tmp3_);
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	return self;
#line 280 "FSpotPhotoTagsTable.c"
}


DataImportsFSpotDbFSpotPhotoTagsTable* data_imports_fspot_db_fspot_photo_tags_table_new (sqlite3* db, DataImportsFSpotDbFSpotDatabaseBehavior* db_behavior) {
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	return data_imports_fspot_db_fspot_photo_tags_table_construct (DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_TABLE, db, db_behavior);
#line 287 "FSpotPhotoTagsTable.c"
}


static void data_imports_fspot_db_fspot_photo_tags_table_class_init (DataImportsFSpotDbFSpotPhotoTagsTableClass * klass) {
#line 20 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	data_imports_fspot_db_fspot_photo_tags_table_parent_class = g_type_class_peek_parent (klass);
#line 294 "FSpotPhotoTagsTable.c"
}


static void data_imports_fspot_db_fspot_photo_tags_table_instance_init (DataImportsFSpotDbFSpotPhotoTagsTable * self) {
}


/**
 * This class represents the F-Spot photo_tags table.
 */
GType data_imports_fspot_db_fspot_photo_tags_table_get_type (void) {
	static volatile gsize data_imports_fspot_db_fspot_photo_tags_table_type_id__volatile = 0;
	if (g_once_init_enter (&data_imports_fspot_db_fspot_photo_tags_table_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DataImportsFSpotDbFSpotPhotoTagsTableClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) data_imports_fspot_db_fspot_photo_tags_table_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DataImportsFSpotDbFSpotPhotoTagsTable), 0, (GInstanceInitFunc) data_imports_fspot_db_fspot_photo_tags_table_instance_init, NULL };
		GType data_imports_fspot_db_fspot_photo_tags_table_type_id;
		data_imports_fspot_db_fspot_photo_tags_table_type_id = g_type_register_static (DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_DATABASE_TABLE, "DataImportsFSpotDbFSpotPhotoTagsTable", &g_define_type_info, 0);
		g_once_init_leave (&data_imports_fspot_db_fspot_photo_tags_table_type_id__volatile, data_imports_fspot_db_fspot_photo_tags_table_type_id);
	}
	return data_imports_fspot_db_fspot_photo_tags_table_type_id__volatile;
}


static DataImportsFSpotDbFSpotPhotoTagsV0Behavior* data_imports_fspot_db_fspot_photo_tags_v0_behavior_construct (GType object_type) {
	DataImportsFSpotDbFSpotPhotoTagsV0Behavior * self = NULL;
#line 32 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	self = (DataImportsFSpotDbFSpotPhotoTagsV0Behavior*) g_object_new (object_type, NULL);
#line 32 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	return self;
#line 323 "FSpotPhotoTagsTable.c"
}


static DataImportsFSpotDbFSpotPhotoTagsV0Behavior* data_imports_fspot_db_fspot_photo_tags_v0_behavior_new (void) {
#line 32 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	return data_imports_fspot_db_fspot_photo_tags_v0_behavior_construct (DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_V0_BEHAVIOR);
#line 330 "FSpotPhotoTagsTable.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 38 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	return self ? g_object_ref (self) : NULL;
#line 337 "FSpotPhotoTagsTable.c"
}


DataImportsFSpotDbFSpotPhotoTagsV0Behavior* data_imports_fspot_db_fspot_photo_tags_v0_behavior_get_instance (void) {
	DataImportsFSpotDbFSpotPhotoTagsV0Behavior* result = NULL;
	DataImportsFSpotDbFSpotPhotoTagsV0Behavior* _tmp0_ = NULL;
	DataImportsFSpotDbFSpotPhotoTagsV0Behavior* _tmp2_ = NULL;
	DataImportsFSpotDbFSpotPhotoTagsV0Behavior* _tmp3_ = NULL;
#line 36 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp0_ = data_imports_fspot_db_fspot_photo_tags_v0_behavior_instance;
#line 36 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	if (_tmp0_ == NULL) {
#line 350 "FSpotPhotoTagsTable.c"
		DataImportsFSpotDbFSpotPhotoTagsV0Behavior* _tmp1_ = NULL;
#line 37 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
		_tmp1_ = data_imports_fspot_db_fspot_photo_tags_v0_behavior_new ();
#line 37 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
		_g_object_unref0 (data_imports_fspot_db_fspot_photo_tags_v0_behavior_instance);
#line 37 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
		data_imports_fspot_db_fspot_photo_tags_v0_behavior_instance = _tmp1_;
#line 358 "FSpotPhotoTagsTable.c"
	}
#line 38 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp2_ = data_imports_fspot_db_fspot_photo_tags_v0_behavior_instance;
#line 38 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 38 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	result = _tmp3_;
#line 38 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	return result;
#line 368 "FSpotPhotoTagsTable.c"
}


static gchar* data_imports_fspot_db_fspot_photo_tags_v0_behavior_real_get_table_name (DataImportsFSpotDbFSpotTableBehavior* base) {
	DataImportsFSpotDbFSpotPhotoTagsV0Behavior * self;
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
#line 41 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_V0_BEHAVIOR, DataImportsFSpotDbFSpotPhotoTagsV0Behavior);
#line 42 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp0_ = g_strdup (DATA_IMPORTS_FSPOT_DB_FSPOT_PHOTO_TAGS_TABLE_TABLE_NAME);
#line 42 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	result = _tmp0_;
#line 42 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	return result;
#line 384 "FSpotPhotoTagsTable.c"
}


static gchar** data_imports_fspot_db_fspot_photo_tags_v0_behavior_real_list_columns (DataImportsFSpotDbFSpotTableBehavior* base, int* result_length1) {
	DataImportsFSpotDbFSpotPhotoTagsV0Behavior * self;
	gchar** result = NULL;
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar** _tmp2_ = NULL;
	gchar** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
#line 45 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_V0_BEHAVIOR, DataImportsFSpotDbFSpotPhotoTagsV0Behavior);
#line 46 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp0_ = g_strdup ("photo_id");
#line 46 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp1_ = g_strdup ("tag_id");
#line 46 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp2_ = g_new0 (gchar*, 2 + 1);
#line 46 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp2_[0] = _tmp0_;
#line 46 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp2_[1] = _tmp1_;
#line 46 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp3_ = _tmp2_;
#line 46 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp3__length1 = 2;
#line 46 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	if (result_length1) {
#line 46 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
		*result_length1 = _tmp3__length1;
#line 416 "FSpotPhotoTagsTable.c"
	}
#line 46 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	result = _tmp3_;
#line 46 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	return result;
#line 422 "FSpotPhotoTagsTable.c"
}


static void data_imports_fspot_db_fspot_photo_tags_v0_behavior_real_build_row (DataImportsFSpotDbFSpotTableBehavior* base, sqlite3_stmt* stmt, DataImportsFSpotDbFSpotPhotoTagRow** row, gint offset) {
	DataImportsFSpotDbFSpotPhotoTagsV0Behavior * self;
	DataImportsFSpotDbFSpotPhotoTagRow* _vala_row = NULL;
	DataImportsFSpotDbFSpotPhotoTagRow* _tmp0_ = NULL;
	sqlite3_stmt* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	gint64 _tmp3_ = 0LL;
	sqlite3_stmt* _tmp4_ = NULL;
	gint _tmp5_ = 0;
	gint64 _tmp6_ = 0LL;
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_V0_BEHAVIOR, DataImportsFSpotDbFSpotPhotoTagsV0Behavior);
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	g_return_if_fail (stmt != NULL);
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp0_ = data_imports_fspot_db_fspot_photo_tag_row_new ();
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_g_object_unref0 (_vala_row);
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_vala_row = _tmp0_;
#line 51 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp1_ = stmt;
#line 51 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp2_ = offset;
#line 51 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp3_ = sqlite3_column_int64 (_tmp1_, _tmp2_ + 0);
#line 51 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_vala_row->photo_id = _tmp3_;
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp4_ = stmt;
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp5_ = offset;
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_tmp6_ = sqlite3_column_int64 (_tmp4_, _tmp5_ + 1);
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	_vala_row->tag_id = _tmp6_;
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	if (row) {
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
		*row = _vala_row;
#line 466 "FSpotPhotoTagsTable.c"
	} else {
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
		_g_object_unref0 (_vala_row);
#line 470 "FSpotPhotoTagsTable.c"
	}
}


static void data_imports_fspot_db_fspot_photo_tags_v0_behavior_class_init (DataImportsFSpotDbFSpotPhotoTagsV0BehaviorClass * klass) {
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	data_imports_fspot_db_fspot_photo_tags_v0_behavior_parent_class = g_type_class_peek_parent (klass);
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	G_OBJECT_CLASS (klass)->finalize = data_imports_fspot_db_fspot_photo_tags_v0_behavior_finalize;
#line 480 "FSpotPhotoTagsTable.c"
}


static void data_imports_fspot_db_fspot_photo_tags_v0_behavior_data_imports_fspot_db_fspot_table_behavior_interface_init (DataImportsFSpotDbFSpotTableBehaviorIface * iface) {
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	data_imports_fspot_db_fspot_photo_tags_v0_behavior_data_imports_fspot_db_fspot_table_behavior_parent_iface = g_type_interface_peek_parent (iface);
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	iface->get_table_name = (gchar* (*)(DataImportsFSpotDbFSpotTableBehavior*)) data_imports_fspot_db_fspot_photo_tags_v0_behavior_real_get_table_name;
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	iface->list_columns = (gchar** (*)(DataImportsFSpotDbFSpotTableBehavior*, int*)) data_imports_fspot_db_fspot_photo_tags_v0_behavior_real_list_columns;
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	iface->build_row = (void (*)(DataImportsFSpotDbFSpotTableBehavior*, sqlite3_stmt*, gpointer*, gint)) data_imports_fspot_db_fspot_photo_tags_v0_behavior_real_build_row;
#line 493 "FSpotPhotoTagsTable.c"
}


static void data_imports_fspot_db_fspot_photo_tags_v0_behavior_instance_init (DataImportsFSpotDbFSpotPhotoTagsV0Behavior * self) {
}


static void data_imports_fspot_db_fspot_photo_tags_v0_behavior_finalize (GObject* obj) {
	DataImportsFSpotDbFSpotPhotoTagsV0Behavior * self;
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_PHOTO_TAGS_V0_BEHAVIOR, DataImportsFSpotDbFSpotPhotoTagsV0Behavior);
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/FSpotPhotoTagsTable.vala"
	G_OBJECT_CLASS (data_imports_fspot_db_fspot_photo_tags_v0_behavior_parent_class)->finalize (obj);
#line 507 "FSpotPhotoTagsTable.c"
}


GType data_imports_fspot_db_fspot_photo_tags_v0_behavior_get_type (void) {
	static volatile gsize data_imports_fspot_db_fspot_photo_tags_v0_behavior_type_id__volatile = 0;
	if (g_once_init_enter (&data_imports_fspot_db_fspot_photo_tags_v0_behavior_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DataImportsFSpotDbFSpotPhotoTagsV0BehaviorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) data_imports_fspot_db_fspot_photo_tags_v0_behavior_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DataImportsFSpotDbFSpotPhotoTagsV0Behavior), 0, (GInstanceInitFunc) data_imports_fspot_db_fspot_photo_tags_v0_behavior_instance_init, NULL };
		static const GInterfaceInfo data_imports_fspot_db_fspot_table_behavior_info = { (GInterfaceInitFunc) data_imports_fspot_db_fspot_photo_tags_v0_behavior_data_imports_fspot_db_fspot_table_behavior_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType data_imports_fspot_db_fspot_photo_tags_v0_behavior_type_id;
		data_imports_fspot_db_fspot_photo_tags_v0_behavior_type_id = g_type_register_static (G_TYPE_OBJECT, "DataImportsFSpotDbFSpotPhotoTagsV0Behavior", &g_define_type_info, 0);
		g_type_add_interface_static (data_imports_fspot_db_fspot_photo_tags_v0_behavior_type_id, DATA_IMPORTS_FSPOT_DB_TYPE_FSPOT_TABLE_BEHAVIOR, &data_imports_fspot_db_fspot_table_behavior_info);
		g_once_init_leave (&data_imports_fspot_db_fspot_photo_tags_v0_behavior_type_id__volatile, data_imports_fspot_db_fspot_photo_tags_v0_behavior_type_id);
	}
	return data_imports_fspot_db_fspot_photo_tags_v0_behavior_type_id__volatile;
}



