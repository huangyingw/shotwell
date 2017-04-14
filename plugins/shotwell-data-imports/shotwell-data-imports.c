/* shotwell-data-imports.c generated by valac 0.34.7, the Vala compiler
 * generated from shotwell-data-imports.vala, do not modify */

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


#define TYPE_SHOTWELL_DATA_IMPORTS_CORE_SERVICES (shotwell_data_imports_core_services_get_type ())
#define SHOTWELL_DATA_IMPORTS_CORE_SERVICES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SHOTWELL_DATA_IMPORTS_CORE_SERVICES, ShotwellDataImportsCoreServices))
#define SHOTWELL_DATA_IMPORTS_CORE_SERVICES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SHOTWELL_DATA_IMPORTS_CORE_SERVICES, ShotwellDataImportsCoreServicesClass))
#define IS_SHOTWELL_DATA_IMPORTS_CORE_SERVICES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SHOTWELL_DATA_IMPORTS_CORE_SERVICES))
#define IS_SHOTWELL_DATA_IMPORTS_CORE_SERVICES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SHOTWELL_DATA_IMPORTS_CORE_SERVICES))
#define SHOTWELL_DATA_IMPORTS_CORE_SERVICES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SHOTWELL_DATA_IMPORTS_CORE_SERVICES, ShotwellDataImportsCoreServicesClass))

typedef struct _ShotwellDataImportsCoreServices ShotwellDataImportsCoreServices;
typedef struct _ShotwellDataImportsCoreServicesClass ShotwellDataImportsCoreServicesClass;
typedef struct _ShotwellDataImportsCoreServicesPrivate ShotwellDataImportsCoreServicesPrivate;

#define TYPE_FSPOT_SERVICE (fspot_service_get_type ())
#define FSPOT_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FSPOT_SERVICE, FSpotService))
#define FSPOT_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_FSPOT_SERVICE, FSpotServiceClass))
#define IS_FSPOT_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FSPOT_SERVICE))
#define IS_FSPOT_SERVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_FSPOT_SERVICE))
#define FSPOT_SERVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_FSPOT_SERVICE, FSpotServiceClass))

typedef struct _FSpotService FSpotService;
typedef struct _FSpotServiceClass FSpotServiceClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ShotwellDataImportsCoreServices {
	GObject parent_instance;
	ShotwellDataImportsCoreServicesPrivate * priv;
};

struct _ShotwellDataImportsCoreServicesClass {
	GObjectClass parent_class;
};

struct _ShotwellDataImportsCoreServicesPrivate {
	SpitPluggable** pluggables;
	gint pluggables_length1;
	gint _pluggables_size_;
};


static gpointer shotwell_data_imports_core_services_parent_class = NULL;
static SpitModuleIface* shotwell_data_imports_core_services_spit_module_parent_iface = NULL;

GType shotwell_data_imports_core_services_get_type (void) G_GNUC_CONST;
#define SHOTWELL_DATA_IMPORTS_CORE_SERVICES_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_SHOTWELL_DATA_IMPORTS_CORE_SERVICES, ShotwellDataImportsCoreServicesPrivate))
enum  {
	SHOTWELL_DATA_IMPORTS_CORE_SERVICES_DUMMY_PROPERTY
};
ShotwellDataImportsCoreServices* shotwell_data_imports_core_services_new (GFile* module_file);
ShotwellDataImportsCoreServices* shotwell_data_imports_core_services_construct (GType object_type, GFile* module_file);
FSpotService* fspot_service_new (GFile* resource_directory);
FSpotService* fspot_service_construct (GType object_type, GFile* resource_directory);
GType fspot_service_get_type (void) G_GNUC_CONST;
static void _vala_array_add7 (SpitPluggable*** array, int* length, int* size, SpitPluggable* value);
static const gchar* shotwell_data_imports_core_services_real_get_module_name (SpitModule* base);
static const gchar* shotwell_data_imports_core_services_real_get_version (SpitModule* base);
static const gchar* shotwell_data_imports_core_services_real_get_id (SpitModule* base);
static SpitPluggable** shotwell_data_imports_core_services_real_get_pluggables (SpitModule* base, int* result_length1);
static void shotwell_data_imports_core_services_finalize (GObject* obj);
SpitModule* spit_entry_point (SpitEntryPointParams* params);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static void _vala_array_add7 (SpitPluggable*** array, int* length, int* size, SpitPluggable* value) {
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	if ((*length) == (*size)) {
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
		*array = g_renew (SpitPluggable*, *array, (*size) + 1);
#line 89 "shotwell-data-imports.c"
	}
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	(*array)[(*length)++] = value;
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	(*array)[*length] = NULL;
#line 95 "shotwell-data-imports.c"
}


ShotwellDataImportsCoreServices* shotwell_data_imports_core_services_construct (GType object_type, GFile* module_file) {
	ShotwellDataImportsCoreServices * self = NULL;
	GFile* resource_directory = NULL;
	GFile* _tmp0_ = NULL;
	GFile* _tmp1_ = NULL;
	SpitPluggable** _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	FSpotService* _tmp3_ = NULL;
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	g_return_val_if_fail (G_IS_FILE (module_file), NULL);
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	self = (ShotwellDataImportsCoreServices*) g_object_new (object_type, NULL);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp0_ = module_file;
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp1_ = g_file_get_parent (_tmp0_);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	resource_directory = _tmp1_;
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp2_ = self->priv->pluggables;
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp2__length1 = self->priv->pluggables_length1;
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp3_ = fspot_service_new (resource_directory);
#line 18 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_vala_array_add7 (&self->priv->pluggables, &self->priv->pluggables_length1, &self->priv->_pluggables_size_, G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, SPIT_TYPE_PLUGGABLE, SpitPluggable));
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_g_object_unref0 (resource_directory);
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	return self;
#line 129 "shotwell-data-imports.c"
}


ShotwellDataImportsCoreServices* shotwell_data_imports_core_services_new (GFile* module_file) {
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	return shotwell_data_imports_core_services_construct (TYPE_SHOTWELL_DATA_IMPORTS_CORE_SERVICES, module_file);
#line 136 "shotwell-data-imports.c"
}


static const gchar* shotwell_data_imports_core_services_real_get_module_name (SpitModule* base) {
	ShotwellDataImportsCoreServices * self;
	const gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
#line 21 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SHOTWELL_DATA_IMPORTS_CORE_SERVICES, ShotwellDataImportsCoreServices);
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp0_ = _ ("Core Data Import Services");
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	result = _tmp0_;
#line 22 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	return result;
#line 152 "shotwell-data-imports.c"
}


static const gchar* shotwell_data_imports_core_services_real_get_version (SpitModule* base) {
	ShotwellDataImportsCoreServices * self;
	const gchar* result = NULL;
#line 25 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SHOTWELL_DATA_IMPORTS_CORE_SERVICES, ShotwellDataImportsCoreServices);
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	result = _VERSION;
#line 26 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	return result;
#line 165 "shotwell-data-imports.c"
}


static const gchar* shotwell_data_imports_core_services_real_get_id (SpitModule* base) {
	ShotwellDataImportsCoreServices * self;
	const gchar* result = NULL;
#line 29 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SHOTWELL_DATA_IMPORTS_CORE_SERVICES, ShotwellDataImportsCoreServices);
#line 30 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	result = "org.yorba.shotwell.data_imports.core_services";
#line 30 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	return result;
#line 178 "shotwell-data-imports.c"
}


static SpitPluggable** shotwell_data_imports_core_services_real_get_pluggables (SpitModule* base, int* result_length1) {
	ShotwellDataImportsCoreServices * self;
	SpitPluggable** result = NULL;
	SpitPluggable** _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	SpitPluggable** _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
#line 33 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SHOTWELL_DATA_IMPORTS_CORE_SERVICES, ShotwellDataImportsCoreServices);
#line 34 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp0_ = self->priv->pluggables;
#line 34 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp0__length1 = self->priv->pluggables_length1;
#line 34 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp1_ = _tmp0_;
#line 34 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp1__length1 = _tmp0__length1;
#line 34 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	if (result_length1) {
#line 34 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
		*result_length1 = _tmp1__length1;
#line 203 "shotwell-data-imports.c"
	}
#line 34 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	result = _tmp1_;
#line 34 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	return result;
#line 209 "shotwell-data-imports.c"
}


static void shotwell_data_imports_core_services_class_init (ShotwellDataImportsCoreServicesClass * klass) {
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	shotwell_data_imports_core_services_parent_class = g_type_class_peek_parent (klass);
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	g_type_class_add_private (klass, sizeof (ShotwellDataImportsCoreServicesPrivate));
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	G_OBJECT_CLASS (klass)->finalize = shotwell_data_imports_core_services_finalize;
#line 220 "shotwell-data-imports.c"
}


static void shotwell_data_imports_core_services_spit_module_interface_init (SpitModuleIface * iface) {
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	shotwell_data_imports_core_services_spit_module_parent_iface = g_type_interface_peek_parent (iface);
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	iface->get_module_name = (const gchar* (*)(SpitModule*)) shotwell_data_imports_core_services_real_get_module_name;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	iface->get_version = (const gchar* (*)(SpitModule*)) shotwell_data_imports_core_services_real_get_version;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	iface->get_id = (const gchar* (*)(SpitModule*)) shotwell_data_imports_core_services_real_get_id;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	iface->get_pluggables = (SpitPluggable** (*)(SpitModule*, int*)) shotwell_data_imports_core_services_real_get_pluggables;
#line 235 "shotwell-data-imports.c"
}


static void shotwell_data_imports_core_services_instance_init (ShotwellDataImportsCoreServices * self) {
	SpitPluggable** _tmp0_ = NULL;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	self->priv = SHOTWELL_DATA_IMPORTS_CORE_SERVICES_GET_PRIVATE (self);
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp0_ = g_new0 (SpitPluggable*, 0 + 1);
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	self->priv->pluggables = _tmp0_;
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	self->priv->pluggables_length1 = 0;
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	self->priv->_pluggables_size_ = self->priv->pluggables_length1;
#line 251 "shotwell-data-imports.c"
}


static void shotwell_data_imports_core_services_finalize (GObject* obj) {
	ShotwellDataImportsCoreServices * self;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_SHOTWELL_DATA_IMPORTS_CORE_SERVICES, ShotwellDataImportsCoreServices);
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	self->priv->pluggables = (_vala_array_free (self->priv->pluggables, self->priv->pluggables_length1, (GDestroyNotify) g_object_unref), NULL);
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	G_OBJECT_CLASS (shotwell_data_imports_core_services_parent_class)->finalize (obj);
#line 263 "shotwell-data-imports.c"
}


GType shotwell_data_imports_core_services_get_type (void) {
	static volatile gsize shotwell_data_imports_core_services_type_id__volatile = 0;
	if (g_once_init_enter (&shotwell_data_imports_core_services_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ShotwellDataImportsCoreServicesClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) shotwell_data_imports_core_services_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ShotwellDataImportsCoreServices), 0, (GInstanceInitFunc) shotwell_data_imports_core_services_instance_init, NULL };
		static const GInterfaceInfo spit_module_info = { (GInterfaceInitFunc) shotwell_data_imports_core_services_spit_module_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType shotwell_data_imports_core_services_type_id;
		shotwell_data_imports_core_services_type_id = g_type_register_static (G_TYPE_OBJECT, "ShotwellDataImportsCoreServices", &g_define_type_info, 0);
		g_type_add_interface_static (shotwell_data_imports_core_services_type_id, SPIT_TYPE_MODULE, &spit_module_info);
		g_once_init_leave (&shotwell_data_imports_core_services_type_id__volatile, shotwell_data_imports_core_services_type_id);
	}
	return shotwell_data_imports_core_services_type_id__volatile;
}


SpitModule* spit_entry_point (SpitEntryPointParams* params) {
	SpitModule* result = NULL;
	SpitEntryPointParams* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	SpitEntryPointParams* _tmp2_ = NULL;
	gint _tmp3_ = 0;
	gint _tmp4_ = 0;
	ShotwellDataImportsCoreServices* _tmp5_ = NULL;
	SpitEntryPointParams* _tmp6_ = NULL;
	gint _tmp7_ = 0;
#line 40 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp0_ = params;
#line 40 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp1_ = (*_tmp0_).host_min_spit_interface;
#line 40 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp2_ = params;
#line 40 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp3_ = (*_tmp2_).host_max_spit_interface;
#line 40 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp4_ = spit_negotiate_interfaces (_tmp1_, _tmp3_, SPIT_CURRENT_INTERFACE);
#line 40 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	(*params).module_spit_interface = _tmp4_;
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp6_ = params;
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	_tmp7_ = (*_tmp6_).module_spit_interface;
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	if (_tmp7_ != SPIT_UNSUPPORTED_INTERFACE) {
#line 309 "shotwell-data-imports.c"
		SpitEntryPointParams* _tmp8_ = NULL;
		GFile* _tmp9_ = NULL;
		ShotwellDataImportsCoreServices* _tmp10_ = NULL;
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
		_tmp8_ = params;
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
		_tmp9_ = (*_tmp8_).module_file;
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
		_tmp10_ = shotwell_data_imports_core_services_new (_tmp9_);
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
		_g_object_unref0 (_tmp5_);
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
		_tmp5_ = _tmp10_;
#line 323 "shotwell-data-imports.c"
	} else {
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
		_g_object_unref0 (_tmp5_);
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
		_tmp5_ = NULL;
#line 329 "shotwell-data-imports.c"
	}
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp5_, SPIT_TYPE_MODULE, SpitModule);
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-data-imports/shotwell-data-imports.vala"
	return result;
#line 335 "shotwell-data-imports.c"
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



