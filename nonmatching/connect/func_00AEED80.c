/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern s32 (**D_00B02BB8)(void *, M2C_UNK);
extern char D_00B02BBC[];

s32 func_00AEED80(void) {
    s32 (**var_a1)(void *, M2C_UNK);
    s32 (**var_s0)(void *, M2C_UNK);
    s32 (**var_s0_2)(void *, M2C_UNK);
    s32 (**var_s1_2)(void *, M2C_UNK);
    s32 var_s1;
    s32 var_s2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v1;
    void *temp_v1_2;

    var_s2 = 0;
loop_1:
    var_s1 = 0;
    var_a1 = NULL;
loop_9:
    var_s0 = NULL;
    temp_v1 = D_00B02BB8 + ((*(s32 *)D_00B02BBC) * 8);
    if (var_a1 != NULL) {

    } else {
        var_a1 = D_00B02BB8;
    }
    if ((u32) var_a1 < (u32) temp_v1) {
loop_13:
        if (*var_a1 != NULL) {
            var_s0 = var_a1;
        } else {
            var_a1 += 8;
            if ((u32) var_a1 < (u32) temp_v1) {
                goto loop_13;
            }
        }
    }
    if (var_s0 != NULL) {
        if ((M2C_FIELD(var_s0, s32 (**)(void *, M2C_UNK *), 0)(M2C_FIELD(var_s0, void **, 4), var_a1) != 0) && (var_s0 != NULL)) {
            temp_a0 = M2C_FIELD(var_s0, void **, 4);
            if (temp_a0 != NULL) {
                func_00153FA0(temp_a0);
            }
            M2C_FIELD(var_s0, s32 (**)(void *, M2C_UNK *), 0) = NULL;
        }
        var_a1 = var_s0 + 8;
        var_s1 += 1;
        goto loop_9;
    }
    if (var_s1 != 0) {
        var_s2 += 1;
        if (var_s2 < 0x64) {
            goto loop_1;
        }
    }
    var_s1_2 = NULL;
loop_25:
    var_s0_2 = NULL;
    temp_v1_2 = D_00B02BB8 + ((*(s32 *)D_00B02BBC) * 8);
    if (var_s1_2 != NULL) {

    } else {
        var_s1_2 = D_00B02BB8;
    }
    if ((u32) var_s1_2 < (u32) temp_v1_2) {
loop_29:
        if (*var_s1_2 != NULL) {
            var_s0_2 = var_s1_2;
        } else {
            var_s1_2 += 8;
            if ((u32) var_s1_2 < (u32) temp_v1_2) {
                goto loop_29;
            }
        }
    }
    var_s1_2 = var_s0_2;
    if (var_s0_2 != NULL) {
        if (var_s0_2 != NULL) {
            temp_a0_2 = M2C_FIELD(var_s0_2, void **, 4);
            if (temp_a0_2 != NULL) {
                func_00153FA0(temp_a0_2);
            }
            M2C_FIELD(var_s0_2, s32 (**)(void *, M2C_UNK *), 0) = NULL;
        }
        goto loop_25;
    }
    func_00153FA0(D_00B02BB8);
    D_00B02BB8 = NULL;
    (*(s32 *)D_00B02BBC) = 0;
    return 1;
}
