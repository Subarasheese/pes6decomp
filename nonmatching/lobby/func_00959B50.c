/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */

s32 func_00959B50(s64 arg0) {
    s64 temp_s2;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        temp_s2 = (s64) (arg0 << 0x38) >> 0x38;
        if (temp_s2 < 0) {
            return 1;
        }
        if (temp_s2 < 3) {
            if (func_0082C8A0(0xA) != 0) {
                temp_v0_2 = (temp_s2 * 0x64) + temp_v0;
                if (M2C_FIELD(temp_v0_2, s32 *, 0x486C) != 0) {
                    M2C_FIELD(temp_v0, s8 *, 0x49E4) = (s8) arg0;
                    M2C_FIELD(temp_v0, s32 *, 0x49E8) = (s32) M2C_FIELD(temp_v0_2, s32 *, 0x486C);
                    return 4;
                }
                return 1;
            }
            return 1;
        }
        return 1;
    }
    return 2;
}
