#ifndef PES6_MENU_LAYER_MASK_H
#define PES6_MENU_LAYER_MASK_H

#include "types.h"
typedef struct {
    u8 reserved00[4];
    void *first, *second;
    u8 reserved0C[4], baseMask, parentMask, childMask;
} MenuLayers;
extern void func_001EF900(void *widget, u8 mask);
static inline void updateMenuLayerMasks(MenuLayers *layers) {
    u8 visible = layers->baseMask & layers->parentMask;
    func_001EF900(layers->first, visible);
    func_001EF900(layers->second, (u8)(visible & layers->childMask));
}

#endif
