/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0063B110(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0063CEA0();                                /* extern */
s32 func_00655660();                                /* extern */
M2C_UNK func_006556F0();                            /* extern */
M2C_UNK func_00655760();                            /* extern */
M2C_UNK func_006557C0();                            /* extern */
M2C_UNK func_006557D0();                            /* extern */
M2C_UNK func_00655940();                            /* extern */
M2C_UNK func_00655E80(s32, s32);                    /* extern */
M2C_UNK func_00656020(s32, s32);                    /* extern */
extern char D_0065E660[];

s32 func_00653D20(void *arg0) {
    M2C_UNK var_a2;
    M2C_UNK var_a3;
    s32 temp_a0;
    s32 temp_v1_5;
    s32 var_s1;
    s32 var_s2;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    void *var_s0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x22);
    var_s2 = 0;
    switch (temp_v1) {                              /* irregular */
    default:
        func_00655940();
        var_s1 = 0;
        var_s0 = arg0;
loop_5:
        if (var_s1 < (s32) M2C_FIELD(arg0, u8 *, 0x20)) {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 0);
            if (temp_a0 == -1) {
                func_00656020(M2C_FIELD(var_s0, s32 *, 0x10), var_s1);
            } else {
                func_00655E80(temp_a0, var_s1);
            }
            var_s1 += 1;
            var_s0 += 4;
            if ((u32) var_s1 < 4U) {
                goto loop_5;
            }
        }
        func_006557C0();
        func_00655760();
        M2C_FIELD(arg0, u8 *, 0x22) = 1U;
        break;
    case 1:
        if (func_00655660() != 0) {
            temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x23);
            var_a2 = 0x6B;
            var_a3 = 0x6B;
            if (temp_v1_2 == 3) {
                var_a2 = 0x72;
                goto block_17;
            }
            if (temp_v1_2 == 4) {
                var_a3 = 0x71;
block_17:
                func_0063B110(0x6B, 0x6B, var_a2, var_a3, 0x6B, 0x6B);
            }
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, u8 *, 0x21) * func_0063CEA0());
            M2C_FIELD(arg0, u8 *, 0x22) = 2U;
        case 2:
            if (((*(s32 *)D_0065E660) == 0x100) && ((temp_v1_3 = M2C_FIELD(arg0, u8 *, 0x23), (temp_v1_3 == 1)) || (temp_v1_3 == 3))) {
                func_0026E840(0x84028400);
                goto block_27;
            }
            if (((*(s32 *)D_0065E660) == 0x200) && ((temp_v1_4 = M2C_FIELD(arg0, u8 *, 0x23), (temp_v1_4 == 2)) || (temp_v1_4 == 4))) {
                func_0026E840(0x84008401);
block_27:
                M2C_FIELD(arg0, s32 *, 0x24) = 0;
            }
            temp_v1_5 = M2C_FIELD(arg0, s32 *, 0x24);
            if (temp_v1_5 > 0) {
                if ((u8) M2C_FIELD(arg0, u8 *, 0x23) < 3U) {
                    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (temp_v1_5 - 1);
                }
            } else {
                func_006557D0();
                func_006556F0();
                M2C_FIELD(arg0, u8 *, 0x22) = 3U;
            }
        }
        break;
    case 3:
        if (func_00655660() != 0) {
            M2C_FIELD(arg0, u8 *, 0x22) = 4U;
        case 4:
            M2C_FIELD(arg0, u8 *, 0x22) = 0U;
            var_s2 = 1;
        }
        break;
    }
    return var_s2;
}
