/* StripesEffect.c generated by valac 0.34.2, the Vala compiler
 * generated from StripesEffect.vala, do not modify */

/* Copyright 2013 Jens Bav
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

#define TYPE_STRIPES_EFFECT_DESCRIPTOR (stripes_effect_descriptor_get_type ())
#define STRIPES_EFFECT_DESCRIPTOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_STRIPES_EFFECT_DESCRIPTOR, StripesEffectDescriptor))
#define STRIPES_EFFECT_DESCRIPTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_STRIPES_EFFECT_DESCRIPTOR, StripesEffectDescriptorClass))
#define IS_STRIPES_EFFECT_DESCRIPTOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_STRIPES_EFFECT_DESCRIPTOR))
#define IS_STRIPES_EFFECT_DESCRIPTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_STRIPES_EFFECT_DESCRIPTOR))
#define STRIPES_EFFECT_DESCRIPTOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_STRIPES_EFFECT_DESCRIPTOR, StripesEffectDescriptorClass))

typedef struct _StripesEffectDescriptor StripesEffectDescriptor;
typedef struct _StripesEffectDescriptorClass StripesEffectDescriptorClass;
typedef struct _StripesEffectDescriptorPrivate StripesEffectDescriptorPrivate;

#define TYPE_STRIPES_EFFECT (stripes_effect_get_type ())
#define STRIPES_EFFECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_STRIPES_EFFECT, StripesEffect))
#define STRIPES_EFFECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_STRIPES_EFFECT, StripesEffectClass))
#define IS_STRIPES_EFFECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_STRIPES_EFFECT))
#define IS_STRIPES_EFFECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_STRIPES_EFFECT))
#define STRIPES_EFFECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_STRIPES_EFFECT, StripesEffectClass))

typedef struct _StripesEffect StripesEffect;
typedef struct _StripesEffectClass StripesEffectClass;
typedef struct _StripesEffectPrivate StripesEffectPrivate;

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

struct _StripesEffectDescriptor {
	ShotwellTransitionDescriptor parent_instance;
	StripesEffectDescriptorPrivate * priv;
};

struct _StripesEffectDescriptorClass {
	ShotwellTransitionDescriptorClass parent_class;
};

struct _StripesEffect {
	GObject parent_instance;
	StripesEffectPrivate * priv;
};

struct _StripesEffectClass {
	GObjectClass parent_class;
};

struct _StripesEffectPrivate {
	gint stripe_count;
};


static gpointer stripes_effect_descriptor_parent_class = NULL;
static gpointer stripes_effect_parent_class = NULL;
static SpitTransitionsEffectIface* stripes_effect_spit_transitions_effect_parent_iface = NULL;

GType shotwell_transition_descriptor_get_type (void) G_GNUC_CONST;
GType stripes_effect_descriptor_get_type (void) G_GNUC_CONST;
enum  {
	STRIPES_EFFECT_DESCRIPTOR_DUMMY_PROPERTY
};
StripesEffectDescriptor* stripes_effect_descriptor_new (GFile* resource_directory);
StripesEffectDescriptor* stripes_effect_descriptor_construct (GType object_type, GFile* resource_directory);
ShotwellTransitionDescriptor* shotwell_transition_descriptor_construct (GType object_type, GFile* resource_directory);
static const gchar* stripes_effect_descriptor_real_get_id (ShotwellTransitionDescriptor* base);
static const gchar* stripes_effect_descriptor_real_get_pluggable_name (ShotwellTransitionDescriptor* base);
static SpitTransitionsEffect* stripes_effect_descriptor_real_create (ShotwellTransitionDescriptor* base, SpitHostInterface* host);
StripesEffect* stripes_effect_new (void);
StripesEffect* stripes_effect_construct (GType object_type);
GType stripes_effect_get_type (void) G_GNUC_CONST;
#define STRIPES_EFFECT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_STRIPES_EFFECT, StripesEffectPrivate))
enum  {
	STRIPES_EFFECT_DUMMY_PROPERTY
};
#define STRIPES_EFFECT_DESIRED_FPS 25
#define STRIPES_EFFECT_MIN_FPS 10
#define STRIPES_EFFECT_STRIPE_HEIGHT 100
static void stripes_effect_real_get_fps (SpitTransitionsEffect* base, gint* desired_fps, gint* min_fps);
static void stripes_effect_real_start (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion);
static gboolean stripes_effect_real_needs_clear_background (SpitTransitionsEffect* base);
static void stripes_effect_real_paint (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion, cairo_t* ctx, gint width, gint height, gint frame_number);
static void stripes_effect_real_advance (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion, gint frame_number);
static void stripes_effect_real_cancel (SpitTransitionsEffect* base);
static void stripes_effect_finalize (GObject* obj);


StripesEffectDescriptor* stripes_effect_descriptor_construct (GType object_type, GFile* resource_directory) {
	StripesEffectDescriptor * self = NULL;
	GFile* _tmp0_ = NULL;
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	g_return_val_if_fail (G_IS_FILE (resource_directory), NULL);
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp0_ = resource_directory;
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self = (StripesEffectDescriptor*) shotwell_transition_descriptor_construct (object_type, _tmp0_);
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	return self;
#line 138 "StripesEffect.c"
}


StripesEffectDescriptor* stripes_effect_descriptor_new (GFile* resource_directory) {
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	return stripes_effect_descriptor_construct (TYPE_STRIPES_EFFECT_DESCRIPTOR, resource_directory);
#line 145 "StripesEffect.c"
}


static const gchar* stripes_effect_descriptor_real_get_id (ShotwellTransitionDescriptor* base) {
	StripesEffectDescriptor * self;
	const gchar* result = NULL;
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_STRIPES_EFFECT_DESCRIPTOR, StripesEffectDescriptor);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	result = "org.yorba.shotwell.transitions.stripes";
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	return result;
#line 158 "StripesEffect.c"
}


static const gchar* stripes_effect_descriptor_real_get_pluggable_name (ShotwellTransitionDescriptor* base) {
	StripesEffectDescriptor * self;
	const gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
#line 19 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_STRIPES_EFFECT_DESCRIPTOR, StripesEffectDescriptor);
#line 20 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp0_ = _ ("Stripes");
#line 20 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	result = _tmp0_;
#line 20 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	return result;
#line 174 "StripesEffect.c"
}


static SpitTransitionsEffect* stripes_effect_descriptor_real_create (ShotwellTransitionDescriptor* base, SpitHostInterface* host) {
	StripesEffectDescriptor * self;
	SpitTransitionsEffect* result = NULL;
	StripesEffect* _tmp0_ = NULL;
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_STRIPES_EFFECT_DESCRIPTOR, StripesEffectDescriptor);
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	g_return_val_if_fail (SPIT_IS_HOST_INTERFACE (host), NULL);
#line 24 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp0_ = stripes_effect_new ();
#line 24 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, SPIT_TRANSITIONS_TYPE_EFFECT, SpitTransitionsEffect);
#line 24 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	return result;
#line 192 "StripesEffect.c"
}


static void stripes_effect_descriptor_class_init (StripesEffectDescriptorClass * klass) {
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	stripes_effect_descriptor_parent_class = g_type_class_peek_parent (klass);
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	((ShotwellTransitionDescriptorClass *) klass)->get_id = stripes_effect_descriptor_real_get_id;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	((ShotwellTransitionDescriptorClass *) klass)->get_pluggable_name = stripes_effect_descriptor_real_get_pluggable_name;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	((ShotwellTransitionDescriptorClass *) klass)->create = stripes_effect_descriptor_real_create;
#line 205 "StripesEffect.c"
}


static void stripes_effect_descriptor_instance_init (StripesEffectDescriptor * self) {
}


GType stripes_effect_descriptor_get_type (void) {
	static volatile gsize stripes_effect_descriptor_type_id__volatile = 0;
	if (g_once_init_enter (&stripes_effect_descriptor_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (StripesEffectDescriptorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) stripes_effect_descriptor_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (StripesEffectDescriptor), 0, (GInstanceInitFunc) stripes_effect_descriptor_instance_init, NULL };
		GType stripes_effect_descriptor_type_id;
		stripes_effect_descriptor_type_id = g_type_register_static (TYPE_SHOTWELL_TRANSITION_DESCRIPTOR, "StripesEffectDescriptor", &g_define_type_info, 0);
		g_once_init_leave (&stripes_effect_descriptor_type_id__volatile, stripes_effect_descriptor_type_id);
	}
	return stripes_effect_descriptor_type_id__volatile;
}


StripesEffect* stripes_effect_construct (GType object_type) {
	StripesEffect * self = NULL;
#line 34 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self = (StripesEffect*) g_object_new (object_type, NULL);
#line 34 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	return self;
#line 231 "StripesEffect.c"
}


StripesEffect* stripes_effect_new (void) {
#line 34 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	return stripes_effect_construct (TYPE_STRIPES_EFFECT);
#line 238 "StripesEffect.c"
}


static void stripes_effect_real_get_fps (SpitTransitionsEffect* base, gint* desired_fps, gint* min_fps) {
	StripesEffect * self;
	gint _vala_desired_fps = 0;
	gint _vala_min_fps = 0;
#line 37 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_STRIPES_EFFECT, StripesEffect);
#line 38 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_vala_desired_fps = STRIPES_EFFECT_DESIRED_FPS;
#line 39 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_vala_min_fps = STRIPES_EFFECT_MIN_FPS;
#line 37 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	if (desired_fps) {
#line 37 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		*desired_fps = _vala_desired_fps;
#line 256 "StripesEffect.c"
	}
#line 37 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	if (min_fps) {
#line 37 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		*min_fps = _vala_min_fps;
#line 262 "StripesEffect.c"
	}
}


static void stripes_effect_real_start (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion) {
	StripesEffect * self;
	SpitTransitionsVisuals* _tmp0_ = NULL;
	GdkRectangle _tmp1_ = {0};
	GdkRectangle _tmp2_ = {0};
	gint _tmp3_ = 0;
#line 42 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_STRIPES_EFFECT, StripesEffect);
#line 42 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_VISUALS (visuals));
#line 42 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_MOTION (motion));
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp0_ = visuals;
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	spit_transitions_visuals_get_to_pos (_tmp0_, &_tmp1_);
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp2_ = _tmp1_;
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp3_ = _tmp2_.height;
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self->priv->stripe_count = (_tmp3_ / STRIPES_EFFECT_STRIPE_HEIGHT) + 1;
#line 289 "StripesEffect.c"
}


static gboolean stripes_effect_real_needs_clear_background (SpitTransitionsEffect* base) {
	StripesEffect * self;
	gboolean result = FALSE;
#line 46 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_STRIPES_EFFECT, StripesEffect);
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	result = TRUE;
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	return result;
#line 302 "StripesEffect.c"
}


static void stripes_effect_real_paint (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion, cairo_t* ctx, gint width, gint height, gint frame_number) {
	StripesEffect * self;
	gdouble alpha = 0.0;
	SpitTransitionsMotion* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gdouble _tmp2_ = 0.0;
	SpitTransitionsVisuals* _tmp3_ = NULL;
	GdkPixbuf* _tmp4_ = NULL;
	GdkPixbuf* _tmp5_ = NULL;
	SpitTransitionsVisuals* _tmp21_ = NULL;
	GdkPixbuf* _tmp22_ = NULL;
	GdkPixbuf* _tmp23_ = NULL;
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_STRIPES_EFFECT, StripesEffect);
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_VISUALS (visuals));
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_MOTION (motion));
#line 50 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	g_return_if_fail (ctx != NULL);
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp0_ = motion;
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp1_ = frame_number;
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp2_ = spit_transitions_motion_get_alpha (_tmp0_, _tmp1_);
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	alpha = _tmp2_;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp3_ = visuals;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp4_ = spit_transitions_visuals_get_from_pixbuf (_tmp3_);
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp5_ = _tmp4_;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	if (_tmp5_ != NULL) {
#line 342 "StripesEffect.c"
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
		gdouble _tmp20_ = 0.0;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp6_ = ctx;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp7_ = visuals;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp8_ = spit_transitions_visuals_get_from_pixbuf (_tmp7_);
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp9_ = _tmp8_;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp10_ = visuals;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		spit_transitions_visuals_get_from_pos (_tmp10_, &_tmp11_);
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp12_ = _tmp11_;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp13_ = _tmp12_.x;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp14_ = visuals;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		spit_transitions_visuals_get_from_pos (_tmp14_, &_tmp15_);
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp16_ = _tmp15_;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp17_ = _tmp16_.y;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		gdk_cairo_set_source_pixbuf (_tmp6_, _tmp9_, (gdouble) _tmp13_, (gdouble) _tmp17_);
#line 56 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp18_ = ctx;
#line 56 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp19_ = alpha;
#line 56 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp20_ = fmin ((gdouble) 1, _tmp19_ * 2);
#line 56 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		cairo_paint_with_alpha (_tmp18_, 1 - _tmp20_);
#line 392 "StripesEffect.c"
	}
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp21_ = visuals;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp22_ = spit_transitions_visuals_get_to_pixbuf (_tmp21_);
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	_tmp23_ = _tmp22_;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	if (_tmp23_ != NULL) {
#line 402 "StripesEffect.c"
		cairo_t* _tmp24_ = NULL;
		SpitTransitionsVisuals* _tmp25_ = NULL;
		GdkPixbuf* _tmp26_ = NULL;
		GdkPixbuf* _tmp27_ = NULL;
		SpitTransitionsVisuals* _tmp28_ = NULL;
		GdkRectangle _tmp29_ = {0};
		GdkRectangle _tmp30_ = {0};
		gint _tmp31_ = 0;
		SpitTransitionsVisuals* _tmp32_ = NULL;
		GdkRectangle _tmp33_ = {0};
		GdkRectangle _tmp34_ = {0};
		gint _tmp35_ = 0;
		gint x = 0;
		SpitTransitionsVisuals* _tmp36_ = NULL;
		GdkRectangle _tmp37_ = {0};
		GdkRectangle _tmp38_ = {0};
		gint _tmp39_ = 0;
		gint y = 0;
		SpitTransitionsVisuals* _tmp40_ = NULL;
		GdkRectangle _tmp41_ = {0};
		GdkRectangle _tmp42_ = {0};
		gint _tmp43_ = 0;
		cairo_t* _tmp79_ = NULL;
		cairo_t* _tmp80_ = NULL;
		gdouble _tmp81_ = 0.0;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp24_ = ctx;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp25_ = visuals;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp26_ = spit_transitions_visuals_get_to_pixbuf (_tmp25_);
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp27_ = _tmp26_;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp28_ = visuals;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		spit_transitions_visuals_get_to_pos (_tmp28_, &_tmp29_);
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp30_ = _tmp29_;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp31_ = _tmp30_.x;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp32_ = visuals;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		spit_transitions_visuals_get_to_pos (_tmp32_, &_tmp33_);
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp34_ = _tmp33_;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp35_ = _tmp34_.y;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		gdk_cairo_set_source_pixbuf (_tmp24_, _tmp27_, (gdouble) _tmp31_, (gdouble) _tmp35_);
#line 61 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp36_ = visuals;
#line 61 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		spit_transitions_visuals_get_to_pos (_tmp36_, &_tmp37_);
#line 61 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp38_ = _tmp37_;
#line 61 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp39_ = _tmp38_.x;
#line 61 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		x = _tmp39_;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp40_ = visuals;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		spit_transitions_visuals_get_to_pos (_tmp40_, &_tmp41_);
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp42_ = _tmp41_;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp43_ = _tmp42_.y;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		y = _tmp43_;
#line 474 "StripesEffect.c"
		{
			gint i = 0;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
			i = 0;
#line 479 "StripesEffect.c"
			{
				gboolean _tmp44_ = FALSE;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
				_tmp44_ = TRUE;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
				while (TRUE) {
#line 486 "StripesEffect.c"
					gint _tmp46_ = 0;
					gint _tmp47_ = 0;
					gint _tmp48_ = 0;
					SpitTransitionsMotion* _tmp49_ = NULL;
					SpitTransitionsDirection _tmp50_ = 0;
					SpitTransitionsDirection _tmp51_ = 0;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
					if (!_tmp44_) {
#line 495 "StripesEffect.c"
						gint _tmp45_ = 0;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp45_ = i;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						i = _tmp45_ + 1;
#line 501 "StripesEffect.c"
					}
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
					_tmp44_ = FALSE;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
					_tmp46_ = i;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
					_tmp47_ = self->priv->stripe_count;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
					if (!(_tmp46_ <= _tmp47_)) {
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						break;
#line 513 "StripesEffect.c"
					}
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
					_tmp48_ = i;
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
					_tmp49_ = motion;
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
					_tmp50_ = spit_transitions_motion_get_direction (_tmp49_);
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
					_tmp51_ = _tmp50_;
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
					if ((_tmp48_ % 2) == ((gint) _tmp51_)) {
#line 525 "StripesEffect.c"
						cairo_t* _tmp52_ = NULL;
						gint _tmp53_ = 0;
						SpitTransitionsVisuals* _tmp54_ = NULL;
						GdkRectangle _tmp55_ = {0};
						GdkRectangle _tmp56_ = {0};
						gint _tmp57_ = 0;
						gdouble _tmp58_ = 0.0;
						SpitTransitionsVisuals* _tmp59_ = NULL;
						GdkRectangle _tmp60_ = {0};
						GdkRectangle _tmp61_ = {0};
						gint _tmp62_ = 0;
						gint _tmp63_ = 0;
						gint _tmp64_ = 0;
						gint _tmp65_ = 0;
						SpitTransitionsVisuals* _tmp66_ = NULL;
						GdkRectangle _tmp67_ = {0};
						GdkRectangle _tmp68_ = {0};
						gint _tmp69_ = 0;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp52_ = ctx;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp53_ = x;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp54_ = visuals;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						spit_transitions_visuals_get_to_pos (_tmp54_, &_tmp55_);
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp56_ = _tmp55_;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp57_ = _tmp56_.width;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp58_ = alpha;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp59_ = visuals;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						spit_transitions_visuals_get_to_pos (_tmp59_, &_tmp60_);
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp61_ = _tmp60_;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp62_ = _tmp61_.width;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp63_ = y;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp64_ = i;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp65_ = x;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp66_ = visuals;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						spit_transitions_visuals_get_to_pos (_tmp66_, &_tmp67_);
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp68_ = _tmp67_;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp69_ = _tmp68_.width;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						cairo_rectangle (_tmp52_, (_tmp53_ + _tmp57_) - (_tmp58_ * _tmp62_), (gdouble) (_tmp63_ + (_tmp64_ * STRIPES_EFFECT_STRIPE_HEIGHT)), (gdouble) (_tmp65_ + _tmp69_), (gdouble) STRIPES_EFFECT_STRIPE_HEIGHT);
#line 582 "StripesEffect.c"
					} else {
						cairo_t* _tmp70_ = NULL;
						gint _tmp71_ = 0;
						gint _tmp72_ = 0;
						gint _tmp73_ = 0;
						SpitTransitionsVisuals* _tmp74_ = NULL;
						GdkRectangle _tmp75_ = {0};
						GdkRectangle _tmp76_ = {0};
						gint _tmp77_ = 0;
						gdouble _tmp78_ = 0.0;
#line 68 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp70_ = ctx;
#line 68 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp71_ = x;
#line 68 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp72_ = y;
#line 68 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp73_ = i;
#line 68 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp74_ = visuals;
#line 68 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						spit_transitions_visuals_get_to_pos (_tmp74_, &_tmp75_);
#line 68 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp76_ = _tmp75_;
#line 68 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp77_ = _tmp76_.width;
#line 68 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						_tmp78_ = alpha;
#line 68 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
						cairo_rectangle (_tmp70_, (gdouble) _tmp71_, (gdouble) (_tmp72_ + (STRIPES_EFFECT_STRIPE_HEIGHT * _tmp73_)), _tmp77_ * _tmp78_, (gdouble) STRIPES_EFFECT_STRIPE_HEIGHT);
#line 613 "StripesEffect.c"
					}
				}
			}
		}
#line 73 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp79_ = ctx;
#line 73 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		cairo_clip (_tmp79_);
#line 74 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp80_ = ctx;
#line 74 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		_tmp81_ = alpha;
#line 74 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
		cairo_paint_with_alpha (_tmp80_, _tmp81_);
#line 628 "StripesEffect.c"
	}
}


static void stripes_effect_real_advance (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion, gint frame_number) {
	StripesEffect * self;
#line 78 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_STRIPES_EFFECT, StripesEffect);
#line 78 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_VISUALS (visuals));
#line 78 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_MOTION (motion));
#line 641 "StripesEffect.c"
}


static void stripes_effect_real_cancel (SpitTransitionsEffect* base) {
	StripesEffect * self;
#line 81 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_STRIPES_EFFECT, StripesEffect);
#line 649 "StripesEffect.c"
}


static void stripes_effect_class_init (StripesEffectClass * klass) {
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	stripes_effect_parent_class = g_type_class_peek_parent (klass);
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	g_type_class_add_private (klass, sizeof (StripesEffectPrivate));
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	G_OBJECT_CLASS (klass)->finalize = stripes_effect_finalize;
#line 660 "StripesEffect.c"
}


static void stripes_effect_spit_transitions_effect_interface_init (SpitTransitionsEffectIface * iface) {
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	stripes_effect_spit_transitions_effect_parent_iface = g_type_interface_peek_parent (iface);
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	iface->get_fps = (void (*)(SpitTransitionsEffect*, gint*, gint*)) stripes_effect_real_get_fps;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	iface->start = (void (*)(SpitTransitionsEffect*, SpitTransitionsVisuals*, SpitTransitionsMotion*)) stripes_effect_real_start;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	iface->needs_clear_background = (gboolean (*)(SpitTransitionsEffect*)) stripes_effect_real_needs_clear_background;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	iface->paint = (void (*)(SpitTransitionsEffect*, SpitTransitionsVisuals*, SpitTransitionsMotion*, cairo_t*, gint, gint, gint)) stripes_effect_real_paint;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	iface->advance = (void (*)(SpitTransitionsEffect*, SpitTransitionsVisuals*, SpitTransitionsMotion*, gint)) stripes_effect_real_advance;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	iface->cancel = (void (*)(SpitTransitionsEffect*)) stripes_effect_real_cancel;
#line 679 "StripesEffect.c"
}


static void stripes_effect_instance_init (StripesEffect * self) {
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self->priv = STRIPES_EFFECT_GET_PRIVATE (self);
#line 686 "StripesEffect.c"
}


static void stripes_effect_finalize (GObject* obj) {
	StripesEffect * self;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_STRIPES_EFFECT, StripesEffect);
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/StripesEffect.vala"
	G_OBJECT_CLASS (stripes_effect_parent_class)->finalize (obj);
#line 696 "StripesEffect.c"
}


GType stripes_effect_get_type (void) {
	static volatile gsize stripes_effect_type_id__volatile = 0;
	if (g_once_init_enter (&stripes_effect_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (StripesEffectClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) stripes_effect_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (StripesEffect), 0, (GInstanceInitFunc) stripes_effect_instance_init, NULL };
		static const GInterfaceInfo spit_transitions_effect_info = { (GInterfaceInitFunc) stripes_effect_spit_transitions_effect_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType stripes_effect_type_id;
		stripes_effect_type_id = g_type_register_static (G_TYPE_OBJECT, "StripesEffect", &g_define_type_info, 0);
		g_type_add_interface_static (stripes_effect_type_id, SPIT_TRANSITIONS_TYPE_EFFECT, &spit_transitions_effect_info);
		g_once_init_leave (&stripes_effect_type_id__volatile, stripes_effect_type_id);
	}
	return stripes_effect_type_id__volatile;
}



