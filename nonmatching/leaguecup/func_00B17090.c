/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0095CA00(u32);                             /* extern */
extern void *D_003EAD78;

void func_00B17090(s32 arg0) {
    s32 temp_v0;
    s8 var_t9;
    u32 var_a0;
    u32 var_a7;
    u8 temp_s2;
    u8 var_t8;
    void *temp_a3;
    void *temp_a6;
    void *temp_s0;
    void *var_t0;
    void *var_t1;
    void *var_t2;
    void *var_t3;
    void *var_v1;

    temp_s0 = D_003EAD78;
    if (temp_s0 != NULL) {
        var_a0 = 0;
        var_v1 = temp_s0;
        do {
            M2C_FIELD(var_v1, s8 *, 0x3D8) = 0;
            var_a0 += 5;
            M2C_FIELD(var_v1, s8 *, 0x4DC) = 0;
            M2C_FIELD(var_v1, s8 *, 0x5E0) = 0;
            M2C_FIELD(var_v1, s8 *, 0x6E4) = 0;
            M2C_FIELD(var_v1, s8 *, 0x7E8) = 0;
            var_v1 += 0x514;
        } while (var_a0 < 0xAU);
        temp_v0 = func_0095CA00(var_a0);
        if (temp_v0 != 0) {
            var_a7 = 0;
            var_t9 = 0;
            var_t2 = temp_s0;
            var_t3 = temp_v0 + (arg0 * 0x960);
            do {
                if (M2C_FIELD(var_t3, u8 *, 0x550) != 0) {
                    M2C_FIELD(var_t2, s8 *, 0x3D8) = 1;
                    var_t9 += 1;
                    temp_a6 = var_t3 + 0x54C;
                    M2C_FIELD(var_t2, u8 *, 0x3D9) = (u8) M2C_FIELD(var_t3, u8 *, 0x54C);
                    M2C_FIELD(var_t2, u8 *, 0x3DA) = (u8) M2C_FIELD(var_t3, u8 *, 0x551);
                    M2C_FIELD(var_t2, u8 *, 0x3DB) = (u8) M2C_FIELD(var_t3, u8 *, 0x550);
                    M2C_FIELD(var_t2, u8 *, 0x3DC) = 0xFFU;
                    var_t8 = 0;
                    if (M2C_FIELD(var_t2, u8 *, 0x3DB) != 0) {
                        var_t1 = temp_a6;
                        var_t0 = var_t2;
                        do {
                            M2C_FIELD(var_t0, u8 *, 0x3E0) = (u8) M2C_FIELD(var_t1, u8 *, 0xF);
                            M2C_FIELD(var_t0, u8 *, 0x3E4) = (u8) M2C_FIELD(var_t1, u8 *, 0xE);
                            temp_s2 = M2C_FIELD(var_t1, u8 *, 0xE);
                            temp_a3 = var_t1 + 0xC;
                            if ((temp_s2 != 3) && (temp_s2 != 4) && (temp_s2 != 5) && (temp_s2 != 6)) {
                                if ((u32) (temp_s2 - 0x12) < 4U) {
                                    goto block_14;
                                }
                            } else {
block_14:
                                if (var_t8 < (u8) M2C_FIELD(var_t2, u8 *, 0x3DC)) {
                                    M2C_FIELD(var_t2, u8 *, 0x3DC) = var_t8;
                                }
                            }
                            if (arg0 == M2C_FIELD(temp_a6, u8 *, 1)) {
                                M2C_FIELD(var_t0, f32 *, 0x3E8) = (f32) M2C_FIELD(temp_a3, f32 *, 0xC);
                                M2C_FIELD(var_t0, f32 *, 0x3F0) = (f32) M2C_FIELD(temp_a3, f32 *, 0x14);
                                M2C_FIELD(var_t0, s8 *, 0x3E3) = 1;
                            } else {
                                M2C_FIELD(var_t0, f32 *, 0x3E8) = (f32) M2C_FIELD(temp_a3, f32 *, 0xC);
                                M2C_FIELD(var_t0, f32 *, 0x3F0) = (f32) M2C_FIELD(temp_a3, f32 *, 0x14);
                                M2C_FIELD(var_t0, s8 *, 0x3E3) = 0;
                            }
                            M2C_FIELD(var_t0, f32 *, 0x3F8) = (f32) M2C_FIELD(temp_a3, f32 *, 4);
                            if (arg0 == M2C_FIELD(temp_a6, u8 *, 1)) {
                                M2C_FIELD(var_t0, f32 *, 0x3EC) = (f32) M2C_FIELD(temp_a3, f32 *, 0x10);
                                M2C_FIELD(var_t0, f32 *, 0x3F4) = (f32) M2C_FIELD(temp_a3, f32 *, 0x18);
                                M2C_FIELD(var_t0, f32 *, 0x3FC) = (f32) M2C_FIELD(temp_a3, f32 *, 8);
                                M2C_FIELD(var_t0, f32 *, 0x3E8) = (f32) (M2C_FIELD(var_t0, f32 *, 0x3E8) * -1.0f);
                                M2C_FIELD(var_t0, f32 *, 0x3F0) = (f32) (M2C_FIELD(var_t0, f32 *, 0x3F0) * -1.0f);
                                M2C_FIELD(var_t0, f32 *, 0x3F8) = (f32) (M2C_FIELD(var_t0, f32 *, 0x3F8) * -1.0f);
                            } else {
                                M2C_FIELD(var_t0, f32 *, 0x3EC) = (f32) -M2C_FIELD(temp_a3, f32 *, 0x10);
                                M2C_FIELD(var_t0, f32 *, 0x3F4) = (f32) -M2C_FIELD(temp_a3, f32 *, 0x18);
                                M2C_FIELD(var_t0, f32 *, 0x3FC) = (f32) -M2C_FIELD(temp_a3, f32 *, 8);
                            }
                            var_t8 += 1;
                            var_t1 += 0x1C;
                            var_t0 += 0x20;
                        } while (var_t8 < (u8) M2C_FIELD(var_t2, u8 *, 0x3DB));
                    }
                }
                var_a7 += 1;
                var_t3 += 0x60;
                var_t2 += 0x104;
            } while (var_a7 < 0xAU);
            M2C_FIELD(temp_s0, s8 *, 0x3D6) = var_t9;
        }
    }
}
