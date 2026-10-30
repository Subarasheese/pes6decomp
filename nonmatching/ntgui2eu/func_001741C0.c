/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001741C0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    s32 temp_v0;
    s32 var_a5;
    s32 var_a6;
    void *var_a1;

    temp_a4 = M2C_FIELD(arg0, s32 *, 0xB8C);
    var_a6 = 0;
    var_a5 = arg2 - 1;
    if (arg2 != 0) {
        var_a1 = (M2C_FIELD(arg0, s32 *, 0xB80) + (temp_a4 * 0x24)) - 0x24;
        if (temp_a4 != 0) {
loop_3:
            var_a6 += 1;
            M2C_FIELD(arg0, s32 *, 0xB8C) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8C) - 1);
            temp_v0 = M2C_FIELD(var_a1, s32 *, 4) & 0xAF;
            M2C_FIELD(var_a1, s32 *, 4) = (s32) ((((M2C_FIELD(arg0, s32 *, 0xD04) != 0) ? arg1 : 0) == 0) ? temp_v0 : (temp_v0 | 0x50));
            if ((u32) (M2C_FIELD(var_a1, s32 *, 0) - 0x81) < 0x3FU) {
                if (M2C_FIELD(arg0, s32 *, 0xB8C) != 0) {
                    var_a1 -= 0x24;
                    goto loop_3;
                }
            }
            var_a5 -= 1;
            if (var_a5 != -1) {
                var_a1 -= 0x24;
                if (M2C_FIELD(arg0, s32 *, 0xB8C) != 0) {
                    goto loop_3;
                }
            }
        }
    }
    return var_a6;
}
