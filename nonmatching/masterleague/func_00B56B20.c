/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00223C10(s32, s32);                      /* extern */
void *func_00223E00(s32);                           /* extern */
s32 func_002243B0(s32, s32);                        /* extern */
s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_00225680(s32);                             /* extern */
s32 func_00225820();                                /* extern */
s32 func_00226E70();                                /* extern */
s32 func_0099B570(M2C_UNK);                         /* extern */
s32 func_00B54300();                                /* extern */
s64 func_00B58EC0();                                /* extern */

s32 func_00B56B20(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    void *temp_v0;
    void *temp_v0_2;

    if (func_00226E70() == 0) {
        goto block_20;
    }
    temp_s0 = func_00B54300() & 0xFF;
    if ((temp_s0 & 0xFF) != (func_0099B570(0) & 0xFF)) {
        goto block_20;
    }
    if (((s64) (func_00B58EC0() << 0x38) >> 0x38) == 1) {
        return 1;
    }
    temp_s0_2 = func_00225680(func_00225820() & 0xFF) & 0xFFFF;
    var_s2 = 0;
loop_7:
    temp_v1 = func_00225680(var_s2 & 0xFF) & 0xFFFF;
    if (temp_v1 != 0xFFFF) {
        if (temp_s0_2 != 0xFFFF) {
            if (temp_v1 != temp_s0_2) {
                goto block_11;
            }
            goto block_19;
        }
block_11:
        var_s1 = 0;
loop_12:
        temp_a0 = func_00224BC0(var_s2 & 0xFF, var_s1 & 0xFF) & 0xFFFF;
        if (temp_a0 != 0) {
            temp_v0 = func_00223E00(temp_a0);
            if (temp_v0 != NULL) {
                temp_v0_2 = func_00223C10(var_s2 & 0xFF, func_002243B0(var_s2 & 0xFF, var_s1 & 0xFF));
                if ((temp_v0_2 != NULL) && ((M2C_FIELD(temp_v0, u8 *, 6) & 0x3F) == 3) && ((s32) M2C_FIELD(temp_v0_2, u16 *, 2) >= 0x3E8)) {
                    return 1;
                }
            }
        }
        var_s1 += 1;
        if (var_s1 >= 0x20) {
            goto block_19;
        }
        goto loop_12;
    }
block_19:
    var_s2 += 1;
    if (var_s2 >= 0x48) {
block_20:
        return 0;
    }
    goto loop_7;
}
