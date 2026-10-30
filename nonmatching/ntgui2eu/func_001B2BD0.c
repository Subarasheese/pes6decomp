/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_001B2B58(void *, M2C_UNK);               /* extern */
M2C_UNK func_001B2D08();                            /* extern */

void *func_001B2BD0(void *arg0) {
    s32 var_v1;
    void *temp_a0;
    void *temp_v0;
    void *var_a0;
    void *var_s0;

    var_s0 = arg0 + 0x1D8;
    if (M2C_FIELD(arg0, s32 *, 0x38) == 0) {
        func_001B2D08();
    }
loop_3:
    var_v1 = M2C_FIELD(var_s0, s32 *, 4) - 1;
    var_a0 = M2C_FIELD(var_s0, void **, 8);
    if (var_v1 >= 0) {
loop_4:
        var_v1 -= 1;
        if (M2C_FIELD(var_a0, s16 *, 0xC) != 0) {
            var_a0 += 0x58;
            if (var_v1 < 0) {
                goto block_6;
            }
            goto loop_4;
        }
        M2C_FIELD(var_a0, s16 *, 0xE) = -1;
        M2C_FIELD(var_a0, void **, 0x54) = arg0;
        M2C_FIELD(var_a0, s32 *, 0) = 0;
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        M2C_FIELD(var_a0, s32 *, 4) = 0;
        M2C_FIELD(var_a0, s32 *, 0x10) = 0;
        M2C_FIELD(var_a0, s32 *, 0x14) = 0;
        M2C_FIELD(var_a0, s32 *, 0x18) = 0;
        M2C_FIELD(var_a0, s32 *, 0x30) = 0;
        M2C_FIELD(var_a0, s32 *, 0x34) = 0;
        M2C_FIELD(var_a0, s32 *, 0x44) = 0;
        M2C_FIELD(var_a0, s32 *, 0x48) = 0;
        M2C_FIELD(var_a0, s16 *, 0xC) = 1;
        return var_a0;
    }
block_6:
    temp_a0 = M2C_FIELD(var_s0, void **, 0);
    if (temp_a0 != NULL) {
        var_s0 = temp_a0;
        goto loop_3;
    }
    temp_v0 = func_001B2B58(arg0, 4);
    M2C_FIELD(var_s0, void **, 0) = temp_v0;
    if (temp_v0 == NULL) {
        M2C_FIELD(arg0, s32 *, 0) = 0xC;
        return temp_v0;
    }
    var_s0 = temp_v0;
    goto loop_3;
}
