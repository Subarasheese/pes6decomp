/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001EE630(s32, M2C_UNK *);              /* extern */
M2C_UNK func_001EEE60(s32, u8 *);                   /* extern */
M2C_UNK func_001EF370(s32, f32 *);                  /* extern */
M2C_UNK func_001EF900(s32, s32);                    /* extern */
M2C_UNK func_001F18D0(s32, u8 *);                   /* extern */
M2C_UNK func_001F3D10(s32, M2C_UNK);                /* extern */
s32 func_00292F00(u8);                              /* extern */
extern u8 D_003E7D60;
extern u8 D_003E7D61;
extern u8 D_003E7D62;
extern u8 D_003E7D63;
extern char D_00CB4F50[];
extern char D_00CB4F80[];
extern char D_00CB4FB0[];
extern char D_00CB4FB4[];
extern char D_00CB4FB8[];
extern char D_00CB4FBC[];

void func_00B97850(void *arg0) {
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 sp9C;
    u8 spAC;
    u8 spAD;
    u8 spAE;
    u8 spAF;
    M2C_UNK *var_s2_2;
    M2C_UNK *var_s6;
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s7;

    var_s4 = 0;
    var_s3 = 0;
    var_s1 = 0;
    spAE = D_003E7D62;
    spAC = D_003E7D60;
    spAD = D_003E7D61;
    spAF = D_003E7D63;
    do {
        var_s5 = 0;
        var_s2 = 0;
loop_2:
        func_001EEE60(M2C_FIELD((var_s4 + M2C_FIELD(arg0, s32 *, 0) + var_s2), s32 *, 0x38), &spAC);
        func_001EF900(M2C_FIELD((var_s4 + M2C_FIELD(arg0, s32 *, 0) + var_s2), s32 *, 0x38), 0);
        var_s5 += 1;
        var_s2 += 4;
        if (var_s5 < 9) {
            goto loop_2;
        }
        func_001F3D10(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0) + var_s3), s32 *, 0xC), 0);
        func_001F18D0(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0) + var_s3), s32 *, 0xC), &spAC);
        var_s1 += 1;
        var_s4 += 0x24;
        var_s3 += 4;
    } while (var_s1 < 0xB);
    var_s4_2 = 8;
    var_s6 = ((void *)D_00CB4F80);
    var_s2_2 = ((void *)D_00CB4F50);
    var_s7 = 0x20;
    do {
        var_s5_2 = 0;
        var_s1_2 = 0;
loop_6:
        sp90 = (f32) M2C_FIELD(var_s6, s16 *, 0);
        sp94 = (f32) M2C_FIELD(var_s6, s16 *, 2);
        sp98 = (f32) M2C_FIELD(var_s2_2, s16 *, 4);
        sp9C = (f32) M2C_FIELD(var_s2_2, s16 *, 6);
        temp_s3 = M2C_FIELD((var_s7 + M2C_FIELD(arg0, s32 *, 0) + var_s1_2), s32 *, 0x38);
        func_001EF370(temp_s3, &sp90);
        func_001EE630(temp_s3, var_s2_2);
        func_001EF900(temp_s3, var_s4_2 == 0);
        var_s5_2 += 1;
        var_s1_2 += 0x24;
        if (var_s5_2 < 0xB) {
            goto loop_6;
        }
        var_s4_2 -= 1;
        var_s6 -= 4;
        var_s2_2 -= 8;
        var_s7 -= 4;
    } while (var_s4_2 >= 0);
    var_s3_2 = 0;
    var_s1_3 = 0;
    do {
        temp_s2 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0) + var_s1_3), s32 *, 0x38);
        temp_a0 = func_00292F00(M2C_FIELD((M2C_FIELD(arg0, s32 *, 4) + (M2C_FIELD(arg0, u8 *, 0x3E) * 0x52) + var_s3_2), u8 *, 0x8A)) & 0xFF;
        switch (temp_a0) {                          /* irregular */
        case 0:
            func_001EEE60(temp_s2, ((void *)D_00CB4FB0));
            break;
        case 1:
            func_001EEE60(temp_s2, ((void *)D_00CB4FB4));
            break;
        case 2:
            func_001EEE60(temp_s2, ((void *)D_00CB4FB8));
            break;
        case 3:
            func_001EEE60(temp_s2, ((void *)D_00CB4FBC));
            break;
        }
        var_s3_2 += 1;
        var_s1_3 += 0x24;
    } while (var_s3_2 < 0xB);
}
