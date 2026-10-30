/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226E70(void);
void *func_00970870();                              /* extern */
s32 func_00B02A20(s32);                             /* extern */
s32 func_00B05280(s32);                             /* extern */

s32 func_00B18C30(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;
    void *temp_v0;

    if (!(arg0 & 0xFFFF)) {
        return 1;
    }
    temp_v0 = func_00970870();
    if (temp_v0 != NULL) {
        temp_s0 = func_00B02A20(arg0) & 0xFF;
        temp_v0_2 = func_00B05280(arg0);
        var_s2 = ((temp_v0_2 & 0xFFFF) / 120) + ((u32) (temp_v0_2 & 0xFFFF) >> 0x1F);
        if (func_00226E70() == 1) {
            temp_v0_3 = temp_s0 & 0xFF;
            if (temp_v0_3 < 0x23) {
                if (temp_v0_3 < 0x21) {
                    if (temp_v0_3 >= 0x1F) {
                        var_s2 -= 1;
                    }
                } else {
                    var_s2 -= 2;
                }
            } else {
                var_s2 -= 3;
            }
        }
        if ((M2C_FIELD(temp_v0, u8 *, 0x21) & 7) >= 3) {
            var_s2 += 1;
        }
        if (var_s2 <= 0) {
            var_s2 = 1;
        }
        if (var_s2 >= 6) {
            var_s2 = 5;
        }
        return var_s2 & 0xFF;
    }
    return 1;
}
