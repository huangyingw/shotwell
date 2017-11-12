/* shotwell-publishing.c generated by valac 0.36.6, the Vala compiler
 * generated from shotwell-publishing.vala, do not modify */

/* Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */

#include <glib.h>
#include <glib-object.h>
#include <shotwell-plugin-dev-1.0.h>
#include <gio/gio.h>
#include "shotwell-authenticator.h"
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>


#define TYPE_SHOTWELL_PUBLISHING_CORE_SERVICES (shotwell_publishing_core_services_get_type ())
#define SHOTWELL_PUBLISHING_CORE_SERVICES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SHOTWELL_PUBLISHING_CORE_SERVICES, ShotwellPublishingCoreServices))
#define SHOTWELL_PUBLISHING_CORE_SERVICES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SHOTWELL_PUBLISHING_CORE_SERVICES, ShotwellPublishingCoreServicesClass))
#define IS_SHOTWELL_PUBLISHING_CORE_SERVICES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SHOTWELL_PUBLISHING_CORE_SERVICES))
#define IS_SHOTWELL_PUBLISHING_CORE_SERVICES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SHOTWELL_PUBLISHING_CORE_SERVICES))
#define SHOTWELL_PUBLISHING_CORE_SERVICES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SHOTWELL_PUBLISHING_CORE_SERVICES, ShotwellPublishingCoreServicesClass))

typedef struct _ShotwellPublishingCoreServices ShotwellPublishingCoreServices;
typedef struct _ShotwellPublishingCoreServicesClass ShotwellPublishingCoreServicesClass;
typedef struct _ShotwellPublishingCoreServicesPrivate ShotwellPublishingCoreServicesPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

#define TYPE_FACEBOOK_SERVICE (facebook_service_get_type ())
#define FACEBOOK_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FACEBOOK_SERVICE, FacebookService))
#define FACEBOOK_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_FACEBOOK_SERVICE, FacebookServiceClass))
#define IS_FACEBOOK_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FACEBOOK_SERVICE))
#define IS_FACEBOOK_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_FACEBOOK_SERVICE))
#define FACEBOOK_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_FACEBOOK_SERVICE, FacebookServiceClass))

typedef struct _FacebookService FacebookService;
typedef struct _FacebookServiceClass FacebookServiceClass;

#define TYPE_PICASA_SERVICE (picasa_service_get_type ())
#define PICASA_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PICASA_SERVICE, PicasaService))
#define PICASA_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PICASA_SERVICE, PicasaServiceClass))
#define IS_PICASA_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PICASA_SERVICE))
#define IS_PICASA_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PICASA_SERVICE))
#define PICASA_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PICASA_SERVICE, PicasaServiceClass))

typedef struct _PicasaService PicasaService;
typedef struct _PicasaServiceClass PicasaServiceClass;

#define TYPE_FLICKR_SERVICE (flickr_service_get_type ())
#define FLICKR_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FLICKR_SERVICE, FlickrService))
#define FLICKR_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_FLICKR_SERVICE, FlickrServiceClass))
#define IS_FLICKR_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FLICKR_SERVICE))
#define IS_FLICKR_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_FLICKR_SERVICE))
#define FLICKR_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_FLICKR_SERVICE, FlickrServiceClass))

typedef struct _FlickrService FlickrService;
typedef struct _FlickrServiceClass FlickrServiceClass;

#define TYPE_YOU_TUBE_SERVICE (you_tube_service_get_type ())
#define YOU_TUBE_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_YOU_TUBE_SERVICE, YouTubeService))
#define YOU_TUBE_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_YOU_TUBE_SERVICE, YouTubeServiceClass))
#define IS_YOU_TUBE_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_YOU_TUBE_SERVICE))
#define IS_YOU_TUBE_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_YOU_TUBE_SERVICE))
#define YOU_TUBE_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_YOU_TUBE_SERVICE, YouTubeServiceClass))

typedef struct _YouTubeService YouTubeService;
typedef struct _YouTubeServiceClass YouTubeServiceClass;

#define TYPE_PIWIGO_SERVICE (piwigo_service_get_type ())
#define PIWIGO_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PIWIGO_SERVICE, PiwigoService))
#define PIWIGO_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PIWIGO_SERVICE, PiwigoServiceClass))
#define IS_PIWIGO_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PIWIGO_SERVICE))
#define IS_PIWIGO_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PIWIGO_SERVICE))
#define PIWIGO_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PIWIGO_SERVICE, PiwigoServiceClass))

typedef struct _PiwigoService PiwigoService;
typedef struct _PiwigoServiceClass PiwigoServiceClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ShotwellPublishingCoreServices {
	GObject parent_instance;
	ShotwellPublishingCoreServicesPrivate * priv;
};

struct _ShotwellPublishingCoreServicesClass {
	GObjectClass parent_class;
};

struct _ShotwellPublishingCoreServicesPrivate {
	SpitPluggable** pluggables;
	gint pluggables_length1;
	gint _pluggables_size_;
};


static gpointer shotwell_publishing_core_services_parent_class = NULL;
static SpitModuleIface * shotwell_publishing_core_services_spit_module_parent_iface = NULL;

GType shotwell_publishing_core_services_get_type (void) G_GNUC_CONST;
#define SHOTWELL_PUBLISHING_CORE_SERVICES_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_SHOTWELL_PUBLISHING_CORE_SERVICES, ShotwellPublishingCoreServicesPrivate))
enum  {
	SHOTWELL_PUBLISHING_CORE_SERVICES_DUMMY_PROPERTY
};
ShotwellPublishingCoreServices* shotwell_publishing_core_services_new (GFile* module_file);
ShotwellPublishingCoreServices* shotwell_publishing_core_services_construct (GType object_type, GFile* module_file);
FacebookService* facebook_service_new (GFile* resource_directory);
FacebookService* facebook_service_construct (GType object_type, GFile* resource_directory);
GType facebook_service_get_type (void) G_GNUC_CONST;
static void _vala_array_add1 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value);
PicasaService* picasa_service_new (GFile* resource_directory);
PicasaService* picasa_service_construct (GType object_type, GFile* resource_directory);
GType picasa_service_get_type (void) G_GNUC_CONST;
static void _vala_array_add2 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value);
FlickrService* flickr_service_new (GFile* resource_directory);
FlickrService* flickr_service_construct (GType object_type, GFile* resource_directory);
GType flickr_service_get_type (void) G_GNUC_CONST;
static void _vala_array_add3 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value);
YouTubeService* you_tube_service_new (GFile* resource_directory);
YouTubeService* you_tube_service_construct (GType object_type, GFile* resource_directory);
GType you_tube_service_get_type (void) G_GNUC_CONST;
static void _vala_array_add4 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value);
PiwigoService* piwigo_service_new (GFile* resource_directory);
PiwigoService* piwigo_service_construct (GType object_type, GFile* resource_directory);
GType piwigo_service_get_type (void) G_GNUC_CONST;
static void _vala_array_add5 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value);
static const gchar* shotwell_publishing_core_services_real_get_module_name (SpitModule* base);
static const gchar* shotwell_publishing_core_services_real_get_version (SpitModule* base);
static const gchar* shotwell_publishing_core_services_real_get_id (SpitModule* base);
static SpitPluggable** shotwell_publishing_core_services_real_get_pluggables (SpitModule* base, int* result_length1);
static void shotwell_publishing_core_services_finalize (GObject * obj);
SpitModule* spit_entry_point (SpitEntryPointParams* params);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static void _vala_array_add1 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value) {
#line 27 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	if ((*length) == (*size)) {
#line 27 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 27 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		*array = g_renew (SpitPluggable*, *array, (*size) + 1);
#line 148 "shotwell-publishing.c"
	}
#line 27 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	(*array)[(*length)++] = value;
#line 27 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	(*array)[*length] = NULL;
#line 154 "shotwell-publishing.c"
}


static void _vala_array_add2 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value) {
#line 33 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	if ((*length) == (*size)) {
#line 33 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 33 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		*array = g_renew (SpitPluggable*, *array, (*size) + 1);
#line 165 "shotwell-publishing.c"
	}
#line 33 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	(*array)[(*length)++] = value;
#line 33 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	(*array)[*length] = NULL;
#line 171 "shotwell-publishing.c"
}


static void _vala_array_add3 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value) {
#line 39 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	if ((*length) == (*size)) {
#line 39 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 39 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		*array = g_renew (SpitPluggable*, *array, (*size) + 1);
#line 182 "shotwell-publishing.c"
	}
#line 39 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	(*array)[(*length)++] = value;
#line 39 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	(*array)[*length] = NULL;
#line 188 "shotwell-publishing.c"
}


static void _vala_array_add4 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value) {
#line 45 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	if ((*length) == (*size)) {
#line 45 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 45 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		*array = g_renew (SpitPluggable*, *array, (*size) + 1);
#line 199 "shotwell-publishing.c"
	}
#line 45 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	(*array)[(*length)++] = value;
#line 45 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	(*array)[*length] = NULL;
#line 205 "shotwell-publishing.c"
}


static void _vala_array_add5 (SpitPluggable** * array, int* length, int* size, SpitPluggable* value) {
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	if ((*length) == (*size)) {
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		*array = g_renew (SpitPluggable*, *array, (*size) + 1);
#line 216 "shotwell-publishing.c"
	}
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	(*array)[(*length)++] = value;
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	(*array)[*length] = NULL;
#line 222 "shotwell-publishing.c"
}


ShotwellPublishingCoreServices* shotwell_publishing_core_services_construct (GType object_type, GFile* module_file) {
	ShotwellPublishingCoreServices * self = NULL;
	GFile* resource_directory = NULL;
	GFile* _tmp0_;
	GFile* _tmp1_;
	PublishingAuthenticatorFactory* factory = NULL;
	PublishingAuthenticatorFactory* _tmp2_;
	GeeList* authenicators = NULL;
	PublishingAuthenticatorFactory* _tmp3_;
	GeeList* _tmp4_;
	GFile* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	GeeList* _tmp8_;
	gint _tmp9_;
	gint _tmp10_;
	GeeList* _tmp11_;
	gboolean _tmp12_;
	GeeList* _tmp16_;
	gboolean _tmp17_;
	GeeList* _tmp21_;
	gboolean _tmp22_;
	GeeList* _tmp26_;
	gboolean _tmp27_;
	SpitPluggable** _tmp31_;
	gint _tmp31__length1;
	GFile* _tmp32_;
	PiwigoService* _tmp33_;
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	g_return_val_if_fail (G_IS_FILE (module_file), NULL);
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	self = (ShotwellPublishingCoreServices*) g_object_new (object_type, NULL);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp0_ = module_file;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp1_ = g_file_get_parent (_tmp0_);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	resource_directory = _tmp1_;
#line 17 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp2_ = publishing_authenticator_factory_get_instance ();
#line 17 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	factory = _tmp2_;
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp3_ = factory;
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp4_ = spit_publishing_authenticator_factory_get_available_authenticators (G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, SPIT_PUBLISHING_TYPE_AUTHENTICATOR_FACTORY, SpitPublishingAuthenticatorFactory));
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	authenicators = _tmp4_;
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp5_ = resource_directory;
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp6_ = g_file_get_path (_tmp5_);
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp7_ = _tmp6_;
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	g_debug ("shotwell-publishing.vala:22: Looking for resources in %s", _tmp7_);
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_g_free0 (_tmp7_);
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp8_ = authenicators;
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp9_ = gee_collection_get_size (G_TYPE_CHECK_INSTANCE_CAST (_tmp8_, GEE_TYPE_COLLECTION, GeeCollection));
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp10_ = _tmp9_;
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	g_debug ("shotwell-publishing.vala:23: Found %d authenicators", _tmp10_);
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp11_ = authenicators;
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp12_ = gee_collection_contains (G_TYPE_CHECK_INSTANCE_CAST (_tmp11_, GEE_TYPE_COLLECTION, GeeCollection), "facebook");
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	if (_tmp12_) {
#line 298 "shotwell-publishing.c"
		SpitPluggable** _tmp13_;
		gint _tmp13__length1;
		GFile* _tmp14_;
		FacebookService* _tmp15_;
#line 27 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp13_ = self->priv->pluggables;
#line 27 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp13__length1 = self->priv->pluggables_length1;
#line 27 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp14_ = resource_directory;
#line 27 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp15_ = facebook_service_new (_tmp14_);
#line 27 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_vala_array_add1 (&self->priv->pluggables, &self->priv->pluggables_length1, &self->priv->_pluggables_size_, G_TYPE_CHECK_INSTANCE_CAST (_tmp15_, SPIT_TYPE_PLUGGABLE, SpitPluggable));
#line 313 "shotwell-publishing.c"
	}
#line 32 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp16_ = authenicators;
#line 32 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp17_ = gee_collection_contains (G_TYPE_CHECK_INSTANCE_CAST (_tmp16_, GEE_TYPE_COLLECTION, GeeCollection), "picasa");
#line 32 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	if (_tmp17_) {
#line 321 "shotwell-publishing.c"
		SpitPluggable** _tmp18_;
		gint _tmp18__length1;
		GFile* _tmp19_;
		PicasaService* _tmp20_;
#line 33 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp18_ = self->priv->pluggables;
#line 33 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp18__length1 = self->priv->pluggables_length1;
#line 33 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp19_ = resource_directory;
#line 33 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp20_ = picasa_service_new (_tmp19_);
#line 33 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_vala_array_add2 (&self->priv->pluggables, &self->priv->pluggables_length1, &self->priv->_pluggables_size_, G_TYPE_CHECK_INSTANCE_CAST (_tmp20_, SPIT_TYPE_PLUGGABLE, SpitPluggable));
#line 336 "shotwell-publishing.c"
	}
#line 38 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp21_ = authenicators;
#line 38 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp22_ = gee_collection_contains (G_TYPE_CHECK_INSTANCE_CAST (_tmp21_, GEE_TYPE_COLLECTION, GeeCollection), "flickr");
#line 38 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	if (_tmp22_) {
#line 344 "shotwell-publishing.c"
		SpitPluggable** _tmp23_;
		gint _tmp23__length1;
		GFile* _tmp24_;
		FlickrService* _tmp25_;
#line 39 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp23_ = self->priv->pluggables;
#line 39 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp23__length1 = self->priv->pluggables_length1;
#line 39 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp24_ = resource_directory;
#line 39 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp25_ = flickr_service_new (_tmp24_);
#line 39 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_vala_array_add3 (&self->priv->pluggables, &self->priv->pluggables_length1, &self->priv->_pluggables_size_, G_TYPE_CHECK_INSTANCE_CAST (_tmp25_, SPIT_TYPE_PLUGGABLE, SpitPluggable));
#line 359 "shotwell-publishing.c"
	}
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp26_ = authenicators;
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp27_ = gee_collection_contains (G_TYPE_CHECK_INSTANCE_CAST (_tmp26_, GEE_TYPE_COLLECTION, GeeCollection), "youtube");
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	if (_tmp27_) {
#line 367 "shotwell-publishing.c"
		SpitPluggable** _tmp28_;
		gint _tmp28__length1;
		GFile* _tmp29_;
		YouTubeService* _tmp30_;
#line 45 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp28_ = self->priv->pluggables;
#line 45 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp28__length1 = self->priv->pluggables_length1;
#line 45 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp29_ = resource_directory;
#line 45 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp30_ = you_tube_service_new (_tmp29_);
#line 45 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_vala_array_add4 (&self->priv->pluggables, &self->priv->pluggables_length1, &self->priv->_pluggables_size_, G_TYPE_CHECK_INSTANCE_CAST (_tmp30_, SPIT_TYPE_PLUGGABLE, SpitPluggable));
#line 382 "shotwell-publishing.c"
	}
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp31_ = self->priv->pluggables;
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp31__length1 = self->priv->pluggables_length1;
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp32_ = resource_directory;
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp33_ = piwigo_service_new (_tmp32_);
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_vala_array_add5 (&self->priv->pluggables, &self->priv->pluggables_length1, &self->priv->_pluggables_size_, G_TYPE_CHECK_INSTANCE_CAST (_tmp33_, SPIT_TYPE_PLUGGABLE, SpitPluggable));
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_g_object_unref0 (authenicators);
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_g_object_unref0 (factory);
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_g_object_unref0 (resource_directory);
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	return self;
#line 402 "shotwell-publishing.c"
}


ShotwellPublishingCoreServices* shotwell_publishing_core_services_new (GFile* module_file) {
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	return shotwell_publishing_core_services_construct (TYPE_SHOTWELL_PUBLISHING_CORE_SERVICES, module_file);
#line 409 "shotwell-publishing.c"
}


static const gchar* shotwell_publishing_core_services_real_get_module_name (SpitModule* base) {
	ShotwellPublishingCoreServices * self;
	const gchar* result = NULL;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SHOTWELL_PUBLISHING_CORE_SERVICES, ShotwellPublishingCoreServices);
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	result = _ ("Core Publishing Services");
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	return result;
#line 422 "shotwell-publishing.c"
}


static const gchar* shotwell_publishing_core_services_real_get_version (SpitModule* base) {
	ShotwellPublishingCoreServices * self;
	const gchar* result = NULL;
#line 58 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SHOTWELL_PUBLISHING_CORE_SERVICES, ShotwellPublishingCoreServices);
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	result = _VERSION;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	return result;
#line 435 "shotwell-publishing.c"
}


static const gchar* shotwell_publishing_core_services_real_get_id (SpitModule* base) {
	ShotwellPublishingCoreServices * self;
	const gchar* result = NULL;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SHOTWELL_PUBLISHING_CORE_SERVICES, ShotwellPublishingCoreServices);
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	result = "org.yorba.shotwell.publishing.core_services";
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	return result;
#line 448 "shotwell-publishing.c"
}


static SpitPluggable** shotwell_publishing_core_services_real_get_pluggables (SpitModule* base, int* result_length1) {
	ShotwellPublishingCoreServices * self;
	SpitPluggable** result = NULL;
	SpitPluggable** _tmp0_;
	gint _tmp0__length1;
	SpitPluggable** _tmp1_;
	gint _tmp1__length1;
#line 66 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SHOTWELL_PUBLISHING_CORE_SERVICES, ShotwellPublishingCoreServices);
#line 67 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp0_ = self->priv->pluggables;
#line 67 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp0__length1 = self->priv->pluggables_length1;
#line 67 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp1_ = _tmp0_;
#line 67 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp1__length1 = _tmp0__length1;
#line 67 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	if (result_length1) {
#line 67 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		*result_length1 = _tmp1__length1;
#line 473 "shotwell-publishing.c"
	}
#line 67 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	result = _tmp1_;
#line 67 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	return result;
#line 479 "shotwell-publishing.c"
}


static void shotwell_publishing_core_services_class_init (ShotwellPublishingCoreServicesClass * klass) {
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	shotwell_publishing_core_services_parent_class = g_type_class_peek_parent (klass);
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	g_type_class_add_private (klass, sizeof (ShotwellPublishingCoreServicesPrivate));
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	G_OBJECT_CLASS (klass)->finalize = shotwell_publishing_core_services_finalize;
#line 490 "shotwell-publishing.c"
}


static void shotwell_publishing_core_services_spit_module_interface_init (SpitModuleIface * iface) {
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	shotwell_publishing_core_services_spit_module_parent_iface = g_type_interface_peek_parent (iface);
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	iface->get_module_name = (const gchar* (*) (SpitModule *)) shotwell_publishing_core_services_real_get_module_name;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	iface->get_version = (const gchar* (*) (SpitModule *)) shotwell_publishing_core_services_real_get_version;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	iface->get_id = (const gchar* (*) (SpitModule *)) shotwell_publishing_core_services_real_get_id;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	iface->get_pluggables = (SpitPluggable** (*) (SpitModule *, int*)) shotwell_publishing_core_services_real_get_pluggables;
#line 505 "shotwell-publishing.c"
}


static void shotwell_publishing_core_services_instance_init (ShotwellPublishingCoreServices * self) {
	SpitPluggable** _tmp0_;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	self->priv = SHOTWELL_PUBLISHING_CORE_SERVICES_GET_PRIVATE (self);
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp0_ = g_new0 (SpitPluggable*, 0 + 1);
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	self->priv->pluggables = _tmp0_;
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	self->priv->pluggables_length1 = 0;
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	self->priv->_pluggables_size_ = self->priv->pluggables_length1;
#line 521 "shotwell-publishing.c"
}


static void shotwell_publishing_core_services_finalize (GObject * obj) {
	ShotwellPublishingCoreServices * self;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_SHOTWELL_PUBLISHING_CORE_SERVICES, ShotwellPublishingCoreServices);
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	self->priv->pluggables = (_vala_array_free (self->priv->pluggables, self->priv->pluggables_length1, (GDestroyNotify) g_object_unref), NULL);
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	G_OBJECT_CLASS (shotwell_publishing_core_services_parent_class)->finalize (obj);
#line 533 "shotwell-publishing.c"
}


GType shotwell_publishing_core_services_get_type (void) {
	static volatile gsize shotwell_publishing_core_services_type_id__volatile = 0;
	if (g_once_init_enter (&shotwell_publishing_core_services_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ShotwellPublishingCoreServicesClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) shotwell_publishing_core_services_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ShotwellPublishingCoreServices), 0, (GInstanceInitFunc) shotwell_publishing_core_services_instance_init, NULL };
		static const GInterfaceInfo spit_module_info = { (GInterfaceInitFunc) shotwell_publishing_core_services_spit_module_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType shotwell_publishing_core_services_type_id;
		shotwell_publishing_core_services_type_id = g_type_register_static (G_TYPE_OBJECT, "ShotwellPublishingCoreServices", &g_define_type_info, 0);
		g_type_add_interface_static (shotwell_publishing_core_services_type_id, SPIT_TYPE_MODULE, &spit_module_info);
		g_once_init_leave (&shotwell_publishing_core_services_type_id__volatile, shotwell_publishing_core_services_type_id);
	}
	return shotwell_publishing_core_services_type_id__volatile;
}


SpitModule* spit_entry_point (SpitEntryPointParams* params) {
	SpitModule* result = NULL;
	SpitEntryPointParams* _tmp0_;
	gint _tmp1_;
	SpitEntryPointParams* _tmp2_;
	gint _tmp3_;
	gint _tmp4_;
	ShotwellPublishingCoreServices* _tmp5_ = NULL;
	SpitEntryPointParams* _tmp6_;
	gint _tmp7_;
#line 73 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp0_ = params;
#line 73 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp1_ = (*_tmp0_).host_min_spit_interface;
#line 73 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp2_ = params;
#line 73 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp3_ = (*_tmp2_).host_max_spit_interface;
#line 73 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp4_ = spit_negotiate_interfaces (_tmp1_, _tmp3_, SPIT_CURRENT_INTERFACE);
#line 73 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	(*params).module_spit_interface = _tmp4_;
#line 76 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp6_ = params;
#line 76 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	_tmp7_ = (*_tmp6_).module_spit_interface;
#line 76 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	if (_tmp7_ != SPIT_UNSUPPORTED_INTERFACE) {
#line 579 "shotwell-publishing.c"
		SpitEntryPointParams* _tmp8_;
		GFile* _tmp9_;
		ShotwellPublishingCoreServices* _tmp10_;
#line 77 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp8_ = params;
#line 77 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp9_ = (*_tmp8_).module_file;
#line 77 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp10_ = shotwell_publishing_core_services_new (_tmp9_);
#line 77 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_g_object_unref0 (_tmp5_);
#line 77 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp5_ = _tmp10_;
#line 593 "shotwell-publishing.c"
	} else {
#line 77 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_g_object_unref0 (_tmp5_);
#line 77 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
		_tmp5_ = NULL;
#line 599 "shotwell-publishing.c"
	}
#line 76 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp5_, SPIT_TYPE_MODULE, SpitModule);
#line 76 "/home/jens/Source/shotwell/plugins/shotwell-publishing/shotwell-publishing.vala"
	return result;
#line 605 "shotwell-publishing.c"
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



