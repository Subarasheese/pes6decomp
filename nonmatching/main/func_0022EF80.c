/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 D_003E77AC;

s32 func_0022EF80(s32 arg0) {
    s32 temp_a2;
    s32 temp_a3;
    s32 var_a4;
    s32 var_s0;
    s32 var_s1;
    u8 temp_v0;

    var_s1 = 0xFF;
    if ((func_00309420() != 0) != 1) {
        var_s0 = D_003E77AC;
    } else {
        var_s0 = 0;
    }
    if ((func_00309420() != 0) == 1) {
        return 0xFF;
    }
    if (var_s0 != 0) {
        temp_a3 = arg0 & 0xFF;
        var_a4 = 0;
loop_11:
        temp_a2 = var_a4 & 0xFF;
        temp_v0 = M2C_FIELD((var_s0 + (temp_a2 * 0x1BDC)), u8 *, 0x8B69C);
        if (temp_a3 == temp_v0) {
            var_s1 = temp_a2;
        } else if ((temp_a3 == 0xFF) && (temp_v0 == 0xFF)) {
            var_s1 = temp_a2;
        } else {
            var_a4 = (var_a4 + 1) & 0xFF;
            if (var_a4 >= 0x13) {

            } else {
                goto loop_11;
            }
        }
        return var_s1;
    }
    return 0xFF;
}
