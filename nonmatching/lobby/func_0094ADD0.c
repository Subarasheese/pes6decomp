/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
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
s32 func_008782D0(s32, s32, M2C_UNK *);             /* extern */
extern char D_00A68810[];

s32 func_0094ADD0(s32 arg0, s32 arg1, M2C_UNK *arg2) {
    M2C_UNK *var_s2;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    var_s2 = arg2;
    var_s1 = 0;
    temp_s0 = func_0082C2A0();
    if (func_0082B4C0(arg0) == 1) {
        var_s1 = 1;
    }
    if (temp_s0 == 0) {
        func_0082CA50(0x60, -1);
    }
    if ((arg0 < 0) || (arg0 >= 9)) {
        func_0082CA50(0x60, -1);
    }
    temp_v0 = func_0082CA10(0x60);
    switch (temp_v0) {                              /* irregular */
    case 3:
        func_0082C920(0x60);
        func_0082C840(0x60);
        func_0082C690(0x60, 0);
        var_v1 = 1;
        if (func_00827450(arg0) == 1) {
            var_v1 = 3;
        }
        return var_v1;
    case 2:
        func_0082C920(0x60);
        func_0082C840(0x60);
        func_0082C690(0x60, 0);
        if (func_00827450(arg0) != 1) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        return var_v0;
    case 1:
        if (func_0082C8A0(0x60) != 1) {
            if (func_00862110(temp_s0, arg0) == 0) {
                func_0082CA50(0x60, -1);
            }
            if (func_0082C5B0(0x60) >= 0x1C21) {
                func_0082CA50(0x60, 3);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x60, -1);
            }
        } else if (func_0082C7C0(0x60) != 0) {
            func_0082C980(0x60);
            func_0082C980(0x60);
        } else {
            func_0082C980(0x60);
        }
block_60:
        return 0;
    case 0:
        if (func_00862110(temp_s0, arg0) != 1) {
            func_0082CA50(0x60, -1);
        } else {
            func_001C48E8(((void *)D_00A68810), 0, 0x400);
            if (var_s2 == NULL) {
                var_s2 = ((void *)D_00A68810);
            }
            if (func_008782D0(temp_s0 + (arg0 * 0x24), arg1, var_s2) != 0) {
                func_0082CA50(0x60, -1);
            } else {
                func_0082C840(0x60);
                func_0082C6D0(0x60);
                func_0082C690(0x60, 0);
                func_0082C980(0x60);
            }
            if (var_s1 == 1) {
                func_0082CA50(0x60, -1);
            }
        }
        goto block_60;
    default:
        func_0082C920(0x60);
        func_0082C840(0x60);
        func_0082C690(0x60, 0);
        if (func_00827450(arg0) != 1) {
            var_v0_2 = 2;
        } else {
            var_v0_2 = 3;
        }
        return var_v0_2;
    }
}
