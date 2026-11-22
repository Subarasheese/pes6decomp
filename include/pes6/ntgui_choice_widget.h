#ifndef PES6_NTGUI_CHOICE_WIDGET_H
#define PES6_NTGUI_CHOICE_WIDGET_H

#include "pes6/ntgui_properties.h"

typedef struct {
    u8 pad0[0x4d0];
    s32 mode;
    u8 pad4d4[0x910 - 0x4d4];
    s32 resource, secondary, alternate;
    u8 pad91c[0x930 - 0x91c];
    s32 style[10];
    u8 pad958[4];
    float scale;
    u8 normalGeometry[0x20];
    void *baseWidget, *childWidget;
    s32 locked;
    u8 pad98c[4];
    u8 state[0x30];
    u8 alternateStyle[0x10], normalStyle[0x10], alternateColour[0x10], normalColour[0x10],
        alternateGeometry[0x10];
    u8 padA10[4];
    s32 alternateTint, normalTint;
} ChoiceWidget;

extern s32 func_00165460(void *, const WidgetProperty *, s32);

static inline void updateChoiceProperties(ChoiceWidget *w) {
    WidgetProperty properties[8];
    if (w->locked)
        return;
    if (!w->alternate) {
        properties[0].key = 0x6a;
        properties[0].value.integer = (s64)(s32)w->normalStyle;
        properties[1].key = 0x39;
        properties[1].value.integer = (s64)(s32)w->normalColour;
        properties[4].key = 0xc8;
        properties[4].value.integer = (s64)(s32)w->normalGeometry;
    } else {
        properties[0].key = 0x6a;
        properties[0].value.integer = (s64)(s32)w->alternateStyle;
        properties[1].key = 0x39;
        properties[1].value.integer = (s64)(s32)w->alternateColour;
        properties[4].key = 0xc8;
        properties[4].value.integer = (s64)(s32)w->alternateGeometry;
    }
    func_00165460(w->childWidget, properties, 2);
}

#endif
