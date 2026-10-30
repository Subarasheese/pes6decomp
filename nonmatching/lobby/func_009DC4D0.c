/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */

void func_009DC4D0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_a5;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a5;
    s32 var_t0;
    s8 var_a1;
    u8 var_a3;
    void *temp_a4;
    void *temp_a4_2;
    void *temp_a6;

    func_001C48E8(arg2, 0, 8);
    if (arg1 != NULL) {
        var_a0 = 0;
        *arg2 = *arg1;
        do {
            M2C_FIELD((arg1 + var_a0), s8 *, 0x8C) = 0;
            var_a0 += 1;
        } while (var_a0 < 2);
        if (*arg1 != -1) {
            var_a0_2 = 0;
            do {
                var_a1 = 0;
                var_a5 = 0;
loop_9:
                if (M2C_FIELD((arg1 + var_a5), u8 *, 0x82) != 0) {
                    var_a1 += M2C_FIELD((arg1 + (var_a0_2 * 5) + var_a5), u8 *, 0x78);
                }
                var_a5 += 1;
                if (var_a5 < 5) {
                    goto loop_9;
                }
                if (var_a1 >= 0x64) {
                    var_a1 = 0x63;
                }
                var_t0 = 0;
                temp_a6 = arg1 + var_a0_2;
loop_15:
                temp_a5 = var_t0 * 8;
                if (M2C_FIELD((arg0 + temp_a5), s32 *, 0x5E0) == *arg1) {
                    temp_a4 = arg0 + var_a0_2 + temp_a5;
                    if (M2C_FIELD(temp_a4, u8 *, 0x5E4) == var_a1) {
                        var_a3 = M2C_FIELD(temp_a4, u8 *, 0x5E6);
                    } else {
                        var_a3 = *(u8 *)0x591BE4 * 3;
                    }
                    M2C_FIELD(temp_a6, u8 *, 0x8C) = var_a3;
                }
                var_t0 += 1;
                if (var_t0 < 5) {
                    goto loop_15;
                }
                temp_a4_2 = arg2 + var_a0_2;
                M2C_FIELD(temp_a4_2, s8 *, 4) = var_a1;
                var_a0_2 += 1;
                M2C_FIELD(temp_a4_2, u8 *, 6) = (u8) M2C_FIELD(temp_a6, u8 *, 0x8C);
            } while (var_a0_2 < 2);
        }
        return;
    }
    *arg2 = -1;
}
