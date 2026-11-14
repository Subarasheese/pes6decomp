/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00145750(s32);                         /* extern */

void func_00151550(void *arg0) {
    s32 temp_a0;
    s32 temp_s1;
    s32 var_s2;
    s32 var_s3;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0);
    var_s3 = 0;
    if (temp_s1 > 0) {
        var_s2 = 0;
        do {
            temp_a0 = *(u8 *)(M2C_FIELD(arg0, s32 *, 4) + var_s2);
            if (temp_a0 != 0) {
                func_00145750(temp_a0);
            }
            var_s3 += 1;
            var_s2 += 4;
        } while (var_s3 < temp_s1);
    }
}
