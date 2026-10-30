/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_0018A450(s64, s32);                        /* extern */

void func_0016F9C8(void *arg0) {
    s64 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s64 *, 0x940);
    M2C_FIELD(arg0, s32 *, 0x918) = (s32) M2C_FIELD(arg0, s32 *, 0x928);
    M2C_FIELD(arg0, s32 *, 0x928) = (s32) ((s64) (func_0018A450((temp_v1 + M2C_FIELD(arg0, s64 *, 0x930)) << 0xC, M2C_FIELD(arg0, s64 *, 0x938) - temp_v1) << 0x20) >> 0x20);
}
