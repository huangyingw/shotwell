/* Entry.c generated by valac 0.36.6, the Vala compiler
 * generated from Entry.vala, do not modify */

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
#include <gee.h>


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
enum  {
	SIDEBAR_ENTRY_SIDEBAR_TOOLTIP_CHANGED_SIGNAL,
	SIDEBAR_ENTRY_SIDEBAR_ICON_CHANGED_SIGNAL,
	SIDEBAR_ENTRY_LAST_SIGNAL
};
static guint sidebar_entry_signals[SIDEBAR_ENTRY_LAST_SIGNAL] = {0};

#define SIDEBAR_TYPE_EXPANDABLE_ENTRY (sidebar_expandable_entry_get_type ())
#define SIDEBAR_EXPANDABLE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_EXPANDABLE_ENTRY, SidebarExpandableEntry))
#define SIDEBAR_IS_EXPANDABLE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_EXPANDABLE_ENTRY))
#define SIDEBAR_EXPANDABLE_ENTRY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_EXPANDABLE_ENTRY, SidebarExpandableEntryIface))

typedef struct _SidebarExpandableEntry SidebarExpandableEntry;
typedef struct _SidebarExpandableEntryIface SidebarExpandableEntryIface;

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
enum  {
	SIDEBAR_PAGE_REPRESENTATIVE_PAGE_CREATED_SIGNAL,
	SIDEBAR_PAGE_REPRESENTATIVE_DESTROYING_PAGE_SIGNAL,
	SIDEBAR_PAGE_REPRESENTATIVE_LAST_SIGNAL
};
static guint sidebar_page_representative_signals[SIDEBAR_PAGE_REPRESENTATIVE_LAST_SIGNAL] = {0};

#define SIDEBAR_TYPE_RENAMEABLE_ENTRY (sidebar_renameable_entry_get_type ())
#define SIDEBAR_RENAMEABLE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_RENAMEABLE_ENTRY, SidebarRenameableEntry))
#define SIDEBAR_IS_RENAMEABLE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_RENAMEABLE_ENTRY))
#define SIDEBAR_RENAMEABLE_ENTRY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_RENAMEABLE_ENTRY, SidebarRenameableEntryIface))

typedef struct _SidebarRenameableEntry SidebarRenameableEntry;
typedef struct _SidebarRenameableEntryIface SidebarRenameableEntryIface;
enum  {
	SIDEBAR_RENAMEABLE_ENTRY_SIDEBAR_NAME_CHANGED_SIGNAL,
	SIDEBAR_RENAMEABLE_ENTRY_LAST_SIGNAL
};
static guint sidebar_renameable_entry_signals[SIDEBAR_RENAMEABLE_ENTRY_LAST_SIGNAL] = {0};

#define SIDEBAR_TYPE_EMPHASIZABLE_ENTRY (sidebar_emphasizable_entry_get_type ())
#define SIDEBAR_EMPHASIZABLE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_EMPHASIZABLE_ENTRY, SidebarEmphasizableEntry))
#define SIDEBAR_IS_EMPHASIZABLE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_EMPHASIZABLE_ENTRY))
#define SIDEBAR_EMPHASIZABLE_ENTRY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_EMPHASIZABLE_ENTRY, SidebarEmphasizableEntryIface))

typedef struct _SidebarEmphasizableEntry SidebarEmphasizableEntry;
typedef struct _SidebarEmphasizableEntryIface SidebarEmphasizableEntryIface;
enum  {
	SIDEBAR_EMPHASIZABLE_ENTRY_IS_EMPHASIZED_CHANGED_SIGNAL,
	SIDEBAR_EMPHASIZABLE_ENTRY_LAST_SIGNAL
};
static guint sidebar_emphasizable_entry_signals[SIDEBAR_EMPHASIZABLE_ENTRY_LAST_SIGNAL] = {0};

#define SIDEBAR_TYPE_DESTROYABLE_ENTRY (sidebar_destroyable_entry_get_type ())
#define SIDEBAR_DESTROYABLE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_DESTROYABLE_ENTRY, SidebarDestroyableEntry))
#define SIDEBAR_IS_DESTROYABLE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_DESTROYABLE_ENTRY))
#define SIDEBAR_DESTROYABLE_ENTRY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_DESTROYABLE_ENTRY, SidebarDestroyableEntryIface))

typedef struct _SidebarDestroyableEntry SidebarDestroyableEntry;
typedef struct _SidebarDestroyableEntryIface SidebarDestroyableEntryIface;

#define SIDEBAR_TYPE_INTERNAL_DROP_TARGET_ENTRY (sidebar_internal_drop_target_entry_get_type ())
#define SIDEBAR_INTERNAL_DROP_TARGET_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_INTERNAL_DROP_TARGET_ENTRY, SidebarInternalDropTargetEntry))
#define SIDEBAR_IS_INTERNAL_DROP_TARGET_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_INTERNAL_DROP_TARGET_ENTRY))
#define SIDEBAR_INTERNAL_DROP_TARGET_ENTRY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_INTERNAL_DROP_TARGET_ENTRY, SidebarInternalDropTargetEntryIface))

typedef struct _SidebarInternalDropTargetEntry SidebarInternalDropTargetEntry;
typedef struct _SidebarInternalDropTargetEntryIface SidebarInternalDropTargetEntryIface;

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

#define SIDEBAR_TYPE_INTERNAL_DRAG_SOURCE_ENTRY (sidebar_internal_drag_source_entry_get_type ())
#define SIDEBAR_INTERNAL_DRAG_SOURCE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SIDEBAR_TYPE_INTERNAL_DRAG_SOURCE_ENTRY, SidebarInternalDragSourceEntry))
#define SIDEBAR_IS_INTERNAL_DRAG_SOURCE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SIDEBAR_TYPE_INTERNAL_DRAG_SOURCE_ENTRY))
#define SIDEBAR_INTERNAL_DRAG_SOURCE_ENTRY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), SIDEBAR_TYPE_INTERNAL_DRAG_SOURCE_ENTRY, SidebarInternalDragSourceEntryIface))

typedef struct _SidebarInternalDragSourceEntry SidebarInternalDragSourceEntry;
typedef struct _SidebarInternalDragSourceEntryIface SidebarInternalDragSourceEntryIface;

struct _SidebarEntryIface {
	GTypeInterface parent_iface;
	gchar* (*get_sidebar_name) (SidebarEntry* self);
	gchar* (*get_sidebar_tooltip) (SidebarEntry* self);
	gchar* (*get_sidebar_icon) (SidebarEntry* self);
	gchar* (*to_string) (SidebarEntry* self);
	void (*grafted) (SidebarEntry* self, SidebarTree* tree);
	void (*pruned) (SidebarEntry* self, SidebarTree* tree);
};

struct _SidebarExpandableEntryIface {
	GTypeInterface parent_iface;
	gboolean (*expand_on_select) (SidebarExpandableEntry* self);
};

struct _SidebarSelectableEntryIface {
	GTypeInterface parent_iface;
};

struct _SidebarPageRepresentativeIface {
	GTypeInterface parent_iface;
	gboolean (*has_page) (SidebarPageRepresentative* self);
	Page* (*get_page) (SidebarPageRepresentative* self);
};

struct _SidebarRenameableEntryIface {
	GTypeInterface parent_iface;
	void (*rename) (SidebarRenameableEntry* self, const gchar* new_name);
	gboolean (*is_user_renameable) (SidebarRenameableEntry* self);
};

struct _SidebarEmphasizableEntryIface {
	GTypeInterface parent_iface;
	gboolean (*is_emphasized) (SidebarEmphasizableEntry* self);
};

struct _SidebarDestroyableEntryIface {
	GTypeInterface parent_iface;
	void (*destroy_source) (SidebarDestroyableEntry* self);
};

struct _SidebarInternalDropTargetEntryIface {
	GTypeInterface parent_iface;
	gboolean (*internal_drop_received) (SidebarInternalDropTargetEntry* self, GeeList* sources);
	gboolean (*internal_drop_received_arbitrary) (SidebarInternalDropTargetEntry* self, GtkSelectionData* data);
};

struct _SidebarInternalDragSourceEntryIface {
	GTypeInterface parent_iface;
	void (*prepare_selection_data) (SidebarInternalDragSourceEntry* self, GtkSelectionData* data);
};



GType sidebar_tree_get_type (void) G_GNUC_CONST;
GType sidebar_entry_get_type (void) G_GNUC_CONST;
gchar* sidebar_entry_get_sidebar_name (SidebarEntry* self);
gchar* sidebar_entry_get_sidebar_tooltip (SidebarEntry* self);
gchar* sidebar_entry_get_sidebar_icon (SidebarEntry* self);
gchar* sidebar_entry_to_string (SidebarEntry* self);
void sidebar_entry_grafted (SidebarEntry* self, SidebarTree* tree);
static void sidebar_entry_real_grafted (SidebarEntry* self, SidebarTree* tree);
void sidebar_entry_pruned (SidebarEntry* self, SidebarTree* tree);
static void sidebar_entry_real_pruned (SidebarEntry* self, SidebarTree* tree);
GType sidebar_expandable_entry_get_type (void) G_GNUC_CONST;
gboolean sidebar_expandable_entry_expand_on_select (SidebarExpandableEntry* self);
GType sidebar_selectable_entry_get_type (void) G_GNUC_CONST;
GType page_get_type (void) G_GNUC_CONST;
GType sidebar_page_representative_get_type (void) G_GNUC_CONST;
gboolean sidebar_page_representative_has_page (SidebarPageRepresentative* self);
Page* sidebar_page_representative_get_page (SidebarPageRepresentative* self);
GType sidebar_renameable_entry_get_type (void) G_GNUC_CONST;
void sidebar_renameable_entry_rename (SidebarRenameableEntry* self, const gchar* new_name);
gboolean sidebar_renameable_entry_is_user_renameable (SidebarRenameableEntry* self);
GType sidebar_emphasizable_entry_get_type (void) G_GNUC_CONST;
gboolean sidebar_emphasizable_entry_is_emphasized (SidebarEmphasizableEntry* self);
GType sidebar_destroyable_entry_get_type (void) G_GNUC_CONST;
void sidebar_destroyable_entry_destroy_source (SidebarDestroyableEntry* self);
GType data_object_get_type (void) G_GNUC_CONST;
GType data_source_get_type (void) G_GNUC_CONST;
GType thumbnail_source_get_type (void) G_GNUC_CONST;
GType media_source_get_type (void) G_GNUC_CONST;
GType sidebar_internal_drop_target_entry_get_type (void) G_GNUC_CONST;
gboolean sidebar_internal_drop_target_entry_internal_drop_received (SidebarInternalDropTargetEntry* self, GeeList* sources);
gboolean sidebar_internal_drop_target_entry_internal_drop_received_arbitrary (SidebarInternalDropTargetEntry* self, GtkSelectionData* data);
GType sidebar_internal_drag_source_entry_get_type (void) G_GNUC_CONST;
void sidebar_internal_drag_source_entry_prepare_selection_data (SidebarInternalDragSourceEntry* self, GtkSelectionData* data);


gchar* sidebar_entry_get_sidebar_name (SidebarEntry* self) {
#line 12 "/shotwell/src/sidebar/Entry.vala"
	g_return_val_if_fail (SIDEBAR_IS_ENTRY (self), NULL);
#line 12 "/shotwell/src/sidebar/Entry.vala"
	return SIDEBAR_ENTRY_GET_INTERFACE (self)->get_sidebar_name (self);
#line 267 "Entry.c"
}


gchar* sidebar_entry_get_sidebar_tooltip (SidebarEntry* self) {
#line 14 "/shotwell/src/sidebar/Entry.vala"
	g_return_val_if_fail (SIDEBAR_IS_ENTRY (self), NULL);
#line 14 "/shotwell/src/sidebar/Entry.vala"
	return SIDEBAR_ENTRY_GET_INTERFACE (self)->get_sidebar_tooltip (self);
#line 276 "Entry.c"
}


gchar* sidebar_entry_get_sidebar_icon (SidebarEntry* self) {
#line 16 "/shotwell/src/sidebar/Entry.vala"
	g_return_val_if_fail (SIDEBAR_IS_ENTRY (self), NULL);
#line 16 "/shotwell/src/sidebar/Entry.vala"
	return SIDEBAR_ENTRY_GET_INTERFACE (self)->get_sidebar_icon (self);
#line 285 "Entry.c"
}


gchar* sidebar_entry_to_string (SidebarEntry* self) {
#line 18 "/shotwell/src/sidebar/Entry.vala"
	g_return_val_if_fail (SIDEBAR_IS_ENTRY (self), NULL);
#line 18 "/shotwell/src/sidebar/Entry.vala"
	return SIDEBAR_ENTRY_GET_INTERFACE (self)->to_string (self);
#line 294 "Entry.c"
}


static void sidebar_entry_real_grafted (SidebarEntry* self, SidebarTree* tree) {
#line 20 "/shotwell/src/sidebar/Entry.vala"
	g_return_if_fail (SIDEBAR_IS_TREE (tree));
#line 301 "Entry.c"
}


void sidebar_entry_grafted (SidebarEntry* self, SidebarTree* tree) {
#line 20 "/shotwell/src/sidebar/Entry.vala"
	g_return_if_fail (SIDEBAR_IS_ENTRY (self));
#line 20 "/shotwell/src/sidebar/Entry.vala"
	SIDEBAR_ENTRY_GET_INTERFACE (self)->grafted (self, tree);
#line 310 "Entry.c"
}


static void sidebar_entry_real_pruned (SidebarEntry* self, SidebarTree* tree) {
#line 23 "/shotwell/src/sidebar/Entry.vala"
	g_return_if_fail (SIDEBAR_IS_TREE (tree));
#line 317 "Entry.c"
}


void sidebar_entry_pruned (SidebarEntry* self, SidebarTree* tree) {
#line 23 "/shotwell/src/sidebar/Entry.vala"
	g_return_if_fail (SIDEBAR_IS_ENTRY (self));
#line 23 "/shotwell/src/sidebar/Entry.vala"
	SIDEBAR_ENTRY_GET_INTERFACE (self)->pruned (self, tree);
#line 326 "Entry.c"
}


static void sidebar_entry_base_init (SidebarEntryIface * iface) {
#line 7 "/shotwell/src/sidebar/Entry.vala"
	static gboolean initialized = FALSE;
#line 7 "/shotwell/src/sidebar/Entry.vala"
	if (!initialized) {
#line 7 "/shotwell/src/sidebar/Entry.vala"
		initialized = TRUE;
#line 7 "/shotwell/src/sidebar/Entry.vala"
		sidebar_entry_signals[SIDEBAR_ENTRY_SIDEBAR_TOOLTIP_CHANGED_SIGNAL] = g_signal_new ("sidebar-tooltip-changed", SIDEBAR_TYPE_ENTRY, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__STRING, G_TYPE_NONE, 1, G_TYPE_STRING);
#line 7 "/shotwell/src/sidebar/Entry.vala"
		sidebar_entry_signals[SIDEBAR_ENTRY_SIDEBAR_ICON_CHANGED_SIGNAL] = g_signal_new ("sidebar-icon-changed", SIDEBAR_TYPE_ENTRY, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__STRING, G_TYPE_NONE, 1, G_TYPE_STRING);
#line 7 "/shotwell/src/sidebar/Entry.vala"
		iface->grafted = sidebar_entry_real_grafted;
#line 7 "/shotwell/src/sidebar/Entry.vala"
		iface->pruned = sidebar_entry_real_pruned;
#line 345 "Entry.c"
	}
}


GType sidebar_entry_get_type (void) {
	static volatile gsize sidebar_entry_type_id__volatile = 0;
	if (g_once_init_enter (&sidebar_entry_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SidebarEntryIface), (GBaseInitFunc) sidebar_entry_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType sidebar_entry_type_id;
		sidebar_entry_type_id = g_type_register_static (G_TYPE_INTERFACE, "SidebarEntry", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (sidebar_entry_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&sidebar_entry_type_id__volatile, sidebar_entry_type_id);
	}
	return sidebar_entry_type_id__volatile;
}


gboolean sidebar_expandable_entry_expand_on_select (SidebarExpandableEntry* self) {
#line 28 "/shotwell/src/sidebar/Entry.vala"
	g_return_val_if_fail (SIDEBAR_IS_EXPANDABLE_ENTRY (self), FALSE);
#line 28 "/shotwell/src/sidebar/Entry.vala"
	return SIDEBAR_EXPANDABLE_ENTRY_GET_INTERFACE (self)->expand_on_select (self);
#line 368 "Entry.c"
}


static void sidebar_expandable_entry_base_init (SidebarExpandableEntryIface * iface) {
#line 27 "/shotwell/src/sidebar/Entry.vala"
	static gboolean initialized = FALSE;
#line 27 "/shotwell/src/sidebar/Entry.vala"
	if (!initialized) {
#line 27 "/shotwell/src/sidebar/Entry.vala"
		initialized = TRUE;
#line 379 "Entry.c"
	}
}


GType sidebar_expandable_entry_get_type (void) {
	static volatile gsize sidebar_expandable_entry_type_id__volatile = 0;
	if (g_once_init_enter (&sidebar_expandable_entry_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SidebarExpandableEntryIface), (GBaseInitFunc) sidebar_expandable_entry_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType sidebar_expandable_entry_type_id;
		sidebar_expandable_entry_type_id = g_type_register_static (G_TYPE_INTERFACE, "SidebarExpandableEntry", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (sidebar_expandable_entry_type_id, SIDEBAR_TYPE_ENTRY);
		g_once_init_leave (&sidebar_expandable_entry_type_id__volatile, sidebar_expandable_entry_type_id);
	}
	return sidebar_expandable_entry_type_id__volatile;
}


static void sidebar_selectable_entry_base_init (SidebarSelectableEntryIface * iface) {
#line 31 "/shotwell/src/sidebar/Entry.vala"
	static gboolean initialized = FALSE;
#line 31 "/shotwell/src/sidebar/Entry.vala"
	if (!initialized) {
#line 31 "/shotwell/src/sidebar/Entry.vala"
		initialized = TRUE;
#line 404 "Entry.c"
	}
}


GType sidebar_selectable_entry_get_type (void) {
	static volatile gsize sidebar_selectable_entry_type_id__volatile = 0;
	if (g_once_init_enter (&sidebar_selectable_entry_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SidebarSelectableEntryIface), (GBaseInitFunc) sidebar_selectable_entry_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType sidebar_selectable_entry_type_id;
		sidebar_selectable_entry_type_id = g_type_register_static (G_TYPE_INTERFACE, "SidebarSelectableEntry", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (sidebar_selectable_entry_type_id, SIDEBAR_TYPE_ENTRY);
		g_once_init_leave (&sidebar_selectable_entry_type_id__volatile, sidebar_selectable_entry_type_id);
	}
	return sidebar_selectable_entry_type_id__volatile;
}


gboolean sidebar_page_representative_has_page (SidebarPageRepresentative* self) {
#line 41 "/shotwell/src/sidebar/Entry.vala"
	g_return_val_if_fail (SIDEBAR_IS_PAGE_REPRESENTATIVE (self), FALSE);
#line 41 "/shotwell/src/sidebar/Entry.vala"
	return SIDEBAR_PAGE_REPRESENTATIVE_GET_INTERFACE (self)->has_page (self);
#line 427 "Entry.c"
}


Page* sidebar_page_representative_get_page (SidebarPageRepresentative* self) {
#line 43 "/shotwell/src/sidebar/Entry.vala"
	g_return_val_if_fail (SIDEBAR_IS_PAGE_REPRESENTATIVE (self), NULL);
#line 43 "/shotwell/src/sidebar/Entry.vala"
	return SIDEBAR_PAGE_REPRESENTATIVE_GET_INTERFACE (self)->get_page (self);
#line 436 "Entry.c"
}


static void sidebar_page_representative_base_init (SidebarPageRepresentativeIface * iface) {
#line 34 "/shotwell/src/sidebar/Entry.vala"
	static gboolean initialized = FALSE;
#line 34 "/shotwell/src/sidebar/Entry.vala"
	if (!initialized) {
#line 34 "/shotwell/src/sidebar/Entry.vala"
		initialized = TRUE;
#line 34 "/shotwell/src/sidebar/Entry.vala"
		sidebar_page_representative_signals[SIDEBAR_PAGE_REPRESENTATIVE_PAGE_CREATED_SIGNAL] = g_signal_new ("page-created", SIDEBAR_TYPE_PAGE_REPRESENTATIVE, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, TYPE_PAGE);
#line 34 "/shotwell/src/sidebar/Entry.vala"
		sidebar_page_representative_signals[SIDEBAR_PAGE_REPRESENTATIVE_DESTROYING_PAGE_SIGNAL] = g_signal_new ("destroying-page", SIDEBAR_TYPE_PAGE_REPRESENTATIVE, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, TYPE_PAGE);
#line 451 "Entry.c"
	}
}


GType sidebar_page_representative_get_type (void) {
	static volatile gsize sidebar_page_representative_type_id__volatile = 0;
	if (g_once_init_enter (&sidebar_page_representative_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SidebarPageRepresentativeIface), (GBaseInitFunc) sidebar_page_representative_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType sidebar_page_representative_type_id;
		sidebar_page_representative_type_id = g_type_register_static (G_TYPE_INTERFACE, "SidebarPageRepresentative", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (sidebar_page_representative_type_id, SIDEBAR_TYPE_ENTRY);
		g_type_interface_add_prerequisite (sidebar_page_representative_type_id, SIDEBAR_TYPE_SELECTABLE_ENTRY);
		g_once_init_leave (&sidebar_page_representative_type_id__volatile, sidebar_page_representative_type_id);
	}
	return sidebar_page_representative_type_id__volatile;
}


void sidebar_renameable_entry_rename (SidebarRenameableEntry* self, const gchar* new_name) {
#line 49 "/shotwell/src/sidebar/Entry.vala"
	g_return_if_fail (SIDEBAR_IS_RENAMEABLE_ENTRY (self));
#line 49 "/shotwell/src/sidebar/Entry.vala"
	SIDEBAR_RENAMEABLE_ENTRY_GET_INTERFACE (self)->rename (self, new_name);
#line 475 "Entry.c"
}


gboolean sidebar_renameable_entry_is_user_renameable (SidebarRenameableEntry* self) {
#line 52 "/shotwell/src/sidebar/Entry.vala"
	g_return_val_if_fail (SIDEBAR_IS_RENAMEABLE_ENTRY (self), FALSE);
#line 52 "/shotwell/src/sidebar/Entry.vala"
	return SIDEBAR_RENAMEABLE_ENTRY_GET_INTERFACE (self)->is_user_renameable (self);
#line 484 "Entry.c"
}


static void sidebar_renameable_entry_base_init (SidebarRenameableEntryIface * iface) {
#line 46 "/shotwell/src/sidebar/Entry.vala"
	static gboolean initialized = FALSE;
#line 46 "/shotwell/src/sidebar/Entry.vala"
	if (!initialized) {
#line 46 "/shotwell/src/sidebar/Entry.vala"
		initialized = TRUE;
#line 46 "/shotwell/src/sidebar/Entry.vala"
		sidebar_renameable_entry_signals[SIDEBAR_RENAMEABLE_ENTRY_SIDEBAR_NAME_CHANGED_SIGNAL] = g_signal_new ("sidebar-name-changed", SIDEBAR_TYPE_RENAMEABLE_ENTRY, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__STRING, G_TYPE_NONE, 1, G_TYPE_STRING);
#line 497 "Entry.c"
	}
}


GType sidebar_renameable_entry_get_type (void) {
	static volatile gsize sidebar_renameable_entry_type_id__volatile = 0;
	if (g_once_init_enter (&sidebar_renameable_entry_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SidebarRenameableEntryIface), (GBaseInitFunc) sidebar_renameable_entry_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType sidebar_renameable_entry_type_id;
		sidebar_renameable_entry_type_id = g_type_register_static (G_TYPE_INTERFACE, "SidebarRenameableEntry", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (sidebar_renameable_entry_type_id, SIDEBAR_TYPE_ENTRY);
		g_once_init_leave (&sidebar_renameable_entry_type_id__volatile, sidebar_renameable_entry_type_id);
	}
	return sidebar_renameable_entry_type_id__volatile;
}


gboolean sidebar_emphasizable_entry_is_emphasized (SidebarEmphasizableEntry* self) {
#line 58 "/shotwell/src/sidebar/Entry.vala"
	g_return_val_if_fail (SIDEBAR_IS_EMPHASIZABLE_ENTRY (self), FALSE);
#line 58 "/shotwell/src/sidebar/Entry.vala"
	return SIDEBAR_EMPHASIZABLE_ENTRY_GET_INTERFACE (self)->is_emphasized (self);
#line 520 "Entry.c"
}


static void sidebar_emphasizable_entry_base_init (SidebarEmphasizableEntryIface * iface) {
#line 55 "/shotwell/src/sidebar/Entry.vala"
	static gboolean initialized = FALSE;
#line 55 "/shotwell/src/sidebar/Entry.vala"
	if (!initialized) {
#line 55 "/shotwell/src/sidebar/Entry.vala"
		initialized = TRUE;
#line 55 "/shotwell/src/sidebar/Entry.vala"
		sidebar_emphasizable_entry_signals[SIDEBAR_EMPHASIZABLE_ENTRY_IS_EMPHASIZED_CHANGED_SIGNAL] = g_signal_new ("is-emphasized-changed", SIDEBAR_TYPE_EMPHASIZABLE_ENTRY, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__BOOLEAN, G_TYPE_NONE, 1, G_TYPE_BOOLEAN);
#line 533 "Entry.c"
	}
}


GType sidebar_emphasizable_entry_get_type (void) {
	static volatile gsize sidebar_emphasizable_entry_type_id__volatile = 0;
	if (g_once_init_enter (&sidebar_emphasizable_entry_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SidebarEmphasizableEntryIface), (GBaseInitFunc) sidebar_emphasizable_entry_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType sidebar_emphasizable_entry_type_id;
		sidebar_emphasizable_entry_type_id = g_type_register_static (G_TYPE_INTERFACE, "SidebarEmphasizableEntry", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (sidebar_emphasizable_entry_type_id, SIDEBAR_TYPE_ENTRY);
		g_once_init_leave (&sidebar_emphasizable_entry_type_id__volatile, sidebar_emphasizable_entry_type_id);
	}
	return sidebar_emphasizable_entry_type_id__volatile;
}


void sidebar_destroyable_entry_destroy_source (SidebarDestroyableEntry* self) {
#line 62 "/shotwell/src/sidebar/Entry.vala"
	g_return_if_fail (SIDEBAR_IS_DESTROYABLE_ENTRY (self));
#line 62 "/shotwell/src/sidebar/Entry.vala"
	SIDEBAR_DESTROYABLE_ENTRY_GET_INTERFACE (self)->destroy_source (self);
#line 556 "Entry.c"
}


static void sidebar_destroyable_entry_base_init (SidebarDestroyableEntryIface * iface) {
#line 61 "/shotwell/src/sidebar/Entry.vala"
	static gboolean initialized = FALSE;
#line 61 "/shotwell/src/sidebar/Entry.vala"
	if (!initialized) {
#line 61 "/shotwell/src/sidebar/Entry.vala"
		initialized = TRUE;
#line 567 "Entry.c"
	}
}


GType sidebar_destroyable_entry_get_type (void) {
	static volatile gsize sidebar_destroyable_entry_type_id__volatile = 0;
	if (g_once_init_enter (&sidebar_destroyable_entry_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SidebarDestroyableEntryIface), (GBaseInitFunc) sidebar_destroyable_entry_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType sidebar_destroyable_entry_type_id;
		sidebar_destroyable_entry_type_id = g_type_register_static (G_TYPE_INTERFACE, "SidebarDestroyableEntry", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (sidebar_destroyable_entry_type_id, SIDEBAR_TYPE_ENTRY);
		g_once_init_leave (&sidebar_destroyable_entry_type_id__volatile, sidebar_destroyable_entry_type_id);
	}
	return sidebar_destroyable_entry_type_id__volatile;
}


gboolean sidebar_internal_drop_target_entry_internal_drop_received (SidebarInternalDropTargetEntry* self, GeeList* sources) {
#line 67 "/shotwell/src/sidebar/Entry.vala"
	g_return_val_if_fail (SIDEBAR_IS_INTERNAL_DROP_TARGET_ENTRY (self), FALSE);
#line 67 "/shotwell/src/sidebar/Entry.vala"
	return SIDEBAR_INTERNAL_DROP_TARGET_ENTRY_GET_INTERFACE (self)->internal_drop_received (self, sources);
#line 590 "Entry.c"
}


gboolean sidebar_internal_drop_target_entry_internal_drop_received_arbitrary (SidebarInternalDropTargetEntry* self, GtkSelectionData* data) {
#line 68 "/shotwell/src/sidebar/Entry.vala"
	g_return_val_if_fail (SIDEBAR_IS_INTERNAL_DROP_TARGET_ENTRY (self), FALSE);
#line 68 "/shotwell/src/sidebar/Entry.vala"
	return SIDEBAR_INTERNAL_DROP_TARGET_ENTRY_GET_INTERFACE (self)->internal_drop_received_arbitrary (self, data);
#line 599 "Entry.c"
}


static void sidebar_internal_drop_target_entry_base_init (SidebarInternalDropTargetEntryIface * iface) {
#line 65 "/shotwell/src/sidebar/Entry.vala"
	static gboolean initialized = FALSE;
#line 65 "/shotwell/src/sidebar/Entry.vala"
	if (!initialized) {
#line 65 "/shotwell/src/sidebar/Entry.vala"
		initialized = TRUE;
#line 610 "Entry.c"
	}
}


GType sidebar_internal_drop_target_entry_get_type (void) {
	static volatile gsize sidebar_internal_drop_target_entry_type_id__volatile = 0;
	if (g_once_init_enter (&sidebar_internal_drop_target_entry_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SidebarInternalDropTargetEntryIface), (GBaseInitFunc) sidebar_internal_drop_target_entry_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType sidebar_internal_drop_target_entry_type_id;
		sidebar_internal_drop_target_entry_type_id = g_type_register_static (G_TYPE_INTERFACE, "SidebarInternalDropTargetEntry", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (sidebar_internal_drop_target_entry_type_id, SIDEBAR_TYPE_ENTRY);
		g_once_init_leave (&sidebar_internal_drop_target_entry_type_id__volatile, sidebar_internal_drop_target_entry_type_id);
	}
	return sidebar_internal_drop_target_entry_type_id__volatile;
}


void sidebar_internal_drag_source_entry_prepare_selection_data (SidebarInternalDragSourceEntry* self, GtkSelectionData* data) {
#line 72 "/shotwell/src/sidebar/Entry.vala"
	g_return_if_fail (SIDEBAR_IS_INTERNAL_DRAG_SOURCE_ENTRY (self));
#line 72 "/shotwell/src/sidebar/Entry.vala"
	SIDEBAR_INTERNAL_DRAG_SOURCE_ENTRY_GET_INTERFACE (self)->prepare_selection_data (self, data);
#line 633 "Entry.c"
}


static void sidebar_internal_drag_source_entry_base_init (SidebarInternalDragSourceEntryIface * iface) {
#line 71 "/shotwell/src/sidebar/Entry.vala"
	static gboolean initialized = FALSE;
#line 71 "/shotwell/src/sidebar/Entry.vala"
	if (!initialized) {
#line 71 "/shotwell/src/sidebar/Entry.vala"
		initialized = TRUE;
#line 644 "Entry.c"
	}
}


GType sidebar_internal_drag_source_entry_get_type (void) {
	static volatile gsize sidebar_internal_drag_source_entry_type_id__volatile = 0;
	if (g_once_init_enter (&sidebar_internal_drag_source_entry_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SidebarInternalDragSourceEntryIface), (GBaseInitFunc) sidebar_internal_drag_source_entry_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType sidebar_internal_drag_source_entry_type_id;
		sidebar_internal_drag_source_entry_type_id = g_type_register_static (G_TYPE_INTERFACE, "SidebarInternalDragSourceEntry", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (sidebar_internal_drag_source_entry_type_id, SIDEBAR_TYPE_ENTRY);
		g_once_init_leave (&sidebar_internal_drag_source_entry_type_id__volatile, sidebar_internal_drag_source_entry_type_id);
	}
	return sidebar_internal_drag_source_entry_type_id__volatile;
}



