/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 data[0x240];
} Slot;

extern Slot D_0058E7F0[];
void func_002CA200(Slot *, s32);

void func_002CA1B0(void) {
    u8 i;
    Slot *slot;

    for (i = 0, slot = D_0058E7F0; i < 22; i++, slot++) {
        func_002CA200(slot, -1);
    }
}
