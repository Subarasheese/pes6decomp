/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BF5C10(void *arg0) {
    s32 var_a2;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    s32 var_v0;
    void *var_a1;

    var_a5 = M2C_FIELD(arg0, s32 *, 0x1444);
    var_a4 = M2C_FIELD(arg0, s32 *, 0x1448);
    var_v0 = 0;
    if (var_a5 > 0) {
        if ((var_a4 == 0) && (var_a5 == 1)) {
            var_a3 = 0;
            var_a2 = 0;
            var_a1 = arg0;
            do {
                if (M2C_FIELD(var_a1, s32 *, 0x1430) > 0) {
                    var_a2 += 1;
                }
                var_a3 += 1;
                var_a1 += 4;
            } while (var_a3 < 4);
            if (var_a2 == 0) {
                goto block_8;
            }
        } else {
block_8:
            var_a5 -= 1;
            if ((s32) M2C_FIELD((arg0 + (var_a5 * 0x88)), u16 *, 0x80) < 0xFFFC) {
                if (var_a5 < var_a4) {
                    goto block_21;
                }
            } else if (var_a5 != 0) {
                var_a5 -= 1;
                if (var_a5 < var_a4) {
block_21:
                    var_a4 = var_a5;
                }
            } else if (var_a5 >= var_a4) {
                var_a5 = 1;
            } else {
                var_a4 = 0;
                var_a5 = 1;
            }
            var_v0 = 1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1444) = var_a5;
    M2C_FIELD(arg0, s32 *, 0x1448) = var_a4;
    return var_v0;
}
