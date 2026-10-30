/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00825610();                                /* extern */
s32 func_00827450(s32);                             /* extern */
s32 func_0082B4C0(s32);                             /* extern */
s32 func_0082C2A0();                                /* extern */
s32 func_0082C5B0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C6D0(M2C_UNK);                     /* extern */
s32 func_0082C7C0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C920(M2C_UNK);                     /* extern */
M2C_UNK func_0082C980(M2C_UNK);                     /* extern */
s32 func_0082CA10(M2C_UNK);                         /* extern */
M2C_UNK func_0082CA50(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_0086B6F0(s32, s32);                        /* extern */
s32 func_0086B8F0(s32, s32);                        /* extern */

s32 func_00836A00(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;

    var_s1 = 0;
    temp_s0 = func_0082C2A0();
    if (func_0082B4C0(arg0) == 1) {
        var_s1 = 1;
    }
    if (temp_s0 == 0) {
        func_0082CA50(0x3C, -1);
    }
    if ((arg0 < 0) || (arg0 >= 9)) {
        func_0082CA50(0x3C, -1);
    }
    temp_v0 = func_0082CA10(0x3C);
    switch (temp_v0) {                              /* irregular */
    case 3:
        func_0082C920(0x3C);
        func_0082C840(0x36);
        func_0082C690(0x36, 0);
        var_v1 = 1;
        if (func_00827450(arg0) == 1) {
            var_v1 = 3;
        }
        return var_v1;
    case 1:
        if (func_0082C8A0(0x36) != 1) {
            if (func_00862110(temp_s0, arg0) == 0) {
                func_0082CA50(0x3C, -1);
            }
            if (func_0082C5B0(0x36) >= 0x1C21) {
                func_0082CA50(0x3C, 3);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x3C, -1);
            }
        } else if (func_0082C7C0(0x36) != 0) {
            func_0082C980(0x3C);
            func_0082C980(0x3C);
        } else {
            func_0082C980(0x3C);
        }
block_61:
        return 0;
    case 0:
        if (func_00862110(temp_s0, arg0) != 1) {
            func_0082CA50(0x3C, -1);
        } else {
            if (func_00825610() != 5) {
                var_v0_3 = func_0086B8F0(temp_s0 + (arg0 * 0x24), temp_s0 + 0x16144);
            } else {
                var_v0_3 = func_0086B6F0(temp_s0 + (arg0 * 0x24), temp_s0 + 0x16144);
            }
            if (var_v0_3 != 0) {
                func_0082CA50(0x3C, -1);
            } else {
                func_0082C840(0x36);
                func_0082C6D0(0x36);
                func_0082C690(0x36, 0);
                func_0082C980(0x3C);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x3C, -1);
            }
        }
        goto block_61;
    case 2:
        func_0082C2A0();
        func_0082C2A0();
        func_0082C2A0();
        func_0082C2A0();
        func_0082C2A0();
        func_0082C2A0();
        func_0082C2A0();
        func_0082C2A0();
        func_0082C2A0();
        func_0082C2A0();
        func_0082C2A0();
        func_0082C2A0();
        func_0082C920(0x3C);
        func_0082C840(0x36);
        func_0082C690(0x36, 0);
        if (func_00827450(arg0) != 1) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        return var_v0;
    default:
        func_0082C920(0x3C);
        func_0082C840(0x36);
        func_0082C690(0x36, 0);
        if (func_00827450(arg0) != 1) {
            var_v0_2 = 2;
        } else {
            var_v0_2 = 3;
        }
        return var_v0_2;
    }
}
