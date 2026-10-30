/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B3700(s32 arg0, s32 (*arg1)(void *)) {
    s32 var_s0;
    s32 var_s3;
    void *var_s1;
    void *var_s2;

    var_s2 = arg0 + 0x1D8;
    var_s3 = 0;
    if (var_s2 != NULL) {
        do {
            var_s0 = M2C_FIELD(var_s2, s32 *, 4) - 1;
            var_s1 = M2C_FIELD(var_s2, void **, 8);
            if (var_s0 >= 0) {
                do {
                    if (M2C_FIELD(var_s1, s16 *, 0xC) != 0) {
                        var_s3 |= arg1(var_s1);
                    }
                    var_s0 -= 1;
                    var_s1 += 0x58;
                } while (var_s0 >= 0);
            }
            var_s2 = M2C_FIELD(var_s2, void **, 0);
        } while (var_s2 != NULL);
    }
    return var_s3;
}
