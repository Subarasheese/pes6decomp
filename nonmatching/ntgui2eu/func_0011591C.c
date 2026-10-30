/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024A8;

void func_0011591C(void *arg0) {
    if (M2C_FIELD(D_006024A8, s32 (**)(), 0x3C)() != 0) {
        M2C_FIELD(arg0, s32 *, 0xE4) = 1;
    }
}
