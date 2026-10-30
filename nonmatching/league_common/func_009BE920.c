/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7840(void *, s8);
extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
s32 func_00221D10(s32, s32, M2C_UNK);               /* extern */
void *func_00223E00(u16);                           /* extern */
s32 func_002249A0(s32, s32);                        /* extern */
s32 func_00938F10(u16);                             /* extern */
s32 func_0093B480(u16);                             /* extern */
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
u64 func_0095C390(u16);                             /* extern */
u64 func_0095C4A0(u16);                             /* extern */
void *func_00970870(u16);                           /* extern */
M2C_UNK func_00973480(s32, u64);                    /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, u64);           /* extern */
s32 func_00B02A20(u16);                             /* extern */
extern void *D_003EA9CC;

void func_009BE920(void) {
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 var_s3;
    s32 var_s4;
    u16 temp_s5;
    u16 temp_s6;
    u64 temp_s0_3;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;

    temp_s2 = D_003EA9CC;
    if (temp_s2 != NULL) {
        func_001D7D60(M2C_FIELD(temp_s2, void **, 4), 1);
        func_001D7D60(M2C_FIELD(temp_s2, void **, 8), 1);
        func_001D7D60(M2C_FIELD(temp_s2, void **, 0xC), 1);
        func_001D7840(M2C_FIELD(temp_s2, void **, 8), 2);
        temp_s5 = M2C_FIELD(temp_s2, u16 *, 0x7A);
        temp_s6 = M2C_FIELD(temp_s2, u16 *, 0x78);
        temp_s1 = func_00970870(temp_s5);
        temp_v0 = func_00223E00(temp_s5);
        func_009737E0(M2C_FIELD(temp_s2, s32 *, 0x38), 0xB, (u64) ((s64) M2C_FIELD(temp_v0, s32 *, 0) << 0x2B) >> 0x35);
        func_009737E0(M2C_FIELD(temp_s2, s32 *, 0x3C), 0xD, (u64) ((s64) M2C_FIELD(temp_v0, u16 *, 2) << 0x30) >> 0x35);
        func_009737E0(M2C_FIELD(temp_s2, s32 *, 0x40), 0xF, M2C_FIELD(temp_v0, u16 *, 4) & 0x3FF);
        func_009737E0(M2C_FIELD(temp_s2, s32 *, 0x44), 4, (M2C_FIELD(temp_s1, u8 *, 0x24) & 0x3F) + 0x94);
        func_009737E0(M2C_FIELD(temp_s2, s32 *, 0x48), 7, func_00B02A20(temp_s5) & 0xFF);
        temp_a2 = M2C_FIELD(temp_s1, u16 *, 0x3C) & 0x1FF;
        if (temp_a2 == 0x69) {
            func_00956A90(M2C_FIELD(temp_s2, s32 *, 0x14), 4, 0x69, 1);
        } else {
            func_00956A90(M2C_FIELD(temp_s2, s32 *, 0x14), 4, temp_a2, 1);
        }
        if ((M2C_FIELD(temp_s1, u16 *, 0x3C) & 0x1FF) < 0x39) {
            var_s3 = 0xFF;
            var_s4 = 0;
loop_11:
            if ((var_s4 & 0xFF) < 0x20) {
                if ((var_s3 & 0xFF) == 0xFF) {
                    if ((temp_s5 & 0xFFFF) == (Pes6Team_GetPlayerId(M2C_FIELD(temp_s1, u16 *, 0x3C) & 0x1FF, var_s4, 0) & 0xFFFF)) {
                        var_s3 = ((func_00221D10(M2C_FIELD(temp_s1, u16 *, 0x3C) & 0x1FF, var_s4, 0) & 0xFF) + 1) & 0xFF;
                    }
                    var_s4 = (var_s4 + 1) & 0xFF;
                    goto loop_11;
                }
            }
        }
        temp_s0 = func_0093B480(temp_s5) & 0xFF;
        temp_s3 = temp_s6 & 0xFFFF;
        temp_s0_2 = ((func_002249A0(func_00938F10(temp_s5) & 0xFF, temp_s0) & 0xFF) + 1) & 0xFF;
        if (temp_s3 != 0xFFFF) {
            func_009737E0(M2C_FIELD(temp_s2, s32 *, 0x4C), 2, func_0095C4A0(temp_s6));
            func_00956A90(M2C_FIELD(temp_s2, s32 *, 0x10), 4, temp_s3, 0);
            func_009737C0(M2C_FIELD(temp_s2, s32 *, 0x4C), 1);
            func_00956A80(M2C_FIELD(temp_s2, s32 *, 0x10), 1);
        } else {
            func_009737C0(M2C_FIELD(temp_s2, s32 *, 0x4C), 0);
            func_00956A80(M2C_FIELD(temp_s2, s32 *, 0x10), 0);
        }
        temp_s0_3 = temp_s0_2 & 0xFF;
        if (temp_s0_3 != 0) {
            func_009737C0(M2C_FIELD(temp_s2, s32 *, 0x50), 1);
            func_009737E0(M2C_FIELD(temp_s2, s32 *, 0x50), 0, temp_s0_3);
        } else {
            func_009737C0(M2C_FIELD(temp_s2, s32 *, 0x50), 0);
        }
        func_00973480(M2C_FIELD(temp_s2, s32 *, 0x18), (u64) ((s64) M2C_FIELD(temp_s1, u8 *, 1) << 0x38) >> 0x3C);
        func_009737E0(M2C_FIELD(temp_s2, s32 *, 0x54), 1, func_0095C390(temp_s5));
    }
}
