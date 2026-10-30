/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018A1D0(s64);                             /* extern */
s64 func_0018A340(s32, s32, s64 *);                 /* extern */

void func_0018A148(void *arg0, s64 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) {
    s64 sp90;
    s64 sp98;
    s64 spA0;
    s64 spA8;
    s64 spB0;
    s64 spB8;
    s32 temp_s1;

    sp90 = arg2;
    sp98 = arg3;
    spA0 = arg4;
    spA8 = arg5;
    spB0 = arg6;
    spB8 = arg7;
    temp_s1 = M2C_FIELD(&sp98, s32 *, -8);
    M2C_FIELD(arg0, s64 *, 0) = func_0018A340(func_0018A1D0(arg1), temp_s1, &sp98);
    M2C_FIELD(arg0, u64 *, 8) = (u64) ((u64) (arg1 << 0x20) >> 0x20);
}
