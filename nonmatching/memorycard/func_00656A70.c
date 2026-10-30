/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00153FC0(M2C_UNK, M2C_UNK, s32);           /* extern */
s32 func_00153FD0(M2C_UNK, M2C_UNK, s32);           /* extern */
M2C_UNK func_001C48E8(s32, M2C_UNK, s32);           /* extern */
s32 func_002206F0(M2C_UNK);                         /* extern */
s32 func_0063A820();                                /* extern */
s32 func_0063AAF0(s32, s32);                        /* extern */
s32 func_0063C390(s32);                             /* extern */
M2C_UNK func_0063E150(s32);                         /* extern */
extern s32 D_003E9DF8;
extern s32 D_003E9E34;
extern char D_0065C170[];
extern char D_0065EF50[];
extern char D_0065EF68[];
extern char D_0065EF70[];
extern char D_0065EF78[];
extern char D_0065EF80[];
extern char D_0065EF88[];
extern char D_0065EF90[];

void func_00656A70(void) {
    M2C_UNK *var_s0;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;
    s32 var_v1;

    (*(s32 *)D_0065EF68) = 0;
    temp_s0 = func_0063C390(D_003E9DF8) << 0xA;
    temp_v0 = func_00153FC0(7, 0x40, temp_s0);
    (*(s32 *)D_0065EF68) = temp_v0;
    func_001C48E8(temp_v0, 0, temp_s0);
    (*(s32 *)D_0065EF88) = (*(s32 *)D_0065EF68);
    temp_a0 = (*(s32 *)D_0065EF68) + 0x1400;
    (*(s32 *)D_0065EF70) = (*(s32 *)D_0065EF68);
    (*(s32 *)D_0065EF78) = temp_a0;
    temp_v0_2 = func_0063AAF0(temp_a0, (*(s32 *)D_0065EF68));
    switch (temp_v0_2) {                            /* irregular */
    default:
        (*(s32 *)D_0065EF80) = 0;
        break;
    case 3:
        var_v1 = (*(s32 *)D_0065EF68) + 0x57400;
block_11:
        (*(s32 *)D_0065EF80) = var_v1;
        break;
    case 4:
        var_v1 = (*(s32 *)D_0065EF68) + 0x57800;
        goto block_11;
    case 5:
        var_v1 = (*(s32 *)D_0065EF68) + 0xB1000;
        goto block_11;
    case 12:
        var_v1 = (*(s32 *)D_0065EF68) + 0x58800;
        goto block_11;
    case 11:
        var_v1 = (*(s32 *)D_0065EF68) + 0x58800;
        goto block_11;
    }
    (*(s32 *)D_0065C170) = func_00153FD0(7, 1, 0x120);
    func_0063E150(D_003E9E34);
    temp_v0_3 = func_00153FC0(7, 0x40, 0x1400);
    (*(s32 *)D_0065EF90) = temp_v0_3;
    func_001C48E8(temp_v0_3, 0, 0x1400);
    if (func_0063A820() == 1) {
        temp_s2 = func_002206F0(0x10);
        var_s1 = 0;
        var_s0 = ((void *)D_0065EF50);
        do {
            if (M2C_FIELD(var_s0, s32 *, 0) == 0) {
                M2C_FIELD(var_s0, s32 *, 0) = func_00153FD0(7, 1, 0x1198);
            }
            if (M2C_FIELD(var_s0, s32 *, 4) == 0) {
                M2C_FIELD(var_s0, s32 *, 4) = func_00153FD0(7, 1, temp_s2);
            }
            var_s1 += 1;
            var_s0 += 8;
        } while (var_s1 < 2);
    }
}
