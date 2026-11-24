/* compiler: mwcc-3.0.1b210 */

#include "pes6/menu_layer_mask.h"
typedef struct {
    u8 reserved00[0x11c], mask;
} MaskedWidget;

void func_001EF900(void *widget, u8 mask) {
    if (widget)
        ((MaskedWidget *)widget)->mask = (u8)mask;
}
