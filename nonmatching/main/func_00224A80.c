/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
s32 func_00225680(s32);                             /* extern */
s32 func_002260F0(s32);                             /* extern */

u16 func_00224A80(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s3;
    u8 var_v0;

    var_s1 = 0xFF;
    if (func_00231240() != 1) {
        var_s3 = 0;
loop_5:
        if ((arg0 & 0xFFFF) != (func_00225680(var_s3) & 0xFFFF)) {
            var_s3 = (var_s3 + 1) & 0xFF;
            if (var_s3 >= 0x50) {

            } else {
                goto loop_5;
            }
        } else {
            var_s1 = var_s3 & 0xFF;
        }
        if ((var_s1 & 0xFF) != 0xFF) {
            temp_v0 = func_002260F0(var_s1);
            if (temp_v0 != 0) {
                temp_s1 = func_002260F0(var_s1);
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
                    return M2C_FIELD(((temp_v1 * 0x16) + temp_v0), u16 *, 0x1E4);
                }
                return 0U;
            }
            return 0U;
        }
        return 0U;
    }
    return 0U;
}
