/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024F0;

void func_00119174(s32 arg0) {
    M2C_FIELD(D_006024F0, s32 *, 0x34) = arg0;
}
