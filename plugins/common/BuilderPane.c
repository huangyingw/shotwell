/* BuilderPane.c generated by valac 0.34.4, the Vala compiler
 * generated from BuilderPane.vala, do not modify */

/* Copyright 2016 Jens Georg <mail@jensge.org>
 *
 * This software is licensed under the GNU LGPL (version 2.1 or later).
 * See the COPYING file in this distribution.
 */

#include <glib.h>
#include <glib-object.h>
#include "shotwell-plugin-dev-1.0.h"
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>


#define SHOTWELL_PLUGINS_COMMON_TYPE_BUILDER_PANE (shotwell_plugins_common_builder_pane_get_type ())
#define SHOTWELL_PLUGINS_COMMON_BUILDER_PANE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SHOTWELL_PLUGINS_COMMON_TYPE_BUILDER_PANE, ShotwellPluginsCommonBuilderPane))
#define SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SHOTWELL_PLUGINS_COMMON_TYPE_BUILDER_PANE, ShotwellPluginsCommonBuilderPaneClass))
#define SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SHOTWELL_PLUGINS_COMMON_TYPE_BUILDER_PANE))
#define SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SHOTWELL_PLUGINS_COMMON_TYPE_BUILDER_PANE))
#define SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SHOTWELL_PLUGINS_COMMON_TYPE_BUILDER_PANE, ShotwellPluginsCommonBuilderPaneClass))

typedef struct _ShotwellPluginsCommonBuilderPane ShotwellPluginsCommonBuilderPane;
typedef struct _ShotwellPluginsCommonBuilderPaneClass ShotwellPluginsCommonBuilderPaneClass;
typedef struct _ShotwellPluginsCommonBuilderPanePrivate ShotwellPluginsCommonBuilderPanePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ShotwellPluginsCommonBuilderPane {
	GObject parent_instance;
	ShotwellPluginsCommonBuilderPanePrivate * priv;
};

struct _ShotwellPluginsCommonBuilderPaneClass {
	GObjectClass parent_class;
	GtkWidget* (*get_default_widget) (ShotwellPluginsCommonBuilderPane* self);
	void (*on_pane_installed) (ShotwellPluginsCommonBuilderPane* self);
	void (*on_pane_uninstalled) (ShotwellPluginsCommonBuilderPane* self);
};

struct _ShotwellPluginsCommonBuilderPanePrivate {
	SpitPublishingDialogPaneGeometryOptions _preferred_geometry;
	gchar* _resource_path;
	gboolean _connect_signals;
	gchar* _default_id;
	GtkBuilder* builder;
	GtkWidget* content;
};


static gpointer shotwell_plugins_common_builder_pane_parent_class = NULL;
static SpitPublishingDialogPaneIface* shotwell_plugins_common_builder_pane_spit_publishing_dialog_pane_parent_iface = NULL;

GType shotwell_plugins_common_builder_pane_get_type (void) G_GNUC_CONST;
#define SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SHOTWELL_PLUGINS_COMMON_TYPE_BUILDER_PANE, ShotwellPluginsCommonBuilderPanePrivate))
enum  {
	SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_DUMMY_PROPERTY,
	SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_PREFERRED_GEOMETRY,
	SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_RESOURCE_PATH,
	SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_CONNECT_SIGNALS,
	SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_DEFAULT_ID
};
static void shotwell_plugins_common_builder_pane_real_constructed (GObject* base);
gchar* shotwell_plugins_common_builder_pane_get_resource_path (ShotwellPluginsCommonBuilderPane* self);
gboolean shotwell_plugins_common_builder_pane_get_connect_signals (ShotwellPluginsCommonBuilderPane* self);
static SpitPublishingDialogPaneGeometryOptions shotwell_plugins_common_builder_pane_real_get_preferred_geometry (SpitPublishingDialogPane* base);
SpitPublishingDialogPaneGeometryOptions shotwell_plugins_common_builder_pane_get_preferred_geometry (ShotwellPluginsCommonBuilderPane* self);
static GtkWidget* shotwell_plugins_common_builder_pane_real_get_widget (SpitPublishingDialogPane* base);
GtkBuilder* shotwell_plugins_common_builder_pane_get_builder (ShotwellPluginsCommonBuilderPane* self);
GtkWidget* shotwell_plugins_common_builder_pane_get_default_widget (ShotwellPluginsCommonBuilderPane* self);
static GtkWidget* shotwell_plugins_common_builder_pane_real_get_default_widget (ShotwellPluginsCommonBuilderPane* self);
gchar* shotwell_plugins_common_builder_pane_get_default_id (ShotwellPluginsCommonBuilderPane* self);
void shotwell_plugins_common_builder_pane_on_pane_installed (ShotwellPluginsCommonBuilderPane* self);
static void shotwell_plugins_common_builder_pane_real_on_pane_installed (ShotwellPluginsCommonBuilderPane* self);
void shotwell_plugins_common_builder_pane_on_pane_uninstalled (ShotwellPluginsCommonBuilderPane* self);
static void shotwell_plugins_common_builder_pane_real_on_pane_uninstalled (ShotwellPluginsCommonBuilderPane* self);
ShotwellPluginsCommonBuilderPane* shotwell_plugins_common_builder_pane_construct (GType object_type);
static void shotwell_plugins_common_builder_pane_set_preferred_geometry (ShotwellPluginsCommonBuilderPane* self, SpitPublishingDialogPaneGeometryOptions value);
static void shotwell_plugins_common_builder_pane_set_resource_path (ShotwellPluginsCommonBuilderPane* self, const gchar* value);
static void shotwell_plugins_common_builder_pane_set_connect_signals (ShotwellPluginsCommonBuilderPane* self, gboolean value);
static void shotwell_plugins_common_builder_pane_set_default_id (ShotwellPluginsCommonBuilderPane* self, const gchar* value);
static void shotwell_plugins_common_builder_pane_finalize (GObject* obj);
static void _vala_shotwell_plugins_common_builder_pane_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_shotwell_plugins_common_builder_pane_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static gpointer _g_object_ref0 (gpointer self) {
#line 32 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	return self ? g_object_ref (self) : NULL;
#line 93 "BuilderPane.c"
}


static void shotwell_plugins_common_builder_pane_real_constructed (GObject* base) {
	ShotwellPluginsCommonBuilderPane * self;
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	GtkBuilder* _tmp6_ = NULL;
	gboolean _tmp7_ = FALSE;
	GtkBuilder* _tmp9_ = NULL;
	GObject* _tmp10_ = NULL;
	GtkWidget* _tmp11_ = NULL;
	GtkWidget* _tmp12_ = NULL;
	GtkContainer* _tmp13_ = NULL;
	GtkContainer* _tmp14_ = NULL;
#line 22 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, SHOTWELL_PLUGINS_COMMON_TYPE_BUILDER_PANE, ShotwellPluginsCommonBuilderPane);
#line 23 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	G_OBJECT_CLASS (shotwell_plugins_common_builder_pane_parent_class)->constructed (G_TYPE_CHECK_INSTANCE_CAST (self, G_TYPE_OBJECT, GObject));
#line 25 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = shotwell_plugins_common_builder_pane_get_resource_path (self);
#line 25 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp1_ = _tmp0_;
#line 25 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp2_ = _tmp1_;
#line 25 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_debug ("BuilderPane.vala:25: Adding new builder from path %s", _tmp2_);
#line 25 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_g_free0 (_tmp2_);
#line 27 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp3_ = shotwell_plugins_common_builder_pane_get_resource_path (self);
#line 27 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp4_ = _tmp3_;
#line 27 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp5_ = _tmp4_;
#line 27 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp6_ = gtk_builder_new_from_resource (_tmp5_);
#line 27 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_g_object_unref0 (self->priv->builder);
#line 27 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self->priv->builder = _tmp6_;
#line 27 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_g_free0 (_tmp5_);
#line 28 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp7_ = self->priv->_connect_signals;
#line 28 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	if (_tmp7_) {
#line 145 "BuilderPane.c"
		GtkBuilder* _tmp8_ = NULL;
#line 29 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		_tmp8_ = self->priv->builder;
#line 29 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		gtk_builder_connect_signals (_tmp8_, NULL);
#line 151 "BuilderPane.c"
	}
#line 32 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp9_ = self->priv->builder;
#line 32 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp10_ = gtk_builder_get_object (_tmp9_, "content");
#line 32 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp11_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp10_, gtk_widget_get_type ()) ? ((GtkWidget*) _tmp10_) : NULL);
#line 32 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_g_object_unref0 (self->priv->content);
#line 32 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self->priv->content = _tmp11_;
#line 35 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp12_ = self->priv->content;
#line 35 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp13_ = gtk_widget_get_parent (_tmp12_);
#line 35 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp14_ = _tmp13_;
#line 35 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	if (_tmp14_ != NULL) {
#line 171 "BuilderPane.c"
		GtkWidget* _tmp15_ = NULL;
		GtkContainer* _tmp16_ = NULL;
		GtkContainer* _tmp17_ = NULL;
		GtkWidget* _tmp18_ = NULL;
#line 36 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		_tmp15_ = self->priv->content;
#line 36 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		_tmp16_ = gtk_widget_get_parent (_tmp15_);
#line 36 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		_tmp17_ = _tmp16_;
#line 36 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		_tmp18_ = self->priv->content;
#line 36 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		gtk_container_remove (_tmp17_, _tmp18_);
#line 186 "BuilderPane.c"
	}
}


static SpitPublishingDialogPaneGeometryOptions shotwell_plugins_common_builder_pane_real_get_preferred_geometry (SpitPublishingDialogPane* base) {
	ShotwellPluginsCommonBuilderPane * self;
	SpitPublishingDialogPaneGeometryOptions result = 0;
	SpitPublishingDialogPaneGeometryOptions _tmp0_ = 0;
#line 40 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, SHOTWELL_PLUGINS_COMMON_TYPE_BUILDER_PANE, ShotwellPluginsCommonBuilderPane);
#line 41 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = self->priv->_preferred_geometry;
#line 41 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	result = _tmp0_;
#line 41 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	return result;
#line 203 "BuilderPane.c"
}


static GtkWidget* shotwell_plugins_common_builder_pane_real_get_widget (SpitPublishingDialogPane* base) {
	ShotwellPluginsCommonBuilderPane * self;
	GtkWidget* result = NULL;
	GtkWidget* _tmp0_ = NULL;
	GtkWidget* _tmp1_ = NULL;
#line 44 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, SHOTWELL_PLUGINS_COMMON_TYPE_BUILDER_PANE, ShotwellPluginsCommonBuilderPane);
#line 45 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = self->priv->content;
#line 45 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 45 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	result = _tmp1_;
#line 45 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	return result;
#line 222 "BuilderPane.c"
}


GtkBuilder* shotwell_plugins_common_builder_pane_get_builder (ShotwellPluginsCommonBuilderPane* self) {
	GtkBuilder* result = NULL;
	GtkBuilder* _tmp0_ = NULL;
	GtkBuilder* _tmp1_ = NULL;
#line 48 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_return_val_if_fail (SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE (self), NULL);
#line 49 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = self->priv->builder;
#line 49 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 49 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	result = _tmp1_;
#line 49 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	return result;
#line 240 "BuilderPane.c"
}


static GtkWidget* shotwell_plugins_common_builder_pane_real_get_default_widget (ShotwellPluginsCommonBuilderPane* self) {
	GtkWidget* result = NULL;
	GtkBuilder* _tmp0_ = NULL;
	GtkBuilder* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	GObject* _tmp5_ = NULL;
	GtkWidget* _tmp6_ = NULL;
	GtkWidget* _tmp7_ = NULL;
#line 53 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = shotwell_plugins_common_builder_pane_get_builder (self);
#line 53 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp1_ = _tmp0_;
#line 53 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp2_ = shotwell_plugins_common_builder_pane_get_default_id (self);
#line 53 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp3_ = _tmp2_;
#line 53 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp4_ = _tmp3_;
#line 53 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp5_ = gtk_builder_get_object (_tmp1_, _tmp4_);
#line 53 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp6_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp5_, gtk_widget_get_type ()) ? ((GtkWidget*) _tmp5_) : NULL);
#line 53 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp7_ = _tmp6_;
#line 53 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_g_free0 (_tmp4_);
#line 53 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_g_object_unref0 (_tmp1_);
#line 53 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	result = _tmp7_;
#line 53 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	return result;
#line 278 "BuilderPane.c"
}


GtkWidget* shotwell_plugins_common_builder_pane_get_default_widget (ShotwellPluginsCommonBuilderPane* self) {
#line 52 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_return_val_if_fail (SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE (self), NULL);
#line 52 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	return SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_GET_CLASS (self)->get_default_widget (self);
#line 287 "BuilderPane.c"
}


static void shotwell_plugins_common_builder_pane_real_on_pane_installed (ShotwellPluginsCommonBuilderPane* self) {
}


void shotwell_plugins_common_builder_pane_on_pane_installed (ShotwellPluginsCommonBuilderPane* self) {
#line 56 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_return_if_fail (SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE (self));
#line 56 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_GET_CLASS (self)->on_pane_installed (self);
#line 300 "BuilderPane.c"
}


static void shotwell_plugins_common_builder_pane_real_on_pane_uninstalled (ShotwellPluginsCommonBuilderPane* self) {
}


void shotwell_plugins_common_builder_pane_on_pane_uninstalled (ShotwellPluginsCommonBuilderPane* self) {
#line 58 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_return_if_fail (SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE (self));
#line 58 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_GET_CLASS (self)->on_pane_uninstalled (self);
#line 313 "BuilderPane.c"
}


ShotwellPluginsCommonBuilderPane* shotwell_plugins_common_builder_pane_construct (GType object_type) {
	ShotwellPluginsCommonBuilderPane * self = NULL;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self = (ShotwellPluginsCommonBuilderPane*) g_object_new (object_type, NULL);
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	return self;
#line 323 "BuilderPane.c"
}


SpitPublishingDialogPaneGeometryOptions shotwell_plugins_common_builder_pane_get_preferred_geometry (ShotwellPluginsCommonBuilderPane* self) {
	SpitPublishingDialogPaneGeometryOptions result;
	SpitPublishingDialogPaneGeometryOptions _tmp0_ = 0;
#line 11 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_return_val_if_fail (SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE (self), 0);
#line 11 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = self->priv->_preferred_geometry;
#line 11 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	result = _tmp0_;
#line 11 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	return result;
#line 338 "BuilderPane.c"
}


static void shotwell_plugins_common_builder_pane_set_preferred_geometry (ShotwellPluginsCommonBuilderPane* self, SpitPublishingDialogPaneGeometryOptions value) {
	SpitPublishingDialogPaneGeometryOptions _tmp0_ = 0;
#line 11 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_return_if_fail (SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE (self));
#line 11 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = value;
#line 11 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self->priv->_preferred_geometry = _tmp0_;
#line 11 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_object_notify ((GObject *) self, "preferred-geometry");
#line 352 "BuilderPane.c"
}


gchar* shotwell_plugins_common_builder_pane_get_resource_path (ShotwellPluginsCommonBuilderPane* self) {
	gchar* result;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 13 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_return_val_if_fail (SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE (self), NULL);
#line 13 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = self->priv->_resource_path;
#line 13 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 13 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	result = _tmp1_;
#line 13 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	return result;
#line 370 "BuilderPane.c"
}


static void shotwell_plugins_common_builder_pane_set_resource_path (ShotwellPluginsCommonBuilderPane* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 13 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_return_if_fail (SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE (self));
#line 13 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = value;
#line 13 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 13 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_g_free0 (self->priv->_resource_path);
#line 13 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self->priv->_resource_path = _tmp1_;
#line 13 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_object_notify ((GObject *) self, "resource-path");
#line 389 "BuilderPane.c"
}


gboolean shotwell_plugins_common_builder_pane_get_connect_signals (ShotwellPluginsCommonBuilderPane* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
#line 14 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_return_val_if_fail (SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE (self), FALSE);
#line 14 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = self->priv->_connect_signals;
#line 14 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	result = _tmp0_;
#line 14 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	return result;
#line 404 "BuilderPane.c"
}


static void shotwell_plugins_common_builder_pane_set_connect_signals (ShotwellPluginsCommonBuilderPane* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
#line 14 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_return_if_fail (SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE (self));
#line 14 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = value;
#line 14 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self->priv->_connect_signals = _tmp0_;
#line 14 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_object_notify ((GObject *) self, "connect-signals");
#line 418 "BuilderPane.c"
}


gchar* shotwell_plugins_common_builder_pane_get_default_id (ShotwellPluginsCommonBuilderPane* self) {
	gchar* result;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 16 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_return_val_if_fail (SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE (self), NULL);
#line 16 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = self->priv->_default_id;
#line 16 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 16 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	result = _tmp1_;
#line 16 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	return result;
#line 436 "BuilderPane.c"
}


static void shotwell_plugins_common_builder_pane_set_default_id (ShotwellPluginsCommonBuilderPane* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 16 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_return_if_fail (SHOTWELL_PLUGINS_COMMON_IS_BUILDER_PANE (self));
#line 16 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = value;
#line 16 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 16 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_g_free0 (self->priv->_default_id);
#line 16 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self->priv->_default_id = _tmp1_;
#line 16 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_object_notify ((GObject *) self, "default-id");
#line 455 "BuilderPane.c"
}


static void shotwell_plugins_common_builder_pane_class_init (ShotwellPluginsCommonBuilderPaneClass * klass) {
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	shotwell_plugins_common_builder_pane_parent_class = g_type_class_peek_parent (klass);
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_type_class_add_private (klass, sizeof (ShotwellPluginsCommonBuilderPanePrivate));
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	((GObjectClass *) klass)->constructed = shotwell_plugins_common_builder_pane_real_constructed;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	((ShotwellPluginsCommonBuilderPaneClass *) klass)->get_default_widget = shotwell_plugins_common_builder_pane_real_get_default_widget;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	((ShotwellPluginsCommonBuilderPaneClass *) klass)->on_pane_installed = shotwell_plugins_common_builder_pane_real_on_pane_installed;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	((ShotwellPluginsCommonBuilderPaneClass *) klass)->on_pane_uninstalled = shotwell_plugins_common_builder_pane_real_on_pane_uninstalled;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_shotwell_plugins_common_builder_pane_get_property;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_shotwell_plugins_common_builder_pane_set_property;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	G_OBJECT_CLASS (klass)->finalize = shotwell_plugins_common_builder_pane_finalize;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_PREFERRED_GEOMETRY, g_param_spec_enum ("preferred-geometry", "preferred-geometry", "preferred-geometry", SPIT_PUBLISHING_DIALOG_PANE_TYPE_GEOMETRY_OPTIONS, SPIT_PUBLISHING_DIALOG_PANE_GEOMETRY_OPTIONS_NONE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_RESOURCE_PATH, g_param_spec_string ("resource-path", "resource-path", "resource-path", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_CONNECT_SIGNALS, g_param_spec_boolean ("connect-signals", "connect-signals", "connect-signals", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_DEFAULT_ID, g_param_spec_string ("default-id", "default-id", "default-id", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 486 "BuilderPane.c"
}


static void shotwell_plugins_common_builder_pane_spit_publishing_dialog_pane_interface_init (SpitPublishingDialogPaneIface * iface) {
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	shotwell_plugins_common_builder_pane_spit_publishing_dialog_pane_parent_iface = g_type_interface_peek_parent (iface);
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	iface->get_preferred_geometry = (SpitPublishingDialogPaneGeometryOptions (*)(SpitPublishingDialogPane*)) shotwell_plugins_common_builder_pane_real_get_preferred_geometry;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	iface->get_widget = (GtkWidget* (*)(SpitPublishingDialogPane*)) shotwell_plugins_common_builder_pane_real_get_widget;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	iface->on_pane_installed = (void (*)(SpitPublishingDialogPane*)) shotwell_plugins_common_builder_pane_on_pane_installed;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	iface->on_pane_uninstalled = (void (*)(SpitPublishingDialogPane*)) shotwell_plugins_common_builder_pane_on_pane_uninstalled;
#line 501 "BuilderPane.c"
}


static void shotwell_plugins_common_builder_pane_instance_init (ShotwellPluginsCommonBuilderPane * self) {
	gchar* _tmp0_ = NULL;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self->priv = SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_GET_PRIVATE (self);
#line 10 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self->priv->_preferred_geometry = SPIT_PUBLISHING_DIALOG_PANE_GEOMETRY_OPTIONS_NONE;
#line 14 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self->priv->_connect_signals = FALSE;
#line 15 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_tmp0_ = g_strdup ("default");
#line 15 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self->priv->_default_id = _tmp0_;
#line 517 "BuilderPane.c"
}


static void shotwell_plugins_common_builder_pane_finalize (GObject* obj) {
	ShotwellPluginsCommonBuilderPane * self;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SHOTWELL_PLUGINS_COMMON_TYPE_BUILDER_PANE, ShotwellPluginsCommonBuilderPane);
#line 13 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_g_free0 (self->priv->_resource_path);
#line 15 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_g_free0 (self->priv->_default_id);
#line 19 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_g_object_unref0 (self->priv->builder);
#line 20 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	_g_object_unref0 (self->priv->content);
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	G_OBJECT_CLASS (shotwell_plugins_common_builder_pane_parent_class)->finalize (obj);
#line 535 "BuilderPane.c"
}


GType shotwell_plugins_common_builder_pane_get_type (void) {
	static volatile gsize shotwell_plugins_common_builder_pane_type_id__volatile = 0;
	if (g_once_init_enter (&shotwell_plugins_common_builder_pane_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ShotwellPluginsCommonBuilderPaneClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) shotwell_plugins_common_builder_pane_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ShotwellPluginsCommonBuilderPane), 0, (GInstanceInitFunc) shotwell_plugins_common_builder_pane_instance_init, NULL };
		static const GInterfaceInfo spit_publishing_dialog_pane_info = { (GInterfaceInitFunc) shotwell_plugins_common_builder_pane_spit_publishing_dialog_pane_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType shotwell_plugins_common_builder_pane_type_id;
		shotwell_plugins_common_builder_pane_type_id = g_type_register_static (G_TYPE_OBJECT, "ShotwellPluginsCommonBuilderPane", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_type_add_interface_static (shotwell_plugins_common_builder_pane_type_id, SPIT_PUBLISHING_TYPE_DIALOG_PANE, &spit_publishing_dialog_pane_info);
		g_once_init_leave (&shotwell_plugins_common_builder_pane_type_id__volatile, shotwell_plugins_common_builder_pane_type_id);
	}
	return shotwell_plugins_common_builder_pane_type_id__volatile;
}


static void _vala_shotwell_plugins_common_builder_pane_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	ShotwellPluginsCommonBuilderPane * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SHOTWELL_PLUGINS_COMMON_TYPE_BUILDER_PANE, ShotwellPluginsCommonBuilderPane);
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	switch (property_id) {
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		case SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_PREFERRED_GEOMETRY:
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		g_value_set_enum (value, shotwell_plugins_common_builder_pane_get_preferred_geometry (self));
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		break;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		case SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_RESOURCE_PATH:
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		g_value_take_string (value, shotwell_plugins_common_builder_pane_get_resource_path (self));
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		break;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		case SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_CONNECT_SIGNALS:
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		g_value_set_boolean (value, shotwell_plugins_common_builder_pane_get_connect_signals (self));
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		break;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		case SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_DEFAULT_ID:
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		g_value_take_string (value, shotwell_plugins_common_builder_pane_get_default_id (self));
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		break;
#line 582 "BuilderPane.c"
		default:
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		break;
#line 588 "BuilderPane.c"
	}
}


static void _vala_shotwell_plugins_common_builder_pane_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	ShotwellPluginsCommonBuilderPane * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SHOTWELL_PLUGINS_COMMON_TYPE_BUILDER_PANE, ShotwellPluginsCommonBuilderPane);
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
	switch (property_id) {
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		case SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_PREFERRED_GEOMETRY:
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		shotwell_plugins_common_builder_pane_set_preferred_geometry (self, g_value_get_enum (value));
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		break;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		case SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_RESOURCE_PATH:
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		shotwell_plugins_common_builder_pane_set_resource_path (self, g_value_get_string (value));
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		break;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		case SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_CONNECT_SIGNALS:
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		shotwell_plugins_common_builder_pane_set_connect_signals (self, g_value_get_boolean (value));
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		break;
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		case SHOTWELL_PLUGINS_COMMON_BUILDER_PANE_DEFAULT_ID:
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		shotwell_plugins_common_builder_pane_set_default_id (self, g_value_get_string (value));
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		break;
#line 622 "BuilderPane.c"
		default:
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 9 "/home/jens/Source/shotwell/plugins/common/BuilderPane.vala"
		break;
#line 628 "BuilderPane.c"
	}
}



