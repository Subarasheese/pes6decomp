/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_0018AB40(s32, s64);                        /* extern */

void func_00189860(void *arg0, void *arg1, void *arg2, void *arg3) {
    M2C_FIELD(arg1, s8 *, 0) = (s8) (M2C_FIELD(arg2, u8 *, 0) + ((func_0018AB40(M2C_FIELD(arg3, u8 *, 0) - M2C_FIELD(arg2, u8 *, 0), M2C_FIELD(arg0, s64 *, 0x18)) >> 0x10) & 0xFF));
    M2C_FIELD(arg1, s8 *, 1) = (s8) (M2C_FIELD(arg2, u8 *, 1) + ((func_0018AB40(M2C_FIELD(arg3, u8 *, 1) - M2C_FIELD(arg2, u8 *, 1), M2C_FIELD(arg0, s64 *, 0x18)) >> 0x10) & 0xFF));
    M2C_FIELD(arg1, s8 *, 2) = (s8) (M2C_FIELD(arg2, u8 *, 2) + ((func_0018AB40(M2C_FIELD(arg3, u8 *, 2) - M2C_FIELD(arg2, u8 *, 2), M2C_FIELD(arg0, s64 *, 0x18)) >> 0x10) & 0xFF));
    M2C_FIELD(arg1, s8 *, 3) = (s8) (M2C_FIELD(arg2, u8 *, 3) + ((func_0018AB40(M2C_FIELD(arg3, u8 *, 3) - M2C_FIELD(arg2, u8 *, 3), M2C_FIELD(arg0, s64 *, 0x18)) >> 0x10) & 0xFF));
}
