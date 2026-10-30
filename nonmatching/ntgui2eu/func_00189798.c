/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_0018A450(s64, s64);                        /* extern */

s32 func_00189798(void *arg0) {
    s64 temp_a1;
    s64 temp_s1;
    s64 temp_s2;
    s64 temp_v0;

    temp_s1 = M2C_FIELD(arg0, s64 *, 0);
    temp_s2 = M2C_FIELD(arg0, s64 *, 8);
    if (temp_s1 != temp_s2) {
        temp_a1 = M2C_FIELD(arg0, s64 *, 0x10);
        temp_v0 = temp_s1 + func_0018A450((temp_s2 - temp_s1) - 1 + temp_a1, temp_a1);
        M2C_FIELD(arg0, s64 *, 0) = temp_v0;
        if (temp_s2 < temp_v0) {
            M2C_FIELD(arg0, s64 *, 0) = temp_s2;
        }
        M2C_FIELD(arg0, s64 *, 0x18) = func_0018A450(M2C_FIELD(arg0, s64 *, 0) << 0x10, temp_s2);
        return 0;
    }
    return 1;
}
