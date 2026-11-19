#ifndef PES6_EDIT_PLAYER_SORT_H
#define PES6_EDIT_PLAYER_SORT_H

#include "types.h"

/* Edit mode supplies one comparator per player attribute and sort direction. */
enum {
    PES6_EDIT_SORT_DESCENDING = 0,
    PES6_EDIT_SORT_ASCENDING = 1
};

s32 func_00BED870(u16 leftId, u16 rightId, u32 attribute, u8 ascending);

#endif
