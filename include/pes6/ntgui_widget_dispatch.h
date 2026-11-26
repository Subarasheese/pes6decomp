#ifndef PES6_NTGUI_WIDGET_DISPATCH_H
#define PES6_NTGUI_WIDGET_DISPATCH_H

#include "types.h"

typedef struct NtguiDispatchWidget NtguiDispatchWidget;
typedef void (*NtguiWidgetMethod)(NtguiDispatchWidget *);
typedef struct {
    u8 reserved00[0x74];
    NtguiWidgetMethod at74, at78, at7c, draw;
    u8 reserved84[0x18];
    void (*getOrigin)(NtguiDispatchWidget *, s32 *x, s32 *y);
    u8 reservedA0[0x6c];
    NtguiWidgetMethod at10c, at110;
    u8 reserved114[4];
    NtguiWidgetMethod at118;
} NtguiWidgetMethods;
struct NtguiDispatchWidget {
    u8 reserved00[0x4c];
    const NtguiWidgetMethods *methods;
    u8 reserved50[0x5c];
    s32 deferred, pending, stage;
    u8 reservedB8[0x538 - 0xb8];
    s32 transitionEnabled;
};

extern void func_001640E0(void *widget, s32 mode);
extern void func_00165428(void *widget);

#endif
