/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
extern int func_00231240(void);
void func_00224700(s32 arg0, s32 arg1, s8 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s2;
    u8 var_v1;

    temp_s0 = func_002260F0(arg0);
    if ((func_00231240() != 1) && (temp_s0 != 0)) {
        temp_s2 = func_002260F0(arg0);
        if (func_00231240() == 1) {
            var_v1 = 0xFF;
        } else if (temp_s2 != 0) {
            temp_a0 = arg1 & 0xFF;
            if (temp_a0 < 0x20) {
                var_v1 = M2C_FIELD((temp_a0 + temp_s2), u8 *, 0x4B1);
            } else {
                var_v1 = 0xFF;
            }
        } else {
            var_v1 = 0xFF;
        }
        temp_a0_2 = var_v1 & 0xFF;
        if (temp_a0_2 < 0x20) {
            M2C_FIELD(((temp_a0_2 * 0x16) + temp_s0), s8 *, 0x1E7) = arg2;
        }
    }
}
