/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0011E180(void *);
void func_0011BD58(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x350) = arg2;
    M2C_FIELD(arg0, s32 *, 0x358) = arg3;
    func_0011E180(arg0);
}
