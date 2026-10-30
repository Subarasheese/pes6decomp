/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00C13280(s32);                           /* extern */
s32 func_00C132C0(s32);                             /* extern */
s32 func_00C136E0(s32, M2C_UNK);                    /* extern */
s32 func_00C13740();                                /* extern */
s32 func_00C13840();                                /* extern */

void func_002C4140(void *arg0, s32 arg1) {
    s32 temp_a0_2;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v1;
    s8 var_v0;
    u8 temp_a0;
    u8 temp_v1;
    void *temp_s0;

    temp_s0 = func_00C13280(arg1);
    var_s1 = arg1;
    if ((func_00C132C0(arg1) & 0xFF) != 1) {
        var_s1 = func_00C136E0(arg1, 1);
        if (var_s1 == -1) {
            var_s1 = func_00C13840();
            if ((func_00C132C0(var_s1) & 0xFF) == 1) {

            } else {
                var_s1 = func_00C13740();
            }
        }
    }
    temp_a0 = M2C_FIELD(func_00C13280(var_s1), u8 *, 1);
    var_v0 = 0xFF;
    M2C_FIELD(arg0, s8 *, 0) = (s8) (((s32) M2C_FIELD(temp_s0, u8 *, 1) >> 5) & 1);
    M2C_FIELD(arg0, s8 *, 1) = (s8) (M2C_FIELD(temp_s0, u8 *, 1) & 0x1F);
    temp_v1 = M2C_FIELD(temp_s0, u8 *, 5);
    if (temp_v1 != 0xFF) {
        var_v0 = temp_v1 & 0x1F;
    }
    M2C_FIELD(arg0, s8 *, 2) = var_v0;
    temp_v0 = temp_a0 & 0xFF;
    M2C_FIELD(arg0, s8 *, 3) = (s8) (temp_v0 & 0x7F);
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((temp_v0 >> 7) != 0);
    temp_a0_2 = func_00C132C0(arg1) & 0xFF;
    switch (temp_a0_2) {                            /* irregular */
    case 5:
        var_v1 = 1;
block_18:
        M2C_FIELD(arg0, s32 *, 8) = var_v1;
        break;
    case 4:
        var_v1 = 2;
        goto block_18;
    case 3:
        M2C_FIELD(arg0, s32 *, 8) = 0;
        break;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}
