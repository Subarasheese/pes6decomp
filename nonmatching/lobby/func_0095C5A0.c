/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082B4C0(M2C_UNK);                         /* extern */
s32 func_0082C2A0();                                /* extern */
s32 func_0082C5B0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0082C7C0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
s32 func_0082C8A0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0082C980(M2C_UNK);                     /* extern */
s32 func_0082CA10(M2C_UNK);                         /* extern */
M2C_UNK func_0082CA50(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
s32 func_00875B70(s32, s32);                        /* extern */

s32 func_0095C5A0(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    temp_s0 = func_0082C2A0();
    if (func_0082B4C0(3) == 1) {
        var_s1 = 1;
    }
    if (temp_s0 == 0) {
        func_0082CA50(0x76, -1);
    }
    temp_v0 = func_0082CA10(0x76);
    switch (temp_v0) {                              /* irregular */
    case 3:
        func_0082CA50(0x76, 0);
        func_0082C690(0x83, 0);
        return 1;
    case 2:
        func_0082CA50(0x76, 0);
        func_0082C690(0x83, 0);
        return 4;
    case 1:
        if (func_0082C8A0(0x83, 3) != 1) {
            if (func_00862110(temp_s0, 3) == 0) {
                func_0082CA50(0x76, -1);
            }
            if (func_0082C5B0(0x83) >= 0x1C21) {
                func_0082CA50(0x76, 3);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x76, -1);
            }
        } else if (func_0082C7C0(0x83) != 0) {
            func_0082CA50(0x76, 3);
        } else {
            func_0082C980(0x76);
        }
block_45:
        return 0;
    case 0:
        if (func_00862110(temp_s0, 3) != 1) {
            func_0082CA50(0x76, -1);
        } else {
            if (func_00875B70(temp_s0 + 0x6C, arg0) != 0) {
                func_0082CA50(0x76, -1);
            } else {
                func_0082C840(0x83);
                func_0082C690(0x83, 0);
                func_0082C980(0x76);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x76, -1);
            }
        }
        goto block_45;
    default:
        func_0082CA50(0x76, 0);
        func_0082C690(0x83, 0);
        return 2;
    }
}
