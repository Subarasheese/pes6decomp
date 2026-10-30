/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C06310(void *arg0, s32 arg1) {
    if ((arg1 > 0) && (arg1 < 5)) {
        return M2C_FIELD((arg1 + arg0), u8 *, 0x2A) != 0;
    }
    if ((arg1 >= 6) && (arg1 < 9)) {
        return M2C_FIELD(arg0, u8 *, 0x2F) != 0;
    }
    if ((arg1 >= 0xA) && (arg1 < 0xC)) {
        return M2C_FIELD(arg0, u8 *, 0x30) != 0;
    }
    if ((arg1 >= 0xD) && (arg1 < 0xF)) {
        return M2C_FIELD(arg0, u8 *, 0x31) != 0;
    }
    return 1;
}
