/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_001B6DF0(s32, s16, s32, s32);              /* extern */
M2C_UNK func_001B83A0(s32, s16, M2C_UNK, M2C_UNK);  /* extern */

s64 func_001B3E28(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, u16 *, 0xC) & 0x100) {
        func_001B83A0(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s16 *, 0xE), 0, 2);
    }
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) & 0xEFFF);
    return (s64) (func_001B6DF0(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s16 *, 0xE), arg1, arg2) << 0x20) >> 0x20;
}
