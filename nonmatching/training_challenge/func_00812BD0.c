/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E00[];

void func_00812BD0(void *arg0, void *arg1) {
    s32 temp_t2_2;
    u32 var_t0;
    u8 temp_s0;
    u8 temp_s1;
    u8 temp_t2;
    u8 temp_t2_3;

    var_t0 = 0;
    if (M2C_FIELD(arg1, u8 *, 1) != 0) {
        do {
            temp_s1 = M2C_FIELD(arg0, u8 *, 0);
            if (temp_s1 == M2C_FIELD((arg1 + 0xB + var_t0), u8 *, 0x18)) {
                temp_s0 = *(u8 *)0x591E4C;
                if (temp_s0 != 0) {
                    if (M2C_FIELD((((void *)D_00591E00) + (M2C_FIELD(arg0, u8 *, 0x13) * 2)), u8 *, 0x4F) == temp_s1) {
                        if (temp_s0 != 0) {
                            temp_t2 = M2C_FIELD(arg0, u8 *, 0x16);
                            if ((temp_t2 != 0xF) && (temp_t2 != 0xE) && (temp_t2 != 0xC)) {
                                M2C_FIELD(arg0, u8 *, 0x16) = 0xFU;
                                M2C_FIELD(arg0, s16 *, 0x18) = 0;
                            }
                        }
                        if (M2C_FIELD(arg0, u8 *, 0x16) == 0xF) {
                            temp_t2_2 = M2C_FIELD(arg0, s32 *, 0xB0) | 0x40000;
                            M2C_FIELD(arg0, s32 *, 0xB0) = temp_t2_2;
                            M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (temp_t2_2 | 0x800);
                        }
                    }
                } else {
                    M2C_FIELD((((void *)D_00591E00) + (M2C_FIELD(arg0, u8 *, 0x13) * 2)), s8 *, 0x50) = 0xFF;
                    M2C_FIELD((((void *)D_00591E00) + (M2C_FIELD(arg0, u8 *, 0x13) * 2)), s8 *, 0x4F) = 0xFF;
                    temp_t2_3 = M2C_FIELD(arg0, u8 *, 0x16);
                    if ((temp_t2_3 != 0x1B) && (temp_t2_3 != 0xF) && (temp_t2_3 != 0x43)) {
                        if ((u32) (temp_t2_3 - 0x16) < 2U) {
                            goto block_18;
                        }
                    } else {
block_18:
                        M2C_FIELD(arg0, u8 *, 0x16) = 0x18U;
                        M2C_FIELD(arg0, s16 *, 0x18) = 0;
                    }
                    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) M2C_FIELD(arg0, f32 *, 0xE0);
                    M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg0, f32 *, 0xE8);
                }
            }
            var_t0 += 1;
        } while (var_t0 < (u8) M2C_FIELD(arg1, u8 *, 1));
    }
}
