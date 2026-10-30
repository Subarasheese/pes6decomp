/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0098F7E0();                                /* extern */
s32 func_00992DF0(u8, f32, f32);                    /* extern */
extern void *D_003E7A08;

s32 func_009934E0(void *arg0) {
    s32 var_a3;
    u8 temp_v1;
    void *var_a2;

    if (func_0098F7E0() == 0) {
        if ((func_00992DF0(M2C_FIELD(arg0, u8 *, 0x13), M2C_FIELD(arg0, f32 *, 0xE0), M2C_FIELD(arg0, f32 *, 0xE8)) & 0xFF) == 1) {
            var_a3 = 0;
            var_a2 = D_003E7A08;
loop_6:
            if ((M2C_FIELD(var_a2, u8 *, 8) == M2C_FIELD(arg0, u8 *, 0)) && (M2C_FIELD(var_a2, s32 *, 4) == 4)) {
                temp_v1 = M2C_FIELD(var_a2, u8 *, 0x2C);
                if (((u64) ((s64) temp_v1 << 0x3D) >> 0x3F) != 0) {
                    return 1;
                }
                if (((u64) ((s64) temp_v1 << 0x3E) >> 0x3F) != 0) {
                    return 1;
                }
                var_a3 += 1;
                var_a2 += 0x40;
                if (var_a3 >= 0xA) {
                    goto block_15;
                }
                goto loop_6;
            }
            goto block_15;
        }
        goto block_15;
    }
block_15:
    return 0;
}
