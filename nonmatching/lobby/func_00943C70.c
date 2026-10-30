/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00827BB0(s32);                             /* extern */
s32 func_00827BF0(s32);                             /* extern */
s32 func_00828140(s32);                             /* extern */
void *func_0082C2A0();                              /* extern */
M2C_UNK func_0099AD10(M2C_UNK, void *, void *, s32, s32); /* extern */

s32 func_00943C70(void) {
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s4;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_s2_2;
    void *var_v0;
    void *var_v0_2;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_v0 = M2C_FIELD(temp_v0, void **, 0x117E4);
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_s0 = M2C_FIELD(var_v0, s32 *, 0x1770);
        if (var_s0 >= 0) {
            if (var_s0 >= 0x14) {
                var_s0 = 0x14;
            }
        } else {
            var_s0 = 0;
        }
    } else {
        var_s0 = 0;
    }
    var_s1 = 0;
loop_49:
    if (var_s1 < var_s0) {
        temp_v0_2 = func_0082C2A0();
        if (temp_v0_2 != NULL) {
            var_v0_2 = M2C_FIELD(temp_v0_2, void **, 0x117E4);
        } else {
            var_v0_2 = NULL;
        }
        if (var_v0_2 != NULL) {
            var_s2 = M2C_FIELD(var_v0_2, s32 *, 0x1770);
            if (var_s2 >= 0) {
                if (var_s2 >= 0x14) {
                    var_s2 = 0x14;
                }
            } else {
                var_s2 = 0;
            }
        } else {
            var_s2 = 0;
        }
        temp_v0_3 = func_0082C2A0();
        if (temp_v0_3 != NULL) {
            var_a0 = M2C_FIELD(temp_v0_3, s32 *, 0x117E4);
        } else {
            var_a0 = 0;
        }
        if (var_a0 == 0) {
            var_s2_2 = NULL;
        } else if (var_s1 < 0) {
            var_s2_2 = NULL;
        } else if (var_s1 < var_s2) {
            var_s2_2 = var_a0 + (var_s1 * 0x12C);
        } else {
            var_s2_2 = NULL;
        }
        if (var_s2_2 != NULL) {
            temp_s3 = M2C_FIELD(var_s2_2, s32 *, 4) + func_00828140(var_a0);
            temp_s4 = func_00827BB0(temp_s3);
            temp_s3_2 = func_00827BF0(temp_s3);
            func_001C48E8(var_s2_2 + 0x44, 0, 4);
            func_001C48E8(var_s2_2 + 0x48, 0, 4);
            func_0099AD10(0, var_s2_2 + 0x44, var_s2_2 + 0x48, temp_s4, temp_s3_2);
        }
        var_s1 += 1;
        goto loop_49;
    }
    return 1;
}
