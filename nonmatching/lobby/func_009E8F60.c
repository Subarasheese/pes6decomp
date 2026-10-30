/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008187D0(s32);                         /* extern */
s32 func_008193E0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00821570();                                /* extern */
s32 func_009E6100(void *, s32);                     /* extern */
M2C_UNK func_00D0C090();                            /* extern */

s32 func_009E8F60(void *arg0) {
    M2C_UNK (*temp_v0)(s32);
    M2C_UNK var_a0;
    s32 temp_a0;
    s32 temp_s0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_v0;
    void *temp_s1;
    void *temp_v1;

    var_s3 = 0;
    var_s2 = 1;
    temp_v1 = M2C_FIELD(arg0, void **, 0x54);
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x50);
    temp_v0 = M2C_FIELD(temp_v1, M2C_UNK (**)(s32), 0xC);
    temp_s1 = arg0 + 0x70;
    if (temp_v0 != NULL) {
        temp_v0(M2C_FIELD(temp_v1, s32 *, 0));
    }
    if (M2C_FIELD(arg0, u8 *, 0x5D) == 0) {
        var_s2 = func_00821570();
    }
    if (var_s2 == 1) {
        temp_a0 = M2C_FIELD(temp_s1, s32 *, 4);
        switch (temp_a0) {                          /* irregular */
        case 10:
            var_v0 = func_009E6100(arg0, M2C_FIELD(arg0, s32 *, 0x1C) == 0);
block_37:
            var_s3 = var_v0;
            break;
        case 1:
            var_s2_2 = 0;
            if (M2C_FIELD(arg0, u8 *, 0x5D) != 0) {
                func_008187D0(temp_a0);
                goto block_27;
            }
            if (temp_s0 != 0) {
                var_a0 = 0x01FB0072;
            } else {
                var_a0 = 0x01FB000D;
            }
            if (func_008193E0(var_a0, -1) != 0) {
block_27:
                var_s2_2 = 1;
            }
            if (var_s2_2 == 1) {
                func_00D0C090();
            }
            var_v0 = 1;
            if (var_s2_2 == 1) {
                if (temp_s0 != 0) {
                    M2C_FIELD(temp_s1, s32 *, 4) = 0xA;
                } else {
                    goto block_37;
                }
            }
            break;
        case 0:
            if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
                M2C_FIELD(temp_s1, s32 *, 4) = 0xA;
            } else {
                M2C_FIELD(temp_s1, s32 *, 4) = (s32) (temp_a0 + 1);
                func_0026E840(0x8C008005);
            }
            break;
        }
    }
    return var_s3;
}
