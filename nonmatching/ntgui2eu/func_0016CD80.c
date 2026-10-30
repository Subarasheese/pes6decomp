/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018C748(void *);                      /* extern */

void func_0016CD80(void *arg0) {
    s32 temp_a0;
    s32 temp_a2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    void *var_s1;

    var_s5 = 0;
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x5B0);
    var_s4 = 0;
    if ((temp_a2 > 0) && (M2C_FIELD(arg0, s32 *, 0x5AC) > 0)) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1;
        var_s2 = 0;
        var_s1 = (temp_a0 * 0x20040) + arg0 + 0x950;
        if (temp_a2 > 0) {
            var_s3 = 0;
loop_6:
            if ((var_s4 == 0) && (var_s3 < M2C_FIELD(arg0, s32 *, 0x5AC))) {
                var_s5 += 1;
                func_0018C748(var_s1);
                var_s1 += 0x40;
                func_0018C748(arg0 + ((temp_a0 * 0x140) + 0x40990));
                if (var_s5 >= 0x800) {
                    var_s4 = 1;
                } else {
                    var_s3 += M2C_FIELD(arg0, s32 *, 0x40C14);
                    goto loop_6;
                }
            }
            var_s2 += M2C_FIELD(arg0, s32 *, 0x40C18);
            if (var_s4 == 0) {
                var_s3 = 0;
                if (var_s2 < M2C_FIELD(arg0, s32 *, 0x5B0)) {
                    goto loop_6;
                }
            }
        }
        func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x20040) + 0x910));
    }
}
