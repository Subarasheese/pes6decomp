/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00827450(M2C_UNK);                         /* extern */
s32 func_0082B4C0(M2C_UNK);                         /* extern */
s32 func_0082C2A0();                                /* extern */
s32 func_0082C5B0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C6D0(M2C_UNK);                     /* extern */
s32 func_0082C7C0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C980(M2C_UNK);                     /* extern */
s32 func_0082CA10(M2C_UNK);                         /* extern */
M2C_UNK func_0082CA50(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
s32 func_00875FD0(s32);                             /* extern */
M2C_UNK func_0094A6A0();                            /* extern */

s32 func_00961430(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    var_s1 = 0;
    temp_s0 = func_0082C2A0();
    if (func_0082B4C0(5) == 1) {
        var_s1 = 1;
    }
    if (temp_s0 == 0) {
        func_0082CA50(0x93, -1);
    }
    temp_v0 = func_0082CA10(0x93);
    switch (temp_v0) {                              /* irregular */
    case 1:
        if (func_0082C8A0(0xA1) != 1) {
            if (func_00862110(temp_s0, 5) == 0) {
                func_0082CA50(0x93, -1);
            }
            if (func_0082C5B0(0xA1) >= 0x1C21) {
                func_0082CA50(0x93, 3);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x93, -1);
            }
        } else if (func_0082C7C0(0xA1) != 0) {
            func_0082C980(0x93);
            func_0082C980(0x93);
        } else {
            func_0082C980(0x93);
        }
block_51:
        return 0;
    case 0:
        if (func_00862110(temp_s0, 5) != 1) {
            func_0082CA50(0x93, -1);
        } else {
            if (func_00875FD0(temp_s0 + 0xB4) != 0) {
                func_0082CA50(0x93, -1);
            } else {
                func_0082C840(0xA1);
                func_0082C6D0(0xA1);
                func_0082C690(0xA1, 0);
                func_0082C980(0x93);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x93, -1);
            }
        }
        goto block_51;
    case 2:
        func_0094A6A0();
        if (func_00827450(5) != 1) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        return var_v0;
    case 3:
        func_0094A6A0();
        var_v1 = 1;
        if (func_00827450(5) == 1) {
            var_v1 = 3;
        }
        return var_v1;
    default:
        func_0094A6A0();
        if (func_00827450(5) != 1) {
            var_v0_2 = 2;
        } else {
            var_v0_2 = 3;
        }
        return var_v0_2;
    }
}
