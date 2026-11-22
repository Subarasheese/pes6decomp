/* Each cup stores the same entry state in a different record layout. */
#ifndef PES6_CUP_ENTRY_SELECTION_H
#define PES6_CUP_ENTRY_SELECTION_H

#include "types.h"

extern u8 *PES6_CUP_ENTRIES;

static inline s32 entry_state(u8 *entries, u8 index) {
    u8 slot = entries[PES6_CUP_SLOT_OFFSET + index];
    return *(s32 *)(entries + PES6_CUP_STATE_OFFSET + index * PES6_CUP_ENTRY_STRIDE + slot * 0x48);
}

u8 PES6_CUP_SELECT_ENTRY(void) {
    u8 selected = 0xFF;
    u8 i;
    if (PES6_CUP_ENTRIES == 0)
        return 0;

    for (i = 0; i < PES6_CUP_COUNT; ++i) {
        if (entry_state(PES6_CUP_ENTRIES, i) == 1 && selected == 0xFF)
            selected = i;
    }
    if (selected == 0xFF) {
        for (i = 0; i < PES6_CUP_COUNT; ++i) {
            s32 state = entry_state(PES6_CUP_ENTRIES, i);
            if (state != 1 && state != 0)
                selected = i;
        }
    }
    return selected;
}
#endif
