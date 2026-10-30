/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
u16 *func_002260F0(s32);                            /* extern */

u16 func_00224150(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    u16 *temp_v0;
    u16 *temp_v0_2;

    var_s1 = 0xFF;
    if (func_00231240() != 1) {
        if (!(arg2 & 0xFF)) {
            temp_s0 = arg0 & 0xFFFF;
            if ((temp_s0 >= 0xFE) && (temp_s0 < 0x104)) {
                var_s1 = (temp_s0 - 0xB6) & 0xFF;
                goto block_29;
            }
            if (temp_s0 < 0xFE) {
                return 0U;
            }
            if (temp_s0 < 0x10E) {
                var_s2 = 6;
loop_16:
                temp_s4 = (var_s2 & 0xFF) + 0x48;
                temp_v0_2 = func_002260F0(temp_s4 & 0xFF);
                if (temp_v0_2 != NULL) {
                    if (temp_s0 != *temp_v0_2) {
                        var_s2 = (var_s2 + 1) & 0xFF;
                        if (var_s2 >= 8) {
                            goto block_26;
                        }
                        goto loop_16;
                    }
                    var_s1 = temp_s4 & 0xFF;
block_26:
                    if ((var_s1 & 0xFF) == 0xFF) {
                        return 0U;
                    }
block_29:
                    temp_v0 = func_002260F0(var_s1);
                    if (temp_v0 != NULL) {
                        return M2C_FIELD((((arg1 & 0xFF) * 0x16) + temp_v0), u16 *, 0x1E4);
                    }
                    return 0U;
                }
                return 0U;
            }
            return 0U;
        }
        return 0U;
    }
    return 0U;
}
