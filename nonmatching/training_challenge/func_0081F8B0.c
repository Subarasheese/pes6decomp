/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154490(s32, s32);
M2C_UNK func_0081D5A0(void *);                      /* extern */
M2C_UNK func_0081F390(void *, void *, void *, void *, u8); /* extern */
s32 func_0081FA90(void *);                          /* extern */

void func_0081F8B0(void *arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    u8 temp_a4;
    void *temp_a0;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a2;
    void *temp_a3;

    if (func_00154490(0, 0x4000) == 0) {
        if (func_00154490(0, 0x1000) != 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = 1;
            temp_a3 = M2C_FIELD(arg0, void **, 0x6C);
            temp_a4 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x3C) + arg0), u8 *, 0x40);
            temp_a1 = temp_a4 * 2;
            temp_a2 = (temp_a4 * 4) + temp_a3;
            M2C_FIELD(temp_a2, s16 *, 2) = (s16) M2C_FIELD(arg0, s16 *, 0x48);
            M2C_FIELD(temp_a2, s16 *, 4) = (s16) M2C_FIELD(arg0, s16 *, 0x4A);
            M2C_FIELD((temp_a1 + M2C_FIELD(arg0, void **, 0x6C)), u8 *, 0xCA) = (u8) M2C_FIELD(arg0, u8 *, 0x4C);
            M2C_FIELD((temp_a1 + M2C_FIELD(arg0, void **, 0x6C)), u8 *, 0xCB) = (u8) M2C_FIELD(arg0, u8 *, 0x4D);
            M2C_FIELD((temp_a4 + M2C_FIELD(arg0, void **, 0x6C)), s8 *, 0x12E) = (s8) M2C_FIELD(arg0, s8 *, 0x4E);
            temp_a1_2 = M2C_FIELD(arg0, void **, 0x6C);
            M2C_FIELD(temp_a1_2, s16 *, 0x160) = (s16) M2C_FIELD(arg0, s16 *, 0x50);
            M2C_FIELD(temp_a1_2, s16 *, 0x162) = (s16) M2C_FIELD(arg0, s16 *, 0x52);
            temp_a1_3 = M2C_FIELD(arg0, void **, 0x6C);
            M2C_FIELD(temp_a1_3, s16 *, 0x164) = (s16) M2C_FIELD(arg0, s16 *, 0x54);
            M2C_FIELD(temp_a1_3, s16 *, 0x166) = (s16) M2C_FIELD(arg0, s16 *, 0x56);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), f32 *, 0x168) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
            temp_a1_4 = M2C_FIELD(arg0, void **, 0x6C);
            M2C_FIELD(temp_a1_4, s16 *, 0x1B0) = (s16) M2C_FIELD(arg0, s16 *, 0x5C);
            M2C_FIELD(temp_a1_4, s16 *, 0x1B2) = (s16) M2C_FIELD(arg0, s16 *, 0x5E);
            temp_a1_5 = M2C_FIELD(arg0, void **, 0x6C);
            M2C_FIELD(temp_a1_5, s16 *, 0x1B4) = (s16) M2C_FIELD(arg0, s16 *, 0x60);
            M2C_FIELD(temp_a1_5, s16 *, 0x1B6) = (s16) M2C_FIELD(arg0, s16 *, 0x62);
            if (M2C_FIELD(arg0, s32 *, 0x17074) != 0) {
                func_0081F390(arg0, temp_a1_5, temp_a2, temp_a3, temp_a4);
                M2C_FIELD(arg0, s32 *, 0x17074) = 0;
            }
            M2C_FIELD(arg0, s32 *, 0x17080) = 1;
        }
    } else if (func_0081FA90(arg0) == 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x6C);
        var_a2 = 0;
        temp_v1 = M2C_FIELD(temp_a0, u8 *, 0) - 1;
        var_a1 = 0;
        if (temp_v1 > 0) {
            do {
                if (M2C_FIELD((temp_a0 + var_a1), s8 *, 0x12E) != 0) {
                    var_a2 += 1;
                }
                var_a1 += 1;
            } while (var_a1 < temp_v1);
        }
        if (var_a2 > 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = 1;
            M2C_FIELD(arg0, s32 *, 0x1707C) = 1;
            M2C_FIELD(arg0, s32 *, 0x17088) = 1;
            M2C_FIELD(arg0, s32 *, 0x17074) = 0;
        } else {
            goto block_10;
        }
    } else {
block_10:
        M2C_FIELD(arg0, s32 *, 0x17084) = 1;
    }
    func_0081D5A0(arg0);
}
