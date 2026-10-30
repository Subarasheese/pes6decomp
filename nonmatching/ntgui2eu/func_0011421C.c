/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_0011421C(void *arg0, void *arg1) {
    s32 *temp_a2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v1;
    s32 var_a6;
    u32 temp_t0;
    u32 var_a7;
    u32 var_v0;
    void *temp_a5;

    var_a7 = 0;
    temp_t0 = M2C_FIELD(arg0, u32 *, 0x68);
    temp_a1 = M2C_FIELD(arg1, s32 *, 4) + ((u16) M2C_FIELD(arg1, u16 *, 0xE) >> 1);
    temp_a0 = M2C_FIELD(arg1, s32 *, 0) + ((u16) M2C_FIELD(arg1, u16 *, 0xC) >> 1);
    if (temp_t0 != 0) {
        var_a6 = 0;
loop_2:
        temp_a5 = M2C_FIELD(arg0, s32 *, 0x78) + var_a6;
        temp_a2 = M2C_FIELD(arg0, s32 *, 0x6C) + (M2C_FIELD(temp_a5, u16 *, 0x180) * 0x10);
        temp_v1 = M2C_FIELD(temp_a2, s32 *, 0);
        var_a6 += 0x198;
        if ((temp_a0 < temp_v1) || (temp_a3 = M2C_FIELD(temp_a2, s32 *, 4), ((temp_a1 < temp_a3) != 0)) || (temp_a0 >= (temp_v1 + M2C_FIELD(temp_a2, u16 *, 0xC))) || (temp_a1 >= (temp_a3 + M2C_FIELD(temp_a2, u16 *, 0xE))) || (var_v0 = var_a7, ((M2C_FIELD(temp_a5, u8 *, 0x18C) & 0x34) != 0))) {
            var_a7 += 1;
            if (var_a7 >= temp_t0) {
                goto block_8;
            }
            goto loop_2;
        }
    } else {
block_8:
        var_v0 = 0;
    }
    return var_v0;
}
