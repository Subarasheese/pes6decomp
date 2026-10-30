/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s32 *, s32 *, M2C_UNK);       /* extern */
s32 *func_00BA93D0(s32);                            /* extern */
s32 *func_00BA9400(s32);                            /* extern */
s32 *func_00BA9430(s32);                            /* extern */
s32 *func_00BA9460(s32);                            /* extern */
extern char D_003AC7F0[];

void func_002CD000(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp4C;
    s32 sp50;
    u8 sp59;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 *var_s1;
    s32 temp_s0;
    s32 var_s2;

    var_s2 = 0;
    var_s1 = &sp80;
    sp4C = arg4;
    sp80 = arg0;
    sp84 = arg1;
    sp88 = arg2;
    sp8C = arg3;
    do {
        temp_s0 = *var_s1;
        func_001C4730(func_00BA9460(var_s2), ((void *)D_003AC7F0) + (temp_s0 * 0x68), 0x14);
        func_001C4730(&sp50, ((void *)D_003AC7F0) + (temp_s0 * 0x68) + 0x14, 0x2A);
        sp59 += 0x94;
        func_001C4730(func_00BA9430(var_s2), &sp50, 0x2A);
        func_001C4730(func_00BA9400(var_s2), ((void *)D_003AC7F0) + (temp_s0 * 0x68) + 0x3E, 0x24);
        func_001C4730(func_00BA93D0(var_s2), &sp4C, 4);
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 4);
}
