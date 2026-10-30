/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00167F28(void *arg0, s64 arg1) {
    M2C_FIELD(arg0, s64 *, 0x988) = arg1;
    M2C_FIELD(arg0, s32 *, 0x990) = 1;
    M2C_FIELD(arg0, s32 *, 0x994) = 2;
}
