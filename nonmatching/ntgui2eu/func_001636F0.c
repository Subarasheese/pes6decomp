/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018A148(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_001636F0(void *arg0) {
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0_10;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_6;
    s32 temp_v0_8;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    u8 temp_v0_11;
    u8 temp_v0_5;
    u8 temp_v0_7;
    u8 temp_v0_9;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    void *var_s0;
    void *var_s1;

    var_s5 = 0;
    var_s4 = 0;
    var_s0 = M2C_FIELD(arg0, void **, 0x91C);
    temp_s7 = M2C_FIELD(arg0, s32 *, 0x4DC) + M2C_FIELD(arg0, s32 *, 0x5A0);
    var_s1 = M2C_FIELD((arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 4)), s32 *, 0x910) + 0x70;
    temp_s6 = M2C_FIELD(arg0, s32 *, 0x4E0) + M2C_FIELD(arg0, s32 *, 0x4D4);
    if (M2C_FIELD(arg0, s32 *, 0x928) > 0) {
        do {
            var_s3 = 0;
            func_0018A148(var_s1, 1, 0);
            func_0018A148(var_s1 + 0x10, 5, 0);
            temp_v1 = M2C_FIELD(var_s0, s16 *, 4);
            temp_v0 = M2C_FIELD(var_s0, s16 *, 0);
            if (temp_v1 != temp_v0) {
                temp_v0_2 = (s32) (temp_v0 - temp_v1) >> 3;
                var_s3 = 1;
                if (temp_v0_2 == 0) {
                    M2C_FIELD(var_s0, s16 *, 4) = (s16) (u16) M2C_FIELD(var_s0, s16 *, 0);
                } else {
                    M2C_FIELD(var_s0, s16 *, 4) = (s16) ((u16) M2C_FIELD(var_s0, s16 *, 4) + temp_v0_2);
                }
            }
            temp_v1_2 = M2C_FIELD(var_s0, s16 *, 6);
            temp_v0_3 = M2C_FIELD(var_s0, s16 *, 2);
            if (temp_v1_2 != temp_v0_3) {
                temp_v0_4 = (s32) (temp_v0_3 - temp_v1_2) >> 3;
                var_s3 = 1;
                if (temp_v0_4 == 0) {
                    M2C_FIELD(var_s0, s16 *, 6) = (s16) (u16) M2C_FIELD(var_s0, s16 *, 2);
                } else {
                    M2C_FIELD(var_s0, s16 *, 6) = (s16) ((u16) M2C_FIELD(var_s0, s16 *, 6) + temp_v0_4);
                }
            }
            M2C_FIELD(var_s1, s16 *, 0x10) = (s16) (temp_s7 + M2C_FIELD(var_s0, s16 *, 4));
            M2C_FIELD(var_s1, s16 *, 0x12) = (s16) (temp_s6 + M2C_FIELD(var_s0, s16 *, 6));
            temp_v1_3 = M2C_FIELD(var_s0, u8 *, 0xC);
            temp_v0_5 = M2C_FIELD(var_s0, u8 *, 8);
            if (temp_v1_3 != temp_v0_5) {
                temp_v0_6 = (s32) (temp_v0_5 - temp_v1_3) >> 3;
                var_s3 = 1;
                if (temp_v0_6 == 0) {
                    M2C_FIELD(var_s0, u8 *, 0xC) = temp_v0_5;
                } else {
                    M2C_FIELD(var_s0, u8 *, 0xC) = (u8) (temp_v1_3 + temp_v0_6);
                }
            }
            temp_v1_4 = M2C_FIELD(var_s0, u8 *, 0xD);
            temp_v0_7 = M2C_FIELD(var_s0, u8 *, 9);
            if (temp_v1_4 != temp_v0_7) {
                temp_v0_8 = (s32) (temp_v0_7 - temp_v1_4) >> 3;
                var_s3 = 1;
                if (temp_v0_8 == 0) {
                    M2C_FIELD(var_s0, u8 *, 0xD) = temp_v0_7;
                } else {
                    M2C_FIELD(var_s0, u8 *, 0xD) = (u8) (temp_v1_4 + temp_v0_8);
                }
            }
            temp_v1_5 = M2C_FIELD(var_s0, u8 *, 0xE);
            temp_v0_9 = M2C_FIELD(var_s0, u8 *, 0xA);
            if (temp_v1_5 != temp_v0_9) {
                temp_v0_10 = (s32) (temp_v0_9 - temp_v1_5) >> 3;
                var_s3 = 1;
                if (temp_v0_10 == 0) {
                    M2C_FIELD(var_s0, u8 *, 0xE) = temp_v0_9;
                } else {
                    M2C_FIELD(var_s0, u8 *, 0xE) = (u8) (temp_v1_5 + temp_v0_10);
                }
            }
            var_s4 = (var_s3 != 0) ? 1 : var_s4;
            var_s5 += 1;
            M2C_FIELD(var_s1, u8 *, 0) = (u8) M2C_FIELD(var_s0, u8 *, 0xC);
            M2C_FIELD(var_s1, u8 *, 1) = (u8) M2C_FIELD(var_s0, u8 *, 0xD);
            temp_v0_11 = M2C_FIELD(var_s0, u8 *, 0xE);
            var_s0 += 0x10;
            M2C_FIELD(var_s1, u8 *, 2) = temp_v0_11;
            var_s1 += 0x20;
        } while (var_s5 < M2C_FIELD(arg0, s32 *, 0x928));
    }
    if (var_s4 != 0) {
        M2C_FIELD(arg0, s32 *, 0x924) = 2;
    }
}
