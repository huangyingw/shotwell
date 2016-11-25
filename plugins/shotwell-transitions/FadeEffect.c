/* FadeEffect.c generated by valac 0.34.2, the Vala compiler
 * generated from FadeEffect.vala, do not modify */

/* Copyright 2010 Maxim Kartashev
 * Copyright 2016 Software Freedom Conservancy Inc.
 *
 * This software is licensed under the GNU Lesser General Public License
 * (version 2.1 or later).  See the COPYING file in this distribution.
 */

#include <glib.h>
#include <glib-object.h>
#include <shotwell-plugin-dev-1.0.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <glib/gi18n-lib.h>
#include <cairo.h>
#include <float.h>
#include <math.h>
#include <gdk/gdk.h>


#define TYPE_SHOTWELL_TRANSITION_DESCRIPTOR (shotwell_transition_descriptor_get_type ())
#define SHOTWELL_TRANSITION_DESCRIPTOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SHOTWELL_TRANSITION_DESCRIPTOR, ShotwellTransitionDescriptor))
#define SHOTWELL_TRANSITION_DESCRIPTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SHOTWELL_TRANSITION_DESCRIPTOR, ShotwellTransitionDescriptorClass))
#define IS_SHOTWELL_TRANSITION_DESCRIPTOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SHOTWELL_TRANSITION_DESCRIPTOR))
#define IS_SHOTWELL_TRANSITION_DESCRIPTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SHOTWELL_TRANSITION_DESCRIPTOR))
#define SHOTWELL_TRANSITION_DESCRIPTOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SHOTWELL_TRANSITION_DESCRIPTOR, ShotwellTransitionDescriptorClass))

typedef struct _ShotwellTransitionDescriptor ShotwellTransitionDescriptor;
typedef struct _ShotwellTransitionDescriptorClass ShotwellTransitionDescriptorClass;
typedef struct _ShotwellTransitionDescriptorPrivate ShotwellTransitionDescriptorPrivate;

#define TYPE_FADE_EFFECT_DESCRIPTOR (fade_effect_descriptor_get_type ())
#define FADE_EFFECT_DESCRIPTOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FADE_EFFECT_DESCRIPTOR, FadeEffectDescriptor))
#define FADE_EFFECT_DESCRIPTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_FADE_EFFECT_DESCRIPTOR, FadeEffectDescriptorClass))
#define IS_FADE_EFFECT_DESCRIPTOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FADE_EFFECT_DESCRIPTOR))
#define IS_FADE_EFFECT_DESCRIPTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_FADE_EFFECT_DESCRIPTOR))
#define FADE_EFFECT_DESCRIPTOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_FADE_EFFECT_DESCRIPTOR, FadeEffectDescriptorClass))

typedef struct _FadeEffectDescriptor FadeEffectDescriptor;
typedef struct _FadeEffectDescriptorClass FadeEffectDescriptorClass;
typedef struct _FadeEffectDescriptorPrivate FadeEffectDescriptorPrivate;

#define TYPE_FADE_EFFECT (fade_effect_get_type ())
#define FADE_EFFECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FADE_EFFECT, FadeEffect))
#define FADE_EFFECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_FADE_EFFECT, FadeEffectClass))
#define IS_FADE_EFFECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FADE_EFFECT))
#define IS_FADE_EFFECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_FADE_EFFECT))
#define FADE_EFFECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_FADE_EFFECT, FadeEffectClass))

typedef struct _FadeEffect FadeEffect;
typedef struct _FadeEffectClass FadeEffectClass;
typedef struct _FadeEffectPrivate FadeEffectPrivate;

struct _ShotwellTransitionDescriptor {
	GObject parent_instance;
	ShotwellTransitionDescriptorPrivate * priv;
};

struct _ShotwellTransitionDescriptorClass {
	GObjectClass parent_class;
	const gchar* (*get_id) (ShotwellTransitionDescriptor* self);
	const gchar* (*get_pluggable_name) (ShotwellTransitionDescriptor* self);
	SpitTransitionsEffect* (*create) (ShotwellTransitionDescriptor* self, SpitHostInterface* host);
};

struct _FadeEffectDescriptor {
	ShotwellTransitionDescriptor parent_instance;
	FadeEffectDescriptorPrivate * priv;
};

struct _FadeEffectDescriptorClass {
	ShotwellTransitionDescriptorClass parent_class;
};

struct _FadeEffect {
	GObject parent_instance;
	FadeEffectPrivate * priv;
};

struct _FadeEffectClass {
	GObjectClass parent_class;
};


static gpointer fade_effect_descriptor_parent_class = NULL;
static gpointer fade_effect_parent_class = NULL;
static SpitTransitionsEffectIface* fade_effect_spit_transitions_effect_parent_iface = NULL;

GType shotwell_transition_descriptor_get_type (void) G_GNUC_CONST;
GType fade_effect_descriptor_get_type (void) G_GNUC_CONST;
enum  {
	FADE_EFFECT_DESCRIPTOR_DUMMY_PROPERTY
};
FadeEffectDescriptor* fade_effect_descriptor_new (GFile* resource_directory);
FadeEffectDescriptor* fade_effect_descriptor_construct (GType object_type, GFile* resource_directory);
ShotwellTransitionDescriptor* shotwell_transition_descriptor_construct (GType object_type, GFile* resource_directory);
static const gchar* fade_effect_descriptor_real_get_id (ShotwellTransitionDescriptor* base);
static const gchar* fade_effect_descriptor_real_get_pluggable_name (ShotwellTransitionDescriptor* base);
static SpitTransitionsEffect* fade_effect_descriptor_real_create (ShotwellTransitionDescriptor* base, SpitHostInterface* host);
FadeEffect* fade_effect_new (void);
FadeEffect* fade_effect_construct (GType object_type);
GType fade_effect_get_type (void) G_GNUC_CONST;
enum  {
	FADE_EFFECT_DUMMY_PROPERTY
};
#define FADE_EFFECT_DESIRED_FPS 30
#define FADE_EFFECT_MIN_FPS 20
static void fade_effect_real_get_fps (SpitTransitionsEffect* base, gint* desired_fps, gint* min_fps);
static void fade_effect_real_start (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion);
static gboolean fade_effect_real_needs_clear_background (SpitTransitionsEffect* base);
static void fade_effect_real_paint (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion, cairo_t* ctx, gint width, gint height, gint frame_number);
static void fade_effect_real_advance (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion, gint frame_number);
static void fade_effect_real_cancel (SpitTransitionsEffect* base);


FadeEffectDescriptor* fade_effect_descriptor_construct (GType object_type, GFile* resource_directory) {
	FadeEffectDescriptor * self = NULL;
	GFile* _tmp0_ = NULL;
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	g_return_val_if_fail (G_IS_FILE (resource_directory), NULL);
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_tmp0_ = resource_directory;
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	self = (FadeEffectDescriptor*) shotwell_transition_descriptor_construct (object_type, _tmp0_);
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	return self;
#line 131 "FadeEffect.c"
}


FadeEffectDescriptor* fade_effect_descriptor_new (GFile* resource_directory) {
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	return fade_effect_descriptor_construct (TYPE_FADE_EFFECT_DESCRIPTOR, resource_directory);
#line 138 "FadeEffect.c"
}


static const gchar* fade_effect_descriptor_real_get_id (ShotwellTransitionDescriptor* base) {
	FadeEffectDescriptor * self;
	const gchar* result = NULL;
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_FADE_EFFECT_DESCRIPTOR, FadeEffectDescriptor);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	result = "org.yorba.shotwell.transitions.fade";
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	return result;
#line 151 "FadeEffect.c"
}


static const gchar* fade_effect_descriptor_real_get_pluggable_name (ShotwellTransitionDescriptor* base) {
	FadeEffectDescriptor * self;
	const gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
#line 19 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_FADE_EFFECT_DESCRIPTOR, FadeEffectDescriptor);
#line 20 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_tmp0_ = _ ("Fade");
#line 20 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	result = _tmp0_;
#line 20 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	return result;
#line 167 "FadeEffect.c"
}


static SpitTransitionsEffect* fade_effect_descriptor_real_create (ShotwellTransitionDescriptor* base, SpitHostInterface* host) {
	FadeEffectDescriptor * self;
	SpitTransitionsEffect* result = NULL;
	FadeEffect* _tmp0_ = NULL;
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_FADE_EFFECT_DESCRIPTOR, FadeEffectDescriptor);
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	g_return_val_if_fail (SPIT_IS_HOST_INTERFACE (host), NULL);
#line 24 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_tmp0_ = fade_effect_new ();
#line 24 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, SPIT_TRANSITIONS_TYPE_EFFECT, SpitTransitionsEffect);
#line 24 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	return result;
#line 185 "FadeEffect.c"
}


static void fade_effect_descriptor_class_init (FadeEffectDescriptorClass * klass) {
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	fade_effect_descriptor_parent_class = g_type_class_peek_parent (klass);
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	((ShotwellTransitionDescriptorClass *) klass)->get_id = fade_effect_descriptor_real_get_id;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	((ShotwellTransitionDescriptorClass *) klass)->get_pluggable_name = fade_effect_descriptor_real_get_pluggable_name;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	((ShotwellTransitionDescriptorClass *) klass)->create = fade_effect_descriptor_real_create;
#line 198 "FadeEffect.c"
}


static void fade_effect_descriptor_instance_init (FadeEffectDescriptor * self) {
}


GType fade_effect_descriptor_get_type (void) {
	static volatile gsize fade_effect_descriptor_type_id__volatile = 0;
	if (g_once_init_enter (&fade_effect_descriptor_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FadeEffectDescriptorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) fade_effect_descriptor_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FadeEffectDescriptor), 0, (GInstanceInitFunc) fade_effect_descriptor_instance_init, NULL };
		GType fade_effect_descriptor_type_id;
		fade_effect_descriptor_type_id = g_type_register_static (TYPE_SHOTWELL_TRANSITION_DESCRIPTOR, "FadeEffectDescriptor", &g_define_type_info, 0);
		g_once_init_leave (&fade_effect_descriptor_type_id__volatile, fade_effect_descriptor_type_id);
	}
	return fade_effect_descriptor_type_id__volatile;
}


FadeEffect* fade_effect_construct (GType object_type) {
	FadeEffect * self = NULL;
#line 32 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	self = (FadeEffect*) g_object_new (object_type, NULL);
#line 32 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	return self;
#line 224 "FadeEffect.c"
}


FadeEffect* fade_effect_new (void) {
#line 32 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	return fade_effect_construct (TYPE_FADE_EFFECT);
#line 231 "FadeEffect.c"
}


static void fade_effect_real_get_fps (SpitTransitionsEffect* base, gint* desired_fps, gint* min_fps) {
	FadeEffect * self;
	gint _vala_desired_fps = 0;
	gint _vala_min_fps = 0;
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_FADE_EFFECT, FadeEffect);
#line 36 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_vala_desired_fps = FADE_EFFECT_DESIRED_FPS;
#line 37 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_vala_min_fps = FADE_EFFECT_MIN_FPS;
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	if (desired_fps) {
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		*desired_fps = _vala_desired_fps;
#line 249 "FadeEffect.c"
	}
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	if (min_fps) {
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		*min_fps = _vala_min_fps;
#line 255 "FadeEffect.c"
	}
}


static void fade_effect_real_start (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion) {
	FadeEffect * self;
#line 40 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_FADE_EFFECT, FadeEffect);
#line 40 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_VISUALS (visuals));
#line 40 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_MOTION (motion));
#line 268 "FadeEffect.c"
}


static gboolean fade_effect_real_needs_clear_background (SpitTransitionsEffect* base) {
	FadeEffect * self;
	gboolean result = FALSE;
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_FADE_EFFECT, FadeEffect);
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	result = TRUE;
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	return result;
#line 281 "FadeEffect.c"
}


static void fade_effect_real_paint (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion, cairo_t* ctx, gint width, gint height, gint frame_number) {
	FadeEffect * self;
	gdouble alpha = 0.0;
	SpitTransitionsMotion* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gdouble _tmp2_ = 0.0;
	SpitTransitionsVisuals* _tmp3_ = NULL;
	GdkPixbuf* _tmp4_ = NULL;
	GdkPixbuf* _tmp5_ = NULL;
	SpitTransitionsVisuals* _tmp20_ = NULL;
	GdkPixbuf* _tmp21_ = NULL;
	GdkPixbuf* _tmp22_ = NULL;
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_FADE_EFFECT, FadeEffect);
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_VISUALS (visuals));
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_MOTION (motion));
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	g_return_if_fail (ctx != NULL);
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_tmp0_ = motion;
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_tmp1_ = frame_number;
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_tmp2_ = spit_transitions_motion_get_alpha (_tmp0_, _tmp1_);
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	alpha = _tmp2_;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_tmp3_ = visuals;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_tmp4_ = spit_transitions_visuals_get_from_pixbuf (_tmp3_);
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_tmp5_ = _tmp4_;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	if (_tmp5_ != NULL) {
#line 321 "FadeEffect.c"
		cairo_t* _tmp6_ = NULL;
		SpitTransitionsVisuals* _tmp7_ = NULL;
		GdkPixbuf* _tmp8_ = NULL;
		GdkPixbuf* _tmp9_ = NULL;
		SpitTransitionsVisuals* _tmp10_ = NULL;
		GdkRectangle _tmp11_ = {0};
		GdkRectangle _tmp12_ = {0};
		gint _tmp13_ = 0;
		SpitTransitionsVisuals* _tmp14_ = NULL;
		GdkRectangle _tmp15_ = {0};
		GdkRectangle _tmp16_ = {0};
		gint _tmp17_ = 0;
		cairo_t* _tmp18_ = NULL;
		gdouble _tmp19_ = 0.0;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp6_ = ctx;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp7_ = visuals;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp8_ = spit_transitions_visuals_get_from_pixbuf (_tmp7_);
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp9_ = _tmp8_;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp10_ = visuals;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		spit_transitions_visuals_get_from_pos (_tmp10_, &_tmp11_);
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp12_ = _tmp11_;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp13_ = _tmp12_.x;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp14_ = visuals;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		spit_transitions_visuals_get_from_pos (_tmp14_, &_tmp15_);
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp16_ = _tmp15_;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp17_ = _tmp16_.y;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		gdk_cairo_set_source_pixbuf (_tmp6_, _tmp9_, (gdouble) _tmp13_, (gdouble) _tmp17_);
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp18_ = ctx;
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp19_ = alpha;
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		cairo_paint_with_alpha (_tmp18_, 1.0 - _tmp19_);
#line 368 "FadeEffect.c"
	}
#line 58 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_tmp20_ = visuals;
#line 58 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_tmp21_ = spit_transitions_visuals_get_to_pixbuf (_tmp20_);
#line 58 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	_tmp22_ = _tmp21_;
#line 58 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	if (_tmp22_ != NULL) {
#line 378 "FadeEffect.c"
		cairo_t* _tmp23_ = NULL;
		SpitTransitionsVisuals* _tmp24_ = NULL;
		GdkPixbuf* _tmp25_ = NULL;
		GdkPixbuf* _tmp26_ = NULL;
		SpitTransitionsVisuals* _tmp27_ = NULL;
		GdkRectangle _tmp28_ = {0};
		GdkRectangle _tmp29_ = {0};
		gint _tmp30_ = 0;
		SpitTransitionsVisuals* _tmp31_ = NULL;
		GdkRectangle _tmp32_ = {0};
		GdkRectangle _tmp33_ = {0};
		gint _tmp34_ = 0;
		cairo_t* _tmp35_ = NULL;
		gdouble _tmp36_ = 0.0;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp23_ = ctx;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp24_ = visuals;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp25_ = spit_transitions_visuals_get_to_pixbuf (_tmp24_);
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp26_ = _tmp25_;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp27_ = visuals;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		spit_transitions_visuals_get_to_pos (_tmp27_, &_tmp28_);
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp29_ = _tmp28_;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp30_ = _tmp29_.x;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp31_ = visuals;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		spit_transitions_visuals_get_to_pos (_tmp31_, &_tmp32_);
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp33_ = _tmp32_;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp34_ = _tmp33_.y;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		gdk_cairo_set_source_pixbuf (_tmp23_, _tmp26_, (gdouble) _tmp30_, (gdouble) _tmp34_);
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp35_ = ctx;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		_tmp36_ = alpha;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
		cairo_paint_with_alpha (_tmp35_, _tmp36_);
#line 425 "FadeEffect.c"
	}
}


static void fade_effect_real_advance (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion, gint frame_number) {
	FadeEffect * self;
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_FADE_EFFECT, FadeEffect);
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_VISUALS (visuals));
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_MOTION (motion));
#line 438 "FadeEffect.c"
}


static void fade_effect_real_cancel (SpitTransitionsEffect* base) {
	FadeEffect * self;
#line 67 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_FADE_EFFECT, FadeEffect);
#line 446 "FadeEffect.c"
}


static void fade_effect_class_init (FadeEffectClass * klass) {
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	fade_effect_parent_class = g_type_class_peek_parent (klass);
#line 453 "FadeEffect.c"
}


static void fade_effect_spit_transitions_effect_interface_init (SpitTransitionsEffectIface * iface) {
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	fade_effect_spit_transitions_effect_parent_iface = g_type_interface_peek_parent (iface);
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	iface->get_fps = (void (*)(SpitTransitionsEffect*, gint*, gint*)) fade_effect_real_get_fps;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	iface->start = (void (*)(SpitTransitionsEffect*, SpitTransitionsVisuals*, SpitTransitionsMotion*)) fade_effect_real_start;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	iface->needs_clear_background = (gboolean (*)(SpitTransitionsEffect*)) fade_effect_real_needs_clear_background;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	iface->paint = (void (*)(SpitTransitionsEffect*, SpitTransitionsVisuals*, SpitTransitionsMotion*, cairo_t*, gint, gint, gint)) fade_effect_real_paint;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	iface->advance = (void (*)(SpitTransitionsEffect*, SpitTransitionsVisuals*, SpitTransitionsMotion*, gint)) fade_effect_real_advance;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/FadeEffect.vala"
	iface->cancel = (void (*)(SpitTransitionsEffect*)) fade_effect_real_cancel;
#line 472 "FadeEffect.c"
}


static void fade_effect_instance_init (FadeEffect * self) {
}


GType fade_effect_get_type (void) {
	static volatile gsize fade_effect_type_id__volatile = 0;
	if (g_once_init_enter (&fade_effect_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FadeEffectClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) fade_effect_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FadeEffect), 0, (GInstanceInitFunc) fade_effect_instance_init, NULL };
		static const GInterfaceInfo spit_transitions_effect_info = { (GInterfaceInitFunc) fade_effect_spit_transitions_effect_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType fade_effect_type_id;
		fade_effect_type_id = g_type_register_static (G_TYPE_OBJECT, "FadeEffect", &g_define_type_info, 0);
		g_type_add_interface_static (fade_effect_type_id, SPIT_TRANSITIONS_TYPE_EFFECT, &spit_transitions_effect_info);
		g_once_init_leave (&fade_effect_type_id__volatile, fade_effect_type_id);
	}
	return fade_effect_type_id__volatile;
}


