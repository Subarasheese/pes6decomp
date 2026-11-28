/* compiler: mwcc-3.0.1b210 */
#include "pes6/menu_widget_groups.h"

typedef struct {
    u8 reserved00[0x78];
    u8 enabled;
} MenuLabelState;

void func_001DF4F0(void *label, u8 enabled) {
    MenuLabelState *state = label;
    if (state)
        state->enabled = enabled;
}
