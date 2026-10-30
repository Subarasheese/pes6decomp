/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C122B0(s32, s32, s32);               /* extern */
s32 func_00C17DC0(s32, s32);                        /* extern */
s32 func_00C17E10(s32, s32);                        /* extern */

void func_002BCD70(s32 arg0, void *arg1) {
    s32 var_s1;
    s32 var_s2;
    u8 temp_v1;

    if ((arg1 != NULL) && (arg0 == 2) && (arg0 != 3)) {
        temp_v1 = M2C_FIELD(arg1, u8 *, 2);
        if ((s32) temp_v1 > 0) {
            var_s2 = 0;
            do {
                var_s1 = 0;
loop_6:
                if ((func_00C17DC0(var_s2 & 0xFF, var_s1 & 0xFF) & 0xFF) != 0xFF) {
                    if ((func_00C17E10(var_s2 & 0xFF, var_s1 & 0xFF) & 0xFF) != 0xFF) {
                        func_00C122B0((temp_v1 - 1) & 0xFF, var_s2 & 0xFF, var_s1 & 0xFF);
                    }
                }
                var_s1 += 1;
                if (var_s1 < 0x20) {
                    goto loop_6;
                }
                var_s2 += 1;
            } while (var_s2 < 2);
        }
    }
}
