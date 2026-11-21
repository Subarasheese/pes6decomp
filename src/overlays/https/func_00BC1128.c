/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern u32 D_00C3F1F0;
extern s32 D_00CC9630;
extern s32 D_00CC9634;
extern s32 D_00CC9638;

s32 func_00BC1128(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 < (u32)D_00C3F1F0) {
        D_00C3F1F0 = arg0;
        D_00CC9638 = arg1;
        D_00CC9630 = arg2;
        D_00CC9634 = arg3;
    }
    return 0;
}
