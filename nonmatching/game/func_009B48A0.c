/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E758C;
extern u16 D_003EA72C;
extern char Pes6MatchPlayers[];
extern char D_00591C09[];

void func_009B48A0(s32 arg0) {
    M2C_UNK *var_v1;
    f32 var_f3;
    f32 var_f3_2;
    f32 var_f4;
    f32 var_f4_2;
    f32 var_f5;
    f32 var_f5_2;
    s16 temp_a5_2;
    s16 temp_a6_2;
    s16 temp_s1;
    s16 temp_t9;
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_a3;
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_a7;
    s32 temp_hi;
    s32 temp_s0_2;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t3;
    s32 var_a0;
    s32 var_a3;
    s32 var_a4;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_t3;
    s32 var_t8;
    s32 var_t8_2;
    void *temp_a1;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a3_2;
    void *temp_a6_3;
    void *temp_a7_2;
    void *temp_a7_3;
    void *temp_s0;
    void *temp_s0_3;
    void *temp_v1;

    if ((*(u8 *)D_00591C09) != 0xA) {
        var_v1 = ((void *)Pes6MatchPlayers);
        if (!(arg0 & 0xFF)) {
            temp_t1 = D_003EA72C & 0xFFFF;
            var_t8 = 0;
            temp_hi = (s32) (temp_t1 + 1) % 300;
            var_t2 = 0;
            temp_a5 = temp_t1 * 0x354;
            do {
                temp_a1 = temp_a5 + D_003E758C + var_t2;
                var_f4 = (f32) M2C_FIELD(temp_a1, s16 *, 6);
                var_f5 = (f32) M2C_FIELD(temp_a1, s16 *, 4);
                var_f3 = (f32) M2C_FIELD(temp_a1, s16 *, 8);
                if (temp_t1 == 0) {
                    var_t3 = 0x12B;
                } else {
                    var_t3 = (temp_t1 - 1) & 0xFFFF;
                }
loop_6:
                temp_a2 = var_t3 & 0xFFFF;
                temp_a1_2 = temp_a2 * 0x354;
                temp_s0 = var_t2 + D_003E758C + temp_a1_2;
                temp_s1 = M2C_FIELD(temp_s0, s16 *, 4);
                var_f4 += (f32) M2C_FIELD(temp_s0, s16 *, 6) / 16.0f;
                var_f5 += (f32) temp_s1 / 16.0f;
                var_f3 += (f32) M2C_FIELD(temp_s0, s16 *, 8) / 16.0f;
                if (temp_s1 != 0x7FFF) {
                    M2C_FIELD(temp_s0, s16 *, 4) = (s16) (s32) var_f5;
                    M2C_FIELD((var_t2 + D_003E758C + temp_a1_2), s16 *, 6) = (s16) (s32) var_f4;
                    M2C_FIELD((var_t2 + D_003E758C + temp_a1_2), s16 *, 8) = (s16) (s32) var_f3;
                    if (temp_a2 != (temp_hi & 0xFFFF)) {
                        if (temp_a2 == 0) {
                            var_t3 = 0x12B;
                        } else {
                            var_t3 = (var_t3 - 1) & 0xFFFF;
                        }
                        goto loop_6;
                    }
                }
                var_t8 += 1;
                var_t2 += 0x24;
            } while (var_t8 < 0x17);
            temp_v1 = temp_a5 + D_003E758C;
            var_f4_2 = (f32) M2C_FIELD(temp_v1, s16 *, 0x34A);
            var_f5_2 = (f32) M2C_FIELD(temp_v1, s16 *, 0x348);
            var_f3_2 = (f32) M2C_FIELD(temp_v1, s16 *, 0x34C);
            if (temp_t1 != 0) {
                var_a0 = (temp_t1 - 1) & 0xFFFF;
            } else {
                var_a0 = 0x12B;
            }
loop_28:
            temp_t1_2 = var_a0 & 0xFFFF;
            temp_a7 = temp_t1_2 * 0x354;
            temp_a2_2 = D_003E758C + temp_a7;
            temp_a5_2 = M2C_FIELD(temp_a2_2, s16 *, 0x348);
            var_f4_2 += (f32) M2C_FIELD(temp_a2_2, s16 *, 0x34A) / 16.0f;
            var_f5_2 += (f32) temp_a5_2 / 16.0f;
            var_f3_2 += (f32) M2C_FIELD(temp_a2_2, s16 *, 0x34C) / 16.0f;
            if (temp_a5_2 != 0x7FFF) {
                M2C_FIELD(temp_a2_2, s16 *, 0x348) = (s16) (s32) var_f5_2;
                M2C_FIELD((D_003E758C + temp_a7), s16 *, 0x34A) = (s16) (s32) var_f4_2;
                M2C_FIELD((D_003E758C + temp_a7), s16 *, 0x34C) = (s16) (s32) var_f3_2;
                if (temp_t1_2 != (temp_hi & 0xFFFF & 0xFFFF)) {
                    if (temp_t1_2 == 0) {
                        var_a0 = 0x12B;
                    } else {
                        var_a0 = (var_a0 - 1) & 0xFFFF;
                    }
                    goto loop_28;
                }
            }
        } else {
            temp_t3 = D_003EA72C & 0xFFFF;
            var_t2_2 = 0;
            var_t8_2 = 0;
            temp_a6 = ((s32) (temp_t3 + 1) % 300) & 0xFFFF;
            do {
                var_t1 = temp_a6;
                var_t0 = ((s32) (temp_a6 + 1) % 300) & 0xFFFF;
loop_14:
                temp_a3 = (var_t1 & 0xFFFF) * 0x354;
                temp_s0_2 = var_t8_2 + D_003E758C;
                temp_a2_3 = temp_s0_2 + temp_a3;
                temp_t9 = M2C_FIELD(temp_a2_3, s16 *, 4);
                if ((temp_t9 != 0x7FFF) && (M2C_FIELD(M2C_FIELD(var_v1, void **, 4), u8 *, 0x2C) != 0)) {
                    temp_a0 = (var_t0 & 0xFFFF) * 0x354;
                    M2C_FIELD(temp_a2_3, s16 *, 4) = (s16) ((temp_t9 - M2C_FIELD((temp_s0_2 + temp_a0), s16 *, 4)) * 0x10);
                    temp_a2_4 = var_t8_2 + D_003E758C;
                    temp_s0_3 = temp_a2_4 + temp_a3;
                    M2C_FIELD(temp_s0_3, s16 *, 6) = (s16) ((M2C_FIELD(temp_s0_3, s16 *, 6) - M2C_FIELD((temp_a2_4 + temp_a0), s16 *, 6)) * 0x10);
                    temp_a2_5 = var_t8_2 + D_003E758C;
                    temp_a3_2 = temp_a2_5 + temp_a3;
                    M2C_FIELD(temp_a3_2, s16 *, 8) = (s16) ((M2C_FIELD(temp_a3_2, s16 *, 8) - M2C_FIELD((temp_a2_5 + temp_a0), s16 *, 8)) * 0x10);
                }
                var_t0 = ((u32) ((var_t0 + 1) & 0xFFFF) % 300U) & 0xFFFF;
                var_t1 = ((u32) ((var_t1 + 1) & 0xFFFF) % 300U) & 0xFFFF;
                if (var_t1 != temp_t3) {
                    goto loop_14;
                }
                var_t2_2 += 1;
                var_t8_2 += 0x24;
                var_v1 += 0x240;
            } while (var_t2_2 < 0x17);
            var_a4 = ((s32) (temp_t3 + 1) % 300) & 0xFFFF;
            var_a3 = ((s32) (var_a4 + 1) % 300) & 0xFFFF;
            do {
                temp_a1_3 = (var_a4 & 0xFFFF) * 0x354;
                temp_a7_2 = D_003E758C + temp_a1_3;
                temp_a6_2 = M2C_FIELD(temp_a7_2, s16 *, 0x348);
                if (temp_a6_2 == 0x7FFF) {

                } else {
                    temp_t0 = (var_a3 & 0xFFFF) * 0x354;
                    M2C_FIELD(temp_a7_2, s16 *, 0x348) = (s16) ((temp_a6_2 - M2C_FIELD((D_003E758C + temp_t0), s16 *, 0x348)) * 0x10);
                    temp_a7_3 = D_003E758C + temp_a1_3;
                    M2C_FIELD(temp_a7_3, s16 *, 0x34A) = (s16) ((M2C_FIELD(temp_a7_3, s16 *, 0x34A) - M2C_FIELD((D_003E758C + temp_t0), s16 *, 0x34A)) * 0x10);
                    temp_a6_3 = D_003E758C + temp_a1_3;
                    M2C_FIELD(temp_a6_3, s16 *, 0x34C) = (s16) ((M2C_FIELD(temp_a6_3, s16 *, 0x34C) - M2C_FIELD((D_003E758C + temp_t0), s16 *, 0x34C)) * 0x10);
                }
                var_a3 = ((u32) ((var_a3 + 1) & 0xFFFF) % 300U) & 0xFFFF;
                var_a4 = ((u32) ((var_a4 + 1) & 0xFFFF) % 300U) & 0xFFFF;
            } while (var_a4 != temp_t3);
        }
    }
}
