/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00311FB0(u8 *);                        /* extern */
s32 func_00341910(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00354820(s32 *, M2C_UNK **);               /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00B94F50();                                /* extern */
s32 func_00BD9960();                                /* extern */
s32 func_00BD99D0();                                /* extern */
s32 func_00BF6280();                                /* extern */
extern M2C_UNK func_003521F0;
extern M2C_UNK func_00356450;
extern M2C_UNK func_00356D30;
extern M2C_UNK func_00356DA0;

s32 func_00356E00(s32 *arg0, s32 *arg1, M2C_UNK **arg2) {
    u8 sp4F;
    M2C_UNK *var_v0;
    s32 var_a0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;

    if (!(*arg0 & 1) && (func_00354820(arg1, arg2) != 0)) {
        *arg0 |= 1;
        return 1;
    }
    if (!(*arg0 & 2)) {
        func_00311FB0(&sp4F);
        if (sp4F == 0xFF) {
            var_v1 = 0;
        } else {
            *arg1 = 0x2C;
            var_v1 = 1;
            *arg2 = &func_003521F0;
        }
        if (var_v1 != 0) {
            *arg0 |= 2;
            return 1;
        }
        goto block_10;
    }
block_10:
    if (!(*arg0 & 4)) {
        if ((func_00BF6280() == 0xD) && ((func_009E1C90(3) & 0xFF) == 3)) {
            *arg1 = 0x2C;
            var_v1_2 = 1;
            *arg2 = &func_00356450;
        } else {
            var_v1_2 = 0;
        }
        if (var_v1_2 != 0) {
            *arg0 |= 4;
            return 1;
        }
        goto block_17;
    }
block_17:
    if (!(*arg0 & 8)) {
        if ((func_00B94F50() != 0) && (func_00BD99D0() != 0)) {
            *arg1 = 0x80000041;
            if (func_00341910(1, 5, 0xA) != 0) {
                var_v0 = &func_00356DA0;
            } else {
                var_v0 = &func_00356D30;
            }
            *arg2 = var_v0;
            var_v0_2 = 1;
        } else {
            var_v0_2 = 0;
        }
        if (var_v0_2 != 0) {
            *arg0 |= 8;
            return 1;
        }
        goto block_27;
    }
block_27:
    if (!(*arg0 & 0x10)) {
        if (func_00BD9960() == 0) {
            var_a0 = 0;
        } else {
            *arg1 = 0x80000040;
            var_a0 = 1;
            *arg2 = &func_00356450;
        }
        if (var_a0 != 0) {
            *arg0 |= 0x10;
            return 1;
        }
        goto block_34;
    }
block_34:
    return 0;
}
