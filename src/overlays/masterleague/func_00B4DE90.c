/* compiler: mwcc-3.0.1b210 */
#pragma opt_strength_reduction off
#include "types.h"
typedef struct {
    u8 reserved[0x124];
    void *control;
    u8 reserved128[0x2bc];
    u8 slots[8];
} ClubSelection;
extern ClubSelection *D_003EAE94;
s32 func_00B4DE90(s32 start) {
    s32 slot;
    if (!D_003EAE94)
        return 0;
    slot = start & 255;
    while (slot < 8) {
        s32 index = slot & 255;
        if (D_003EAE94->slots[index] == 255)
            return index;
        slot = (slot + 1) & 255;
    }
    return -1;
}
