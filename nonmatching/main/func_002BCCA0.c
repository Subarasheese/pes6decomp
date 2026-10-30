/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C122B0(s32, s32, s32);               /* extern */
s32 func_00C17DC0(s32, s32);                        /* extern */
s32 func_00C17E10(s32, s32);                        /* extern */
s32 func_00C18710();                                /* extern */

void func_002BCCA0(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;

    if ((arg1 != 0) && (arg0 == 8)) {
        temp_s0 = func_00C18710() & 0xFF;
        var_s2 = 0;
        do {
            var_s1 = 0;
loop_4:
            if ((func_00C17DC0(var_s2 & 0xFF, var_s1 & 0xFF) & 0xFF) != 0xFF) {
                if ((func_00C17E10(var_s2 & 0xFF, var_s1 & 0xFF) & 0xFF) != 0xFF) {
                    func_00C122B0(temp_s0, var_s2 & 0xFF, var_s1 & 0xFF);
                }
            }
            var_s1 += 1;
            if (var_s1 < 0x20) {
                goto loop_4;
            }
            var_s2 += 1;
        } while (var_s2 < 2);
    }
}
