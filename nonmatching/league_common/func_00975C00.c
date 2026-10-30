/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

u8 *func_00226000();                                /* extern */
s32 func_00229970();                                /* extern */

void func_00975C00(void) {
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 var_s2;
    s32 var_s2_2;

    if ((func_00229970() & 0xFF) != 1) {
        var_s2 = 0;
        temp_s1 = ((s32) *func_00226000() % 15) * 0xE0;
loop_2:
        temp_hi = var_s2 % 6;
        if (M2C_FIELD((temp_s1 + func_00226000() + temp_hi), u8 *, 0xDE) != 0) {
            var_s2 += 1;
            if (var_s2 >= 6) {
                return;
            }
            goto loop_2;
        }
        M2C_FIELD((func_00226000() + temp_s1 + temp_hi), s8 *, 0xDE) = 2;
        return;
    }
    var_s2_2 = 0;
    temp_s1_2 = ((s32) *func_00226000() % 15) * 0xE0;
loop_9:
    temp_hi_2 = var_s2_2 % 6;
    if (M2C_FIELD((temp_s1_2 + func_00226000() + temp_hi_2), u8 *, 0xDE) != 0) {
        var_s2_2 += 1;
        if (var_s2_2 >= 6) {
            return;
        }
        goto loop_9;
    }
    M2C_FIELD((func_00226000() + temp_s1_2 + temp_hi_2), s8 *, 0xDE) = 3;
}
