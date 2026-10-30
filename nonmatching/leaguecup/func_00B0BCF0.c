/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_0022BC60(s32);
extern s32 func_0022BAC0(s32);
extern u8 func_00225820(void);
void *func_0022BFF0(M2C_UNK, M2C_UNK);              /* extern */
extern void *D_003EAD64;

void func_00B0BCF0(void) {
    M2C_UNK var_a0;
    s32 temp_v1;
    s32 var_s5;
    u64 temp_v0_2;
    u8 temp_a0;
    void *temp_s1;
    void *temp_v0;
    void *var_s2;
    void *var_s3;
    void *var_s4;

    temp_s1 = D_003EAD64;
    temp_v1 = func_00225820() & 0xFF;
    if (temp_s1 != NULL) {
        var_s5 = 0;
        var_s4 = temp_s1;
        var_s3 = temp_s1;
        do {
            if (var_s5 != 0) {
                var_a0 = 2;
            } else {
                var_a0 = 1;
            }
            temp_v0 = func_0022BFF0(var_a0, 0);
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x16);
            temp_v0_2 = (u64) ((s64) temp_a0 << 0x39) >> 0x3F;
            if (temp_v0_2 != 1) {
                var_s2 = temp_s1 + var_s5;
                M2C_FIELD(var_s2, s8 *, 0xCA) = 0;
            } else if ((temp_v0_2 == 1) && (((u64) ((s64) temp_a0 << 0x38) >> 0x3F) != 1)) {
                var_s2 = temp_s1 + var_s5;
                M2C_FIELD(var_s2, s8 *, 0xCA) = 1;
            } else {
                var_s2 = temp_s1 + var_s5;
                M2C_FIELD(var_s2, s8 *, 0xCA) = 2;
            }
            if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x17) << 0x3C) >> 0x3F) == 1) {
                M2C_FIELD(var_s2, s8 *, 0xCC) = 1;
            } else {
                M2C_FIELD(var_s2, s8 *, 0xCC) = 0;
            }
            if ((temp_v1 & 0xFF) == (func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 5)) & 0xFF)) {
                M2C_FIELD(var_s2, u8 *, 0xC6) = (u8) M2C_FIELD(temp_v0, u8 *, 6);
                M2C_FIELD(var_s2, u8 *, 0xC8) = (u8) M2C_FIELD(temp_v0, u8 *, 5);
                M2C_FIELD(var_s2, s8 *, 0xB4) = 0;
            } else {
                M2C_FIELD(var_s2, u8 *, 0xC6) = (u8) M2C_FIELD(temp_v0, u8 *, 5);
                M2C_FIELD(var_s2, u8 *, 0xC8) = (u8) M2C_FIELD(temp_v0, u8 *, 6);
                M2C_FIELD(var_s2, s8 *, 0xB4) = 1;
            }
            M2C_FIELD(var_s4, s8 *, 0xB6) = (s8) (M2C_FIELD(temp_v0, u8 *, 0xB) + M2C_FIELD(temp_v0, u8 *, 0xC));
            M2C_FIELD(var_s4, s8 *, 0xB7) = (s8) (M2C_FIELD(temp_v0, u8 *, 0xD) + M2C_FIELD(temp_v0, u8 *, 0xE));
            M2C_FIELD(var_s4, u8 *, 0xB8) = (u8) M2C_FIELD(temp_v0, u8 *, 0xF);
            M2C_FIELD(var_s4, s8 *, 0xB9) = (s8) (M2C_FIELD(temp_v0, u8 *, 0x10) + M2C_FIELD(temp_v0, u8 *, 0x11));
            M2C_FIELD(var_s4, s8 *, 0xBA) = (s8) (M2C_FIELD(temp_v0, u8 *, 0x12) + M2C_FIELD(temp_v0, u8 *, 0x13));
            M2C_FIELD(var_s4, u8 *, 0xBB) = (u8) M2C_FIELD(temp_v0, u8 *, 0x14);
            if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x16) << 0x39) >> 0x3F) != 0) {
                M2C_FIELD(var_s3, s8 *, 0xC3) = (s8) (M2C_FIELD(temp_v0, u8 *, 9) + M2C_FIELD(temp_v0, u8 *, 0xA));
                M2C_FIELD(var_s3, s8 *, 0xC2) = (s8) (M2C_FIELD(temp_v0, u8 *, 7) + M2C_FIELD(temp_v0, u8 *, 8));
            }
            func_0022BAC0((s32) M2C_FIELD(temp_v0, u8 *, 5));
            func_0022BAC0((s32) M2C_FIELD(temp_v0, u8 *, 6));
            var_s5 += 1;
            var_s4 += 6;
            var_s3 += 2;
        } while (var_s5 < 2);
    }
}
