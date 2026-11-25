#ifndef PES6_NTGUI_STRING_LIST_H
#define PES6_NTGUI_STRING_LIST_H

#include "types.h"

typedef struct {
    u8 reserved00[0x870];
    char **items;
    u32 reserved874;
    s32 count;
    u8 reserved87c[0x10];
    s32 dirty, refresh;
} NtguiStringList;

extern s32 func_00163010(const NtguiStringList *list, const char *name);
extern void func_00162AE8(NtguiStringList *list, const char *name);
extern void func_00162B28(NtguiStringList *list, u32 index);

#endif
