/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001E65D0(s32);                             /* extern */
s32 func_001E6630(s32);                             /* extern */
M2C_UNK func_001E6C50(s32);                         /* extern */
s32 func_001E6E10(s32);                             /* extern */
M2C_UNK func_001E81B0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_001E9090(s32, s32);                    /* extern */
s32 func_00209FE0(s32, M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0020A460(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0020A540(s32);                         /* extern */
s32 func_0020A550(M2C_UNK);                         /* extern */
s32 func_00BA5780();                                /* extern */
extern u32 D_003EAF68;
extern s32 D_003EAF6C;

s32 func_00BA5580(s32 arg0) {
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_s1;

    if (arg0 != 0x1CA) {
        temp_v0 = func_0020A550(1);
        func_0020A460(temp_v0, 2, arg0);
        temp_v0_2 = func_00209FE0(temp_v0, 2, arg0, 0, 0);
        temp_s0 = func_001E65D0(temp_v0_2);
        temp_s2 = func_001E6630(temp_v0_2);
        var_a0 = 0;
loop_5:
        if (((u32) D_003EAF68 >> var_a0) & 1) {
            var_a0 += 1;
            if (var_a0 >= 0x20) {
                var_s1 = 0x7346;
            } else {
                goto loop_5;
            }
        } else {
            var_s1 = var_a0 + 0x7346;
            D_003EAF68 |= 1 << var_a0;
            temp_v0_3 = func_001E6E10(var_s1);
            if (temp_v0_3 != 0) {
                func_001E6C50(temp_v0_3);
            }
            D_003EAF6C += 1;
        }
        switch (temp_s0) {                          /* irregular */
        case 1:
            func_001E81B0(temp_s2, var_s1, 2);
            break;
        case 2:
            func_001E9090(temp_s2, var_s1);
            break;
        }
        func_0020A540(temp_v0);
        return var_s1;
    }
    return func_00BA5780();
}
