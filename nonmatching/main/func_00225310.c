/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
M2C_UNK func_001C8590(s32, s32, M2C_UNK);           /* extern */
extern s32 D_003E77AC;

void func_00225310(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v1;

    if (func_00231240() != 1) {
        if ((D_003E77AC != 0) && (temp_a0 = arg0 & 0xFF, ((temp_a0 < 0x50) != 0))) {
            var_v1 = D_003E77AC + (temp_a0 * 0x4D4) + 0x44328;
        } else {
            goto block_7;
        }
    } else {
block_7:
        var_v1 = 0;
    }
    if ((var_v1 != 0) && (arg1 != 0)) {
        func_001C8590(var_v1 + 3, arg1, 0x31);
    }
}
