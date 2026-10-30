/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001C8590(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 func_0081D6D0(s32);                             /* extern */
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
s32 func_0086F980(s32, s32, M2C_UNK *);             /* extern */
extern char D_00A68410[];

s32 func_00951790(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    var_s2 = 0;
    temp_s1 = func_0082C2A0();
    func_001C48E8(((void *)D_00A68410), 0, 0x400);
    if (func_0082B4C0(arg0) == 1) {
        var_s2 = 1;
    }
    if (temp_s1 == 0) {
        return 2;
    }
    if (arg1 != 0) {
        if (func_0081D6D0(arg2) == 1) {
            func_001C8590(((void *)D_00A68410), arg2, 0x10);
        }
        if (arg0 < 0) {
            return 1;
        }
        if (arg0 < 9) {
            temp_v0 = func_0082CA10(0x2D);
            switch (temp_v0) {                      /* irregular */
            case 3:
                func_0082CA50(0x2D, 0);
                func_0082C690(0x25, 0);
                func_0082C690(0x31, 0);
                var_v1 = 1;
                if (func_00827450(arg0) == 1) {
                    var_v1 = 3;
                }
                return var_v1;
            case 2:
                func_0082CA50(0x2D, 0);
                func_0082C690(0x25, 0);
                func_0082C690(0x31, 0);
                if (func_00827450(arg0) != 1) {
                    var_v0 = 4;
                } else {
                    var_v0 = 3;
                }
                return var_v0;
            case 1:
                if (func_0082C8A0(0x25) != 1) {
                    if (func_00862110(temp_s1, arg0) == 0) {
                        func_0082CA50(0x2D, -1);
                    }
                    if (func_0082C5B0(0x25) >= 0x1C21) {
                        func_0082CA50(0x2D, 3);
                    }
                    if (var_s2 == 1) {
                        func_0082CA50(0x2D, -1);
                    }
                } else if (func_0082C7C0(0x25) != 0) {
                    func_0082C980(0x2D);
                    func_0082C980(0x2D);
                } else if (func_0082C8A0(0x31) != 1) {
                    if (func_00862110(temp_s1, arg0) == 0) {
                        func_0082CA50(0x2D, -1);
                    }
                    if (func_0082C5B0(0x25) >= 0x1C21) {
                        func_0082CA50(0x2D, 3);
                    }
                    if (var_s2 == 1) {
                        func_0082CA50(0x2D, -1);
                    }
                } else {
                    func_0082C980(0x2D);
                }
block_76:
                return 0;
            case 0:
                if (func_00862110(temp_s1, arg0) != 1) {
                    func_0082CA50(0x2D, -1);
                } else if (func_0086F980(temp_s1 + (arg0 * 0x24), arg1, ((void *)D_00A68410)) != 0) {
                    func_0082CA50(0x2D, -1);
                } else {
                    func_0082C840(0x25);
                    func_0082C690(0x25, 0);
                    func_0082C840(0x31);
                    func_0082C690(0x31, 0);
                    func_0082C980(0x2D);
                }
                goto block_76;
            default:
                func_0082CA50(0x2D, 0);
                func_0082C690(0x25, 0);
                func_0082C690(0x31, 0);
                if (func_00827450(arg0) != 1) {
                    var_v0_2 = 2;
                } else {
                    var_v0_2 = 3;
                }
                return var_v0_2;
            }
        } else {
            return 1;
        }
    } else {
        return 1;
    }
}
