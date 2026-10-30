/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009BE2E0(u16, void *, void *, M2C_UNK); /* extern */
extern void *D_003EADA4;

void func_00AE18D0(s32 arg0) {
    u32 var_s2;
    u32 var_v1;
    u8 temp_a1;
    void *temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *var_a2;

    temp_s1 = D_003EADA4;
    var_s2 = 0;
    if (temp_s1 != NULL) {
        var_v1 = 0;
        temp_a0 = temp_s1 + (M2C_FIELD(((M2C_FIELD(temp_s1, s32 *, 0x3DBC) * 0x314) + temp_s1), u8 *, 0xF9F) * 0xE10) + ((arg0 & 0xFF) * 0x168);
        temp_a1 = M2C_FIELD(temp_a0, u8 *, 0x3DD3);
        temp_s0 = temp_a0 + 0x3DD0;
        if (temp_a1 != 0) {
            var_a2 = temp_s0;
            do {
                if (M2C_FIELD(var_a2, u16 *, 0x28) != 0) {
                    var_s2 += 1;
                }
                var_v1 += 1;
                var_a2 += 0x24;
            } while (var_v1 < temp_a1);
        }
        if ((temp_a1 == 1) && (var_s2 != 0)) {
            func_009BE2E0(M2C_FIELD(temp_s0, u16 *, 0x28), temp_s1 + 0xAAC, temp_s1 + 0xADC, 0);
        }
        if (M2C_FIELD(temp_s0, u8 *, 3) == 2) {
            if (var_s2 != 0) {
                func_009BE2E0(M2C_FIELD(temp_s0, u16 *, 0x4C), temp_s1 + 0xAAC, temp_s1 + 0xADC, 0);
            }
            if (var_s2 >= 2U) {
                func_009BE2E0(M2C_FIELD(temp_s0, u16 *, 0x28), temp_s1 + 0xABC, temp_s1 + 0xADC, 0);
            }
        }
        if (M2C_FIELD(temp_s0, u8 *, 3) == 3) {
            if (var_s2 != 0) {
                func_009BE2E0(M2C_FIELD(temp_s0, u16 *, 0x70), temp_s1 + 0xAAC, temp_s1 + 0xADC, 0);
            }
            if (var_s2 >= 2U) {
                func_009BE2E0(M2C_FIELD(temp_s0, u16 *, 0x4C), temp_s1 + 0xABC, temp_s1 + 0xADC, 0);
            }
            if (var_s2 >= 3U) {
                func_009BE2E0(M2C_FIELD(temp_s0, u16 *, 0x28), temp_s1 + 0xACC, temp_s1 + 0xADC, 0);
            }
        }
    }
}
