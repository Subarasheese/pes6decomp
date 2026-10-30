/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */

void *func_0093E620(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a1;
    s32 var_a2;
    u32 *var_a0;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_a0 = M2C_FIELD(temp_v0, u32 **, 0x4BB4);
    } else {
        var_a0 = NULL;
    }
    var_a1 = 0;
    if (var_a0 == NULL) {
        goto block_21;
    }
    if ((u32) *var_a0 < 0x15U) {
        var_a2 = 0;
loop_18:
        if (var_a2 < 4) {
            temp_v1 = var_a0 + (arg0 * 0x168) + (var_a2 * 0x38);
            if ((((s32) (M2C_FIELD(temp_v1, u8 *, 0x41) & 2) >> 1) == arg1) && (M2C_FIELD(temp_v1, s32 *, 0xC) != 0)) {
                if (arg2 != var_a1) {
                    var_a1 += 1;
                    goto block_17;
                }
                return temp_v1 + 0x10;
            }
block_17:
            var_a2 += 1;
            goto loop_18;
        }
        goto block_21;
    }
block_21:
    return NULL;
}
