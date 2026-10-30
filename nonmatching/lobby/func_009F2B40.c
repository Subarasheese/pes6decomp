/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00213800(s32, M2C_UNK);                /* extern */
M2C_UNK func_00930CE0(s32);                         /* extern */
s32 func_00930D20();                                /* extern */
M2C_UNK func_00930D50(s32);                         /* extern */
s32 func_00930D90();                                /* extern */
M2C_UNK func_00930DC0(s32);                         /* extern */
s32 func_00930E00();                                /* extern */
M2C_UNK func_009C8730();                            /* extern */
s32 func_009CC480(M2C_UNK);                         /* extern */
M2C_UNK func_009CC590();                            /* extern */
s32 func_009CC5F0();                                /* extern */
M2C_UNK func_009CCC20();                            /* extern */
M2C_UNK func_009DDB00(M2C_UNK);                     /* extern */
extern s8 *D_00A7E238;

s32 func_009F2B40(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 var_v1;

    if (M2C_FIELD(D_00A7E238, u8 *, 1) != 0) {
        func_009CC590();
    }
    temp_v0 = func_009CC5F0();
    switch (temp_v0) {                              /* irregular */
    case 3:
        return 0;
    case 2:
        if ((M2C_FIELD(D_00A7E238, u8 *, 1) == 0) && ((temp_s4 = func_009CC480(0), temp_s3 = func_00930E00(), temp_s2 = func_009CC480(0xC), temp_s1 = func_00930D90(), temp_s0 = func_009CC480(3), temp_v0_2 = func_00930D20(), (temp_s4 != temp_s3)) || (temp_s2 != temp_s1) || (temp_s0 != temp_v0_2))) {
            var_v1 = 8;
block_16:
            M2C_FIELD(D_00A7E238, s8 *, 0) = var_v1;
        case 0:
        default:
            return 0;
        }
block_18:
        func_009C8730();
        func_009CCC20();
        func_009DDB00(1);
        func_00213800(M2C_FIELD(D_00A7E238, s32 *, 8), 1);
        M2C_FIELD(D_00A7E238, s8 *, 0) = 0;
        return 0;
    case 1:
        if (M2C_FIELD(D_00A7E238, u8 *, 1) == 0) {
            func_00930DC0(func_009CC480(0));
            func_00930D50(func_009CC480(0xC));
            func_00930CE0(func_009CC480(3));
            var_v1 = 7;
            goto block_16;
        }
        goto block_18;
    }
}
