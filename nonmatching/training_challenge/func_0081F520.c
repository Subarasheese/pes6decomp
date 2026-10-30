/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154410(s32, s32);
extern s32 func_00154490(s32, s32);
M2C_UNK func_008075B0(s32, void *, s32);            /* extern */
M2C_UNK func_00807A70(s32, void *, s8, s32, s8, s8); /* extern */
M2C_UNK func_0081D5A0(void *);                      /* extern */
M2C_UNK func_0081F390(void *, s32, s32, void *, s32); /* extern */

void func_0081F520(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_s0;
    s32 var_a4;
    s32 var_v1;
    s32 var_v1_2;
    s8 temp_a4;
    s8 temp_a5;
    s8 temp_s1;
    u8 temp_a5_2;
    u8 temp_v0_2;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 var_a2;
    void *temp_a0_3;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_a2_5;
    void *temp_a2_6;
    void *temp_a3;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_4;

    if (func_00154410(0, 0x80) != 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x3C) + arg0;
        temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x40);
        if ((s32) temp_v0_2 > 0) {
            M2C_FIELD(temp_v0, u8 *, 0x40) = (u8) (temp_v0_2 - 1);
            M2C_FIELD(arg0, s32 *, 0x17078) = 1;
        }
        func_0081D5A0(arg0);
    }
    if (func_00154410(0, 0x20) != 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C) + arg0;
        temp_v1_2 = M2C_FIELD(temp_v1, u8 *, 0x40);
        if ((s32) temp_v1_2 < (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), u8 *, 0) - 1)) {
            M2C_FIELD(temp_v1, u8 *, 0x40) = (u8) (temp_v1_2 + 1);
            M2C_FIELD(arg0, s32 *, 0x17078) = 1;
        }
        func_0081D5A0(arg0);
    }
    if (func_00154490(0, 0x2000) == 0) {
        if (func_00154490(0, 0x8000) != 0) {
            temp_a3 = M2C_FIELD(arg0, void **, 0x6C);
            var_a2 = M2C_FIELD(temp_a3, u8 *, 0);
            temp_a0 = (var_a2 - 1) & 0xFF;
            var_a4 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x3C) + arg0), u8 *, 0x40) == temp_a0;
            temp_a1 = (temp_a0 - 1) & 0xFF;
            if (var_a4 != 0) {
                var_a4 = (s32) var_a2 >= 3;
            }
            var_v1 = var_a4 != 0;
            if (var_v1 != 0) {
                temp_a0_2 = var_a2 - 1;
                var_a4 = 0;
                var_a2 = 0;
                if (temp_a0_2 > 0) {
                    do {
                        if (M2C_FIELD((temp_a3 + var_a2), s8 *, 0x12E) != 0) {
                            var_a4 += 1;
                        }
                        var_a2 += 1;
                    } while ((s32) var_a2 < temp_a0_2);
                }
                var_v1_2 = var_a4 >= 2;
                if (var_v1_2 == 0) {
                    var_v1_2 = M2C_FIELD(((temp_a1 & 0xFF) + temp_a3), s8 *, 0x12E) == 0;
                }
                var_v1 = var_v1_2 != 0;
            }
            if (var_v1 != 0) {
                func_0081F390(arg0, temp_a1, (s32) var_a2, temp_a3, var_a4);
                M2C_FIELD(arg0, s32 *, 0x1707C) = 1;
            }
        }
    } else {
        temp_a0_3 = M2C_FIELD(arg0, void **, 0x6C);
        temp_v1_3 = M2C_FIELD(temp_a0_3, u8 *, 0);
        if ((s32) temp_v1_3 < 0x32) {
            M2C_FIELD(temp_a0_3, u8 *, 0) = (u8) (temp_v1_3 + 1);
            temp_v1_4 = M2C_FIELD(arg0, void **, 0x6C);
            temp_a5 = M2C_FIELD(temp_v1_4, u8 *, 0) - 1;
            temp_s1 = temp_a5 & 0xFF;
            temp_a3_2 = temp_s1 * 4;
            temp_a1_2 = temp_a3_2 + temp_v1_4;
            temp_a4 = temp_s1 - 1;
            temp_s0 = temp_a4 & 0xFF;
            M2C_FIELD(temp_a1_2, s16 *, 2) = (s16) M2C_FIELD(temp_a1_2, s16 *, -2);
            temp_a0_4 = temp_s0 * 2;
            temp_a1_3 = M2C_FIELD(arg0, void **, 0x6C) + temp_a3_2;
            M2C_FIELD(temp_a1_3, s16 *, 4) = (s16) M2C_FIELD(temp_a1_3, s16 *, 0);
            M2C_FIELD((temp_a0_4 + M2C_FIELD(arg0, void **, 0x6C)), s8 *, 0xCA) = temp_a4;
            M2C_FIELD((temp_a0_4 + M2C_FIELD(arg0, void **, 0x6C)), s8 *, 0xCB) = temp_a5;
            M2C_FIELD((temp_s0 + M2C_FIELD(arg0, void **, 0x6C)), s8 *, 0x12E) = 0;
            func_00807A70(M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), s32 *, 0) + (temp_s1 * 0x130), M2C_FIELD(arg0, void **, 0x6C), temp_s1, temp_a3_2, temp_a4, temp_a5);
            temp_a2 = temp_s0 & 0xFF;
            func_008075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0x88), s32 *, 4) + (temp_a2 * 0x130), M2C_FIELD(arg0, void **, 0x6C), temp_a2);
            M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x3C) + arg0), s8 *, 0x40) = temp_s1;
            M2C_FIELD(arg0, s32 *, 0x38) = 0;
            func_0081D5A0(arg0);
            temp_a5_2 = M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x3C) + arg0), u8 *, 0x40);
            temp_a3_3 = temp_a5_2 * 2;
            temp_a2_2 = (temp_a5_2 * 4) + M2C_FIELD(arg0, void **, 0x6C);
            M2C_FIELD(arg0, s16 *, 0x48) = (s16) M2C_FIELD(temp_a2_2, s16 *, 2);
            M2C_FIELD(arg0, s16 *, 0x4A) = (s16) M2C_FIELD(temp_a2_2, s16 *, 4);
            M2C_FIELD(arg0, u8 *, 0x4C) = (u8) M2C_FIELD((temp_a3_3 + M2C_FIELD(arg0, void **, 0x6C)), u8 *, 0xCA);
            M2C_FIELD(arg0, u8 *, 0x4D) = (u8) M2C_FIELD((temp_a3_3 + M2C_FIELD(arg0, void **, 0x6C)), u8 *, 0xCB);
            M2C_FIELD(arg0, s8 *, 0x4E) = (s8) M2C_FIELD((temp_a5_2 + M2C_FIELD(arg0, void **, 0x6C)), s8 *, 0x12E);
            temp_a2_3 = M2C_FIELD(arg0, void **, 0x6C);
            M2C_FIELD(arg0, s16 *, 0x50) = (s16) M2C_FIELD(temp_a2_3, s16 *, 0x160);
            M2C_FIELD(arg0, s16 *, 0x52) = (s16) M2C_FIELD(temp_a2_3, s16 *, 0x162);
            temp_a2_4 = M2C_FIELD(arg0, void **, 0x6C);
            M2C_FIELD(arg0, s16 *, 0x54) = (s16) M2C_FIELD(temp_a2_4, s16 *, 0x164);
            M2C_FIELD(arg0, s16 *, 0x56) = (s16) M2C_FIELD(temp_a2_4, s16 *, 0x166);
            M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), f32 *, 0x168);
            temp_a2_5 = M2C_FIELD(arg0, void **, 0x6C);
            M2C_FIELD(arg0, s16 *, 0x5C) = (s16) M2C_FIELD(temp_a2_5, s16 *, 0x1B0);
            M2C_FIELD(arg0, s16 *, 0x5E) = (s16) M2C_FIELD(temp_a2_5, s16 *, 0x1B2);
            temp_a2_6 = M2C_FIELD(arg0, void **, 0x6C);
            M2C_FIELD(arg0, s16 *, 0x60) = (s16) M2C_FIELD(temp_a2_6, s16 *, 0x1B4);
            M2C_FIELD(arg0, s16 *, 0x62) = (s16) M2C_FIELD(temp_a2_6, s16 *, 0x1B6);
            M2C_FIELD(arg0, s32 *, 0x17074) = 1;
            M2C_FIELD(arg0, s32 *, 0x1707C) = 1;
        }
    }
}
