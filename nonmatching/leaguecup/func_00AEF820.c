/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAD44;

s32 func_00AEF820(s32 arg0, u16 *arg1, s32 arg2) {
    s32 var_a5;
    s32 var_a6;
    s32 var_v0;
    u16 *var_a1;
    void *var_a3;

    var_a1 = arg1;
    if (D_003EAD44 == 0) {
        return 0;
    }
    var_v0 = 0;
    var_a6 = 0;
    if (arg2 > 0) {
        do {
            var_a5 = 0;
            var_a3 = D_003EAD44 + ((((arg0 & 0xFF) * 4) & 0xFF) * 2);
loop_5:
            if (*var_a1 == M2C_FIELD(var_a3, u16 *, 0x208A)) {
                var_v0 += 1;
            } else {
                var_a5 += 1;
                var_a3 += 2;
                if (var_a5 < 4) {
                    goto loop_5;
                }
            }
            var_a6 += 1;
            var_a1 += 2;
        } while (var_a6 < arg2);
    }
    return var_v0;
}
