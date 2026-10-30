/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001454C0(s32);
M2C_UNK func_0014F8F0(s32, u8 *, s32, M2C_UNK);     /* extern */
u8 *func_00151440(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0017D200(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0017D480(s32, s32, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0017D6A0(s32, M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
extern u8 D_003E7484;
extern u8 D_003E7485;
extern u8 D_003E7486;
extern u8 D_003E7487;

void func_001B3320(void *arg0) {
    u8 sp6C;
    u8 sp6D;
    u8 sp6E;
    u8 sp6F;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v1;
    s32 var_s3;
    u8 temp_v0;
    u8 temp_v0_10;
    u8 temp_v0_11;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    u8 temp_v0_9;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x66);
    func_0017D6A0(temp_v0 + 0x247C, 0, temp_v0 + 0xFB4, 0, 0x10);
    temp_v0_2 = M2C_FIELD(arg0, u8 *, 0x66);
    func_0017D6A0(temp_v0_2 + 0x2512, 0, temp_v0_2 + 0xFAA, 0, 0x10);
    temp_v0_3 = M2C_FIELD(arg0, u8 *, 0x66);
    func_0017D6A0(temp_v0_3 + 0x251C, 0, temp_v0_3 + 0xFAF, 0, 0x10);
    if (M2C_FIELD(arg0, u8 *, 5) != 0) {
        if (M2C_FIELD(func_00151440(func_001454C0(M2C_FIELD(arg0, u8 *, 0x66) + 0xFB4), 0xF), u8 *, 3) == 0) {
            temp_v0_4 = M2C_FIELD(arg0, u8 *, 0x66);
            func_0017D480(temp_v0_4 + 0x247C, temp_v0_4 + 0xFB4, arg0 + 0x58, 0, 0xC);
        } else {
            temp_v0_5 = M2C_FIELD(arg0, u8 *, 0x66);
            func_0017D480(temp_v0_5 + 0x247C, temp_v0_5 + 0xFB4, arg0 + 0x56, 0, 0xC);
            var_s3 = 1;
            do {
                temp_v1 = 4 - var_s3;
                sp6C = D_003E7484;
                sp6D = D_003E7485;
                sp6E = D_003E7486;
                sp6F = D_003E7487;
                temp_a1 = ((M2C_FIELD(arg0, u8 *, 0x58) & 0x1F) * var_s3) + ((M2C_FIELD(arg0, u8 *, 0x56) & 0x1F) * temp_v1);
                sp6C = ((temp_a1 * 0xFF) / 155) + ((u32) (temp_a1 * 0xFF) >> 0x1F);
                temp_a1_2 = (((u64) ((s64) (u16) M2C_FIELD(arg0, u8 *, 0x58) << 0x36) >> 0x3B) * var_s3) + (((u64) ((s64) (u16) M2C_FIELD(arg0, u8 *, 0x56) << 0x36) >> 0x3B) * temp_v1);
                sp6D = ((temp_a1_2 * 0xFF) / 155) + ((u32) (temp_a1_2 * 0xFF) >> 0x1F);
                temp_a0 = (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x59) << 0x39) >> 0x3B) * var_s3) + (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x57) << 0x39) >> 0x3B) * temp_v1);
                sp6E = ((temp_a0 * 0xFF) / 155) + ((u32) (temp_a0 * 0xFF) >> 0x1F);
                func_0014F8F0(func_001454C0(M2C_FIELD(arg0, u8 *, 0x66) + 0x247C), &sp6C, var_s3 + 0xB, 1);
                var_s3 += 1;
            } while (var_s3 < 5);
        }
    }
    if ((M2C_FIELD(arg0, u8 *, 3) != 0) || (M2C_FIELD(arg0, u8 *, 0x10) == 2)) {
        if (*func_00151440(func_001454C0(M2C_FIELD(arg0, u8 *, 0x66) + 0x2512), 7) == 0xFF) {
            temp_v0_6 = M2C_FIELD(arg0, u8 *, 0x66);
            func_0017D480(temp_v0_6 + 0x2512, temp_v0_6 + 0xFAA, arg0 + 0x5A, 1, 7);
            temp_v0_7 = M2C_FIELD(arg0, u8 *, 0x66);
            func_0017D480(temp_v0_7 + 0x251C, temp_v0_7 + 0xFAA, arg0 + 0x5E, 1, 7);
            temp_v0_8 = M2C_FIELD(arg0, u8 *, 0x66);
            func_0017D480(temp_v0_8 + 0x2512, temp_v0_8 + 0xFAA, arg0 + 0x5C, 8, 7);
            temp_v0_9 = M2C_FIELD(arg0, u8 *, 0x66);
            func_0017D480(temp_v0_9 + 0x251C, temp_v0_9 + 0xFAA, arg0 + 0x60, 8, 7);
            func_0017D200(M2C_FIELD(arg0, u8 *, 0x66) + 0x2512, 0xF, 7, 0xE, 0x80);
            func_0017D200(M2C_FIELD(arg0, u8 *, 0x66) + 0x251C, 0xF, 7, 0xE, 0x80);
        } else {
            temp_v0_10 = M2C_FIELD(arg0, u8 *, 0x66);
            func_0017D480(temp_v0_10 + 0x2512, temp_v0_10 + 0xFAA, arg0 + 0x5C, 0, 0x10);
            temp_v0_11 = M2C_FIELD(arg0, u8 *, 0x66);
            func_0017D480(temp_v0_11 + 0x251C, temp_v0_11 + 0xFAA, arg0 + 0x60, 0, 0x10);
        }
    }
}
