/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
void *func_00994C60(s32, s32);                      /* extern */
s32 func_0099B570(M2C_UNK);                         /* extern */
s32 func_0099B6E0(M2C_UNK, s32);                    /* extern */
s32 func_00B54300();                                /* extern */

s32 func_00B56F00(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s1;
    u64 temp_v1;
    u8 temp_a0;
    void *temp_v0;

    temp_s0 = func_00B54300() & 0xFF;
    if ((temp_s0 & 0xFF) < (func_0099B570(0) & 0xFF)) {
        goto block_13;
    }
    if (func_0099B6E0(4, func_00B54300() & 0xFF) == 0) {
        goto block_13;
    }
    temp_s0_2 = func_00225820() & 0xFF;
    var_s1 = 0;
loop_5:
    temp_v0 = func_00994C60(temp_s0_2, var_s1);
    if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u16 *, 4) != 0)) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0);
        if (!(temp_a0 & 1) && (((u64) ((s64) temp_a0 << 0x39) >> 0x3A) == 6)) {
            temp_v1 = (u64) ((s64) (u16) M2C_FIELD(temp_v0, u8 *, 0) << 0x35) >> 0x3C;
            if ((temp_v1 != 4) && (temp_v1 != 6)) {
                return 1;
            }
        }
    }
    var_s1 += 1;
    if (var_s1 >= 0x25) {
block_13:
        return 0;
    }
    goto loop_5;
}
