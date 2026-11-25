#ifndef PES6_NTGUI_WIDGET_CHANGES_H
#define PES6_NTGUI_WIDGET_CHANGES_H

#include "types.h"

typedef struct {
    u64 words[2];
} NtguiWidgetAttribute;

typedef struct {
    u8 reserved00[0x98];
    s32 redraw;
} NtguiWidgetUpdateHeader;

extern s32 (*D_005C14A0)(void *dst, const void *current, const void *previous);
extern s32 func_00164238(const NtguiWidgetAttribute *a, const NtguiWidgetAttribute *b);

#endif
