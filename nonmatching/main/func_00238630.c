/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
s32 func_00229010(s32);                             /* extern */
void *func_00229280(s32);                           /* extern */
s32 func_00236680(s32);                             /* extern */

s32 func_00238630(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s2_2;
    s32 var_s0;
    void *temp_s2;

    temp_s2 = func_00229280(arg0 & 0xFF);
    temp_s0 = func_00236680(arg0) & 0xFF;
    if (func_00231240() == 1) {
        goto block_14;
    }
    if (temp_s2 != NULL) {
        var_s0 = temp_s0 & 0xFF;
        temp_s2_2 = var_s0 + M2C_FIELD(temp_s2, u8 *, 0xB);
        if (var_s0 < temp_s2_2) {
loop_8:
            if ((arg1 & 0xFF) != (func_00229010(var_s0 & 0xFF) & 0xFF)) {
                var_s0 += 1;
                if (var_s0 >= temp_s2_2) {
                    goto block_14;
                }
                goto loop_8;
            }
            return var_s0 & 0xFF;
        }
        goto block_14;
    }
block_14:
    return 0xFF;
}
