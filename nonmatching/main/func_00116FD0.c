/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00116F48(s32, void *, void *);             /* extern */
M2C_UNK func_001C4730(s32, void *, s32);            /* extern */
extern char D_003F5F80[];
extern char D_003F6F80[];

s32 func_00116FD0(void *arg0) {
    M2C_UNK *var_s4;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    void *temp_a1;
    void *var_s4_2;

    var_s0 = 1;
    var_s4 = ((void *)D_003F5F80);
    if (M2C_FIELD(arg0, s32 *, 0x10) > 1) {
        do {
            temp_a1 = (var_s0 << 8) + 0x3F4F84;
            var_s0 += 1;
            func_001C4730((s32) var_s4, temp_a1, M2C_FIELD(arg0, s32 *, 0x14));
            var_s4 += M2C_FIELD(arg0, s32 *, 0x14);
        } while (var_s0 < M2C_FIELD(arg0, s32 *, 0x10));
    }
    var_s2 = M2C_FIELD(arg0, s32 *, 0xC);
    var_s4_2 = ((void *)D_003F5F80) + 0x5F80;
    if (var_s2 > 0) {
loop_5:
        var_v0 = func_00116F48(M2C_FIELD(arg0, s32 *, 8), var_s4_2, var_s4_2 + M2C_FIELD(arg0, s32 *, 8));
        if (var_v0 == 0) {
            temp_s0 = M2C_FIELD(arg0, s32 *, 8);
            temp_s0_2 = (var_s2 < temp_s0) ? var_s2 : temp_s0;
            temp_a2 = temp_s0_2;
            var_s2 -= temp_s0_2;
            func_001C4730((*(s32 *)D_003F6F80), var_s4_2, temp_a2);
            func_001C4730((*(s32 *)D_003F6F80) | 0x20000000, var_s4_2, temp_s0_2);
            temp_a1_2 = M2C_FIELD(arg0, s32 *, 8);
            (*(s32 *)D_003F6F80) += temp_s0_2;
            var_s4_2 += temp_a1_2 + ((s32) ((temp_a1_2 > -1) ? temp_a1_2 : (temp_a1_2 + 0x1F)) >> 5);
            if (var_s2 <= 0) {
                goto block_7;
            }
            goto loop_5;
        }
    } else {
block_7:
        var_v0 = 0;
    }
    return var_v0;
}
