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
extern s32 func_00B4B700(void);
extern void func_008C9E80(void *);
s32 func_00B4E270(void) {
    s32 result;
    if (!D_003EAE94)
        result = 1;
    else {
        func_008C9E80(D_003EAE94->control);
        result = func_00B4B700();
    }
    return result;
}
