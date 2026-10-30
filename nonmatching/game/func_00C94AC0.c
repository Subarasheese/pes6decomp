/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_009B4580(void);
extern u16 func_009B44E0(void);
extern void func_009B44F0(u32);
extern int func_002727B0(void);
extern u16 func_009B4390(void);
M2C_UNK func_00204D90();                            /* extern */
M2C_UNK func_002D7B20();                            /* extern */
M2C_UNK func_009A7240();                            /* extern */
M2C_UNK func_009B5D20();                            /* extern */
M2C_UNK func_009B6630(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK (*D_00CCD96C)(u8, s32, s32, s32);
extern char D_00CCD970[];
extern char D_00CCD971[];

s32 func_00C94AC0(void) {
    M2C_UNK var_f12;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    if (!((*(u8 *)D_00CCD971) & 8)) {
        if ((func_002727B0() & 0xFF) != 9) {
            var_f12 = 0x3F800000;
        } else {
            var_f12 = 0x3F400000;
        }
        func_009B6630(0, var_f12);
        func_009B5D20();
        func_009A7240();
    }
    if (((*(u8 *)D_00CCD971) & 2) && !((*(u8 *)D_00CCD971) & 4)) {
        (*(u8 *)D_00CCD971) |= 4;
        temp_s1 = func_009B44E0() & 0xFFFF;
        if (((func_009B4390() & 0xFFFF) + 0x10) < temp_s1) {
            func_009B44F0(((func_009B4390() & 0xFFFF) + 0x10) & 0xFFFF);
        }
    }
    if (D_00CCD96C != NULL) {
        temp_s2 = func_009B4390() & 0xFFFF;
        temp_s1_2 = func_009B4580() & 0xFFFF;
        D_00CCD96C((*(u8 *)D_00CCD970), temp_s2, temp_s1_2, func_009B44E0() & 0xFFFF);
    }
    temp_v1 = func_002727B0() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 9:
        func_002D7B20();
        break;
    case 3:
        if (!((*(u8 *)D_00CCD971) & 8)) {
            func_00204D90();
        }
        break;
    case 19:
    case 18:
        func_00204D90();
        break;
    }
    temp_s1_3 = func_009B4390() & 0xFFFF;
    if (temp_s1_3 == (func_009B44E0() & 0xFFFF)) {
        var_s0 = 1;
    }
    return var_s0;
}
