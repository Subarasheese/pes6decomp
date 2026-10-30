/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024A8;

u32 func_001144A0(void *arg0, void *arg1) {
    s32 *temp_v1;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a6;
    s32 temp_s2;
    s32 var_a4;
    u32 temp_a5;
    u32 var_a2;
    u32 var_v0;
    void *temp_a3;

    temp_s2 = M2C_FIELD(D_006024A8, s32 (**)(s32), 0xE8)(M2C_FIELD(arg1, s32 *, 0));
    temp_a5 = M2C_FIELD(arg0, u32 *, 0x68);
    temp_a6 = M2C_FIELD(D_006024A8, s32 (**)(s32), 0xE4)(M2C_FIELD(arg1, s32 *, 4));
    var_a2 = 0;
    if (temp_a5 != 0) {
        var_a4 = 0;
loop_2:
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x78) + var_a4;
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x6C) + (M2C_FIELD(temp_a3, u16 *, 0x180) * 0x10);
        temp_a0 = M2C_FIELD(temp_v1, s32 *, 0);
        var_a4 += 0x198;
        if ((temp_s2 < temp_a0) || (temp_a1 = M2C_FIELD(temp_v1, s32 *, 4), ((temp_a6 < temp_a1) != 0)) || (temp_s2 >= (temp_a0 + M2C_FIELD(temp_v1, u16 *, 0xC))) || (temp_a6 >= (temp_a1 + M2C_FIELD(temp_v1, u16 *, 0xE))) || (var_v0 = var_a2, ((M2C_FIELD(temp_a3, s32 *, 0x18C) & 0x34) != 0))) {
            var_a2 += 1;
            if (var_a2 >= temp_a5) {
                goto block_8;
            }
            goto loop_2;
        }
    } else {
block_8:
        var_v0 = -1U;
    }
    return var_v0;
}
