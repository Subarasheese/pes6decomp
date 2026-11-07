/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001E6B70(M2C_UNK);                     /* extern */
s32 func_001E6E10(s32);                             /* extern */
s32 func_001E7E00(s32, s64 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0020A2A0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0020A460(s32, M2C_UNK, s32);           /* extern */
s32 func_00264F70(s32, M2C_UNK, M2C_UNK);           /* extern */
extern char D_003AB130[];
extern s32 D_003E9C64;

s32 func_002683F0(s32 arg0) {
    s64 sp48;
    s32 temp_s0;
    s32 temp_s1;

    sp48 = (*(s64 *)D_003AB130);
    if (func_001E6E10(0x733C) != 0) {
        do {
            func_001E6B70(0x733C);
        } while (func_001E6E10(0x733C) != 0);
    }
    temp_s0 = func_001E6E10(func_00264F70(arg0, 2, 1)) != 0;
    if (temp_s0 == 0) {
        func_0020A460(D_003E9C64, 2, arg0);
    }
    temp_s1 = func_001E7E00(func_001E6E10(func_00264F70(arg0, 2, 1)), &sp48, 0, 0x733C, 1);
    if (temp_s0 == 0) {
        func_0020A2A0(D_003E9C64, 2, arg0);
    }
    return temp_s1;
}
