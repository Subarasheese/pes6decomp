/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_008223F0(s32);                             /* extern */
M2C_UNK func_00838360(void *);                      /* extern */
M2C_UNK func_00838580(void *, void *);              /* extern */
M2C_UNK func_00838820(void *);                      /* extern */
M2C_UNK func_00838940();                            /* extern */
void *func_00838B10();                              /* extern */
void *func_0083D4F0();                              /* extern */
M2C_UNK func_0083D530();                            /* extern */
M2C_UNK func_0083D580();                            /* extern */
M2C_UNK func_0083FCE0();                            /* extern */
M2C_UNK func_00840010();                            /* extern */
void *func_00841140();                              /* extern */
M2C_UNK func_00842660(s8);                          /* extern */
M2C_UNK func_00842670(u8);                          /* extern */
M2C_UNK func_00842680(u8);                          /* extern */
M2C_UNK func_00842690(u8);                          /* extern */
M2C_UNK func_008426A0(s8);                          /* extern */
M2C_UNK func_008426B0(s8);                          /* extern */
M2C_UNK func_008426C0(s8);                          /* extern */
M2C_UNK func_008426D0(s8);                          /* extern */
M2C_UNK func_008426E0(s8);                          /* extern */
M2C_UNK func_008426F0(s8);                          /* extern */
M2C_UNK func_00842700(s8);                          /* extern */
M2C_UNK func_00842710(s8);                          /* extern */
M2C_UNK func_00842720(s8);                          /* extern */
M2C_UNK func_00842730(s8);                          /* extern */
M2C_UNK func_00842740(s8);                          /* extern */
M2C_UNK func_00842750(s8);                          /* extern */
extern void *D_008A4398;
extern char D_008A57F8[];
extern char D_008A5AE8[];
extern char D_008A5F70[];

s32 func_00821D50(void *arg0) {
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    void *temp_s0;
    void *temp_s2;
    void *temp_s3;
    void *temp_s4;
    void *temp_v1;
    void *temp_v1_2;

    if (D_008A4398 == NULL) {
        var_s0 = 0;
    } else {
        var_s0 = M2C_FIELD(D_008A4398, s32 *, 0x49E8);
    }
    temp_s4 = func_00838B10();
    temp_s3 = func_0083D4F0();
    temp_s2 = func_00841140();
    (*(s32 *)D_008A5AE8) = 1;
    if ((D_008A4398 != NULL) && (((void *)D_008A5F70) != NULL) && (arg0 != NULL) && (var_s0 != 0) && (temp_s3 != NULL)) {
        if (temp_s2 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0) == 0x106) {
                if (M2C_FIELD(arg0, s32 *, 0xC) == 0x2B8) {
                    if (M2C_FIELD(arg0, s32 *, 4) != var_s0) {
                        if (M2C_FIELD(arg0, s32 *, 8) == var_s0) {
                            func_001C4730(temp_s4, arg0 + 0x10, 0x2B8);
                            M2C_FIELD(temp_s4, s32 *, 0x230) = 4;
                            func_001C4730(temp_s3, temp_s4 + 0x234, 0x14);
                            func_00842750(M2C_FIELD(temp_s3, s8 *, 4));
                            func_00842740(M2C_FIELD(temp_s3, s8 *, 5));
                            func_00842730(M2C_FIELD(temp_s3, s8 *, 6));
                            func_00842720(M2C_FIELD(temp_s3, s8 *, 7));
                            func_00842710(M2C_FIELD(temp_s3, s8 *, 8));
                            func_00842700(M2C_FIELD(temp_s3, s8 *, 9));
                            func_008426F0(M2C_FIELD(temp_s3, s8 *, 0xA));
                            func_008426E0(M2C_FIELD(temp_s3, s8 *, 0xB));
                            func_008426D0(M2C_FIELD(temp_s3, s8 *, 0xC));
                            func_008426C0(M2C_FIELD(temp_s3, s8 *, 0xD));
                            func_008426B0(M2C_FIELD(temp_s3, s8 *, 0xF));
                            func_008426A0(M2C_FIELD(temp_s3, s8 *, 0xE));
                            func_00842690(M2C_FIELD(temp_s3, u8 *, 0x10));
                            func_00842680(M2C_FIELD(temp_s3, u8 *, 0x12));
                            func_00842670(M2C_FIELD(temp_s3, u8 *, 0x11));
                            func_00842660(M2C_FIELD(temp_s3, s8 *, 0x13));
                            var_s1 = 0;
                            M2C_FIELD(temp_s3, s32 *, 0) = 1;
                            M2C_FIELD(temp_s4, s32 *, 0x234) = 1;
                            M2C_FIELD(temp_s2, s32 *, 0x800) = 0;
                            do {
                                temp_s0 = temp_s2 + (var_s1 * 0x10);
                                func_001C48E8(temp_s0 + 0x7C0, 0, 0x10);
                                temp_v1 = temp_s4 + (var_s1 * 0x88);
                                M2C_FIELD(temp_s0, s32 *, 0x7C0) = (s32) M2C_FIELD(temp_v1, s32 *, 0);
                                M2C_FIELD(temp_s0, s32 *, 0x7C4) = (s32) M2C_FIELD(temp_v1, s32 *, 0x7C);
                                M2C_FIELD(temp_s0, s8 *, 0x7C8) = (s8) M2C_FIELD(temp_v1, s8 *, 0x80);
                                M2C_FIELD(temp_s0, u8 *, 0x7C9) = (u8) M2C_FIELD(temp_v1, u8 *, 0x81);
                                M2C_FIELD(temp_s0, u8 *, 0x7CA) = (u8) M2C_FIELD(temp_v1, u8 *, 0x82);
                                M2C_FIELD(temp_s0, u8 *, 0x7CB) = (u8) M2C_FIELD(temp_v1, u8 *, 0x83);
                                M2C_FIELD(temp_s0, s8 *, 0x7CC) = (s8) M2C_FIELD(temp_v1, s8 *, 0x84);
                                if (M2C_FIELD(temp_s0, s32 *, 0x7C0) != 0) {
                                    M2C_FIELD(temp_s2, s32 *, 0x800) = (s32) (M2C_FIELD(temp_s2, s32 *, 0x800) + 1);
                                }
                                var_s1 += 1;
                            } while (var_s1 < 4);
                            var_a0 = 0;
                            M2C_FIELD(temp_s2, s32 *, 0x88C) = 4;
                            M2C_FIELD(temp_s2, s32 *, 0x890) = 4;
                            do {
                                temp_v1_2 = temp_s2 + (var_a0 * 0x10);
                                if (M2C_FIELD(temp_v1_2, u8 *, 0x7CB) != 0) {
                                    if (M2C_FIELD(temp_v1_2, s8 *, 0x7C8) != 0) {
                                        M2C_FIELD(temp_s2, s32 *, 0x890) = var_a0;
                                    } else {
                                        M2C_FIELD(temp_s2, s32 *, 0x88C) = var_a0;
                                    }
                                }
                                var_a0 += 1;
                            } while (var_a0 < 4);
                            (*(s32 *)D_008A5AE8) = 1;
                            if (func_008223F0(var_a0) != 1) {
                                (*(s32 *)D_008A57F8) = -0x96;
                            } else {
                                func_00840010();
                                func_00838940();
                                func_00838820(temp_s2);
                                func_0083FCE0();
                                func_0083D580();
                                var_s0_2 = 0;
                                do {
                                    func_00838580(temp_s2 + (var_s0_2 * 0x10) + 0x7C0, temp_s2);
                                    var_s0_2 += 1;
                                } while (var_s0_2 < 4);
                                func_0083D530();
                                func_00838360(temp_s2);
                                (*(s32 *)D_008A57F8) = 0;
                            }
                            return 4;
                        }
                        (*(s32 *)D_008A57F8) = -0x230;
                        return 1;
                    }
                    return 1;
                }
                goto block_16;
            }
block_16:
            (*(s32 *)D_008A57F8) = -0x96;
            return 1;
        }
        goto block_11;
    }
block_11:
    (*(s32 *)D_008A57F8) = -0x1B;
    return 1;
}
