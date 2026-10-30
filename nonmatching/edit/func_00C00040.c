/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00C1B3C0(u32);
extern s32 func_0021F170(s32);
M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
s32 func_00B9FBB0();                                /* extern */
M2C_UNK func_00BC87A0();                            /* extern */
M2C_UNK func_00BC8860(s32);                         /* extern */
s32 func_00BF70A0();                                /* extern */
s32 func_00BF73D0();                                /* extern */
s32 func_00BF7910();                                /* extern */
s32 func_00BF7950();                                /* extern */
M2C_UNK func_00C1B440(M2C_UNK, s32);                /* extern */
extern s32 D_003EB10C;

s32 func_00C00040(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_00BF70A0();
    switch (temp_v0) {                              /* irregular */
    case 1:
        temp_v0_2 = func_0021F170(0x40);
        if (temp_v0_2 != 0) {
            func_001C4730(arg0, temp_v0_2, 0x58);
        }
        func_00C1B3C0(0U);
        D_003EB10C = 0;
        break;
    case 0:
        temp_s1 = func_00BF7950() & 0xFFFF;
        if (func_00BF7910() != 0) {
            D_003EB10C = 1;
            func_00C1B440(0, temp_s1);
            func_00BC87A0();
        }
        if ((D_003EB10C != 0) && (func_00B9FBB0() != 0)) {
            func_00BC8860(temp_s1);
            D_003EB10C = 0;
        }
        if (func_00BF73D0() == 0) {
            func_00B91440(0xB);
        } else {
            func_00B91490(0xB);
        }
        break;
    }
    return temp_v0;
}
