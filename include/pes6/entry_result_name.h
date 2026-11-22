#ifndef PES6_ENTRY_RESULT_NAME_H
#define PES6_ENTRY_RESULT_NAME_H

#include "pes6/entry_result_page.h"

typedef struct {
    u16 id;
    u8 rest[10];
} EntryName;
extern char D_0092EE90[];
extern char *func_0021E4B0(u16, s32, s32, s32);

static inline char *entry_result_name(s32 visible, const u8 *names) {
    s32 offset = D_003EA5F4 * 0x200;
    s32 first = ((CursorBlock *)((u8 *)D_0092F798 + offset))->cursor;
    s32 row = first + visible;
    char *label = D_0092EE90;
    s32 available = (row < 32 && ((RowBlock *)((u8 *)D_0092F7A8 + offset))->rows[row].value >= 0);
    if (available)
        label = func_0021E4B0(((const EntryName *)(names + offset))[first].id, 0, 0, 0);
    return label;
}

#endif
