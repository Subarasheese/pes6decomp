/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024A8;
extern char D_011C79B0[];
extern char D_011C7BF0[];

s32 func_001165C8(M2C_UNK arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_v1;

    temp_s2 = M2C_FIELD(D_006024A8, s32 (**)(s32), 0xE8)(M2C_FIELD(arg1, s32 *, 0));
    temp_s1 = M2C_FIELD(D_006024A8, s32 (**)(s32), 0xE4)(M2C_FIELD(arg1, s32 *, 4));
    temp_s0 = (*(s32 *)D_011C79B0);
    var_a2 = 0;
    temp_a3 = M2C_FIELD(D_006024A8, s32 (**)(), 0x14)();
    if (temp_s0 > 0) {
        var_v0_2 = 0 * 0x10;
loop_2:
        temp_v1 = ((void *)D_011C7BF0) + var_v0_2;
        temp_a0 = M2C_FIELD(temp_v1, s32 *, 0);
        if ((temp_s2 < temp_a0) || (temp_a1 = M2C_FIELD(temp_v1, s32 *, 4), ((temp_s1 < temp_a1) != 0)) || (temp_s2 >= (temp_a0 + M2C_FIELD(temp_v1, u16 *, 0xC))) || (var_v0 = var_a2 - temp_a3, ((temp_s1 < (temp_a1 + M2C_FIELD(temp_v1, u16 *, 0xE))) == 0))) {
            var_a2 += 1;
            var_v0_2 = var_a2 * 0x10;
            if (var_a2 >= temp_s0) {
                goto block_7;
            }
            goto loop_2;
        }
    } else {
block_7:
        var_v0 = 0xF;
    }
    return var_v0;
}
