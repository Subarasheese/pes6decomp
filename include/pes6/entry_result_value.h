#ifndef PES6_ENTRY_RESULT_VALUE_H
#define PES6_ENTRY_RESULT_VALUE_H

#include "types.h"
typedef struct {
    s32 value;
    u8 remaining[8];
} EntryRow;
typedef struct {
    char spare[0x200];
} EntryBlock;
typedef struct {
    EntryRow rows[32];
    u8 rest[0x80];
} RowBlock;
typedef struct {
    s32 cursor;
    u8 rest[0x1fc];
} CursorBlock;
extern s32 D_003EA5F4;
extern EntryBlock D_0092F720[];
extern CursorBlock D_0092F798[];
extern RowBlock D_0092F7A8[];
extern char D_0092EE90[], D_0092EE98[];
extern s32 func_001C78F8(char *, const char *, ...);

static inline char *entry_result_value(s32 visible, s32 labelOffset, const RowBlock *values) {
    s32 offset = D_003EA5F4 * 0x200;
    s32 start = ((CursorBlock *)((u8 *)D_0092F798 + offset))->cursor;
    s32 row = start + visible;
    char *label = D_0092EE90;
    s32 available = (row < 32 && ((RowBlock *)((u8 *)D_0092F7A8 + offset))->rows[row].value >= 0);
    if (available) {
        label = ((EntryBlock *)((u8 *)D_0092F720 + offset))->spare + labelOffset;
        func_001C78F8(label, D_0092EE98,
                      ((const RowBlock *)((const u8 *)values + offset))->rows[start].value);
    }
    return label;
}

#endif
