/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001C8590(void *, s8 *, M2C_UNK);       /* extern */
extern void *D_00A7DD40;

s32 func_009BFA60(s8 *arg0) {
    void *temp_s0;

    temp_s0 = D_00A7DD40;
    if (temp_s0 == NULL) {
        return 4;
    }
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            func_001C8590(temp_s0 + 0xD7, arg0, 0x1F);
            func_001C8590(temp_s0 + 0xF7, arg0, 0x1F);
        } else {
            goto block_6;
        }
    } else {
block_6:
        func_001C48E8(temp_s0 + 0xD7, 0, 0x20);
        func_001C48E8(temp_s0 + 0xF7, 0, 0x20);
    }
    M2C_FIELD(temp_s0, s8 *, 0x9E) = 1;
    return 0;
}
