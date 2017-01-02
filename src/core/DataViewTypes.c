/* DataViewTypes.c generated by valac 0.32.1, the Vala compiler
 * generated from DataViewTypes.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */

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
typedef struct _DataObjectPrivate DataObjectPrivate;

#define TYPE_ALTERATION (alteration_get_type ())
#define ALTERATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_ALTERATION, Alteration))
#define ALTERATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_ALTERATION, AlterationClass))
#define IS_ALTERATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_ALTERATION))
#define IS_ALTERATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_ALTERATION))
#define ALTERATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_ALTERATION, AlterationClass))

typedef struct _Alteration Alteration;
typedef struct _AlterationClass AlterationClass;

#define TYPE_DATA_COLLECTION (data_collection_get_type ())
#define DATA_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DATA_COLLECTION, DataCollection))
#define DATA_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DATA_COLLECTION, DataCollectionClass))
#define IS_DATA_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DATA_COLLECTION))
#define IS_DATA_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DATA_COLLECTION))
#define DATA_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DATA_COLLECTION, DataCollectionClass))

typedef struct _DataCollection DataCollection;
typedef struct _DataCollectionClass DataCollectionClass;

#define TYPE_DATA_VIEW (data_view_get_type ())
#define DATA_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DATA_VIEW, DataView))
#define DATA_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DATA_VIEW, DataViewClass))
#define IS_DATA_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DATA_VIEW))
#define IS_DATA_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DATA_VIEW))
#define DATA_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DATA_VIEW, DataViewClass))

typedef struct _DataView DataView;
typedef struct _DataViewClass DataViewClass;
typedef struct _DataViewPrivate DataViewPrivate;

#define TYPE_DATA_SOURCE (data_source_get_type ())
#define DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_DATA_SOURCE, DataSource))
#define DATA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_DATA_SOURCE, DataSourceClass))
#define IS_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_DATA_SOURCE))
#define IS_DATA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_DATA_SOURCE))
#define DATA_SOURCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_DATA_SOURCE, DataSourceClass))

typedef struct _DataSource DataSource;
typedef struct _DataSourceClass DataSourceClass;

#define TYPE_THUMBNAIL_VIEW (thumbnail_view_get_type ())
#define THUMBNAIL_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_THUMBNAIL_VIEW, ThumbnailView))
#define THUMBNAIL_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_THUMBNAIL_VIEW, ThumbnailViewClass))
#define IS_THUMBNAIL_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_THUMBNAIL_VIEW))
#define IS_THUMBNAIL_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_THUMBNAIL_VIEW))
#define THUMBNAIL_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_THUMBNAIL_VIEW, ThumbnailViewClass))

typedef struct _ThumbnailView ThumbnailView;
typedef struct _ThumbnailViewClass ThumbnailViewClass;
typedef struct _ThumbnailViewPrivate ThumbnailViewPrivate;

#define TYPE_THUMBNAIL_SOURCE (thumbnail_source_get_type ())
#define THUMBNAIL_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_THUMBNAIL_SOURCE, ThumbnailSource))
#define THUMBNAIL_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_THUMBNAIL_SOURCE, ThumbnailSourceClass))
#define IS_THUMBNAIL_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_THUMBNAIL_SOURCE))
#define IS_THUMBNAIL_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_THUMBNAIL_SOURCE))
#define THUMBNAIL_SOURCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_THUMBNAIL_SOURCE, ThumbnailSourceClass))

typedef struct _ThumbnailSource ThumbnailSource;
typedef struct _ThumbnailSourceClass ThumbnailSourceClass;

#define TYPE_PHOTO_VIEW (photo_view_get_type ())
#define PHOTO_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PHOTO_VIEW, PhotoView))
#define PHOTO_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PHOTO_VIEW, PhotoViewClass))
#define IS_PHOTO_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PHOTO_VIEW))
#define IS_PHOTO_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PHOTO_VIEW))
#define PHOTO_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PHOTO_VIEW, PhotoViewClass))

typedef struct _PhotoView PhotoView;
typedef struct _PhotoViewClass PhotoViewClass;
typedef struct _PhotoViewPrivate PhotoViewPrivate;

#define TYPE_MEDIA_SOURCE (media_source_get_type ())
#define MEDIA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MEDIA_SOURCE, MediaSource))
#define MEDIA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MEDIA_SOURCE, MediaSourceClass))
#define IS_MEDIA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MEDIA_SOURCE))
#define IS_MEDIA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MEDIA_SOURCE))
#define MEDIA_SOURCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MEDIA_SOURCE, MediaSourceClass))

typedef struct _MediaSource MediaSource;
typedef struct _MediaSourceClass MediaSourceClass;

#define TYPE_PHOTO_SOURCE (photo_source_get_type ())
#define PHOTO_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PHOTO_SOURCE, PhotoSource))
#define PHOTO_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PHOTO_SOURCE, PhotoSourceClass))
#define IS_PHOTO_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PHOTO_SOURCE))
#define IS_PHOTO_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PHOTO_SOURCE))
#define PHOTO_SOURCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PHOTO_SOURCE, PhotoSourceClass))

typedef struct _PhotoSource PhotoSource;
typedef struct _PhotoSourceClass PhotoSourceClass;

#define TYPE_VIDEO_VIEW (video_view_get_type ())
#define VIDEO_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VIDEO_VIEW, VideoView))
#define VIDEO_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VIDEO_VIEW, VideoViewClass))
#define IS_VIDEO_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VIDEO_VIEW))
#define IS_VIDEO_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VIDEO_VIEW))
#define VIDEO_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VIDEO_VIEW, VideoViewClass))

typedef struct _VideoView VideoView;
typedef struct _VideoViewClass VideoViewClass;
typedef struct _VideoViewPrivate VideoViewPrivate;

#define TYPE_VIDEO_SOURCE (video_source_get_type ())
#define VIDEO_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VIDEO_SOURCE, VideoSource))
#define VIDEO_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VIDEO_SOURCE, VideoSourceClass))
#define IS_VIDEO_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VIDEO_SOURCE))
#define IS_VIDEO_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VIDEO_SOURCE))
#define VIDEO_SOURCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VIDEO_SOURCE, VideoSourceClass))

typedef struct _VideoSource VideoSource;
typedef struct _VideoSourceClass VideoSourceClass;

#define TYPE_EVENT_VIEW (event_view_get_type ())
#define EVENT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_EVENT_VIEW, EventView))
#define EVENT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_EVENT_VIEW, EventViewClass))
#define IS_EVENT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_EVENT_VIEW))
#define IS_EVENT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_EVENT_VIEW))
#define EVENT_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_EVENT_VIEW, EventViewClass))

typedef struct _EventView EventView;
typedef struct _EventViewClass EventViewClass;
typedef struct _EventViewPrivate EventViewPrivate;

#define TYPE_EVENT_SOURCE (event_source_get_type ())
#define EVENT_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_EVENT_SOURCE, EventSource))
#define EVENT_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_EVENT_SOURCE, EventSourceClass))
#define IS_EVENT_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_EVENT_SOURCE))
#define IS_EVENT_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_EVENT_SOURCE))
#define EVENT_SOURCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_EVENT_SOURCE, EventSourceClass))

typedef struct _EventSource EventSource;
typedef struct _EventSourceClass EventSourceClass;

struct _DataObject {
	GObject parent_instance;
	DataObjectPrivate * priv;
};

struct _DataObjectClass {
	GObjectClass parent_class;
	void (*notify_altered) (DataObject* self, Alteration* alteration);
	void (*notify_membership_changed) (DataObject* self, DataCollection* collection);
	void (*notify_collection_property_set) (DataObject* self, const gchar* name, GValue* old, GValue* val);
	void (*notify_collection_property_cleared) (DataObject* self, const gchar* name);
	gchar* (*get_name) (DataObject* self);
	gchar* (*to_string) (DataObject* self);
};

struct _DataView {
	DataObject parent_instance;
	DataViewPrivate * priv;
};

struct _DataViewClass {
	DataObjectClass parent_class;
	void (*notify_view_altered) (DataView* self);
	void (*notify_geometry_altered) (DataView* self);
	void (*notify_unsubscribed) (DataView* self, DataSource* source);
	void (*state_changed) (DataView* self, gboolean selected);
	void (*visibility_changed) (DataView* self, gboolean visible);
	void (*view_altered) (DataView* self);
	void (*geometry_altered) (DataView* self);
	void (*unsubscribed) (DataView* self, DataSource* source);
};

struct _ThumbnailView {
	DataView parent_instance;
	ThumbnailViewPrivate * priv;
};

struct _ThumbnailViewClass {
	DataViewClass parent_class;
	void (*notify_thumbnail_altered) (ThumbnailView* self);
	void (*thumbnail_altered) (ThumbnailView* self);
};

struct _PhotoView {
	ThumbnailView parent_instance;
	PhotoViewPrivate * priv;
};

struct _PhotoViewClass {
	ThumbnailViewClass parent_class;
};

struct _VideoView {
	ThumbnailView parent_instance;
	VideoViewPrivate * priv;
};

struct _VideoViewClass {
	ThumbnailViewClass parent_class;
};

struct _EventView {
	ThumbnailView parent_instance;
	EventViewPrivate * priv;
};

struct _EventViewClass {
	ThumbnailViewClass parent_class;
};


static gpointer thumbnail_view_parent_class = NULL;
static gpointer photo_view_parent_class = NULL;
static gpointer video_view_parent_class = NULL;
static gpointer event_view_parent_class = NULL;

GType data_object_get_type (void) G_GNUC_CONST;
gpointer alteration_ref (gpointer instance);
void alteration_unref (gpointer instance);
GParamSpec* param_spec_alteration (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_alteration (GValue* value, gpointer v_object);
void value_take_alteration (GValue* value, gpointer v_object);
gpointer value_get_alteration (const GValue* value);
GType alteration_get_type (void) G_GNUC_CONST;
gpointer data_collection_ref (gpointer instance);
void data_collection_unref (gpointer instance);
GParamSpec* param_spec_data_collection (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_data_collection (GValue* value, gpointer v_object);
void value_take_data_collection (GValue* value, gpointer v_object);
gpointer value_get_data_collection (const GValue* value);
GType data_collection_get_type (void) G_GNUC_CONST;
GType data_view_get_type (void) G_GNUC_CONST;
GType data_source_get_type (void) G_GNUC_CONST;
GType thumbnail_view_get_type (void) G_GNUC_CONST;
enum  {
	THUMBNAIL_VIEW_DUMMY_PROPERTY
};
GType thumbnail_source_get_type (void) G_GNUC_CONST;
ThumbnailView* thumbnail_view_new (ThumbnailSource* source);
ThumbnailView* thumbnail_view_construct (GType object_type, ThumbnailSource* source);
DataView* data_view_new (DataSource* source);
DataView* data_view_construct (GType object_type, DataSource* source);
void thumbnail_view_notify_thumbnail_altered (ThumbnailView* self);
static void thumbnail_view_real_notify_thumbnail_altered (ThumbnailView* self);
static void thumbnail_view_real_thumbnail_altered (ThumbnailView* self);
GType photo_view_get_type (void) G_GNUC_CONST;
enum  {
	PHOTO_VIEW_DUMMY_PROPERTY
};
GType media_source_get_type (void) G_GNUC_CONST;
GType photo_source_get_type (void) G_GNUC_CONST;
PhotoView* photo_view_new (PhotoSource* source);
PhotoView* photo_view_construct (GType object_type, PhotoSource* source);
PhotoSource* photo_view_get_photo_source (PhotoView* self);
DataSource* data_view_get_source (DataView* self);
GType video_view_get_type (void) G_GNUC_CONST;
enum  {
	VIDEO_VIEW_DUMMY_PROPERTY
};
GType video_source_get_type (void) G_GNUC_CONST;
VideoView* video_view_new (VideoSource* source);
VideoView* video_view_construct (GType object_type, VideoSource* source);
VideoSource* video_view_get_video_source (VideoView* self);
GType event_view_get_type (void) G_GNUC_CONST;
enum  {
	EVENT_VIEW_DUMMY_PROPERTY
};
GType event_source_get_type (void) G_GNUC_CONST;
EventView* event_view_new (EventSource* source);
EventView* event_view_construct (GType object_type, EventSource* source);
EventSource* event_view_get_event_source (EventView* self);


ThumbnailView* thumbnail_view_construct (GType object_type, ThumbnailSource* source) {
	ThumbnailView * self = NULL;
	ThumbnailSource* _tmp0_ = NULL;
#line 11 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	g_return_val_if_fail (IS_THUMBNAIL_SOURCE (source), NULL);
#line 12 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	_tmp0_ = source;
#line 12 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	self = (ThumbnailView*) data_view_construct (object_type, G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, TYPE_DATA_SOURCE, DataSource));
#line 11 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	return self;
#line 307 "DataViewTypes.c"
}


ThumbnailView* thumbnail_view_new (ThumbnailSource* source) {
#line 11 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	return thumbnail_view_construct (TYPE_THUMBNAIL_VIEW, source);
#line 314 "DataViewTypes.c"
}


static void thumbnail_view_real_notify_thumbnail_altered (ThumbnailView* self) {
#line 17 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	g_signal_emit_by_name (self, "thumbnail-altered");
#line 321 "DataViewTypes.c"
}


void thumbnail_view_notify_thumbnail_altered (ThumbnailView* self) {
#line 15 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	g_return_if_fail (IS_THUMBNAIL_VIEW (self));
#line 15 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	THUMBNAIL_VIEW_GET_CLASS (self)->notify_thumbnail_altered (self);
#line 330 "DataViewTypes.c"
}


static void thumbnail_view_real_thumbnail_altered (ThumbnailView* self) {
}


static void thumbnail_view_class_init (ThumbnailViewClass * klass) {
#line 7 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	thumbnail_view_parent_class = g_type_class_peek_parent (klass);
#line 7 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	((ThumbnailViewClass *) klass)->notify_thumbnail_altered = thumbnail_view_real_notify_thumbnail_altered;
#line 7 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	((ThumbnailViewClass *) klass)->thumbnail_altered = thumbnail_view_real_thumbnail_altered;
#line 7 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	g_signal_new ("thumbnail_altered", TYPE_THUMBNAIL_VIEW, G_SIGNAL_RUN_LAST, G_STRUCT_OFFSET (ThumbnailViewClass, thumbnail_altered), NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 347 "DataViewTypes.c"
}


static void thumbnail_view_instance_init (ThumbnailView * self) {
}


GType thumbnail_view_get_type (void) {
	static volatile gsize thumbnail_view_type_id__volatile = 0;
	if (g_once_init_enter (&thumbnail_view_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ThumbnailViewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) thumbnail_view_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ThumbnailView), 0, (GInstanceInitFunc) thumbnail_view_instance_init, NULL };
		GType thumbnail_view_type_id;
		thumbnail_view_type_id = g_type_register_static (TYPE_DATA_VIEW, "ThumbnailView", &g_define_type_info, 0);
		g_once_init_leave (&thumbnail_view_type_id__volatile, thumbnail_view_type_id);
	}
	return thumbnail_view_type_id__volatile;
}


PhotoView* photo_view_construct (GType object_type, PhotoSource* source) {
	PhotoView * self = NULL;
	PhotoSource* _tmp0_ = NULL;
#line 22 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	g_return_val_if_fail (IS_PHOTO_SOURCE (source), NULL);
#line 23 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	_tmp0_ = source;
#line 23 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	self = (PhotoView*) thumbnail_view_construct (object_type, G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, TYPE_THUMBNAIL_SOURCE, ThumbnailSource));
#line 22 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	return self;
#line 378 "DataViewTypes.c"
}


PhotoView* photo_view_new (PhotoSource* source) {
#line 22 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	return photo_view_construct (TYPE_PHOTO_VIEW, source);
#line 385 "DataViewTypes.c"
}


PhotoSource* photo_view_get_photo_source (PhotoView* self) {
	PhotoSource* result = NULL;
	DataSource* _tmp0_ = NULL;
#line 26 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	g_return_val_if_fail (IS_PHOTO_VIEW (self), NULL);
#line 27 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	_tmp0_ = data_view_get_source (G_TYPE_CHECK_INSTANCE_CAST (self, TYPE_DATA_VIEW, DataView));
#line 27 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, TYPE_PHOTO_SOURCE, PhotoSource);
#line 27 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	return result;
#line 400 "DataViewTypes.c"
}


static void photo_view_class_init (PhotoViewClass * klass) {
#line 21 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	photo_view_parent_class = g_type_class_peek_parent (klass);
#line 407 "DataViewTypes.c"
}


static void photo_view_instance_init (PhotoView * self) {
}


GType photo_view_get_type (void) {
	static volatile gsize photo_view_type_id__volatile = 0;
	if (g_once_init_enter (&photo_view_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PhotoViewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) photo_view_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PhotoView), 0, (GInstanceInitFunc) photo_view_instance_init, NULL };
		GType photo_view_type_id;
		photo_view_type_id = g_type_register_static (TYPE_THUMBNAIL_VIEW, "PhotoView", &g_define_type_info, 0);
		g_once_init_leave (&photo_view_type_id__volatile, photo_view_type_id);
	}
	return photo_view_type_id__volatile;
}


VideoView* video_view_construct (GType object_type, VideoSource* source) {
	VideoView * self = NULL;
	VideoSource* _tmp0_ = NULL;
#line 32 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	g_return_val_if_fail (IS_VIDEO_SOURCE (source), NULL);
#line 33 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	_tmp0_ = source;
#line 33 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	self = (VideoView*) thumbnail_view_construct (object_type, G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, TYPE_THUMBNAIL_SOURCE, ThumbnailSource));
#line 32 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	return self;
#line 438 "DataViewTypes.c"
}


VideoView* video_view_new (VideoSource* source) {
#line 32 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	return video_view_construct (TYPE_VIDEO_VIEW, source);
#line 445 "DataViewTypes.c"
}


VideoSource* video_view_get_video_source (VideoView* self) {
	VideoSource* result = NULL;
	DataSource* _tmp0_ = NULL;
#line 36 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	g_return_val_if_fail (IS_VIDEO_VIEW (self), NULL);
#line 37 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	_tmp0_ = data_view_get_source (G_TYPE_CHECK_INSTANCE_CAST (self, TYPE_DATA_VIEW, DataView));
#line 37 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, TYPE_VIDEO_SOURCE, VideoSource);
#line 37 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	return result;
#line 460 "DataViewTypes.c"
}


static void video_view_class_init (VideoViewClass * klass) {
#line 31 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	video_view_parent_class = g_type_class_peek_parent (klass);
#line 467 "DataViewTypes.c"
}


static void video_view_instance_init (VideoView * self) {
}


GType video_view_get_type (void) {
	static volatile gsize video_view_type_id__volatile = 0;
	if (g_once_init_enter (&video_view_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (VideoViewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) video_view_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (VideoView), 0, (GInstanceInitFunc) video_view_instance_init, NULL };
		GType video_view_type_id;
		video_view_type_id = g_type_register_static (TYPE_THUMBNAIL_VIEW, "VideoView", &g_define_type_info, 0);
		g_once_init_leave (&video_view_type_id__volatile, video_view_type_id);
	}
	return video_view_type_id__volatile;
}


EventView* event_view_construct (GType object_type, EventSource* source) {
	EventView * self = NULL;
	EventSource* _tmp0_ = NULL;
#line 42 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	g_return_val_if_fail (IS_EVENT_SOURCE (source), NULL);
#line 43 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	_tmp0_ = source;
#line 43 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	self = (EventView*) thumbnail_view_construct (object_type, G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, TYPE_THUMBNAIL_SOURCE, ThumbnailSource));
#line 42 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	return self;
#line 498 "DataViewTypes.c"
}


EventView* event_view_new (EventSource* source) {
#line 42 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	return event_view_construct (TYPE_EVENT_VIEW, source);
#line 505 "DataViewTypes.c"
}


EventSource* event_view_get_event_source (EventView* self) {
	EventSource* result = NULL;
	DataSource* _tmp0_ = NULL;
#line 46 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	g_return_val_if_fail (IS_EVENT_VIEW (self), NULL);
#line 47 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	_tmp0_ = data_view_get_source (G_TYPE_CHECK_INSTANCE_CAST (self, TYPE_DATA_VIEW, DataView));
#line 47 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, TYPE_EVENT_SOURCE, EventSource);
#line 47 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	return result;
#line 520 "DataViewTypes.c"
}


static void event_view_class_init (EventViewClass * klass) {
#line 41 "/home/jens/Source/shotwell/src/core/DataViewTypes.vala"
	event_view_parent_class = g_type_class_peek_parent (klass);
#line 527 "DataViewTypes.c"
}


static void event_view_instance_init (EventView * self) {
}


GType event_view_get_type (void) {
	static volatile gsize event_view_type_id__volatile = 0;
	if (g_once_init_enter (&event_view_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (EventViewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) event_view_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (EventView), 0, (GInstanceInitFunc) event_view_instance_init, NULL };
		GType event_view_type_id;
		event_view_type_id = g_type_register_static (TYPE_THUMBNAIL_VIEW, "EventView", &g_define_type_info, 0);
		g_once_init_leave (&event_view_type_id__volatile, event_view_type_id);
	}
	return event_view_type_id__volatile;
}



