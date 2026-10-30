/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00827450(s32);                             /* extern */
s32 func_0082B4C0(s32);                             /* extern */
s32 func_0082C2A0();                                /* extern */
s32 func_0082C5B0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0082C7C0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C980(M2C_UNK);                     /* extern */
s32 func_0082CA10(M2C_UNK);                         /* extern */
M2C_UNK func_0082CA50(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_00870690(s32, s32, s32);                   /* extern */
extern char D_00A03A00[];

s32 func_00936260(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_v0_3;
    s32 *var_v0_4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    var_s1 = 0;
    temp_s0 = func_0082C2A0();
    if (func_0082B4C0(arg0) == 1) {
        var_s1 = 1;
    }
    if ((arg0 < 0) || (arg0 >= 9)) {
        func_0082CA50(0x9F, -1);
    }
    if (arg2 == 0) {
        func_0082CA50(0x9F, 3);
    }
    if (temp_s0 == 0) {
        func_0082CA50(0x9F, -1);
    }
    temp_v0 = func_0082CA10(0x9F);
    switch (temp_v0) {                              /* irregular */
    case 3:
        func_0082CA50(0x9F, 0);
        func_0082C690(0xAE, 0);
        var_v1 = 1;
        if (func_00827450(arg0) == 1) {
            var_v1 = 3;
        }
        return var_v1;
    case 2:
        func_0082CA50(0x9F, 0);
        func_0082C690(0xAE, 0);
        if (func_00827450(arg0) != 1) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        return var_v0;
    case 1:
        if (func_0082C8A0(0xAE) != 1) {
            if (func_00862110(temp_s0, arg0) == 0) {
                func_0082CA50(0x9F, -1);
            }
            if (func_0082C5B0(0xAE) >= 0x1C21) {
                func_0082CA50(0x9F, 3);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x9F, -1);
            }
        } else if (func_0082C7C0(0xAE) != 0) {
            if (func_0082C7C0(0xAE) != -0x262) {
                func_0082C980(0x9F);
                func_0082C980(0x9F);
            } else {
                temp_s0_2 = func_0082C2A0();
                if (func_0082C2A0() == 0) {
                    var_v0_3 = NULL;
                } else {
                    var_v0_3 = ((void *)D_00A03A00);
                }
                if (var_v0_3 == NULL) {
                    var_v0_4 = NULL;
                } else if (temp_s0_2 != 0) {
                    var_v0_4 = var_v0_3 + 0x2F17C;
                } else {
                    var_v0_4 = NULL;
                }
                if (var_v0_4 == NULL) {
                    func_0082C980(0x9F);
                    func_0082C980(0x9F);
                } else {
                    *var_v0_4 = 0;
                    func_0082C980(0x9F);
                }
            }
        } else {
            func_0082C980(0x9F);
        }
block_78:
        return 0;
    case 0:
        if (func_00862110(temp_s0, arg0) != 1) {
            func_0082CA50(0x9F, -1);
        } else {
            if (func_00870690(temp_s0 + (arg0 * 0x24), arg1, arg2) != 0) {
                func_0082CA50(0x9F, -1);
            } else {
                func_0082C840(0xAE);
                func_0082C690(0xAE, 0);
                func_0082C980(0x9F);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x9F, -1);
            }
        }
        goto block_78;
    default:
        func_0082CA50(0x9F, 0);
        func_0082C690(0xAE, 0);
        if (func_00827450(arg0) != 1) {
            var_v0_2 = 2;
        } else {
            var_v0_2 = 3;
        }
        return var_v0_2;
    }
}
