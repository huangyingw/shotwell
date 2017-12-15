/* shotwell-publishing-extras.c generated by valac 0.36.6, the Vala compiler
 * generated from shotwell-publishing-extras.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */

#include <glib.h>
#include <glib-object.h>
#include <shotwell-plugin-dev-1.0.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>


#define TYPE_SHOTWELL_PUBLISHING_EXTRA_SERVICES (shotwell_publishing_extra_services_get_type ())
#define SHOTWELL_PUBLISHING_EXTRA_SERVICES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SHOTWELL_PUBLISHING_EXTRA_SERVICES, ShotwellPublishingExtraServices))
#define SHOTWELL_PUBLISHING_EXTRA_SERVICES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SHOTWELL_PUBLISHING_EXTRA_SERVICES, ShotwellPublishingExtraServicesClass))
#define IS_SHOTWELL_PUBLISHING_EXTRA_SERVICES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SHOTWELL_PUBLISHING_EXTRA_SERVICES))
#define IS_SHOTWELL_PUBLISHING_EXTRA_SERVICES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SHOTWELL_PUBLISHING_EXTRA_SERVICES))
#define SHOTWELL_PUBLISHING_EXTRA_SERVICES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SHOTWELL_PUBLISHING_EXTRA_SERVICES, ShotwellPublishingExtraServicesClass))

typedef struct _ShotwellPublishingExtraServices ShotwellPublishingExtraServices;
typedef struct _ShotwellPublishingExtraServicesClass ShotwellPublishingExtraServicesClass;
typedef struct _ShotwellPublishingExtraServicesPrivate ShotwellPublishingExtraServicesPrivate;

#define TYPE_YANDEX_SERVICE (yandex_service_get_type ())
#define YANDEX_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_YANDEX_SERVICE, YandexService))
#define YANDEX_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_YANDEX_SERVICE, YandexServiceClass))
#define IS_YANDEX_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_YANDEX_SERVICE))
#define IS_YANDEX_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_YANDEX_SERVICE))
#define YANDEX_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_YANDEX_SERVICE, YandexServiceClass))

typedef struct _YandexService YandexService;
typedef struct _YandexServiceClass YandexServiceClass;

#define TYPE_TUMBLR_SERVICE (tumblr_service_get_type ())
#define TUMBLR_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TUMBLR_SERVICE, TumblrService))
#define TUMBLR_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TUMBLR_SERVICE, TumblrServiceClass))
#define IS_TUMBLR_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TUMBLR_SERVICE))
#define IS_TUMBLR_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TUMBLR_SERVICE))
#define TUMBLR_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TUMBLR_SERVICE, TumblrServiceClass))

typedef struct _TumblrService TumblrService;
typedef struct _TumblrServiceClass TumblrServiceClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define TYPE_RAJCE_SERVICE (rajce_service_get_type ())
#define RAJCE_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_RAJCE_SERVICE, RajceService))
#define RAJCE_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_RAJCE_SERVICE, RajceServiceClass))
#define IS_RAJCE_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_RAJCE_SERVICE))
#define IS_RAJCE_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_RAJCE_SERVICE))
#define RAJCE_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_RAJCE_SERVICE, RajceServiceClass))

typedef struct _RajceService RajceService;
typedef struct _RajceServiceClass RajceServiceClass;

#define TYPE_GALLERY3_SERVICE (gallery3_service_get_type ())
#define GALLERY3_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_GALLERY3_SERVICE, Gallery3Service))
#define GALLERY3_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_GALLERY3_SERVICE, Gallery3ServiceClass))
#define IS_GALLERY3_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_GALLERY3_SERVICE))
#define IS_GALLERY3_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_GALLERY3_SERVICE))
#define GALLERY3_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_GALLERY3_SERVICE, Gallery3ServiceClass))

typedef struct _Gallery3Service Gallery3Service;
typedef struct _Gallery3ServiceClass Gallery3ServiceClass;

struct _ShotwellPublishingExtraServices {
	GObject parent_instance;
	ShotwellPublishingExtraServicesPrivate * priv;
};

struct _ShotwellPublishingExtraServicesClass {
	GObjectClass parent_class;
};

struct _ShotwellPublishingExtraServicesPrivate {
	SpitPluggable** pluggables;
	gint pluggables_length1;
	gint _pluggables_size_;
};


static gpointer shotwell_publishing_extra_services_parent_class = NULL;
static SpitModuleIface * shotwell_publishing_extra_services_spit_module_parent_iface = NULL;

GType shotwell_publishing_extra_services_get_type (void) G_GNUC_CONST;
#define SHOTWELL_PUBLISHING_EXTRA_SERVICES_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_SHOTWELL_PUBLISHING_EXTRA_SERVICES, ShotwellPublishingExtraServicesPrivate))
enum  {
	SHOTWELL_PUBLISHING_EXTRA_SERVICES_DUMMY_PROPERTY
};
ShotwellPublishingExtraServices* shotwell_publishing_extra_services_new (GFile* module_file);
ShotwellPublishingExtraServices* shotwell_publishing_extra_services_construct (GType object_type, GFile* module_file);
YandexService* yandex_service_new (void);
YandexService* yandex_service_construct (GType object_type);
GType yandex_service_get_type (void) G_GNUC_CONST;
static void _vala_array_add14 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value);
TumblrService* tumblr_service_new (GFile* resource_directory);
TumblrService* tumblr_service_construct (GType object_type, GFile* resource_directory);
GType tumblr_service_get_type (void) G_GNUC_CONST;
static void _vala_array_add15 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value);
RajceService* rajce_service_new (GFile* resource_directory);
RajceService* rajce_service_construct (GType object_type, GFile* resource_directory);
GType rajce_service_get_type (void) G_GNUC_CONST;
static void _vala_array_add16 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value);
Gallery3Service* gallery3_service_new (GFile* resource_directory);
Gallery3Service* gallery3_service_construct (GType object_type, GFile* resource_directory);
GType gallery3_service_get_type (void) G_GNUC_CONST;
static void _vala_array_add17 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value);
static const gchar* shotwell_publishing_extra_services_real_get_module_name (SpitModule* base);
static const gchar* shotwell_publishing_extra_services_real_get_version (SpitModule* base);
static const gchar* shotwell_publishing_extra_services_real_get_id (SpitModule* base);
static SpitPluggable** shotwell_publishing_extra_services_real_get_pluggables (SpitModule* base, int* result_length1);
static void shotwell_publishing_extra_services_finalize (GObject * obj);
SpitModule* spit_entry_point (SpitEntryPointParams* params);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static void _vala_array_add14 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value) {
#line 14 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	if ((*length) == (*size)) {
#line 14 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 14 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		*array = g_renew (SpitPluggable*, *array, (*size) + 1);
#line 131 "shotwell-publishing-extras.c"
	}
#line 14 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	(*array)[(*length)++] = value;
#line 14 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	(*array)[*length] = NULL;
#line 137 "shotwell-publishing-extras.c"
}


static void _vala_array_add15 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value) {
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	if ((*length) == (*size)) {
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		*array = g_renew (SpitPluggable*, *array, (*size) + 1);
#line 148 "shotwell-publishing-extras.c"
	}
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	(*array)[(*length)++] = value;
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	(*array)[*length] = NULL;
#line 154 "shotwell-publishing-extras.c"
}


static void _vala_array_add16 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value) {
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	if ((*length) == (*size)) {
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		*array = g_renew (SpitPluggable*, *array, (*size) + 1);
#line 165 "shotwell-publishing-extras.c"
	}
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	(*array)[(*length)++] = value;
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	(*array)[*length] = NULL;
#line 171 "shotwell-publishing-extras.c"
}


static void _vala_array_add17 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value) {
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	if ((*length) == (*size)) {
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		*array = g_renew (SpitPluggable*, *array, (*size) + 1);
#line 182 "shotwell-publishing-extras.c"
	}
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	(*array)[(*length)++] = value;
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	(*array)[*length] = NULL;
#line 188 "shotwell-publishing-extras.c"
}


ShotwellPublishingExtraServices* shotwell_publishing_extra_services_construct (GType object_type, GFile* module_file) {
	ShotwellPublishingExtraServices * self = NULL;
	SpitPluggable** _tmp0_;
	gint _tmp0__length1;
	YandexService* _tmp1_;
	SpitPluggable** _tmp2_;
	gint _tmp2__length1;
	GFile* _tmp3_;
	GFile* _tmp4_;
	GFile* _tmp5_;
	TumblrService* _tmp6_;
	SpitPluggable** _tmp7_;
	gint _tmp7__length1;
	GFile* _tmp8_;
	GFile* _tmp9_;
	GFile* _tmp10_;
	RajceService* _tmp11_;
	SpitPluggable** _tmp12_;
	gint _tmp12__length1;
	GFile* _tmp13_;
	GFile* _tmp14_;
	GFile* _tmp15_;
	Gallery3Service* _tmp16_;
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	g_return_val_if_fail (G_IS_FILE (module_file), NULL);
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	self = (ShotwellPublishingExtraServices*) g_object_new (object_type, NULL);
#line 14 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp0_ = self->priv->pluggables;
#line 14 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp0__length1 = self->priv->pluggables_length1;
#line 14 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp1_ = yandex_service_new ();
#line 14 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_vala_array_add14 (&self->priv->pluggables, &self->priv->pluggables_length1, &self->priv->_pluggables_size_, G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, SPIT_TYPE_PLUGGABLE, SpitPluggable));
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp2_ = self->priv->pluggables;
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp2__length1 = self->priv->pluggables_length1;
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp3_ = module_file;
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp4_ = g_file_get_parent (_tmp3_);
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp5_ = _tmp4_;
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp6_ = tumblr_service_new (_tmp5_);
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_vala_array_add15 (&self->priv->pluggables, &self->priv->pluggables_length1, &self->priv->_pluggables_size_, G_TYPE_CHECK_INSTANCE_CAST (_tmp6_, SPIT_TYPE_PLUGGABLE, SpitPluggable));
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_g_object_unref0 (_tmp5_);
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp7_ = self->priv->pluggables;
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp7__length1 = self->priv->pluggables_length1;
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp8_ = module_file;
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp9_ = g_file_get_parent (_tmp8_);
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp10_ = _tmp9_;
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp11_ = rajce_service_new (_tmp10_);
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_vala_array_add16 (&self->priv->pluggables, &self->priv->pluggables_length1, &self->priv->_pluggables_size_, G_TYPE_CHECK_INSTANCE_CAST (_tmp11_, SPIT_TYPE_PLUGGABLE, SpitPluggable));
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_g_object_unref0 (_tmp10_);
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp12_ = self->priv->pluggables;
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp12__length1 = self->priv->pluggables_length1;
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp13_ = module_file;
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp14_ = g_file_get_parent (_tmp13_);
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp15_ = _tmp14_;
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp16_ = gallery3_service_new (_tmp15_);
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_vala_array_add17 (&self->priv->pluggables, &self->priv->pluggables_length1, &self->priv->_pluggables_size_, G_TYPE_CHECK_INSTANCE_CAST (_tmp16_, SPIT_TYPE_PLUGGABLE, SpitPluggable));
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_g_object_unref0 (_tmp15_);
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	return self;
#line 277 "shotwell-publishing-extras.c"
}


ShotwellPublishingExtraServices* shotwell_publishing_extra_services_new (GFile* module_file) {
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	return shotwell_publishing_extra_services_construct (TYPE_SHOTWELL_PUBLISHING_EXTRA_SERVICES, module_file);
#line 284 "shotwell-publishing-extras.c"
}


static const gchar* shotwell_publishing_extra_services_real_get_module_name (SpitModule* base) {
	ShotwellPublishingExtraServices * self;
	const gchar* result = NULL;
#line 30 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SHOTWELL_PUBLISHING_EXTRA_SERVICES, ShotwellPublishingExtraServices);
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	result = _ ("Shotwell Extra Publishing Services");
#line 31 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	return result;
#line 297 "shotwell-publishing-extras.c"
}


static const gchar* shotwell_publishing_extra_services_real_get_version (SpitModule* base) {
	ShotwellPublishingExtraServices * self;
	const gchar* result = NULL;
#line 34 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SHOTWELL_PUBLISHING_EXTRA_SERVICES, ShotwellPublishingExtraServices);
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	result = _VERSION;
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	return result;
#line 310 "shotwell-publishing-extras.c"
}


static const gchar* shotwell_publishing_extra_services_real_get_id (SpitModule* base) {
	ShotwellPublishingExtraServices * self;
	const gchar* result = NULL;
#line 38 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SHOTWELL_PUBLISHING_EXTRA_SERVICES, ShotwellPublishingExtraServices);
#line 39 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	result = "org.yorba.shotwell.publishing.extras";
#line 39 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	return result;
#line 323 "shotwell-publishing-extras.c"
}


static SpitPluggable** shotwell_publishing_extra_services_real_get_pluggables (SpitModule* base, int* result_length1) {
	ShotwellPublishingExtraServices * self;
	SpitPluggable** result = NULL;
	SpitPluggable** _tmp0_;
	gint _tmp0__length1;
	SpitPluggable** _tmp1_;
	gint _tmp1__length1;
#line 42 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SHOTWELL_PUBLISHING_EXTRA_SERVICES, ShotwellPublishingExtraServices);
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp0_ = self->priv->pluggables;
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp0__length1 = self->priv->pluggables_length1;
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp1_ = _tmp0_;
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp1__length1 = _tmp0__length1;
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	if (result_length1) {
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		*result_length1 = _tmp1__length1;
#line 348 "shotwell-publishing-extras.c"
	}
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	result = _tmp1_;
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	return result;
#line 354 "shotwell-publishing-extras.c"
}


static void shotwell_publishing_extra_services_class_init (ShotwellPublishingExtraServicesClass * klass) {
#line 9 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	shotwell_publishing_extra_services_parent_class = g_type_class_peek_parent (klass);
#line 9 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	g_type_class_add_private (klass, sizeof (ShotwellPublishingExtraServicesPrivate));
#line 9 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	G_OBJECT_CLASS (klass)->finalize = shotwell_publishing_extra_services_finalize;
#line 365 "shotwell-publishing-extras.c"
}


static void shotwell_publishing_extra_services_spit_module_interface_init (SpitModuleIface * iface) {
#line 9 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	shotwell_publishing_extra_services_spit_module_parent_iface = g_type_interface_peek_parent (iface);
#line 9 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	iface->get_module_name = (const gchar* (*) (SpitModule *)) shotwell_publishing_extra_services_real_get_module_name;
#line 9 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	iface->get_version = (const gchar* (*) (SpitModule *)) shotwell_publishing_extra_services_real_get_version;
#line 9 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	iface->get_id = (const gchar* (*) (SpitModule *)) shotwell_publishing_extra_services_real_get_id;
#line 9 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	iface->get_pluggables = (SpitPluggable** (*) (SpitModule *, int*)) shotwell_publishing_extra_services_real_get_pluggables;
#line 380 "shotwell-publishing-extras.c"
}


static void shotwell_publishing_extra_services_instance_init (ShotwellPublishingExtraServices * self) {
	SpitPluggable** _tmp0_;
#line 9 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	self->priv = SHOTWELL_PUBLISHING_EXTRA_SERVICES_GET_PRIVATE (self);
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp0_ = g_new0 (SpitPluggable*, 0 + 1);
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	self->priv->pluggables = _tmp0_;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	self->priv->pluggables_length1 = 0;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	self->priv->_pluggables_size_ = self->priv->pluggables_length1;
#line 396 "shotwell-publishing-extras.c"
}


static void shotwell_publishing_extra_services_finalize (GObject * obj) {
	ShotwellPublishingExtraServices * self;
#line 9 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_SHOTWELL_PUBLISHING_EXTRA_SERVICES, ShotwellPublishingExtraServices);
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	self->priv->pluggables = (_vala_array_free (self->priv->pluggables, self->priv->pluggables_length1, (GDestroyNotify) g_object_unref), NULL);
#line 9 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	G_OBJECT_CLASS (shotwell_publishing_extra_services_parent_class)->finalize (obj);
#line 408 "shotwell-publishing-extras.c"
}


GType shotwell_publishing_extra_services_get_type (void) {
	static volatile gsize shotwell_publishing_extra_services_type_id__volatile = 0;
	if (g_once_init_enter (&shotwell_publishing_extra_services_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ShotwellPublishingExtraServicesClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) shotwell_publishing_extra_services_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ShotwellPublishingExtraServices), 0, (GInstanceInitFunc) shotwell_publishing_extra_services_instance_init, NULL };
		static const GInterfaceInfo spit_module_info = { (GInterfaceInitFunc) shotwell_publishing_extra_services_spit_module_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType shotwell_publishing_extra_services_type_id;
		shotwell_publishing_extra_services_type_id = g_type_register_static (G_TYPE_OBJECT, "ShotwellPublishingExtraServices", &g_define_type_info, 0);
		g_type_add_interface_static (shotwell_publishing_extra_services_type_id, SPIT_TYPE_MODULE, &spit_module_info);
		g_once_init_leave (&shotwell_publishing_extra_services_type_id__volatile, shotwell_publishing_extra_services_type_id);
	}
	return shotwell_publishing_extra_services_type_id__volatile;
}


SpitModule* spit_entry_point (SpitEntryPointParams* params) {
	SpitModule* result = NULL;
	SpitEntryPointParams* _tmp0_;
	gint _tmp1_;
	SpitEntryPointParams* _tmp2_;
	gint _tmp3_;
	gint _tmp4_;
	ShotwellPublishingExtraServices* _tmp5_ = NULL;
	SpitEntryPointParams* _tmp6_;
	gint _tmp7_;
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp0_ = params;
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp1_ = (*_tmp0_).host_min_spit_interface;
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp2_ = params;
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp3_ = (*_tmp2_).host_max_spit_interface;
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp4_ = spit_negotiate_interfaces (_tmp1_, _tmp3_, SPIT_CURRENT_INTERFACE);
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	(*params).module_spit_interface = _tmp4_;
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp6_ = params;
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	_tmp7_ = (*_tmp6_).module_spit_interface;
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	if (_tmp7_ != SPIT_UNSUPPORTED_INTERFACE) {
#line 454 "shotwell-publishing-extras.c"
		SpitEntryPointParams* _tmp8_;
		GFile* _tmp9_;
		ShotwellPublishingExtraServices* _tmp10_;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		_tmp8_ = params;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		_tmp9_ = (*_tmp8_).module_file;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		_tmp10_ = shotwell_publishing_extra_services_new (_tmp9_);
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		_g_object_unref0 (_tmp5_);
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		_tmp5_ = _tmp10_;
#line 468 "shotwell-publishing-extras.c"
	} else {
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		_g_object_unref0 (_tmp5_);
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
		_tmp5_ = NULL;
#line 474 "shotwell-publishing-extras.c"
	}
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp5_, SPIT_TYPE_MODULE, SpitModule);
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-publishing-extras/shotwell-publishing-extras.vala"
	return result;
#line 480 "shotwell-publishing-extras.c"
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



