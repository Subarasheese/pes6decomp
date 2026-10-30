/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */

u16 func_00958C20(s64 arg0) {
    s32 temp_v0;
    s64 temp_s1;
    void *temp_v1;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        temp_s1 = (s64) (arg0 << 0x38) >> 0x38;
        if (temp_s1 >= 0) {
            if (temp_s1 < 3) {
                if (func_0082C8A0(0xA) != 0) {
                    temp_v1 = (temp_s1 * 0x64) + temp_v0;
                    if (M2C_FIELD(temp_v1, s32 *, 0x486C) != 0) {
                        return M2C_FIELD(temp_v1, u16 *, 0x48CE);
                    }
                    return -1U;
                }
                return -1U;
            }
            return -1U;
        }
        return -1U;
    }
    return -1U;
}
