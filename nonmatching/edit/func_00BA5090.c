/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001E65D0(s32);                             /* extern */
u32 func_001E6630(s32);                             /* extern */
M2C_UNK func_001E6C50(s32);                         /* extern */
s32 func_001E6E10(u32);                             /* extern */
M2C_UNK func_001E81B0(u32, u32, M2C_UNK);           /* extern */
s32 func_00209FE0(s32, M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0020A460(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0020A540(s32);                         /* extern */
s32 func_0020A550(M2C_UNK);                         /* extern */
void *func_002EE1E0(s32);                           /* extern */
s32 func_00BA5350(M2C_UNK, u32, M2C_UNK, u8);       /* extern */
extern u32 D_003EAF68;
extern s32 D_003EAF6C;

s32 func_00BA5090(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_6;
    s32 var_a0;
    s32 var_s2;
    u32 temp_s0;
    u32 temp_s2;
    u32 var_s1;
    u8 var_a3;
    u8 var_a3_2;
    void *temp_v0_5;
    void *temp_v0_7;

    var_s2 = 0x1CA;
    temp_v0 = func_0020A550(1);
    func_0020A460(temp_v0, 2, arg0);
    temp_v0_2 = func_00209FE0(temp_v0, 2, arg0, 0, 0);
    temp_v0_3 = func_001E65D0(temp_v0_2);
    switch (temp_v0_3) {                            /* irregular */
    case 1:
        temp_s2 = func_001E6630(temp_v0_2);
        var_a0 = 0;
loop_4:
        if (((u32) D_003EAF68 >> var_a0) & 1) {
            var_a0 += 1;
            if (var_a0 >= 0x20) {
                var_s1 = 0x7346;
            } else {
                goto loop_4;
            }
        } else {
            var_s1 = var_a0 + 0x7346;
            D_003EAF68 |= 1 << var_a0;
            temp_v0_4 = func_001E6E10(var_s1);
            if (temp_v0_4 != 0) {
                func_001E6C50(temp_v0_4);
            }
            D_003EAF6C += 1;
        }
        func_001E81B0(temp_s2, var_s1, 2);
        func_0020A540(temp_v0);
        temp_v0_5 = func_002EE1E0(arg0);
        if (temp_v0_5 == NULL) {
            var_a3 = 0;
        } else {
            var_a3 = M2C_FIELD(temp_v0_5, u8 *, 2);
        }
        var_s2 = func_00BA5350(0x1BA, var_s1, 0, var_a3);
        if ((var_s1 >= 0x7346U) && (var_s1 < 0x7367U) && (((u32) D_003EAF68 >> (var_s1 - 0x7346)) & 1)) {
            D_003EAF6C -= 1;
            temp_v0_6 = func_001E6E10(var_s1);
            if (temp_v0_6 != 0) {
                func_001E6C50(temp_v0_6);
            }
            D_003EAF68 &= ~(1 << (var_s1 - 0x7346));
        }
        break;
    case 2:
        temp_s0 = func_001E6630(temp_v0_2);
        temp_v0_7 = func_002EE1E0(arg0);
        if (temp_v0_7 == NULL) {
            var_a3_2 = 0;
        } else {
            var_a3_2 = M2C_FIELD(temp_v0_7, u8 *, 2);
        }
        var_s2 = func_00BA5350(0x1BA, temp_s0, 0, var_a3_2);
        func_0020A540(temp_v0);
        break;
    }
    return var_s2;
}
