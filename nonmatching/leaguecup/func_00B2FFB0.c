/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern s32 D_003EAD9C;

s32 func_00B2FFB0(void) {
    s32 temp_a0;
    s32 temp_a4;
    s32 temp_a5;
    s32 var_a5;
    s32 var_a6;
    s32 var_v0;

    var_v0 = 0xFF;
    if (D_003EAD9C == 0) {
        return 0;
    }
    var_a6 = 0;
    do {
        temp_a5 = var_a6 & 0xFF;
        if ((M2C_FIELD((D_003EAD9C + (temp_a5 * 0x168) + (M2C_FIELD((D_003EAD9C + temp_a5), u8 *, 0x2ACC) * 0x48)), s32 *, 0x500) == 1) && ((var_v0 & 0xFF) == 0xFF)) {
            var_v0 = temp_a5;
        }
        var_a6 = (var_a6 + 1) & 0xFF;
    } while (var_a6 < 0x1B);
    if ((var_v0 & 0xFF) == 0xFF) {
        var_a5 = 0;
        do {
            temp_a4 = var_a5 & 0xFF;
            temp_a0 = M2C_FIELD((D_003EAD9C + (temp_a4 * 0x168) + (M2C_FIELD((D_003EAD9C + temp_a4), u8 *, 0x2ACC) * 0x48)), s32 *, 0x500);
            if ((temp_a0 != 1) && (temp_a0 != 0)) {
                var_v0 = temp_a4;
            }
            var_a5 = (var_a5 + 1) & 0xFF;
        } while (var_a5 < 0x1B);
    }
    return var_v0;
}
