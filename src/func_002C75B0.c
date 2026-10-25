/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 data[0xF0];
} Slot;

extern Slot D_005E3610[];
void func_002C7630(Slot *, s32);

void func_002C75B0(void) {
    s32 i;
    Slot *slot;

    for (i = 0, slot = D_005E3610; i < 2; i++, slot++) {
        func_002C7630(slot, i);
    }
}
