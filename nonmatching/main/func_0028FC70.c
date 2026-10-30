/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0028FC70(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    u8 *var_a3;
    u8 temp_v1;
    void *temp_a0;

    var_a3 = arg3;
    if ((arg1 & 0xFF) >= 2) {
        var_a5 = 0;
        var_a4 = 0x30;
        var_a6 = 0;
        do {
            if (M2C_FIELD((arg2 + var_a6), u8 *, 1) == 5) {
                temp_v1 = *var_a3;
                if ((s32) temp_v1 < var_a4) {
                    var_a4 = (s32) temp_v1;
                    var_a5 = var_a6;
                }
            }
            var_a6 += 1;
            var_a3 += 2;
        } while (var_a6 < 0xA);
        temp_a0 = arg0 + ((var_a5 + 1) * 0xC);
        M2C_FIELD(temp_a0, s32 *, 0) = (s32) (M2C_FIELD(temp_a0, s32 *, 0) & ~0x12);
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) (M2C_FIELD(temp_a0, s32 *, 4) & ~0x12);
        M2C_FIELD(temp_a0, s32 *, 8) = (s32) (M2C_FIELD(temp_a0, s32 *, 8) & ~0x12);
    }
}
