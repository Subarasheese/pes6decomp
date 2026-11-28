#ifndef PES6_NTGUI_LIST_METHODS_H
#define PES6_NTGUI_LIST_METHODS_H

#include "types.h"

typedef struct NtguiListWidget NtguiListWidget;
typedef struct {
    u8 reserved00[0x13C];
    void (*setItems)(NtguiListWidget *widget, const void *items, s32 count);
    u8 reserved140[0x10];
    void (*setPosition)(NtguiListWidget *widget, s32 position);
} NtguiListMethods;

struct NtguiListWidget {
    u8 reserved00[0x4C];
    const NtguiListMethods *methods;
};

extern void func_00162230(NtguiListWidget *widget, const void *items, s32 count);
extern void func_001622F8(NtguiListWidget *widget, s32 position);

#endif
