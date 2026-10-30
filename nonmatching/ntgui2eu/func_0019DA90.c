/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019CCD0(s32, s64 *);                      /* extern */

void func_0019DA90(M2C_UNK arg0, M2C_UNK arg1, s32 *arg2, M2C_UNK arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) {
    s64 sp60;
    s64 sp68;
    s64 sp70;
    s64 sp78;

    sp60 = arg4;
    sp68 = arg5;
    sp70 = arg6;
    sp78 = arg7;
    *arg2 -= func_0019CCD0(*arg2, &sp60);
}
