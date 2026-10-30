/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_003120D0(void **, s32, s8);                /* extern */
s32 func_00326890(s32, s8, s32, M2C_UNK);           /* extern */
extern u8 D_003EA500;

s32 func_008F8660(void *arg0, void *arg1, s8 arg2) {
    void *sp6C;
    s32 temp_s2;
    s32 var_v0;
    s8 var_s1;
    u8 temp_v0;

    var_s1 = 0;
    temp_s2 = M2C_FIELD(arg1, s32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    M2C_FIELD(arg0, void **, 8) = NULL;
    M2C_FIELD(arg0, s8 *, 0) = 0xFF;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
loop_1:
    if (func_003120D0(&sp6C, arg2 & 0xFF, var_s1) != 0) {
        temp_v0 = M2C_FIELD(sp6C, u8 *, 2);
        if (temp_v0 != 0) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) temp_v0;
            M2C_FIELD(arg0, s32 *, 0x14) = func_00326890(temp_s2, arg2, var_s1 & 0xFF, 0x80000000);
            if (func_00326890(temp_s2, arg2, var_s1 & 0xFF, 0x20000000) == 0) {
                if (func_00326890(temp_s2, arg2, var_s1 & 0xFF, 0x40000000) == 0) {
                    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
                        if (D_003EA500 == 0) {
                            M2C_FIELD(arg0, s32 *, 0xC) = 1;
                            return 0;
                        }
                        M2C_FIELD(arg0, s32 *, 0xC) = 4;
                        goto block_17;
                    }
                    goto block_17;
                }
                M2C_FIELD(arg0, s32 *, 0xC) = 2;
                goto block_17;
            }
            M2C_FIELD(arg0, s32 *, 0xC) = 3;
block_17:
            M2C_FIELD(arg0, void **, 8) = sp6C;
            M2C_FIELD(arg0, s8 *, 0) = 0xFF;
            M2C_FIELD(arg0, s8 *, 1) = arg2;
            M2C_FIELD(arg0, s8 *, 2) = var_s1;
            if (M2C_FIELD(arg0, s32 *, 4) != 2) {
                var_v0 = 3;
            } else {
                var_v0 = 4;
            }
            M2C_FIELD(arg0, s32 *, 0x10) = var_v0;
            return 1;
        }
    }
    var_s1 += 1;
    if (var_s1 >= 0x20) {
        return 0;
    }
    goto loop_1;
}
