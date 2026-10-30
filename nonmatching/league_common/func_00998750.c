/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00223E00(s32);                             /* extern */
s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_00977E20(s32);                             /* extern */
s32 func_00AFD690(s32);                             /* extern */

void func_00998750(void) {
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    s8 temp_s0;

    var_s2 = 0;
    do {
        temp_s0 = func_00977E20(var_s2 & 0xFF) & 0xFF;
        var_s1 = 0;
loop_2:
        temp_s4 = func_00224BC0(var_s2 & 0xFF, var_s1 & 0xFF) & 0xFFFF;
        if (temp_s4 != 0) {
            temp_v0 = func_00223E00(temp_s4);
            if (temp_v0 != 0) {
                temp_v1 = func_00AFD690(temp_s4) & 0xFF;
                if (temp_v1 < 5) {
                    M2C_FIELD((temp_v0 + temp_v1), s8 *, 0xF) = temp_s0;
                }
            }
        }
        var_s1 += 1;
        if (var_s1 < 0x20) {
            goto loop_2;
        }
        var_s2 += 1;
    } while (var_s2 < 0x48);
}
