#ifndef PES6_ENTRY_RESULT_PAGE_H
#define PES6_ENTRY_RESULT_PAGE_H

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

#endif
