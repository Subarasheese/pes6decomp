/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B035D0(void);
extern void func_002E4B90(void *);
M2C_UNK func_0020E310(M2C_UNK, f32 *);              /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00949340(s32, M2C_UNK, s64);           /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
s32 func_0095AC80(u8);                              /* extern */
M2C_UNK func_00971B50(s32, M2C_UNK);                /* extern */
M2C_UNK func_00971C10(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00971CE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00972020(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737A0(s32, f32 *);                  /* extern */
M2C_UNK func_00AF7620(s64);                         /* extern */
M2C_UNK func_00AF7820();                            /* extern */
M2C_UNK func_00AF7870(u8);                          /* extern */
M2C_UNK func_00AF7C50();                            /* extern */
M2C_UNK func_00AF81F0();                            /* extern */
M2C_UNK func_00AF84F0();                            /* extern */
M2C_UNK func_00AF9330();                            /* extern */
M2C_UNK func_00AF93D0(u8);                          /* extern */
M2C_UNK func_00AF96F0();                            /* extern */
M2C_UNK func_00AF99A0(u8, s32, u16, s32);           /* extern */
M2C_UNK func_00AFA090();                            /* extern */
M2C_UNK func_00AFB4D0(u8);                          /* extern */
M2C_UNK func_00B003A0();                            /* extern */
M2C_UNK func_00B00410();                            /* extern */
M2C_UNK func_00B00500();                            /* extern */
s32 func_00B00EB0(s32);                             /* extern */
s32 func_00B013F0(u8, s32);                         /* extern */
s32 func_00B01540(u8);                              /* extern */
s32 func_00B01650(u8, s32);                         /* extern */
extern f32 D_003E7C10;

s32 func_00AFE110(void) {
    f32 sp48;
    f32 sp4C;
    s16 temp_a2;
    s16 temp_s1;
    s16 temp_s1_2;
    s16 temp_v0_6;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_s2;
    s64 temp_a0;
    u32 temp_v0;
    u32 var_s1;
    u8 temp_a0_2;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v1_3;

    sp48 = D_003E7C10;
    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x29F84) != 1) {
            if ((M2C_FIELD(temp_v0, u8 *, 0x29F9C) == 1) && (M2C_FIELD(temp_v0, s32 *, 0x5E4) != 5)) {
                goto block_90;
            }
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x5E4);
            switch (temp_v1) {                      /* switch 1; irregular */
            case 7:                                 /* switch 1 */
                temp_v1_2 = M2C_FIELD(temp_v0, s32 *, 0x29DE8) + 1;
                M2C_FIELD(temp_v0, s32 *, 0x29DE8) = temp_v1_2;
                if (temp_v1_2 >= 4) {
                    M2C_FIELD(temp_v0, s32 *, 0x29DE8) = 0;
                }
                func_00AF7820();
                func_0026E840(0x8400F802);
                goto block_90;
            case 5:                                 /* switch 1 */
                temp_v1_3 = M2C_FIELD(temp_v0, u8 *, 0x5F4);
                if (temp_v1_3 != 1) {
                    M2C_FIELD(temp_v0, u8 *, 0x5F4) = (u8) (temp_v1_3 + 1);
                    func_0026E840(0x8400F802);
                } else {
                    M2C_FIELD(temp_v0, u8 *, 0x5F4) = 1U;
                }
                func_00AFB4D0(M2C_FIELD(temp_v0, u8 *, 0x5F4));
                goto block_90;
            default:                                /* switch 1 */
                if (M2C_FIELD(temp_v0, s16 *, 0x5CC) == 0) {
                    if (M2C_FIELD(temp_v0, s16 *, 0x29DE0) == 0) {
                        switch (temp_v1) {          /* switch 2; irregular */
                        case 3:                     /* switch 2 */
                            temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x810) + 1;
                            M2C_FIELD(temp_v0, s32 *, 0x810) = temp_v0_2;
                            if (temp_v0_2 < 0xA) {
                                func_0026E840(0x8400F802);
                            } else {
                                M2C_FIELD(temp_v0, s32 *, 0x810) = 9;
                            }
                            if ((func_0095AC80((u8) M2C_FIELD(temp_v0, s32 *, 0x810)) & 0xFF) == 0x17) {
                                func_00B003A0();
                            } else {
                                func_00B00500();
                            }
                            func_00AF7C50();
                            func_00AF7870((u8) M2C_FIELD(temp_v0, s32 *, 0x810));
                            goto block_90;
                        case 4:                     /* switch 2 */
                            temp_v0_3 = M2C_FIELD(temp_v0, s32 *, 0x814);
                            if (temp_v0_3 >= 9) {
                                temp_v0_4 = M2C_FIELD(temp_v0, u8 *, 0x29DE4);
                                if ((s32) temp_v0_4 < (M2C_FIELD(temp_v0, u8 *, 0x890) - 0xA)) {
                                    M2C_FIELD(temp_v0, u8 *, 0x29DE4) = (u8) (temp_v0_4 + 1);
                                    M2C_FIELD(temp_v0, s16 *, 0x29DE0) = (s16) M2C_FIELD(temp_v0, s16 *, 0x29DDC);
                                    temp_a2 = -M2C_FIELD(temp_v0, s16 *, 0x29DE6);
                                    M2C_FIELD(temp_v0, s16 *, 0x29DDE) = temp_a2;
                                    temp_s1 = M2C_FIELD(temp_v0, s16 *, 0x29DE0);
                                    func_00949340(temp_v0 + 0x29DE0, 0, (s64) ((s64) temp_a2 << 0x30) >> 0x30);
                                    temp_a0 = (s64) ((s64) temp_s1 << 0x30) >> 0x30;
                                    M2C_FIELD(temp_v0, s16 *, 0x29DE2) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x29DE0) - temp_a0);
                                    func_00AF7620(temp_a0);
                                    func_0026E840(0x8400F802);
                                }
                            } else {
                                M2C_FIELD(temp_v0, s32 *, 0x814) = (s32) (temp_v0_3 + 1);
                                func_0026E840(0x8400F802);
                            }
                            func_00B00410();
                            func_00AF7870((u8) M2C_FIELD(temp_v0, s32 *, 0x814));
                            goto block_90;
                        default:                    /* switch 2 */
                            temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x5C7);
                            if (((func_00B01540(M2C_FIELD(temp_v0, u8 *, 0x5C4)) & 0xFF) == (temp_a0_2 + M2C_FIELD(temp_v0, u8 *, 0x5D0) + 1)) && ((temp_v1_4 = M2C_FIELD(temp_v0, s32 *, 0x5E4), (temp_v1_4 == 0)) || (temp_v1_4 == 6))) {
                                func_00972020(M2C_FIELD(temp_v0, s32 *, 0x254), 1);
                                func_00972020(M2C_FIELD(temp_v0, s32 *, 0x250), 0);
                                var_s2 = 0;
                                var_s1 = temp_v0;
                                do {
                                    if (M2C_FIELD(temp_v0, u8 *, 0x5C4) == 0) {
                                        if (func_00B00EB0(var_s2) == 0) {
                                            goto block_60;
                                        }
                                        func_0020E310(2, &sp4C);
                                        func_009737A0(M2C_FIELD(var_s1, s32 *, 0xC8), &sp4C);
                                    } else {
block_60:
                                        func_009737A0(M2C_FIELD(var_s1, s32 *, 0xC8), &sp48);
                                    }
                                    var_s2 += 1;
                                    var_s1 += 4;
                                } while (var_s2 < 0x17);
                                func_0020E310(3, &sp4C);
                                func_009737A0(M2C_FIELD(temp_v0, s32 *, 0x5B4), &sp4C);
                                M2C_FIELD(temp_v0, s32 *, 0x5E4) = 2;
                                M2C_FIELD(temp_v0, u8 *, 0x29F9C) = 1U;
                                func_00AFA090();
                                func_00958000(0x8A);
                                func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x26C), 2, 0);
                                func_002E4B90(M2C_FIELD(temp_v0, void **, 0x410));
                                func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x40C), 2, 0);
                                func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x40C), 0);
                                func_00971B50(M2C_FIELD(temp_v0, s32 *, 0x40C), 0);
                                if (M2C_FIELD(temp_v0, s32 *, 0x29DF0) == 0) {
                                    func_00AF84F0();
                                } else {
                                    func_00AF81F0();
                                }
                                func_00AF9330();
                                func_0026E840(0x8400F802);
                                goto block_90;
                            }
                            temp_v1_5 = M2C_FIELD(temp_v0, s32 *, 0x5E4);
                            if ((temp_v1_5 != 6) && (temp_v1_5 != 1) && (temp_v1_5 != 0)) {
                                goto block_87;
                            }
                            if ((s32) temp_a0_2 >= 0xA) {
                                temp_v0_5 = M2C_FIELD(temp_v0, u8 *, 0x5D0);
                                if ((s32) temp_v0_5 < (func_00B01540(M2C_FIELD(temp_v0, u8 *, 0x5C4)) - 0xB)) {
                                    M2C_FIELD(temp_v0, u8 *, 0x5D0) = (u8) (temp_v0_5 + 1);
                                    if (func_00B01650(M2C_FIELD(temp_v0, u8 *, 0x5C4), (M2C_FIELD(temp_v0, u8 *, 0x5C7) + M2C_FIELD(temp_v0, u8 *, 0x5D0)) & 0xFF) != 0) {
                                        M2C_FIELD(temp_v0, s16 *, 0x5CC) = (s16) M2C_FIELD(temp_v0, s16 *, 0x5C8);
                                        temp_v0_6 = -M2C_FIELD(temp_v0, s16 *, 0x5D2);
                                        M2C_FIELD(temp_v0, s16 *, 0x5CA) = temp_v0_6;
                                        temp_s1_2 = M2C_FIELD(temp_v0, s16 *, 0x5CC);
                                        func_00949340(temp_v0 + 0x5CC, 0, (s64) ((s64) temp_v0_6 << 0x30) >> 0x30);
                                        M2C_FIELD(temp_v0, s16 *, 0x5CE) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x5CC) - ((s64) ((s64) temp_s1_2 << 0x30) >> 0x30));
                                        func_00AF96F0();
                                        func_0026E840(0x8400F802);
                                        goto block_86;
                                    }
                                    M2C_FIELD(temp_v0, u8 *, 0x5D0) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x5D0) - 1);
                                    return 0;
                                }
                                goto block_86;
                            }
                            M2C_FIELD(temp_v0, u8 *, 0x5C7) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x5C7) + 1);
                            if (func_00B01650(M2C_FIELD(temp_v0, u8 *, 0x5C4), (M2C_FIELD(temp_v0, u8 *, 0x5C7) + M2C_FIELD(temp_v0, u8 *, 0x5D0)) & 0xFF) != 0) {
                                func_00AF93D0(M2C_FIELD(temp_v0, u8 *, 0x5C7));
                                func_0026E840(0x8400F802);
block_86:
                                func_00AF99A0(M2C_FIELD(temp_v0, u8 *, 0x5C5), func_00B013F0(M2C_FIELD(temp_v0, u8 *, 0x5C4), (M2C_FIELD(temp_v0, u8 *, 0x5C7) + M2C_FIELD(temp_v0, u8 *, 0x5D0)) & 0xFF) & 0xFFFF, M2C_FIELD(temp_v0, u16 *, 0x5D4), M2C_FIELD(temp_v0, s32 *, 0x5E8));
block_87:
                                if (M2C_FIELD(temp_v0, s32 *, 0x29DF0) == 0) {
                                    func_00AF84F0();
                                } else {
                                    func_00AF81F0();
                                }
                                goto block_90;
                            }
                            M2C_FIELD(temp_v0, u8 *, 0x5C7) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x5C7) - 1);
                            return 0;
                        }
                    } else {
                        return 0;
                    }
                } else {
                    goto block_90;
                }
                break;
            }
        } else {
            goto block_90;
        }
    } else {
block_90:
        return 0;
    }
}
