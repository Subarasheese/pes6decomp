/* compiler: mwcc-3.0.1b210 */

#include "pes6/menu_layer_mask.h"

void func_002E36D0(MenuLayers *layers, u8 value) {
    if (!layers)
        return;
    layers->parentMask = value;
    updateMenuLayerMasks(layers);
}
