/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00167030(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s64 *, 0) = (s64) M2C_FIELD(arg0, s64 *, 0x5C0);
    M2C_FIELD(arg1, s64 *, 8) = (s64) M2C_FIELD(arg0, s64 *, 0x5C8);
}
