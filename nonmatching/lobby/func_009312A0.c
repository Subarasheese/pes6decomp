/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00222E80(int, int, u16);
extern s32 func_001F08B0(s32);
extern void * func_00221230(s32);
M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_001C8590(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_00221BC0(M2C_UNK, s32, M2C_UNK, s32);  /* extern */
void *func_00821780();                              /* extern */
s32 func_0082C2A0();                                /* extern */
s32 func_00841E20(s32);                             /* extern */
s32 func_00841E60(s32);                             /* extern */
s32 func_009317C0(M2C_UNK);                         /* extern */
s32 func_00931940(s32);                             /* extern */
M2C_UNK func_009595F0();                            /* extern */
s32 func_00959630();                                /* extern */
M2C_UNK func_0099C7C0(s32);                         /* extern */
s32 func_0099C7F0(M2C_UNK);                         /* extern */
extern s32 D_003EAC88;
extern u8 D_003EAC8C;
extern char D_00592800[];
extern char D_009FE280[];
extern char D_009FE284[];
extern char D_009FE288[];
extern char D_009FE28C[];
extern char D_009FE290[];
extern char D_009FE294[];
extern char D_009FE298[];
extern char D_009FE29C[];
extern char D_009FE2A0[];
extern char D_009FE2A4[];
extern char D_009FE2B0[];
extern char D_009FE2B4[];
extern char D_009FE2B8[];
extern char D_009FE2BC[];
extern char D_009FE2C0[];
extern char D_009FE2C4[];
extern char D_009FE2C8[];
extern char D_009FE2CC[];

s32 func_009312A0(void) {
    s32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 sp9C;
    s32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spBC;
    f32 spC0;
    f32 spC4;
    M2C_UNK *var_s0;
    s32 *var_s3;
    s32 *var_s3_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    s32 var_s6;
    u8 *temp_v0_5;
    u8 temp_a0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    switch (D_003EAC88) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        D_003EAC8C = 0;
    case 1:                                         /* switch 1 */
        D_003EAC88 = 2;
block_95:
        return 0;
    default:                                        /* switch 1 */
        D_003EAC88 = 0;
        goto block_95;
    case 2:                                         /* switch 1 */
        temp_v0_2 = func_00959630();
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_s5 = 0;
            break;
        case 4:                                     /* switch 2 */
            func_009595F0();
            var_s5 = 1;
            break;
        default:                                    /* switch 2 */
        case 3:                                     /* switch 2 */
        case 2:                                     /* switch 2 */
        case 1:                                     /* switch 2 */
            func_009595F0();
            var_s5 = -1;
            break;
        }
        if (var_s5 != 0) {
            if (var_s5 >= 0) {
                temp_v0_3 = func_0099C7F0(0x50C);
                if (temp_v0_3 == 0) {
                    D_003EAC88 = 0;
                    return -1;
                }
                temp_v0_4 = func_0082C2A0();
                if (temp_v0_4 == 0) {
                    var_s6 = 0;
                } else if (temp_v0_3 != 0) {
                    func_001C4730(temp_v0_3, temp_v0_4 + 0x1561C, 0x50C);
                    var_s6 = 1;
                } else {
                    var_s6 = 0;
                }
                if (var_s6 == 0) {
                    func_0099C7C0(temp_v0_3);
                    goto block_87;
                }
                var_s5 = func_00931940(temp_v0_3);
                func_0099C7C0(temp_v0_3);
                if (var_s5 != 0) {
                    D_003EAC88 = 0;
                    return var_s5;
                }
                var_s1 = 0;
                var_s0 = ((void *)D_00592800);
                do {
                    temp_v0_5 = func_00221230(var_s1);
                    temp_a0 = *temp_v0_5;
                    if ((temp_a0 != 1) && (temp_a0 != 0)) {

                    } else {
                        *temp_v0_5 = 2;
                        M2C_FIELD(var_s0, s8 *, 3) = 2;
                    }
                    var_s1 += 1;
                    var_s0 += 0x28;
                } while (var_s1 < 2);
                var_s4 = 0;
                var_s3 = &spA0;
                var_s2 = 0;
                do {
                    spA0 = (*(s32 *)D_009FE280);
                    spA4 = (*(f32 *)D_009FE284);
                    spA8 = (*(f32 *)D_009FE288);
                    spAC = (*(f32 *)D_009FE28C);
                    spB0 = (*(f32 *)D_009FE290);
                    spB4 = (*(f32 *)D_009FE294);
                    spB8 = (*(f32 *)D_009FE298);
                    spBC = (*(f32 *)D_009FE29C);
                    spC0 = (*(f32 *)D_009FE2A0);
                    spC4 = (*(f32 *)D_009FE2A4);
                    if (var_s4 >= 0) {
                        if (var_s4 >= 0xA) {
                            goto block_48;
                        }
                        var_a0 = *var_s3;
                    } else {
block_48:
                        var_a0 = 0;
                    }
                    if (var_a0 == 0) {
                        var_s1_2 = 0;
                    } else {
                        var_s1_2 = func_001F08B0(var_a0);
                    }
                    if ((var_s4 >= 0) && (var_s4 < 0xA)) {
                        temp_v0_6 = func_00821780();
                        if (temp_v0_6 != NULL) {
                            temp_s0 = temp_v0_6 + var_s2 + 1;
                            if (var_s1_2 != 0) {
                                func_001C8590(temp_s0, var_s1_2, 0x3F);
                                M2C_FIELD(temp_s0, s8 *, 0x3F) = 0;
                            }
                        }
                    }
                    var_s4 += 1;
                    var_s3 += 4;
                    var_s2 += 0x40;
                } while (var_s4 < 0xA);
                var_s4_2 = 0;
                var_s3_2 = &sp80;
                var_s2_2 = 0;
                do {
                    sp80 = (*(s32 *)D_009FE2B0);
                    sp84 = (*(f32 *)D_009FE2B4);
                    sp88 = (*(f32 *)D_009FE2B8);
                    sp8C = (*(f32 *)D_009FE2BC);
                    sp90 = (*(f32 *)D_009FE2C0);
                    sp94 = (*(f32 *)D_009FE2C4);
                    sp98 = (*(f32 *)D_009FE2C8);
                    sp9C = (*(f32 *)D_009FE2CC);
                    if ((var_s4_2 < 0) || (var_s4_2 >= 8)) {
                        var_a0_2 = 0;
                    } else {
                        var_a0_2 = *var_s3_2;
                    }
                    if (var_a0_2 == 0) {
                        var_s1_3 = 0;
                    } else {
                        var_s1_3 = func_001F08B0(var_a0_2);
                    }
                    if ((var_s4_2 >= 0) && (var_s4_2 < 8)) {
                        temp_v0_7 = func_00821780();
                        if (temp_v0_7 != NULL) {
                            temp_s0_2 = temp_v0_7 + var_s2_2 + 0x281;
                            if (var_s1_3 != 0) {
                                func_001C8590(temp_s0_2, var_s1_3, 0x31);
                                M2C_FIELD(temp_s0_2, s8 *, 0x31) = 0;
                            }
                        }
                    }
                    var_s4_2 += 1;
                    var_s3_2 += 4;
                    var_s2_2 += 0x32;
                } while (var_s4_2 < 8);
                var_s0_2 = 0;
                do {
                    func_00222E80(0x35, var_s0_2 & 0xFF, func_00841E60(var_s0_2) & 0xFFFF);
                    func_00221BC0(0x35, var_s0_2 & 0xFF, 0, func_00841E20(var_s0_2) & 0xFF);
                    var_s0_2 += 1;
                } while (var_s0_2 < 0x17);
                temp_v0_8 = func_00821780();
                if (temp_v0_8 != NULL) {
                    M2C_FIELD(temp_v0_8, s32 *, 0x500) = 0;
                }
                temp_v0_9 = func_00821780();
                if (temp_v0_9 != NULL) {
                    M2C_FIELD(temp_v0_9, s8 *, 0x505) = 0;
                }
                temp_v0_10 = func_00821780();
                if (temp_v0_10 != NULL) {
                    M2C_FIELD(temp_v0_10, s8 *, 0x506) = 1;
                }
                temp_v0_11 = func_00821780();
                if (temp_v0_11 != NULL) {
                    M2C_FIELD(temp_v0_11, s8 *, 0x507) = 0;
                }
                temp_v0_12 = func_00821780();
                if (temp_v0_12 != NULL) {
                    M2C_FIELD(temp_v0_12, s8 *, 0x508) = 1;
                }
                D_003EAC88 = 3;
                goto block_87;
            }
            var_s6 = 0;
block_87:
            if (var_s6 == 0) {
                if ((s32) D_003EAC8C >= 0) {
                    D_003EAC88 = 0;
                    return var_s5;
                }
                D_003EAC8C += 1;
                D_003EAC88 = 1;
                goto block_95;
            }
            goto block_95;
        }
        goto block_95;
    case 3:                                         /* switch 1 */
        temp_v0 = func_009317C0(2);
        if (temp_v0 != 0) {
            D_003EAC88 = 0;
            return temp_v0;
        }
        goto block_95;
    }
}
