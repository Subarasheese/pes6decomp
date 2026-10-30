/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001C8590(void *, s8 *, M2C_UNK);       /* extern */
extern void *D_00A7DD40;

s32 func_009BF9D0(s8 *arg0, s32 arg1) {
    void *temp_s0;
    void *var_a0;

    temp_s0 = D_00A7DD40;
    var_a0 = temp_s0 + 0x117;
    if (temp_s0 == NULL) {
        return 4;
    }
    if (arg1 != 0) {
        var_a0 = temp_s0 + 0x157;
    }
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            func_001C8590(var_a0, arg0, 0x1F);
        } else {
            goto block_8;
        }
    } else {
block_8:
        func_001C48E8(var_a0, 0, 0x20);
    }
    M2C_FIELD(temp_s0, s8 *, 0x9E) = 1;
    return 0;
}
