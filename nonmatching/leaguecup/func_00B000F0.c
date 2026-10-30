/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern s32 D_003EAD54;

s32 func_00B000F0(s32 arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_a2;
    s32 var_v0;

    temp_s0 = D_003EAD54;
    if (temp_s0 == 0) {
        goto block_14;
    }
    if ((func_00226710() & 0xFF) != 0x2C) {
        if ((func_00226710() & 0xFF) != 0x38) {
            var_v0 = 0x12;
        } else {
            goto block_6;
        }
    } else {
block_6:
        var_v0 = 0x17;
    }
    temp_a1 = var_v0 & 0xFF;
    var_a2 = 0;
    if (temp_a1 > 0) {
loop_9:
        temp_v0 = var_a2 & 0xFF;
        if ((arg0 & 0xFF) != M2C_FIELD((temp_s0 + (temp_v0 * 0x1C)), u16 *, 0xA18)) {
            var_a2 = (var_a2 + 1) & 0xFF;
            if (var_a2 >= temp_a1) {
                goto block_14;
            }
            goto loop_9;
        }
        return temp_v0;
    }
block_14:
    return -1;
}
