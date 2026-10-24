/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
#include "pes6/unit_0030f470.h"

extern char D_0058E5C2[];
extern char D_00CB3300[];

s16 func_003101E0(s16 *output, s32 index) {
    s32 maskedIndex;
    s32 slot;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    return *output = M2C_FIELD((pes6_record_address(*(((u8 *)D_0058E5C2) + (slot * 0x240)) * 0x2F4, *(s32 *)D_00CB3300)), s16 *, 0xE);
}
