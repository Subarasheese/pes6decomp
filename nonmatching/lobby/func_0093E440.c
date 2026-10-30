/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

u8 func_0093E440(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a2;
    s32 var_a4;
    s32 var_a5;
    u32 *var_a3;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_a3 = M2C_FIELD(temp_v0, u32 **, 0x4BB4);
    } else {
        var_a3 = NULL;
    }
    var_a5 = 0;
    if (var_a3 == NULL) {
        goto block_21;
    }
    if ((u32) *var_a3 < 0x15U) {
        var_a4 = 0;
        temp_a2 = arg0 * 0x168;
loop_18:
        if (var_a4 < 4) {
            temp_a0 = var_a4 * 0x38;
            temp_v1 = var_a3 + temp_a2 + temp_a0;
            if ((((s32) (M2C_FIELD(temp_v1, u8 *, 0x41) & 2) >> 1) == arg1) && (M2C_FIELD(temp_v1, s32 *, 0xC) != 0)) {
                if (arg2 != var_a5) {
                    var_a5 += 1;
                    goto block_17;
                }
                return M2C_FIELD((temp_a0 + (temp_a2 + var_a3)), u8 *, 0x42);
            }
block_17:
            var_a4 += 1;
            goto loop_18;
        }
        goto block_21;
    }
block_21:
    return 5U;
}
