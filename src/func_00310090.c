/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
#include "pes6/unit_0030f470.h"

s32 func_00C17E10(u8, u8);
extern char D_0058E5B0[];
extern char D_00CB3300[];
typedef struct { u8 pad[0x11]; u8 entry; u8 side; u8 tail[0x22D]; } PartialSlot;

s32 func_00310090(s16 *output, s32 index) {
    s32 temp_a0;
    s32 maskedIndex;
    s32 slot;
    PartialSlot *temp_s1;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    temp_s1 = (PartialSlot *)(D_0058E5B0 + slot * 0x240);
    temp_a0 = func_00C17E10(temp_s1->side, temp_s1->entry) & 0xFF;
    if (temp_a0 != 0xFF) {
        *output = M2C_FIELD(pes6_record_address(temp_a0*0x28,pes6_record_address(temp_s1->side*0x2F4,*(s32 *)D_00CB3300)),s16 *,0x32);
    } else {
        *output = 0xFF;
    }
    return 1;
}
