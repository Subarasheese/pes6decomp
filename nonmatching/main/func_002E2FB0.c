/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002E3980(s32, s32);                    /* extern */

void func_002E2FB0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1;

    if (arg0 != NULL) {
        var_s0 = M2C_FIELD(arg0, s32 *, 0x20);
        var_s2 = var_s0 - 1;
        if (var_s2 >= 0) {
            var_s2 = 0;
        }
        var_v1 = var_s2 + arg2;
        if (var_s0 < var_v1) {

        } else {
            if (var_v1 < 0) {
                var_v1 = 0;
            }
            var_s0 = var_v1;
        }
        var_s3 = var_s2;
        if (var_s2 < var_s0) {
            var_s1 = var_s2 * 0x14;
            do {
                func_002E3980(M2C_FIELD(arg0, s32 *, 0x24) + var_s1, (arg1 + var_s3) - var_s2);
                var_s3 += 1;
                var_s1 += 0x14;
            } while (var_s3 < var_s0);
        }
    }
}
