/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00176E78(void *, int);
extern char D_003CC2D0[];
extern char D_003CC300[];
extern char D_003CC3D8[];
extern char D_003CC3E8[];

s32 func_00177920(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    M2C_UNK (*temp_v0)(s32, M2C_UNK);
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_v1;

    if (arg0 == NULL) {
        var_a0 = ((void *)D_003CC3D8);
        var_a1 = ((void *)D_003CC2D0);
        goto block_5;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        var_a0 = ((void *)D_003CC3E8);
        var_a1 = ((void *)D_003CC300);
block_5:
        func_00176E78(var_a0, (s32) var_a1);
        return 0;
    }
    if (arg1 == 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, s32 *, 0x14);
        var_a0_2 = M2C_FIELD(arg0, s32 *, 0x10);
        goto block_13;
    }
    if (arg1 != 1) {
        temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x38);
        var_s0 = 0;
        if (temp_v0 != NULL) {
            temp_v0(M2C_FIELD(arg0, s32 *, 0x3C), -3);
        }
    } else {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, s32 *, 0x18);
        var_a0_2 = M2C_FIELD(arg0, s32 *, 0xC);
block_13:
        temp_s0 = var_v1 + M2C_FIELD(arg0, s32 *, 0x24);
        temp_s0_2 = (var_a0_2 < temp_s0) ? var_a0_2 : temp_s0;
        var_s0 = (temp_s0_2 >= arg2) ? arg2 : temp_s0_2;
    }
    *arg3 = var_s0;
    return var_s0 == arg2;
}
