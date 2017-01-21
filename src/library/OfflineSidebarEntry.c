/* OfflineSidebarEntry.c generated by valac 0.34.4, the Vala compiler
 * generated from OfflineSidebarEntry.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <gee.h>
#include <glib/gi18n-lib.h>


#define SIDEBAR_TYPE_ENTRY (sidebar_entry_get_type ())
#define SIDEBAR_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_ENTRY, SidebarEntry))
#define SIDEBAR_IS_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_ENTRY))
#define SIDEBAR_ENTRY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_ENTRY, SidebarEntryIface))

typedef struct _SidebarEntry SidebarEntry;
typedef struct _SidebarEntryIface SidebarEntryIface;

#define SIDEBAR_TYPE_TREE (sidebar_tree_get_type ())
#define SIDEBAR_TREE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_TREE, SidebarTree))
#define SIDEBAR_TREE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SIDEBAR_TYPE_TREE, SidebarTreeClass))
#define SIDEBAR_IS_TREE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_TREE))
#define SIDEBAR_IS_TREE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SIDEBAR_TYPE_TREE))
#define SIDEBAR_TREE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SIDEBAR_TYPE_TREE, SidebarTreeClass))

typedef struct _SidebarTree SidebarTree;
typedef struct _SidebarTreeClass SidebarTreeClass;

#define SIDEBAR_TYPE_SELECTABLE_ENTRY (sidebar_selectable_entry_get_type ())
#define SIDEBAR_SELECTABLE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_SELECTABLE_ENTRY, SidebarSelectableEntry))
#define SIDEBAR_IS_SELECTABLE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_SELECTABLE_ENTRY))
#define SIDEBAR_SELECTABLE_ENTRY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_SELECTABLE_ENTRY, SidebarSelectableEntryIface))

typedef struct _SidebarSelectableEntry SidebarSelectableEntry;
typedef struct _SidebarSelectableEntryIface SidebarSelectableEntryIface;

#define SIDEBAR_TYPE_PAGE_REPRESENTATIVE (sidebar_page_representative_get_type ())
#define SIDEBAR_PAGE_REPRESENTATIVE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_PAGE_REPRESENTATIVE, SidebarPageRepresentative))
#define SIDEBAR_IS_PAGE_REPRESENTATIVE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_PAGE_REPRESENTATIVE))
#define SIDEBAR_PAGE_REPRESENTATIVE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_PAGE_REPRESENTATIVE, SidebarPageRepresentativeIface))

typedef struct _SidebarPageRepresentative SidebarPageRepresentative;
typedef struct _SidebarPageRepresentativeIface SidebarPageRepresentativeIface;

#define TYPE_PAGE (page_get_type ())
#define PAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PAGE, Page))
#define PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PAGE, PageClass))
#define IS_PAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PAGE))
#define IS_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PAGE))
#define PAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PAGE, PageClass))

typedef struct _Page Page;
typedef struct _PageClass PageClass;

#define SIDEBAR_TYPE_CONTEXTABLE (sidebar_contextable_get_type ())
#define SIDEBAR_CONTEXTABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_CONTEXTABLE, SidebarContextable))
#define SIDEBAR_IS_CONTEXTABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_CONTEXTABLE))
#define SIDEBAR_CONTEXTABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_CONTEXTABLE, SidebarContextableIface))

typedef struct _SidebarContextable SidebarContextable;
typedef struct _SidebarContextableIface SidebarContextableIface;

#define SIDEBAR_TYPE_SIMPLE_PAGE_ENTRY (sidebar_simple_page_entry_get_type ())
#define SIDEBAR_SIMPLE_PAGE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_SIMPLE_PAGE_ENTRY, SidebarSimplePageEntry))
#define SIDEBAR_SIMPLE_PAGE_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SIDEBAR_TYPE_SIMPLE_PAGE_ENTRY, SidebarSimplePageEntryClass))
#define SIDEBAR_IS_SIMPLE_PAGE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_SIMPLE_PAGE_ENTRY))
#define SIDEBAR_IS_SIMPLE_PAGE_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SIDEBAR_TYPE_SIMPLE_PAGE_ENTRY))
#define SIDEBAR_SIMPLE_PAGE_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SIDEBAR_TYPE_SIMPLE_PAGE_ENTRY, SidebarSimplePageEntryClass))

typedef struct _SidebarSimplePageEntry SidebarSimplePageEntry;
typedef struct _SidebarSimplePageEntryClass SidebarSimplePageEntryClass;
typedef struct _SidebarSimplePageEntryPrivate SidebarSimplePageEntryPrivate;

#define LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY (library_hideable_page_entry_get_type ())
#define LIBRARY_HIDEABLE_PAGE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY, LibraryHideablePageEntry))
#define LIBRARY_HIDEABLE_PAGE_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY, LibraryHideablePageEntryClass))
#define LIBRARY_IS_HIDEABLE_PAGE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY))
#define LIBRARY_IS_HIDEABLE_PAGE_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY))
#define LIBRARY_HIDEABLE_PAGE_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY, LibraryHideablePageEntryClass))

typedef struct _LibraryHideablePageEntry LibraryHideablePageEntry;
typedef struct _LibraryHideablePageEntryClass LibraryHideablePageEntryClass;
typedef struct _LibraryHideablePageEntryPrivate LibraryHideablePageEntryPrivate;

#define LIBRARY_TYPE_OFFLINE_SIDEBAR_ENTRY (library_offline_sidebar_entry_get_type ())
#define LIBRARY_OFFLINE_SIDEBAR_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LIBRARY_TYPE_OFFLINE_SIDEBAR_ENTRY, LibraryOfflineSidebarEntry))
#define LIBRARY_OFFLINE_SIDEBAR_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LIBRARY_TYPE_OFFLINE_SIDEBAR_ENTRY, LibraryOfflineSidebarEntryClass))
#define LIBRARY_IS_OFFLINE_SIDEBAR_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LIBRARY_TYPE_OFFLINE_SIDEBAR_ENTRY))
#define LIBRARY_IS_OFFLINE_SIDEBAR_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LIBRARY_TYPE_OFFLINE_SIDEBAR_ENTRY))
#define LIBRARY_OFFLINE_SIDEBAR_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LIBRARY_TYPE_OFFLINE_SIDEBAR_ENTRY, LibraryOfflineSidebarEntryClass))

typedef struct _LibraryOfflineSidebarEntry LibraryOfflineSidebarEntry;
typedef struct _LibraryOfflineSidebarEntryClass LibraryOfflineSidebarEntryClass;
typedef struct _LibraryOfflineSidebarEntryPrivate LibraryOfflineSidebarEntryPrivate;

#define TYPE_DATA_COLLECTION (data_collection_get_type ())
#define DATA_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DATA_COLLECTION, DataCollection))
#define DATA_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DATA_COLLECTION, DataCollectionClass))
#define IS_DATA_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DATA_COLLECTION))
#define IS_DATA_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DATA_COLLECTION))
#define DATA_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DATA_COLLECTION, DataCollectionClass))

typedef struct _DataCollection DataCollection;
typedef struct _DataCollectionClass DataCollectionClass;

#define TYPE_SOURCE_COLLECTION (source_collection_get_type ())
#define SOURCE_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SOURCE_COLLECTION, SourceCollection))
#define SOURCE_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SOURCE_COLLECTION, SourceCollectionClass))
#define IS_SOURCE_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SOURCE_COLLECTION))
#define IS_SOURCE_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SOURCE_COLLECTION))
#define SOURCE_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SOURCE_COLLECTION, SourceCollectionClass))

typedef struct _SourceCollection SourceCollection;
typedef struct _SourceCollectionClass SourceCollectionClass;

#define TYPE_DATABASE_SOURCE_COLLECTION (database_source_collection_get_type ())
#define DATABASE_SOURCE_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DATABASE_SOURCE_COLLECTION, DatabaseSourceCollection))
#define DATABASE_SOURCE_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DATABASE_SOURCE_COLLECTION, DatabaseSourceCollectionClass))
#define IS_DATABASE_SOURCE_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DATABASE_SOURCE_COLLECTION))
#define IS_DATABASE_SOURCE_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DATABASE_SOURCE_COLLECTION))
#define DATABASE_SOURCE_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DATABASE_SOURCE_COLLECTION, DatabaseSourceCollectionClass))

typedef struct _DatabaseSourceCollection DatabaseSourceCollection;
typedef struct _DatabaseSourceCollectionClass DatabaseSourceCollectionClass;

#define TYPE_MEDIA_SOURCE_COLLECTION (media_source_collection_get_type ())
#define MEDIA_SOURCE_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MEDIA_SOURCE_COLLECTION, MediaSourceCollection))
#define MEDIA_SOURCE_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MEDIA_SOURCE_COLLECTION, MediaSourceCollectionClass))
#define IS_MEDIA_SOURCE_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MEDIA_SOURCE_COLLECTION))
#define IS_MEDIA_SOURCE_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MEDIA_SOURCE_COLLECTION))
#define MEDIA_SOURCE_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MEDIA_SOURCE_COLLECTION, MediaSourceCollectionClass))

typedef struct _MediaSourceCollection MediaSourceCollection;
typedef struct _MediaSourceCollectionClass MediaSourceCollectionClass;

#define TYPE_MEDIA_COLLECTION_REGISTRY (media_collection_registry_get_type ())
#define MEDIA_COLLECTION_REGISTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MEDIA_COLLECTION_REGISTRY, MediaCollectionRegistry))
#define MEDIA_COLLECTION_REGISTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MEDIA_COLLECTION_REGISTRY, MediaCollectionRegistryClass))
#define IS_MEDIA_COLLECTION_REGISTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MEDIA_COLLECTION_REGISTRY))
#define IS_MEDIA_COLLECTION_REGISTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MEDIA_COLLECTION_REGISTRY))
#define MEDIA_COLLECTION_REGISTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MEDIA_COLLECTION_REGISTRY, MediaCollectionRegistryClass))

typedef struct _MediaCollectionRegistry MediaCollectionRegistry;
typedef struct _MediaCollectionRegistryClass MediaCollectionRegistryClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _media_collection_registry_unref0(var) ((var == NULL) ? NULL : (var = (media_collection_registry_unref (var), NULL)))

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

#define TYPE_THUMBNAIL_SOURCE (thumbnail_source_get_type ())
#define THUMBNAIL_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_THUMBNAIL_SOURCE, ThumbnailSource))
#define THUMBNAIL_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_THUMBNAIL_SOURCE, ThumbnailSourceClass))
#define IS_THUMBNAIL_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_THUMBNAIL_SOURCE))
#define IS_THUMBNAIL_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_THUMBNAIL_SOURCE))
#define THUMBNAIL_SOURCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_THUMBNAIL_SOURCE, ThumbnailSourceClass))

typedef struct _ThumbnailSource ThumbnailSource;
typedef struct _ThumbnailSourceClass ThumbnailSourceClass;

#define TYPE_MEDIA_SOURCE (media_source_get_type ())
#define MEDIA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MEDIA_SOURCE, MediaSource))
#define MEDIA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MEDIA_SOURCE, MediaSourceClass))
#define IS_MEDIA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MEDIA_SOURCE))
#define IS_MEDIA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MEDIA_SOURCE))
#define MEDIA_SOURCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MEDIA_SOURCE, MediaSourceClass))

typedef struct _MediaSource MediaSource;
typedef struct _MediaSourceClass MediaSourceClass;
#define _data_collection_unref0(var) ((var == NULL) ? NULL : (var = (data_collection_unref (var), NULL)))

#define TYPE_CHECKERBOARD_PAGE (checkerboard_page_get_type ())
#define CHECKERBOARD_PAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CHECKERBOARD_PAGE, CheckerboardPage))
#define CHECKERBOARD_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CHECKERBOARD_PAGE, CheckerboardPageClass))
#define IS_CHECKERBOARD_PAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CHECKERBOARD_PAGE))
#define IS_CHECKERBOARD_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CHECKERBOARD_PAGE))
#define CHECKERBOARD_PAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CHECKERBOARD_PAGE, CheckerboardPageClass))

typedef struct _CheckerboardPage CheckerboardPage;
typedef struct _CheckerboardPageClass CheckerboardPageClass;

#define TYPE_OFFLINE_PAGE (offline_page_get_type ())
#define OFFLINE_PAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_OFFLINE_PAGE, OfflinePage))
#define OFFLINE_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_OFFLINE_PAGE, OfflinePageClass))
#define IS_OFFLINE_PAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_OFFLINE_PAGE))
#define IS_OFFLINE_PAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_OFFLINE_PAGE))
#define OFFLINE_PAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_OFFLINE_PAGE, OfflinePageClass))

typedef struct _OfflinePage OfflinePage;
typedef struct _OfflinePageClass OfflinePageClass;

struct _SidebarEntryIface {
	GTypeInterface parent_iface;
	gchar* (*get_sidebar_name) (SidebarEntry* self);
	gchar* (*get_sidebar_tooltip) (SidebarEntry* self);
	gchar* (*get_sidebar_icon) (SidebarEntry* self);
	gchar* (*to_string) (SidebarEntry* self);
	void (*grafted) (SidebarEntry* self, SidebarTree* tree);
	void (*pruned) (SidebarEntry* self, SidebarTree* tree);
};

struct _SidebarSelectableEntryIface {
	GTypeInterface parent_iface;
};

struct _SidebarPageRepresentativeIface {
	GTypeInterface parent_iface;
	gboolean (*has_page) (SidebarPageRepresentative* self);
	Page* (*get_page) (SidebarPageRepresentative* self);
};

struct _SidebarContextableIface {
	GTypeInterface parent_iface;
	GtkMenu* (*get_sidebar_context_menu) (SidebarContextable* self, GdkEventButton* event);
};

struct _SidebarSimplePageEntry {
	GObject parent_instance;
	SidebarSimplePageEntryPrivate * priv;
};

struct _SidebarSimplePageEntryClass {
	GObjectClass parent_class;
	gchar* (*get_sidebar_name) (SidebarSimplePageEntry* self);
	gchar* (*get_sidebar_tooltip) (SidebarSimplePageEntry* self);
	gchar* (*get_sidebar_icon) (SidebarSimplePageEntry* self);
	gchar* (*to_string) (SidebarSimplePageEntry* self);
	Page* (*create_page) (SidebarSimplePageEntry* self);
};

struct _LibraryHideablePageEntry {
	SidebarSimplePageEntry parent_instance;
	LibraryHideablePageEntryPrivate * priv;
};

struct _LibraryHideablePageEntryClass {
	SidebarSimplePageEntryClass parent_class;
};

struct _LibraryOfflineSidebarEntry {
	LibraryHideablePageEntry parent_instance;
	LibraryOfflineSidebarEntryPrivate * priv;
};

struct _LibraryOfflineSidebarEntryClass {
	LibraryHideablePageEntryClass parent_class;
};


static gpointer library_offline_sidebar_entry_parent_class = NULL;

GType sidebar_tree_get_type (void) G_GNUC_CONST;
GType sidebar_entry_get_type (void) G_GNUC_CONST;
GType sidebar_selectable_entry_get_type (void) G_GNUC_CONST;
GType page_get_type (void) G_GNUC_CONST;
GType sidebar_page_representative_get_type (void) G_GNUC_CONST;
GType sidebar_contextable_get_type (void) G_GNUC_CONST;
GType sidebar_simple_page_entry_get_type (void) G_GNUC_CONST;
GType library_hideable_page_entry_get_type (void) G_GNUC_CONST;
GType library_offline_sidebar_entry_get_type (void) G_GNUC_CONST;
enum  {
	LIBRARY_OFFLINE_SIDEBAR_ENTRY_DUMMY_PROPERTY
};
gpointer data_collection_ref (gpointer instance);
void data_collection_unref (gpointer instance);
GParamSpec* param_spec_data_collection (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_data_collection (GValue* value, gpointer v_object);
void value_take_data_collection (GValue* value, gpointer v_object);
gpointer value_get_data_collection (const GValue* value);
GType data_collection_get_type (void) G_GNUC_CONST;
GType source_collection_get_type (void) G_GNUC_CONST;
GType database_source_collection_get_type (void) G_GNUC_CONST;
GType media_source_collection_get_type (void) G_GNUC_CONST;
gpointer media_collection_registry_ref (gpointer instance);
void media_collection_registry_unref (gpointer instance);
GParamSpec* param_spec_media_collection_registry (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_media_collection_registry (GValue* value, gpointer v_object);
void value_take_media_collection_registry (GValue* value, gpointer v_object);
gpointer value_get_media_collection_registry (const GValue* value);
GType media_collection_registry_get_type (void) G_GNUC_CONST;
MediaCollectionRegistry* media_collection_registry_get_instance (void);
GeeCollection* media_collection_registry_get_all (MediaCollectionRegistry* self);
static void library_offline_sidebar_entry_on_offline_contents_altered (LibraryOfflineSidebarEntry* self);
GType data_object_get_type (void) G_GNUC_CONST;
GType data_source_get_type (void) G_GNUC_CONST;
GType thumbnail_source_get_type (void) G_GNUC_CONST;
GType media_source_get_type (void) G_GNUC_CONST;
static void _library_offline_sidebar_entry_on_offline_contents_altered_media_source_collection_trashcan_contents_altered (MediaSourceCollection* _sender, GeeCollection* added, GeeCollection* removed, gpointer self);
LibraryOfflineSidebarEntry* library_offline_sidebar_entry_new (void);
LibraryOfflineSidebarEntry* library_offline_sidebar_entry_construct (GType object_type);
LibraryHideablePageEntry* library_hideable_page_entry_construct (GType object_type);
static void _library_offline_sidebar_entry_on_offline_contents_altered_media_source_collection_offline_contents_altered (MediaSourceCollection* _sender, GeeCollection* added, GeeCollection* removed, gpointer self);
static gint library_offline_sidebar_entry_get_total_offline (LibraryOfflineSidebarEntry* self);
void library_hideable_page_entry_set_visible (LibraryHideablePageEntry* self, gboolean value);
GeeCollection* media_source_collection_get_offline_bin_contents (MediaSourceCollection* self);
static gchar* library_offline_sidebar_entry_real_get_sidebar_name (SidebarSimplePageEntry* base);
#define OFFLINE_PAGE_NAME _ ("Missing Files")
static gchar* library_offline_sidebar_entry_real_get_sidebar_icon (SidebarSimplePageEntry* base);
#define RESOURCES_ICON_MISSING_FILES "process-stop"
static Page* library_offline_sidebar_entry_real_create_page (SidebarSimplePageEntry* base);
OfflinePage* offline_page_new (void);
OfflinePage* offline_page_construct (GType object_type);
GType checkerboard_page_get_type (void) G_GNUC_CONST;
GType offline_page_get_type (void) G_GNUC_CONST;
static void library_offline_sidebar_entry_finalize (GObject* obj);


static void _library_offline_sidebar_entry_on_offline_contents_altered_media_source_collection_trashcan_contents_altered (MediaSourceCollection* _sender, GeeCollection* added, GeeCollection* removed, gpointer self) {
#line 18 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	library_offline_sidebar_entry_on_offline_contents_altered ((LibraryOfflineSidebarEntry*) self);
#line 338 "OfflineSidebarEntry.c"
}


static void _library_offline_sidebar_entry_on_offline_contents_altered_media_source_collection_offline_contents_altered (MediaSourceCollection* _sender, GeeCollection* added, GeeCollection* removed, gpointer self) {
#line 11 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	library_offline_sidebar_entry_on_offline_contents_altered ((LibraryOfflineSidebarEntry*) self);
#line 345 "OfflineSidebarEntry.c"
}


LibraryOfflineSidebarEntry* library_offline_sidebar_entry_construct (GType object_type) {
	LibraryOfflineSidebarEntry * self = NULL;
	gint _tmp11_ = 0;
#line 8 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	self = (LibraryOfflineSidebarEntry*) library_hideable_page_entry_construct (object_type);
#line 354 "OfflineSidebarEntry.c"
	{
		GeeIterator* _media_sources_it = NULL;
		MediaCollectionRegistry* _tmp0_ = NULL;
		MediaCollectionRegistry* _tmp1_ = NULL;
		GeeCollection* _tmp2_ = NULL;
		GeeCollection* _tmp3_ = NULL;
		GeeIterator* _tmp4_ = NULL;
		GeeIterator* _tmp5_ = NULL;
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp0_ = media_collection_registry_get_instance ();
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp1_ = _tmp0_;
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp2_ = media_collection_registry_get_all (_tmp1_);
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp3_ = _tmp2_;
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp4_ = gee_iterable_iterator (G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, GEE_TYPE_ITERABLE, GeeIterable));
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp5_ = _tmp4_;
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_g_object_unref0 (_tmp3_);
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_media_collection_registry_unref0 (_tmp1_);
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_media_sources_it = _tmp5_;
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		while (TRUE) {
#line 383 "OfflineSidebarEntry.c"
			GeeIterator* _tmp6_ = NULL;
			gboolean _tmp7_ = FALSE;
			MediaSourceCollection* media_sources = NULL;
			GeeIterator* _tmp8_ = NULL;
			gpointer _tmp9_ = NULL;
			MediaSourceCollection* _tmp10_ = NULL;
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp6_ = _media_sources_it;
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp7_ = gee_iterator_next (_tmp6_);
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			if (!_tmp7_) {
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
				break;
#line 398 "OfflineSidebarEntry.c"
			}
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp8_ = _media_sources_it;
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp9_ = gee_iterator_get (_tmp8_);
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			media_sources = (MediaSourceCollection*) _tmp9_;
#line 11 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp10_ = media_sources;
#line 11 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			g_signal_connect_object (_tmp10_, "offline-contents-altered", (GCallback) _library_offline_sidebar_entry_on_offline_contents_altered_media_source_collection_offline_contents_altered, self, 0);
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_data_collection_unref0 (media_sources);
#line 412 "OfflineSidebarEntry.c"
		}
#line 10 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_g_object_unref0 (_media_sources_it);
#line 416 "OfflineSidebarEntry.c"
	}
#line 13 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	_tmp11_ = library_offline_sidebar_entry_get_total_offline (self);
#line 13 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	library_hideable_page_entry_set_visible (G_TYPE_CHECK_INSTANCE_CAST (self, LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY, LibraryHideablePageEntry), _tmp11_ != 0);
#line 8 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	return self;
#line 424 "OfflineSidebarEntry.c"
}


LibraryOfflineSidebarEntry* library_offline_sidebar_entry_new (void) {
#line 8 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	return library_offline_sidebar_entry_construct (LIBRARY_TYPE_OFFLINE_SIDEBAR_ENTRY);
#line 431 "OfflineSidebarEntry.c"
}


static void library_offline_sidebar_entry_on_offline_contents_altered (LibraryOfflineSidebarEntry* self) {
	gint _tmp0_ = 0;
#line 21 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	g_return_if_fail (LIBRARY_IS_OFFLINE_SIDEBAR_ENTRY (self));
#line 22 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	_tmp0_ = library_offline_sidebar_entry_get_total_offline (self);
#line 22 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	library_hideable_page_entry_set_visible (G_TYPE_CHECK_INSTANCE_CAST (self, LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY, LibraryHideablePageEntry), _tmp0_ != 0);
#line 443 "OfflineSidebarEntry.c"
}


static gint library_offline_sidebar_entry_get_total_offline (LibraryOfflineSidebarEntry* self) {
	gint result = 0;
	gint total = 0;
#line 25 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	g_return_val_if_fail (LIBRARY_IS_OFFLINE_SIDEBAR_ENTRY (self), 0);
#line 26 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	total = 0;
#line 454 "OfflineSidebarEntry.c"
	{
		GeeIterator* _media_sources_it = NULL;
		MediaCollectionRegistry* _tmp0_ = NULL;
		MediaCollectionRegistry* _tmp1_ = NULL;
		GeeCollection* _tmp2_ = NULL;
		GeeCollection* _tmp3_ = NULL;
		GeeIterator* _tmp4_ = NULL;
		GeeIterator* _tmp5_ = NULL;
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp0_ = media_collection_registry_get_instance ();
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp1_ = _tmp0_;
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp2_ = media_collection_registry_get_all (_tmp1_);
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp3_ = _tmp2_;
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp4_ = gee_iterable_iterator (G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, GEE_TYPE_ITERABLE, GeeIterable));
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp5_ = _tmp4_;
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_g_object_unref0 (_tmp3_);
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_media_collection_registry_unref0 (_tmp1_);
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_media_sources_it = _tmp5_;
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		while (TRUE) {
#line 483 "OfflineSidebarEntry.c"
			GeeIterator* _tmp6_ = NULL;
			gboolean _tmp7_ = FALSE;
			MediaSourceCollection* media_sources = NULL;
			GeeIterator* _tmp8_ = NULL;
			gpointer _tmp9_ = NULL;
			gint _tmp10_ = 0;
			MediaSourceCollection* _tmp11_ = NULL;
			GeeCollection* _tmp12_ = NULL;
			GeeCollection* _tmp13_ = NULL;
			gint _tmp14_ = 0;
			gint _tmp15_ = 0;
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp6_ = _media_sources_it;
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp7_ = gee_iterator_next (_tmp6_);
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			if (!_tmp7_) {
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
				break;
#line 503 "OfflineSidebarEntry.c"
			}
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp8_ = _media_sources_it;
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp9_ = gee_iterator_get (_tmp8_);
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			media_sources = (MediaSourceCollection*) _tmp9_;
#line 28 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp10_ = total;
#line 28 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp11_ = media_sources;
#line 28 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp12_ = media_source_collection_get_offline_bin_contents (_tmp11_);
#line 28 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp13_ = _tmp12_;
#line 28 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp14_ = gee_collection_get_size (_tmp13_);
#line 28 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp15_ = _tmp14_;
#line 28 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			total = _tmp10_ + _tmp15_;
#line 28 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_g_object_unref0 (_tmp13_);
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_data_collection_unref0 (media_sources);
#line 529 "OfflineSidebarEntry.c"
		}
#line 27 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_g_object_unref0 (_media_sources_it);
#line 533 "OfflineSidebarEntry.c"
	}
#line 30 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	result = total;
#line 30 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	return result;
#line 539 "OfflineSidebarEntry.c"
}


static gchar* library_offline_sidebar_entry_real_get_sidebar_name (SidebarSimplePageEntry* base) {
	LibraryOfflineSidebarEntry * self;
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
#line 33 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, LIBRARY_TYPE_OFFLINE_SIDEBAR_ENTRY, LibraryOfflineSidebarEntry);
#line 34 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	_tmp0_ = g_strdup (OFFLINE_PAGE_NAME);
#line 34 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	result = _tmp0_;
#line 34 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	return result;
#line 555 "OfflineSidebarEntry.c"
}


static gchar* library_offline_sidebar_entry_real_get_sidebar_icon (SidebarSimplePageEntry* base) {
	LibraryOfflineSidebarEntry * self;
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
#line 37 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, LIBRARY_TYPE_OFFLINE_SIDEBAR_ENTRY, LibraryOfflineSidebarEntry);
#line 38 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	_tmp0_ = g_strdup (RESOURCES_ICON_MISSING_FILES);
#line 38 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	result = _tmp0_;
#line 38 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	return result;
#line 571 "OfflineSidebarEntry.c"
}


static Page* library_offline_sidebar_entry_real_create_page (SidebarSimplePageEntry* base) {
	LibraryOfflineSidebarEntry * self;
	Page* result = NULL;
	OfflinePage* _tmp0_ = NULL;
#line 41 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, LIBRARY_TYPE_OFFLINE_SIDEBAR_ENTRY, LibraryOfflineSidebarEntry);
#line 42 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	_tmp0_ = offline_page_new ();
#line 42 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	g_object_ref_sink (_tmp0_);
#line 42 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, TYPE_PAGE, Page);
#line 42 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	return result;
#line 589 "OfflineSidebarEntry.c"
}


static void library_offline_sidebar_entry_class_init (LibraryOfflineSidebarEntryClass * klass) {
#line 7 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	library_offline_sidebar_entry_parent_class = g_type_class_peek_parent (klass);
#line 7 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	((SidebarSimplePageEntryClass *) klass)->get_sidebar_name = library_offline_sidebar_entry_real_get_sidebar_name;
#line 7 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	((SidebarSimplePageEntryClass *) klass)->get_sidebar_icon = library_offline_sidebar_entry_real_get_sidebar_icon;
#line 7 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	((SidebarSimplePageEntryClass *) klass)->create_page = library_offline_sidebar_entry_real_create_page;
#line 7 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	G_OBJECT_CLASS (klass)->finalize = library_offline_sidebar_entry_finalize;
#line 604 "OfflineSidebarEntry.c"
}


static void library_offline_sidebar_entry_instance_init (LibraryOfflineSidebarEntry * self) {
}


static void library_offline_sidebar_entry_finalize (GObject* obj) {
	LibraryOfflineSidebarEntry * self;
#line 7 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, LIBRARY_TYPE_OFFLINE_SIDEBAR_ENTRY, LibraryOfflineSidebarEntry);
#line 616 "OfflineSidebarEntry.c"
	{
		GeeIterator* _media_sources_it = NULL;
		MediaCollectionRegistry* _tmp0_ = NULL;
		MediaCollectionRegistry* _tmp1_ = NULL;
		GeeCollection* _tmp2_ = NULL;
		GeeCollection* _tmp3_ = NULL;
		GeeIterator* _tmp4_ = NULL;
		GeeIterator* _tmp5_ = NULL;
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp0_ = media_collection_registry_get_instance ();
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp1_ = _tmp0_;
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp2_ = media_collection_registry_get_all (_tmp1_);
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp3_ = _tmp2_;
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp4_ = gee_iterable_iterator (G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, GEE_TYPE_ITERABLE, GeeIterable));
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_tmp5_ = _tmp4_;
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_g_object_unref0 (_tmp3_);
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_media_collection_registry_unref0 (_tmp1_);
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_media_sources_it = _tmp5_;
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		while (TRUE) {
#line 645 "OfflineSidebarEntry.c"
			GeeIterator* _tmp6_ = NULL;
			gboolean _tmp7_ = FALSE;
			MediaSourceCollection* media_sources = NULL;
			GeeIterator* _tmp8_ = NULL;
			gpointer _tmp9_ = NULL;
			MediaSourceCollection* _tmp10_ = NULL;
			guint _tmp11_ = 0U;
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp6_ = _media_sources_it;
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp7_ = gee_iterator_next (_tmp6_);
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			if (!_tmp7_) {
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
				break;
#line 661 "OfflineSidebarEntry.c"
			}
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp8_ = _media_sources_it;
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp9_ = gee_iterator_get (_tmp8_);
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			media_sources = (MediaSourceCollection*) _tmp9_;
#line 18 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_tmp10_ = media_sources;
#line 18 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			g_signal_parse_name ("trashcan-contents-altered", TYPE_MEDIA_SOURCE_COLLECTION, &_tmp11_, NULL, FALSE);
#line 18 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			g_signal_handlers_disconnect_matched (_tmp10_, G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA, _tmp11_, 0, NULL, (GCallback) _library_offline_sidebar_entry_on_offline_contents_altered_media_source_collection_trashcan_contents_altered, self);
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
			_data_collection_unref0 (media_sources);
#line 677 "OfflineSidebarEntry.c"
		}
#line 17 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
		_g_object_unref0 (_media_sources_it);
#line 681 "OfflineSidebarEntry.c"
	}
#line 7 "/home/jens/Source/shotwell/src/library/OfflineSidebarEntry.vala"
	G_OBJECT_CLASS (library_offline_sidebar_entry_parent_class)->finalize (obj);
#line 685 "OfflineSidebarEntry.c"
}


GType library_offline_sidebar_entry_get_type (void) {
	static volatile gsize library_offline_sidebar_entry_type_id__volatile = 0;
	if (g_once_init_enter (&library_offline_sidebar_entry_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LibraryOfflineSidebarEntryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) library_offline_sidebar_entry_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LibraryOfflineSidebarEntry), 0, (GInstanceInitFunc) library_offline_sidebar_entry_instance_init, NULL };
		GType library_offline_sidebar_entry_type_id;
		library_offline_sidebar_entry_type_id = g_type_register_static (LIBRARY_TYPE_HIDEABLE_PAGE_ENTRY, "LibraryOfflineSidebarEntry", &g_define_type_info, 0);
		g_once_init_leave (&library_offline_sidebar_entry_type_id__volatile, library_offline_sidebar_entry_type_id);
	}
	return library_offline_sidebar_entry_type_id__volatile;
}



