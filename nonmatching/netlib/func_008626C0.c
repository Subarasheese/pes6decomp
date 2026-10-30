/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008663A0(void *, u16, void *, s32, void *); /* extern */

s32 func_008626C0(void *arg0, s32 arg1, s32 arg2) {
    void *temp_a4;

    if ((arg0 != NULL) && (arg2 >= 0)) {
        if ((arg1 >= 0) && (arg1 < M2C_FIELD(arg0, s32 *, 0x238))) {
            M2C_FIELD(arg0, s32 *, 0x154) = 0;
            temp_a4 = arg0 + (arg1 << 6);
            return func_008663A0(temp_a4 + 0x268, M2C_FIELD(temp_a4, u16 *, 0x266), arg0 + (M2C_FIELD(temp_a4, s32 *, 0x240) * 0x24), arg2, temp_a4);
        }
        goto block_6;
    }
block_6:
    return -0x18;
}
