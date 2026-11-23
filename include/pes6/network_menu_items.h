#ifndef PES6_NETWORK_MENU_ITEMS_H
#define PES6_NETWORK_MENU_ITEMS_H

#include "types.h"

typedef struct {
    s32 key;
    s32 value;
} MenuItem;
extern void func_001B7ED0(MenuItem *items, s32 count);
extern void func_001B7A60(s32 enabled);

static inline void applyNetworkMenuItems(const s32 *values, const s32 *keys) {
    u32 i;
    s32 count;
    MenuItem items[6];
    if (values) {
        i = 0;
        count = 0;
        for (; i < 6; ++i) {
            s32 value = values[i];
            if (value >= 0) {
                items[count].key = keys[i];
                items[count].value = value;
                ++count;
            }
        }
        func_001B7ED0(items, count);
        func_001B7A60(1);
    }
}

#endif
