#ifndef PES6_MENU_WIDGET_GROUPS_H
#define PES6_MENU_WIDGET_GROUPS_H

#include "types.h"

typedef struct {
    u8 reserved00[12];
    void *label;
} MenuWidgetEntry;

extern s32 func_002F9630(void *group);
extern MenuWidgetEntry *func_002F96F0(void *group, s32 index);
extern void func_001D7D60(void *widget, s8 enabled);
extern void func_001DF4F0(void *label, u8 enabled);
extern void func_001EDAE0(void *label, s8 enabled);
extern void func_001D76B0(void *widget, u32 opacity);
extern void func_001DF420(void *label, u8 opacity);
extern void func_001ED8F0(void *label, s32 opacity);
extern void func_002D5930(void *transition, s16 value, s16 frames);

static inline void *menuWidgetLabel(void *group, s32 index) {
    void *label = 0;
    MenuWidgetEntry *entry = func_002F96F0(group, index);
    if (entry)
        label = entry->label;
    return label;
}

#endif
