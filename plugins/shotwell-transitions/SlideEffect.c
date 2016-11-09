/* SlideEffect.c generated by valac 0.34.2, the Vala compiler
 * generated from SlideEffect.vala, do not modify */

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
#include <gdk-pixbuf/gdk-pixbuf.h>
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

#define TYPE_SLIDE_EFFECT_DESCRIPTOR (slide_effect_descriptor_get_type ())
#define SLIDE_EFFECT_DESCRIPTOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SLIDE_EFFECT_DESCRIPTOR, SlideEffectDescriptor))
#define SLIDE_EFFECT_DESCRIPTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SLIDE_EFFECT_DESCRIPTOR, SlideEffectDescriptorClass))
#define IS_SLIDE_EFFECT_DESCRIPTOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SLIDE_EFFECT_DESCRIPTOR))
#define IS_SLIDE_EFFECT_DESCRIPTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SLIDE_EFFECT_DESCRIPTOR))
#define SLIDE_EFFECT_DESCRIPTOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SLIDE_EFFECT_DESCRIPTOR, SlideEffectDescriptorClass))

typedef struct _SlideEffectDescriptor SlideEffectDescriptor;
typedef struct _SlideEffectDescriptorClass SlideEffectDescriptorClass;
typedef struct _SlideEffectDescriptorPrivate SlideEffectDescriptorPrivate;

#define TYPE_SLIDE_EFFECT (slide_effect_get_type ())
#define SLIDE_EFFECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SLIDE_EFFECT, SlideEffect))
#define SLIDE_EFFECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SLIDE_EFFECT, SlideEffectClass))
#define IS_SLIDE_EFFECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SLIDE_EFFECT))
#define IS_SLIDE_EFFECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SLIDE_EFFECT))
#define SLIDE_EFFECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SLIDE_EFFECT, SlideEffectClass))

typedef struct _SlideEffect SlideEffect;
typedef struct _SlideEffectClass SlideEffectClass;
typedef struct _SlideEffectPrivate SlideEffectPrivate;

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

struct _SlideEffectDescriptor {
	ShotwellTransitionDescriptor parent_instance;
	SlideEffectDescriptorPrivate * priv;
};

struct _SlideEffectDescriptorClass {
	ShotwellTransitionDescriptorClass parent_class;
};

struct _SlideEffect {
	GObject parent_instance;
	SlideEffectPrivate * priv;
};

struct _SlideEffectClass {
	GObjectClass parent_class;
};


static gpointer slide_effect_descriptor_parent_class = NULL;
static gpointer slide_effect_parent_class = NULL;
static SpitTransitionsEffectIface* slide_effect_spit_transitions_effect_parent_iface = NULL;

GType shotwell_transition_descriptor_get_type (void) G_GNUC_CONST;
GType slide_effect_descriptor_get_type (void) G_GNUC_CONST;
enum  {
	SLIDE_EFFECT_DESCRIPTOR_DUMMY_PROPERTY
};
SlideEffectDescriptor* slide_effect_descriptor_new (GFile* resource_directory);
SlideEffectDescriptor* slide_effect_descriptor_construct (GType object_type, GFile* resource_directory);
ShotwellTransitionDescriptor* shotwell_transition_descriptor_construct (GType object_type, GFile* resource_directory);
static const gchar* slide_effect_descriptor_real_get_id (ShotwellTransitionDescriptor* base);
static const gchar* slide_effect_descriptor_real_get_pluggable_name (ShotwellTransitionDescriptor* base);
static SpitTransitionsEffect* slide_effect_descriptor_real_create (ShotwellTransitionDescriptor* base, SpitHostInterface* host);
SlideEffect* slide_effect_new (void);
SlideEffect* slide_effect_construct (GType object_type);
GType slide_effect_get_type (void) G_GNUC_CONST;
enum  {
	SLIDE_EFFECT_DUMMY_PROPERTY
};
#define SLIDE_EFFECT_DESIRED_FPS 25
#define SLIDE_EFFECT_MIN_FPS 15
static void slide_effect_real_get_fps (SpitTransitionsEffect* base, gint* desired_fps, gint* min_fps);
static void slide_effect_real_start (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion);
static gboolean slide_effect_real_needs_clear_background (SpitTransitionsEffect* base);
static void slide_effect_real_paint (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion, cairo_t* ctx, gint width, gint height, gint frame_number);
static void slide_effect_real_advance (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion, gint frame_number);
static void slide_effect_real_cancel (SpitTransitionsEffect* base);


SlideEffectDescriptor* slide_effect_descriptor_construct (GType object_type, GFile* resource_directory) {
	SlideEffectDescriptor * self = NULL;
	GFile* _tmp0_ = NULL;
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	g_return_val_if_fail (G_IS_FILE (resource_directory), NULL);
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_tmp0_ = resource_directory;
#line 12 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	self = (SlideEffectDescriptor*) shotwell_transition_descriptor_construct (object_type, _tmp0_);
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	return self;
#line 132 "SlideEffect.c"
}


SlideEffectDescriptor* slide_effect_descriptor_new (GFile* resource_directory) {
#line 11 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	return slide_effect_descriptor_construct (TYPE_SLIDE_EFFECT_DESCRIPTOR, resource_directory);
#line 139 "SlideEffect.c"
}


static const gchar* slide_effect_descriptor_real_get_id (ShotwellTransitionDescriptor* base) {
	SlideEffectDescriptor * self;
	const gchar* result = NULL;
#line 15 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SLIDE_EFFECT_DESCRIPTOR, SlideEffectDescriptor);
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	result = "org.yorba.shotwell.transitions.slide";
#line 16 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	return result;
#line 152 "SlideEffect.c"
}


static const gchar* slide_effect_descriptor_real_get_pluggable_name (ShotwellTransitionDescriptor* base) {
	SlideEffectDescriptor * self;
	const gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
#line 19 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SLIDE_EFFECT_DESCRIPTOR, SlideEffectDescriptor);
#line 20 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_tmp0_ = _ ("Slide");
#line 20 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	result = _tmp0_;
#line 20 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	return result;
#line 168 "SlideEffect.c"
}


static SpitTransitionsEffect* slide_effect_descriptor_real_create (ShotwellTransitionDescriptor* base, SpitHostInterface* host) {
	SlideEffectDescriptor * self;
	SpitTransitionsEffect* result = NULL;
	SlideEffect* _tmp0_ = NULL;
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SLIDE_EFFECT_DESCRIPTOR, SlideEffectDescriptor);
#line 23 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	g_return_val_if_fail (SPIT_IS_HOST_INTERFACE (host), NULL);
#line 24 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_tmp0_ = slide_effect_new ();
#line 24 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, SPIT_TRANSITIONS_TYPE_EFFECT, SpitTransitionsEffect);
#line 24 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	return result;
#line 186 "SlideEffect.c"
}


static void slide_effect_descriptor_class_init (SlideEffectDescriptorClass * klass) {
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	slide_effect_descriptor_parent_class = g_type_class_peek_parent (klass);
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	((ShotwellTransitionDescriptorClass *) klass)->get_id = slide_effect_descriptor_real_get_id;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	((ShotwellTransitionDescriptorClass *) klass)->get_pluggable_name = slide_effect_descriptor_real_get_pluggable_name;
#line 10 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	((ShotwellTransitionDescriptorClass *) klass)->create = slide_effect_descriptor_real_create;
#line 199 "SlideEffect.c"
}


static void slide_effect_descriptor_instance_init (SlideEffectDescriptor * self) {
}


GType slide_effect_descriptor_get_type (void) {
	static volatile gsize slide_effect_descriptor_type_id__volatile = 0;
	if (g_once_init_enter (&slide_effect_descriptor_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SlideEffectDescriptorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) slide_effect_descriptor_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SlideEffectDescriptor), 0, (GInstanceInitFunc) slide_effect_descriptor_instance_init, NULL };
		GType slide_effect_descriptor_type_id;
		slide_effect_descriptor_type_id = g_type_register_static (TYPE_SHOTWELL_TRANSITION_DESCRIPTOR, "SlideEffectDescriptor", &g_define_type_info, 0);
		g_once_init_leave (&slide_effect_descriptor_type_id__volatile, slide_effect_descriptor_type_id);
	}
	return slide_effect_descriptor_type_id__volatile;
}


SlideEffect* slide_effect_construct (GType object_type) {
	SlideEffect * self = NULL;
#line 32 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	self = (SlideEffect*) g_object_new (object_type, NULL);
#line 32 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	return self;
#line 225 "SlideEffect.c"
}


SlideEffect* slide_effect_new (void) {
#line 32 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	return slide_effect_construct (TYPE_SLIDE_EFFECT);
#line 232 "SlideEffect.c"
}


static void slide_effect_real_get_fps (SpitTransitionsEffect* base, gint* desired_fps, gint* min_fps) {
	SlideEffect * self;
	gint _vala_desired_fps = 0;
	gint _vala_min_fps = 0;
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SLIDE_EFFECT, SlideEffect);
#line 36 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_vala_desired_fps = SLIDE_EFFECT_DESIRED_FPS;
#line 37 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_vala_min_fps = SLIDE_EFFECT_MIN_FPS;
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	if (desired_fps) {
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		*desired_fps = _vala_desired_fps;
#line 250 "SlideEffect.c"
	}
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	if (min_fps) {
#line 35 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		*min_fps = _vala_min_fps;
#line 256 "SlideEffect.c"
	}
}


static void slide_effect_real_start (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion) {
	SlideEffect * self;
#line 40 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SLIDE_EFFECT, SlideEffect);
#line 40 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_VISUALS (visuals));
#line 40 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_MOTION (motion));
#line 269 "SlideEffect.c"
}


static gboolean slide_effect_real_needs_clear_background (SpitTransitionsEffect* base) {
	SlideEffect * self;
	gboolean result = FALSE;
#line 43 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SLIDE_EFFECT, SlideEffect);
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	result = TRUE;
#line 44 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	return result;
#line 282 "SlideEffect.c"
}


static void slide_effect_real_paint (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion, cairo_t* ctx, gint width, gint height, gint frame_number) {
	SlideEffect * self;
	gdouble alpha = 0.0;
	SpitTransitionsMotion* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gdouble _tmp2_ = 0.0;
	SpitTransitionsVisuals* _tmp3_ = NULL;
	GdkPixbuf* _tmp4_ = NULL;
	GdkPixbuf* _tmp5_ = NULL;
	SpitTransitionsVisuals* _tmp33_ = NULL;
	GdkPixbuf* _tmp34_ = NULL;
	GdkPixbuf* _tmp35_ = NULL;
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SLIDE_EFFECT, SlideEffect);
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_VISUALS (visuals));
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_MOTION (motion));
#line 47 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	g_return_if_fail (ctx != NULL);
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_tmp0_ = motion;
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_tmp1_ = frame_number;
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_tmp2_ = spit_transitions_motion_get_alpha (_tmp0_, _tmp1_);
#line 49 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	alpha = _tmp2_;
#line 51 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_tmp3_ = visuals;
#line 51 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_tmp4_ = spit_transitions_visuals_get_from_pixbuf (_tmp3_);
#line 51 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_tmp5_ = _tmp4_;
#line 51 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	if (_tmp5_ != NULL) {
#line 322 "SlideEffect.c"
		gint _tmp6_ = 0;
		SpitTransitionsMotion* _tmp7_ = NULL;
		SpitTransitionsDirection _tmp8_ = 0;
		SpitTransitionsDirection _tmp9_ = 0;
		gint from_target_x = 0;
		gint from_current_x = 0;
		SpitTransitionsVisuals* _tmp16_ = NULL;
		GdkRectangle _tmp17_ = {0};
		GdkRectangle _tmp18_ = {0};
		gint _tmp19_ = 0;
		gdouble _tmp20_ = 0.0;
		gint _tmp21_ = 0;
		gdouble _tmp22_ = 0.0;
		cairo_t* _tmp23_ = NULL;
		SpitTransitionsVisuals* _tmp24_ = NULL;
		GdkPixbuf* _tmp25_ = NULL;
		GdkPixbuf* _tmp26_ = NULL;
		gint _tmp27_ = 0;
		SpitTransitionsVisuals* _tmp28_ = NULL;
		GdkRectangle _tmp29_ = {0};
		GdkRectangle _tmp30_ = {0};
		gint _tmp31_ = 0;
		cairo_t* _tmp32_ = NULL;
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp7_ = motion;
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp8_ = spit_transitions_motion_get_direction (_tmp7_);
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp9_ = _tmp8_;
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		if (_tmp9_ == SPIT_TRANSITIONS_DIRECTION_FORWARD) {
#line 354 "SlideEffect.c"
			SpitTransitionsVisuals* _tmp10_ = NULL;
			GdkPixbuf* _tmp11_ = NULL;
			GdkPixbuf* _tmp12_ = NULL;
			gint _tmp13_ = 0;
			gint _tmp14_ = 0;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp10_ = visuals;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp11_ = spit_transitions_visuals_get_from_pixbuf (_tmp10_);
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp12_ = _tmp11_;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp13_ = gdk_pixbuf_get_width (_tmp12_);
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp14_ = _tmp13_;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp6_ = -_tmp14_;
#line 372 "SlideEffect.c"
		} else {
			gint _tmp15_ = 0;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp15_ = width;
#line 53 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp6_ = _tmp15_;
#line 379 "SlideEffect.c"
		}
#line 52 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		from_target_x = _tmp6_;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp16_ = visuals;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		spit_transitions_visuals_get_from_pos (_tmp16_, &_tmp17_);
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp18_ = _tmp17_;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp19_ = _tmp18_.x;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp20_ = alpha;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp21_ = from_target_x;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp22_ = alpha;
#line 54 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		from_current_x = (gint) ((_tmp19_ * (1 - _tmp20_)) + (_tmp21_ * _tmp22_));
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp23_ = ctx;
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp24_ = visuals;
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp25_ = spit_transitions_visuals_get_from_pixbuf (_tmp24_);
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp26_ = _tmp25_;
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp27_ = from_current_x;
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp28_ = visuals;
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		spit_transitions_visuals_get_from_pos (_tmp28_, &_tmp29_);
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp30_ = _tmp29_;
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp31_ = _tmp30_.y;
#line 55 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		gdk_cairo_set_source_pixbuf (_tmp23_, _tmp26_, (gdouble) _tmp27_, (gdouble) _tmp31_);
#line 56 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp32_ = ctx;
#line 56 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		cairo_paint (_tmp32_);
#line 423 "SlideEffect.c"
	}
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_tmp33_ = visuals;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_tmp34_ = spit_transitions_visuals_get_to_pixbuf (_tmp33_);
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	_tmp35_ = _tmp34_;
#line 59 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	if (_tmp35_ != NULL) {
#line 433 "SlideEffect.c"
		gint to_target_x = 0;
		gint _tmp36_ = 0;
		SpitTransitionsVisuals* _tmp37_ = NULL;
		GdkPixbuf* _tmp38_ = NULL;
		GdkPixbuf* _tmp39_ = NULL;
		gint _tmp40_ = 0;
		gint _tmp41_ = 0;
		gint _tmp42_ = 0;
		SpitTransitionsMotion* _tmp43_ = NULL;
		SpitTransitionsDirection _tmp44_ = 0;
		SpitTransitionsDirection _tmp45_ = 0;
		gint from_x = 0;
		gint to_current_x = 0;
		gint _tmp52_ = 0;
		gdouble _tmp53_ = 0.0;
		gint _tmp54_ = 0;
		gdouble _tmp55_ = 0.0;
		cairo_t* _tmp56_ = NULL;
		SpitTransitionsVisuals* _tmp57_ = NULL;
		GdkPixbuf* _tmp58_ = NULL;
		GdkPixbuf* _tmp59_ = NULL;
		gint _tmp60_ = 0;
		SpitTransitionsVisuals* _tmp61_ = NULL;
		GdkRectangle _tmp62_ = {0};
		GdkRectangle _tmp63_ = {0};
		gint _tmp64_ = 0;
		cairo_t* _tmp65_ = NULL;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp36_ = width;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp37_ = visuals;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp38_ = spit_transitions_visuals_get_to_pixbuf (_tmp37_);
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp39_ = _tmp38_;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp40_ = gdk_pixbuf_get_width (_tmp39_);
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp41_ = _tmp40_;
#line 60 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		to_target_x = (_tmp36_ - _tmp41_) / 2;
#line 61 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp43_ = motion;
#line 61 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp44_ = spit_transitions_motion_get_direction (_tmp43_);
#line 61 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp45_ = _tmp44_;
#line 61 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		if (_tmp45_ == SPIT_TRANSITIONS_DIRECTION_FORWARD) {
#line 483 "SlideEffect.c"
			gint _tmp46_ = 0;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp46_ = width;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp42_ = _tmp46_;
#line 489 "SlideEffect.c"
		} else {
			SpitTransitionsVisuals* _tmp47_ = NULL;
			GdkPixbuf* _tmp48_ = NULL;
			GdkPixbuf* _tmp49_ = NULL;
			gint _tmp50_ = 0;
			gint _tmp51_ = 0;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp47_ = visuals;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp48_ = spit_transitions_visuals_get_to_pixbuf (_tmp47_);
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp49_ = _tmp48_;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp50_ = gdk_pixbuf_get_width (_tmp49_);
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp51_ = _tmp50_;
#line 62 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
			_tmp42_ = -_tmp51_;
#line 508 "SlideEffect.c"
		}
#line 61 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		from_x = _tmp42_;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp52_ = from_x;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp53_ = alpha;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp54_ = to_target_x;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp55_ = alpha;
#line 63 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		to_current_x = (gint) ((_tmp52_ * (1 - _tmp53_)) + (_tmp54_ * _tmp55_));
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp56_ = ctx;
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp57_ = visuals;
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp58_ = spit_transitions_visuals_get_to_pixbuf (_tmp57_);
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp59_ = _tmp58_;
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp60_ = to_current_x;
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp61_ = visuals;
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		spit_transitions_visuals_get_to_pos (_tmp61_, &_tmp62_);
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp63_ = _tmp62_;
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp64_ = _tmp63_.y;
#line 64 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		gdk_cairo_set_source_pixbuf (_tmp56_, _tmp59_, (gdouble) _tmp60_, (gdouble) _tmp64_);
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		_tmp65_ = ctx;
#line 65 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
		cairo_paint (_tmp65_);
#line 546 "SlideEffect.c"
	}
}


static void slide_effect_real_advance (SpitTransitionsEffect* base, SpitTransitionsVisuals* visuals, SpitTransitionsMotion* motion, gint frame_number) {
	SlideEffect * self;
#line 69 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SLIDE_EFFECT, SlideEffect);
#line 69 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_VISUALS (visuals));
#line 69 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	g_return_if_fail (SPIT_TRANSITIONS_IS_MOTION (motion));
#line 559 "SlideEffect.c"
}


static void slide_effect_real_cancel (SpitTransitionsEffect* base) {
	SlideEffect * self;
#line 72 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (base, TYPE_SLIDE_EFFECT, SlideEffect);
#line 567 "SlideEffect.c"
}


static void slide_effect_class_init (SlideEffectClass * klass) {
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	slide_effect_parent_class = g_type_class_peek_parent (klass);
#line 574 "SlideEffect.c"
}


static void slide_effect_spit_transitions_effect_interface_init (SpitTransitionsEffectIface * iface) {
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	slide_effect_spit_transitions_effect_parent_iface = g_type_interface_peek_parent (iface);
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	iface->get_fps = (void (*)(SpitTransitionsEffect*, gint*, gint*)) slide_effect_real_get_fps;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	iface->start = (void (*)(SpitTransitionsEffect*, SpitTransitionsVisuals*, SpitTransitionsMotion*)) slide_effect_real_start;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	iface->needs_clear_background = (gboolean (*)(SpitTransitionsEffect*)) slide_effect_real_needs_clear_background;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	iface->paint = (void (*)(SpitTransitionsEffect*, SpitTransitionsVisuals*, SpitTransitionsMotion*, cairo_t*, gint, gint, gint)) slide_effect_real_paint;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	iface->advance = (void (*)(SpitTransitionsEffect*, SpitTransitionsVisuals*, SpitTransitionsMotion*, gint)) slide_effect_real_advance;
#line 28 "/home/jens/Source/shotwell/plugins/shotwell-transitions/SlideEffect.vala"
	iface->cancel = (void (*)(SpitTransitionsEffect*)) slide_effect_real_cancel;
#line 593 "SlideEffect.c"
}


static void slide_effect_instance_init (SlideEffect * self) {
}


GType slide_effect_get_type (void) {
	static volatile gsize slide_effect_type_id__volatile = 0;
	if (g_once_init_enter (&slide_effect_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SlideEffectClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) slide_effect_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SlideEffect), 0, (GInstanceInitFunc) slide_effect_instance_init, NULL };
		static const GInterfaceInfo spit_transitions_effect_info = { (GInterfaceInitFunc) slide_effect_spit_transitions_effect_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType slide_effect_type_id;
		slide_effect_type_id = g_type_register_static (G_TYPE_OBJECT, "SlideEffect", &g_define_type_info, 0);
		g_type_add_interface_static (slide_effect_type_id, SPIT_TRANSITIONS_TYPE_EFFECT, &spit_transitions_effect_info);
		g_once_init_leave (&slide_effect_type_id__volatile, slide_effect_type_id);
	}
	return slide_effect_type_id__volatile;
}



