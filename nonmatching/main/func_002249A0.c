/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
extern int func_00231240(void);
u8 func_002249A0(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 var_v0;

    temp_s0 = func_002260F0(arg0);
    if (func_00231240() == 1) {
        return 0xFFU;
    }
    if (temp_s0 != 0) {
        temp_s1 = func_002260F0(arg0);
        if (func_00231240() == 1) {
            var_v0 = 0xFF;
        } else if (temp_s1 != 0) {
            temp_v1_2 = arg1 & 0xFF;
            if (temp_v1_2 < 0x20) {
                var_v0 = M2C_FIELD((temp_v1_2 + temp_s1), u8 *, 0x4B1);
            } else {
                var_v0 = 0xFF;
            }
        } else {
            var_v0 = 0xFF;
        }
        temp_v1 = var_v0 & 0xFF;
        if (temp_v1 < 0x20) {
            return M2C_FIELD(((temp_v1 * 0x16) + temp_s0), u8 *, 0x1E7);
        }
        return 0xFFU;
    }
    return 0xFFU;
}
