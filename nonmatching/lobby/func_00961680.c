/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00827450(M2C_UNK);                         /* extern */
s32 func_0082B4C0(M2C_UNK);                         /* extern */
s32 func_0082C2A0();                                /* extern */
s32 func_0082C5B0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C980(M2C_UNK);                     /* extern */
s32 func_0082CA10(M2C_UNK);                         /* extern */
M2C_UNK func_0082CA50(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
s32 func_00876BC0(s32);                             /* extern */

s32 func_00961680(void) {
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
        func_0082CA50(0x8B, -1);
    }
    temp_v0 = func_0082CA10(0x8B);
    switch (temp_v0) {                              /* irregular */
    case 3:
        func_0082CA50(0x8B, 0);
        func_0082C690(0x9A, 0);
        var_v1 = 1;
        if (func_00827450(5) == 1) {
            var_v1 = 3;
        }
        return var_v1;
    case 2:
        func_0082CA50(0x8B, 0);
        func_0082C690(0x9A, 0);
        if (func_00827450(5) != 1) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        return var_v0;
    case 1:
        if (func_0082C8A0(0x9A) != 1) {
            if (func_00862110(temp_s0, 5) == 0) {
                func_0082CA50(0x8B, -1);
            }
            if (func_0082C5B0(0x9A) >= 0x1C21) {
                func_0082CA50(0x8B, 3);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x8B, -1);
            }
        } else {
            func_0082C980(0x8B);
        }
block_51:
        return 0;
    case 0:
        if (func_00862110(temp_s0, 5) != 1) {
            func_0082CA50(0x8B, -1);
        } else {
            if (func_00876BC0(temp_s0 + 0xB4) != 0) {
                func_0082CA50(0x8B, -1);
            } else {
                func_0082C840(0x9A);
                func_0082C690(0x9A, 0);
                func_0082C980(0x8B);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x8B, -1);
            }
        }
        goto block_51;
    default:
        func_0082CA50(0x8B, 0);
        func_0082C690(0x9A, 0);
        if (func_00827450(5) != 1) {
            var_v0_2 = 2;
        } else {
            var_v0_2 = 3;
        }
        return var_v0_2;
    }
}
