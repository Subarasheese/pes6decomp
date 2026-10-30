/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_0011D468(M2C_UNK);                         /* extern */

s32 func_00295430(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f21;

    temp_f20 = M2C_FIELD(arg0, f32 *, 4);
    temp_f21 = M2C_FIELD(arg0, f32 *, 0);
    temp_f0 = func_0011D468(0x3F96CBE4);
    if (temp_f20 < -temp_f0) {
        return 4;
    }
    if (temp_f20 <= temp_f0) {
        temp_f0_2 = func_0011D468(0x3FFB53D2);
        if (!(temp_f21 <= temp_f0_2)) {
            return 2;
        }
        if (temp_f21 < -temp_f0_2) {
            return 6;
        }
        if (temp_f20 <= 0.0f) {
            goto block_14;
        }
        if (!(temp_f21 <= 0.0f)) {
            return 3;
        }
        if (temp_f21 < 0.0f) {
            return 5;
        }
block_14:
        if (temp_f20 < 0.0f) {
            if (!(temp_f21 <= 0.0f)) {
                return 1;
            }
            if (temp_f21 < 0.0f) {
                return 7;
            }
            goto block_25;
        }
block_25:
        return 8;
    }
    return 0;
}
