/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B52C70(s32, M2C_UNK);                    /* extern */
s32 func_00B52F80(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_00B54300();                                /* extern */

s64 func_00B570B0(void) {
    s32 temp_s0;
    s32 temp_v1;

    temp_s0 = func_00B54300() & 0xFF;
    if (func_00B52F80(temp_s0, 0, 0) != 0) {
        if (func_00B52C70(temp_s0, 0) != 0) {
            temp_v1 = temp_s0 & 0xFF;
            if (temp_v1 != 0xF) {
                return (s64) ((temp_v1 >= 0x17) << 0x38) >> 0x38;
            }
            return 1;
        }
        return 0;
    }
    return 0;
}
