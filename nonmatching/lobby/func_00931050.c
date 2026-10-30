/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C8590(void *, s32, M2C_UNK);        /* extern */
s32 func_00821780();                                /* extern */

s32 func_00931050(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_s0;

    if ((arg0 < 0) || (arg0 >= 0xA)) {
        return 0;
    }
    temp_v0 = func_00821780();
    if (temp_v0 != 0) {
        temp_s0 = temp_v0 + (arg0 << 6) + 1;
        if (arg1 == 0) {
            return 0;
        }
        func_001C8590(temp_s0, arg1, 0x3F);
        M2C_FIELD(temp_s0, s8 *, 0x3F) = 0;
        return 1;
    }
    return 0;
}
