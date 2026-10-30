/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001DC900(void *);
extern s32 func_001E6C50(void *);
M2C_UNK func_001DCB40(s32);                         /* extern */
s32 func_001DCB80();                                /* extern */
void *func_001E7E00(s32, void *, u16 *, s32, s32);  /* extern */

void func_001F66B0(void *arg0, void *arg1, s32 arg2) {
    u16 sp6C;
    u16 sp6E;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f2_4;
    s16 var_a0_3;
    s16 var_a0_4;
    s16 var_a0_7;
    s16 var_a0_8;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_5;
    s32 var_a0_6;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 temp_v1_4;
    u16 temp_v1_5;
    u16 temp_v1_6;
    u16 temp_v1_7;
    u16 temp_v1_8;
    u8 temp_a0;
    void *temp_s0;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_s1 = func_001DC900(arg0);
        temp_s2 = func_001DCB80();
        temp_a3 = temp_s2;
        sp6C = M2C_FIELD(arg0, u16 *, 0x14);
        sp6E = M2C_FIELD(arg0, u16 *, 0x16);
        temp_s0 = func_001E7E00(temp_s1, arg1, &sp6C, temp_a3, arg2);
        func_001DCB40(M2C_FIELD(arg0, s32 *, 4));
        func_001E6C50((void *) temp_s1);
        M2C_FIELD(arg0, s32 *, 4) = temp_s2;
        M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(temp_s0, s32 *, 8);
        M2C_FIELD(arg0, void **, 0xC) = temp_s0;
        temp_a0 = M2C_FIELD(arg0, u8 *, 0);
        switch (temp_a0) {                          /* irregular */
        case 1:
            temp_v1 = M2C_FIELD(arg0, u16 *, 0x10);
            if ((s32) temp_v1 >= 0) {
                var_f2 = (f32) temp_v1;
            } else {
                var_f2 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
            }
            temp_f1 = var_f2 * M2C_FIELD(arg1, f32 *, 0);
            if (!(temp_f1 >= 2.1474836e9f)) {
                var_a0 = (s32) temp_f1;
            } else {
                var_a0 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
            }
            M2C_FIELD(arg0, u16 *, 0x10) = (u16) (var_a0 & 0xFFFF);
            temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x12);
            if ((s32) temp_v1_2 >= 0) {
                var_f2_2 = (f32) temp_v1_2;
            } else {
                var_f2_2 = 2.0f * (f32) ((temp_v1_2 >> 1) | (temp_v1_2 & 1));
            }
            temp_f1_2 = var_f2_2 * M2C_FIELD(arg1, f32 *, 4);
            if (!(temp_f1_2 >= 2.1474836e9f)) {
                var_a0_2 = (s32) temp_f1_2;
            } else {
                var_a0_2 = (s32) (temp_f1_2 - 2.1474836e9f) | 0x80000000;
            }
            M2C_FIELD(arg0, u16 *, 0x12) = (u16) (var_a0_2 & 0xFFFF);
            M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x10) * 2);
            M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
            temp_v1_3 = M2C_FIELD(arg0, u16 *, 0x10);
            var_a0_3 = 2;
            if ((s32) temp_v1_3 >= 0) {
loop_18:
                if (var_a0_3 < (s32) temp_v1_3) {
                    var_a0_3 *= 2;
                    goto loop_18;
                }
            } else {
                var_a0_3 = 0;
            }
            M2C_FIELD(arg0, s16 *, 0x18) = var_a0_3;
            temp_v1_4 = M2C_FIELD(arg0, u16 *, 0x12);
            var_a0_4 = 2;
            if ((s32) temp_v1_4 >= 0) {
loop_39:
                if (var_a0_4 < (s32) temp_v1_4) {
                    var_a0_4 *= 2;
                    goto loop_39;
                }
            } else {
                var_a0_4 = 0;
            }
            M2C_FIELD(arg0, s16 *, 0x1A) = var_a0_4;
            break;
        case 2:
            temp_v1_5 = M2C_FIELD(arg0, u16 *, 0x10);
            if ((s32) temp_v1_5 >= 0) {
                var_f2_3 = (f32) temp_v1_5;
            } else {
                var_f2_3 = 2.0f * (f32) ((temp_v1_5 >> 1) | (temp_v1_5 & 1));
            }
            temp_f1_3 = var_f2_3 * M2C_FIELD(arg1, f32 *, 0);
            if (!(temp_f1_3 >= 2.1474836e9f)) {
                var_a0_5 = (s32) temp_f1_3;
            } else {
                var_a0_5 = (s32) (temp_f1_3 - 2.1474836e9f) | 0x80000000;
            }
            M2C_FIELD(arg0, u16 *, 0x10) = (u16) (var_a0_5 & 0xFFFF);
            temp_v1_6 = M2C_FIELD(arg0, u16 *, 0x12);
            if ((s32) temp_v1_6 >= 0) {
                var_f2_4 = (f32) temp_v1_6;
            } else {
                var_f2_4 = 2.0f * (f32) ((temp_v1_6 >> 1) | (temp_v1_6 & 1));
            }
            temp_f1_4 = var_f2_4 * M2C_FIELD(arg1, f32 *, 4);
            if (!(temp_f1_4 >= 2.1474836e9f)) {
                var_a0_6 = (s32) temp_f1_4;
            } else {
                var_a0_6 = (s32) (temp_f1_4 - 2.1474836e9f) | 0x80000000;
            }
            M2C_FIELD(arg0, u16 *, 0x12) = (u16) (var_a0_6 & 0xFFFF);
            M2C_FIELD(arg0, u16 *, 0x14) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
            M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
            temp_v1_7 = M2C_FIELD(arg0, u16 *, 0x10);
            var_a0_7 = 2;
            if ((s32) temp_v1_7 >= 0) {
loop_34:
                if (var_a0_7 < (s32) temp_v1_7) {
                    var_a0_7 *= 2;
                    goto loop_34;
                }
            } else {
                var_a0_7 = 0;
            }
            M2C_FIELD(arg0, s16 *, 0x18) = var_a0_7;
            temp_v1_8 = M2C_FIELD(arg0, u16 *, 0x12);
            var_a0_8 = 2;
            if ((s32) temp_v1_8 >= 0) {
loop_46:
                if (var_a0_8 < (s32) temp_v1_8) {
                    var_a0_8 *= 2;
                    goto loop_46;
                }
            } else {
                var_a0_8 = 0;
            }
            M2C_FIELD(arg0, s16 *, 0x1A) = var_a0_8;
            break;
        }
    }
}
