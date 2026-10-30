/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, void *, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
s32 func_00154070(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_0019DB18(M2C_UNK *, M2C_UNK, s32);     /* extern */
extern char D_005F9618[];
extern char D_011D4488[];
extern char D_011D4C88[];
extern char D_011D4C8C[];
extern M2C_UNK func_00129EE0;

void func_0012A108(s32 arg0, s32 arg1) {
    M2C_UNK *var_s0;
    M2C_UNK var_a0;
    s32 temp_v0;

    (*(s32 *)D_011D4C88) = arg1;
    (*(s32 *)D_011D4C8C) = 1;
    temp_v0 = func_00154070(((void *)D_005F9618), -1);
    if (temp_v0 != 2) {
        if (temp_v0 < 3) {
            if (temp_v0 != 1) {
                var_s0 = (M2C_UNK *)0x011D0000;
            } else if (arg0 != -0xE) {
                if (arg0 < -0xD) {
                    var_s0 = (M2C_UNK *)0x011D0000;
                    if (arg0 != -0xF) {

                    } else {
                        var_a0 = 0x12;
                        goto block_29;
                    }
                } else {
                    var_s0 = (M2C_UNK *)0x011D0000;
                    if (arg0 != -1) {

                    } else {
                        goto block_13;
                    }
                }
            } else {
block_13:
                var_a0 = 0x15;
                goto block_29;
            }
        } else if (temp_v0 != 3) {
            var_s0 = (M2C_UNK *)0x011D0000;
        } else if (arg0 != -0xE) {
            if (arg0 < -0xD) {
                var_s0 = (M2C_UNK *)0x011D0000;
                if (arg0 != -0xF) {

                } else {
                    var_a0 = 0x14;
                    goto block_29;
                }
            } else {
                var_s0 = (M2C_UNK *)0x011D0000;
                if (arg0 != -1) {

                } else {
                    goto block_30;
                }
            }
        } else {
block_30:
            var_s0 = ((void *)D_011D4488);
            func_0019DB18(((void *)D_011D4488), 0x800, func_00135080(0x17));
        }
    } else if (arg0 != -0xE) {
        if (arg0 < -0xD) {
            var_s0 = (M2C_UNK *)0x011D0000;
            if (arg0 != -0xF) {

            } else {
                var_a0 = 0x13;
                goto block_29;
            }
        } else {
            var_s0 = (M2C_UNK *)0x011D0000;
            if (arg0 != -1) {

            } else {
                goto block_21;
            }
        }
    } else {
block_21:
        var_a0 = 0x16;
block_29:
        var_s0 = ((void *)D_011D4488);
        func_0019DB18(((void *)D_011D4488), 0x800, func_00135080(var_a0));
    }
    func_0012DD30(3, 0x1F4, 0xFA, var_s0 + 0x4488, &func_00129EE0, *(s32 *)0x5B3744);
}
