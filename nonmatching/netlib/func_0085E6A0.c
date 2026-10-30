/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 *func_008472D0(s32, s32, s32);                  /* extern */
extern void *D_003EA358;

s32 func_0085E6A0(s64 arg0, void *arg1) {
    M2C_UNK (*temp_v0_2)(void *, u16);
    s32 var_a1;
    s32 var_a2;
    u16 var_a0;
    void *temp_s0;
    void *temp_v0;

    if (M2C_FIELD(D_003EA358, s32 *, 0) == M2C_FIELD(arg1, s8 *, 0x28)) {
        if (M2C_FIELD(D_003EA358, s8 *, 5) == 0) {
            if (M2C_FIELD(arg1, u8 *, 0x2A) == 0) {
                var_a2 = 1;
                if (((s64) (arg0 << 0x30) >> 0x30) == 1) {
                    do {
                        var_a1 = var_a2 * 2;
                        var_a0 = M2C_FIELD((arg1 + var_a1), u16 *, 0x1E);
                        temp_v0 = D_003EA358 + var_a1;
                        if ((s32) var_a0 >= (s32) M2C_FIELD(temp_v0, u16 *, 0x22)) {
                            M2C_FIELD(temp_v0, u16 *, 0x22) = var_a0;
                            var_a1 = var_a2 * 4;
                            var_a0 = (u16) M2C_FIELD((arg1 + var_a1), s32 *, 8);
                            M2C_FIELD((D_003EA358 + var_a1), s32 *, 0xC) = (s32) var_a0;
                            M2C_FIELD((D_003EA358 + var_a2), s8 *, 0x1F) = (s8) M2C_FIELD((arg1 + var_a2), s8 *, 0x1B);
                        }
                        var_a2 += 1;
                    } while (var_a2 < 5);
                    M2C_FIELD(D_003EA358, s8 *, 5) = (s8) M2C_FIELD(arg1, u8 *, 0x29);
                    temp_s0 = D_003EA358;
                    if ((M2C_FIELD(((*func_008472D0((s32) var_a0, var_a1, var_a2) * 4) + temp_s0), s32 *, 0xC) == M2C_FIELD(temp_s0, s32 *, 8)) || (M2C_FIELD(temp_s0, s8 *, 5) != 0)) {
                        M2C_FIELD(temp_s0, s8 *, 6) = 0;
                    }
                }
            }
            M2C_FIELD(D_003EA358, u8 *, 0xE) = (u8) M2C_FIELD(arg1, u8 *, 0x2B);
            temp_v0_2 = M2C_FIELD(D_003EA358, M2C_UNK (**)(void *, u16), 0x3C);
            if (temp_v0_2 != NULL) {
                temp_v0_2(arg1 + 0x2E, M2C_FIELD(arg1, u16 *, 0x2C));
            }
        }
    }
    return 0;
}
