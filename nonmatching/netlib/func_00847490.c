/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
M2C_UNK func_00844D40(M2C_UNK, M2C_UNK, s16 *, M2C_UNK); /* extern */
M2C_UNK func_00847CA0(s32, s32);                    /* extern */
extern s32 D_003EA290;
extern s32 D_003EA294;
extern char D_008B09E0[];
extern char D_008B0E20[];
extern char D_008B0E48[];

s32 func_00847490(void) {
    s16 sp68;
    s16 sp6A;
    s16 sp78;
    s16 sp7A;
    s32 sp88;
    s32 sp8C;
    M2C_UNK *var_a1;
    M2C_UNK *var_a1_2;
    s16 *var_a0;
    s16 *var_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s4;
    void *var_s3;

    func_00110E58(func_001105C8(), &sp8C, &sp88);
    temp_s2 = (sp88 / 1000) + (sp8C * 0x3E8);
    if ((*(s16 *)D_008B0E20) <= 0) {
        return -1;
    }
    temp_s1 = D_003EA294 & 4;
    temp_s0 = (D_003EA294 & 1) == 0;
    if (func_002DCA40() == 0) {
        if ((u32) (temp_s2 - D_003EA290) >= 0x5DDU) {
            D_003EA290 = temp_s2;
            if (temp_s1 == 0) {
                sp68 = 1;
                var_a2 = 0;
                var_a1 = ((void *)D_008B09E0);
                var_a0 = &sp68;
                sp6A = (*(s16 *)D_008B0E20);
                do {
                    M2C_FIELD(var_a0, s8 *, 4) = (s8) M2C_FIELD(var_a1, s8 *, 0x50);
                    if (M2C_FIELD(var_a1, u8 *, 0x52) == 0) {

                    } else {
                        M2C_FIELD(var_a0, s8 *, 4) = (s8) ((u8) M2C_FIELD(var_a0, s8 *, 4) | 0x80);
                    }
                    var_a2 += 1;
                    var_a0 += 1;
                    var_a1 += 0x88;
                } while (var_a2 < 8);
                func_00844D40(1, 0x20, &sp68, 0xC);
            }
        }
        if ((u32) (temp_s2 - (*(s32 *)D_008B0E48)) >= 0x1F5U) {
            if ((temp_s1 != 0) || (M2C_FIELD(((void *)D_008B09E0), s32 *, 0x48) == 0) || (temp_s0 != 0)) {
                M2C_FIELD(((void *)D_008B09E0), s32 *, 0x48) = temp_s2;
            }
            temp_a1 = temp_s2 - M2C_FIELD(((void *)D_008B09E0), s32 *, 0x48);
            M2C_FIELD(((void *)D_008B09E0), s32 *, 0x4C) = temp_a1;
            func_00847CA0(1, temp_a1);
            goto block_24;
        }
    } else {
        if ((u32) (temp_s2 - D_003EA290) >= 0x7D1U) {
            D_003EA290 = temp_s2;
            if (temp_s1 == 0) {
                sp78 = 1;
                var_a2_2 = 0;
                var_a1_2 = ((void *)D_008B09E0);
                var_a0_2 = &sp78;
                sp7A = (*(s16 *)D_008B0E20);
                do {
                    M2C_FIELD(var_a0_2, s8 *, 4) = (s8) M2C_FIELD(var_a1_2, s8 *, 0x50);
                    if (M2C_FIELD(var_a1_2, u8 *, 0x52) == 0) {

                    } else {
                        M2C_FIELD(var_a0_2, s8 *, 4) = (s8) ((u8) M2C_FIELD(var_a0_2, s8 *, 4) | 0x80);
                    }
                    var_a2_2 += 1;
                    var_a0_2 += 1;
                    var_a1_2 += 0x88;
                } while (var_a2_2 < 8);
                func_00844D40(-1, 0x20, &sp78, 0xC);
            }
        }
        if ((u32) (temp_s2 - (*(s32 *)D_008B0E48)) >= 0x1F5U) {
            var_s4 = 2;
            var_s3 = ((void *)D_008B09E0) + 0x88;
            do {
                if (M2C_FIELD(var_s3, s16 *, 0) != 0) {
                    if ((temp_s1 == 0) && (temp_s0 == 0) && (M2C_FIELD(var_s3, s32 *, 0x48) != 0)) {

                    } else {
                        M2C_FIELD(var_s3, s32 *, 0x48) = temp_s2;
                    }
                    temp_a1_2 = temp_s2 - M2C_FIELD(var_s3, s32 *, 0x48);
                    M2C_FIELD(var_s3, s32 *, 0x4C) = temp_a1_2;
                    func_00847CA0(var_s4, temp_a1_2);
                }
                var_s4 += 1;
                var_s3 += 0x88;
            } while (var_s4 < 9);
block_24:
            (*(s32 *)D_008B0E48) = temp_s2;
        }
    }
    return 0;
}
