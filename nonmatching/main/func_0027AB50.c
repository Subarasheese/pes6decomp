/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00270570(void);
M2C_UNK func_001B36A0(void *, s32, s32, u8);        /* extern */
M2C_UNK func_001B3820(void *, s32, s32, u8);        /* extern */
M2C_UNK func_00270530(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0027ADB0(M2C_UNK *);                   /* extern */
M2C_UNK func_0093FE50(M2C_UNK *, void *);           /* extern */
extern s32 D_003E74CC;
extern char Pes6MatchPlayers[];
extern char D_00591F14[];
extern char D_00592743[];

void func_0027AB50(void) {
    M2C_UNK *var_s3;
    s32 temp_s2;
    s32 var_a0;
    s32 var_s4;
    u64 temp_a0;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s0;
    void *temp_s1;

    var_a0 = 1;
    var_s3 = ((void *)Pes6MatchPlayers);
    if (((*(u8 *)D_00592743) != 3) && ((*(u8 *)D_00592743) != 0xB)) {
        var_a0 = 0;
    }
    temp_s2 = var_a0 != 0;
    var_s4 = 0x17;
    do {
        temp_s1 = M2C_FIELD(var_s3, void **, 4);
        temp_s0 = M2C_FIELD(temp_s1, void **, 0);
        func_00270530(var_s3, temp_s0 + 0x1E0);
        if ((M2C_FIELD(temp_s1, u8 *, 0x2C) != 0) && (temp_s0 != NULL) && (M2C_FIELD(temp_s0, void **, 0x10) != NULL)) {
            if (func_00270570() == 0) {
                func_001B36A0(temp_s0, M2C_FIELD((D_003E74CC + (M2C_FIELD(temp_s1, u16 *, 0x30) * 4)), s32 *, 0x178C), (s32) M2C_FIELD(temp_s1, f32 *, 0x38), M2C_FIELD(temp_s1, u8 *, 0x2D));
                if (M2C_FIELD(temp_s0, u8 *, 3) != 1) {
                    if (M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x10), s8 *, 3) == 0) {
                        M2C_FIELD(temp_s0, u16 *, 0x1F0) = (u16) M2C_FIELD(var_s3, u16 *, 0x26);
                    } else {
                        func_0027ADB0(var_s3);
                    }
                    goto block_12;
                }
            } else if (M2C_FIELD(temp_s0, u8 *, 3) != 1) {
                func_001B3820(temp_s0, M2C_FIELD((D_003E74CC + (M2C_FIELD(temp_s1, u16 *, 0x30) * 4)), s32 *, 0x178C), (s32) M2C_FIELD(temp_s1, f32 *, 0x38), M2C_FIELD(temp_s1, u8 *, 0x2D));
                M2C_FIELD(temp_s0, u16 *, 0x1F0) = 0U;
                M2C_FIELD(temp_s1, s8 *, 0x5C) = 0;
                temp_a1 = M2C_FIELD(temp_s0, void **, 0x10);
                M2C_FIELD(temp_a1, s32 *, 0x24) = (s32) (M2C_FIELD(temp_a1, s32 *, 0xC) + (M2C_FIELD(temp_a1, s8 *, 9) * 8));
                func_0093FE50(var_s3, temp_a1);
block_12:
                temp_a1_2 = M2C_FIELD(temp_s1, void **, 4);
                if (temp_a1_2 != NULL) {
                    temp_a0 = (u64) ((s64) M2C_FIELD(temp_a1_2, u8 *, 0xD) << 0x38) >> 0x39;
                    if ((temp_a0 != 0x17) && !(M2C_FIELD(temp_a1_2, u8 *, 0xC) & 0x80) && ((temp_a0 != 0x15) || (temp_s2 == 0))) {
                        if ((M2C_FIELD(temp_s0, s32 *, 0xC) == 0) && ((*(u8 *)D_00591F14) != 0) && (temp_s2 != 0)) {
                            goto block_28;
                        }
                        goto block_30;
                    }
block_28:
                    M2C_FIELD(temp_s0, s8 *, 0x1F4) = 1;
                } else {
block_30:
                    M2C_FIELD(temp_s0, s8 *, 0x1F4) = 0;
                }
                goto block_31;
            }
        } else {
block_31:
            M2C_FIELD(temp_s1, f32 *, 0x54) = (f32) M2C_FIELD(temp_s1, f32 *, 0x38);
            M2C_FIELD(temp_s1, u8 *, 0x5A) = (u8) M2C_FIELD(temp_s1, u8 *, 0x2D);
            M2C_FIELD(temp_s1, u16 *, 0x58) = (u16) M2C_FIELD(var_s3, u16 *, 0x26);
            M2C_FIELD(temp_s1, u16 *, 0x52) = (u16) M2C_FIELD(temp_s1, u16 *, 0x30);
            M2C_FIELD(temp_s1, s8 *, 0x5D) = 0;
        }
        var_s4 -= 1;
        var_s3 += 0x240;
    } while (var_s4 > 0);
}
