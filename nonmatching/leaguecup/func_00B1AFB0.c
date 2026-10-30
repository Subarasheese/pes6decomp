/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00949540();                            /* extern */
M2C_UNK func_00B1B730();                            /* extern */
M2C_UNK func_00B1B810();                            /* extern */
M2C_UNK func_00B1B900();                            /* extern */
s32 func_00B1C030();                                /* extern */
extern void *D_003EAD7C;

s32 func_00B1AFB0(void) {
    s32 temp_v0;
    s32 var_v1;
    void *temp_s0;

    temp_s0 = D_003EAD7C;
    if (temp_s0 != NULL) {
        var_v1 = 1;
        if (M2C_FIELD(temp_s0, s32 *, 0x364) != 1) {
            if (M2C_FIELD(temp_s0, u8 *, 0x369) == 0) {
                if (temp_s0 != NULL) {
                    if ((u32) (M2C_FIELD(((M2C_FIELD(temp_s0, s32 *, 0x5C) * 4) + temp_s0), s32 *, 0x60) - 2) >= 2U) {
                        goto block_14;
                    }
                } else {
block_14:
                    var_v1 = 0;
                }
                if (var_v1 == 1) {
                    func_00B1B900();
                }
            }
            if (M2C_FIELD(temp_s0, u8 *, 0x36A) == 0) {
                func_00B1B730();
            }
            if ((M2C_FIELD(temp_s0, u8 *, 0x369) == 1) && (M2C_FIELD(temp_s0, u8 *, 0x36A) == 1)) {
                M2C_FIELD(temp_s0, s32 *, 0x364) = 1;
            }
        } else {
            func_00B1B810();
        }
        temp_v0 = func_00B1C030();
        if (temp_v0 == 1) {
            func_00949540();
        }
        return temp_v0;
    }
    return 1;
}
