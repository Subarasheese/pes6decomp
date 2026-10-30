/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058D150[];

void func_0025E220(void) {
    M2C_UNK (*temp_v1)(u8);
    M2C_UNK *var_s0;
    s32 var_s1;
    u8 temp_a0;

    var_s1 = 0;
    var_s0 = ((void *)D_0058D150);
    do {
        temp_a0 = M2C_FIELD(var_s0, u8 *, 8);
        if (temp_a0 == 1) {
            temp_v1 = M2C_FIELD(var_s0, M2C_UNK (**)(u8), 0);
            if (temp_v1 != NULL) {
                temp_v1(temp_a0);
                if ((M2C_FIELD(var_s0, u8 *, 9) == 0) && (M2C_FIELD(var_s0, s32 *, 4) == 0)) {
                    M2C_FIELD(var_s0, u8 *, 8) = 0U;
                }
            }
        }
        var_s1 += 1;
        var_s0 += 0xC;
    } while (var_s1 < 0xB);
}
