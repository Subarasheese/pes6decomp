/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00220540(s32, M2C_UNK);                /* extern */
extern char D_00530C94[];

s32 func_002203D0(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 != 0) {
        func_00220540(var_s0 + 0xC, 0);
        func_00220540(var_s0 + 0x500, 2);
        func_00220540(var_s0 + 0x113C, 3);
        func_00220540(var_s0 + 0x1A32, 4);
        func_00220540(var_s0 + 0x7CF0, 5);
        func_00220540(var_s0 + 0x23C4, 6);
        func_00220540(var_s0 + 0x9F618, 7);
        func_00220540(var_s0 + 0x9FCA7, 8);
        func_00220540(var_s0 + 0xA0F28, 9);
        func_00220540(var_s0 + 0xA1C46, 0xA);
        func_00220540(var_s0 + 0xB9390, 0xB);
        func_00220540(var_s0 + 0xBEB90, 0xC);
        func_00220540(var_s0 + 0xD1510, 0xD);
        func_00220540(var_s0 + 0xB6364, 0xE);
        func_00220540(var_s0 + 0xDD31C, 0x11);
        func_00220540(var_s0 + 0xA4146, 0x12);
        func_00220540(var_s0 + 0x3FC, 0x13);
        func_00220540(var_s0 + 0x9F2D0, 0x16);
        func_00220540(var_s0, 0x17);
    } else {
        var_s0 = (*(s32 *)D_00530C94);
    }
    return var_s0;
}
