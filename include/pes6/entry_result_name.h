#ifndef PES6_ENTRY_RESULT_NAME_H
#define PES6_ENTRY_RESULT_NAME_H

#include "types.h"
typedef struct {
    s32 id;
    u8 rest[8];
} EntryRow;
typedef struct {
    u16 id;
    u8 rest[10];
} EntryName;
extern s32 D_003EA5F4;
extern u8 D_0092F798[], D_0092F7A8[];
extern char D_0092EE90[];
extern char *func_0021E4B0(u16, s32, s32, s32);

static inline char *entry_result_name(s32 visible, const u8 *names) {
    s32 offset = D_003EA5F4 * 0x200;
    s32 first = *(s32 *)(D_0092F798 + offset);
    s32 row = first + visible;
    char *label = D_0092EE90;
    s32 available = (row < 32 && ((EntryRow *)(D_0092F7A8 + offset))[row].id >= 0);
    if (available)
        label = func_0021E4B0(((const EntryName *)(names + offset))[first].id, 0, 0, 0);
    return label;
}

#endif
