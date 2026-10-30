/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00167010(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s64 *, 0x5C0) = (s64) M2C_FIELD(arg1, s64 *, 0);
    M2C_FIELD(arg0, s32 *, 0x98) = 2;
    M2C_FIELD(arg0, s64 *, 0x5C8) = (s64) M2C_FIELD(arg1, s64 *, 8);
}
