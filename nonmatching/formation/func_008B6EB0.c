/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008B6EB0(void *arg0, s8 arg1) {
    M2C_FIELD((M2C_FIELD(arg0, u8 *, 0xB) + arg0), s8 *, 0xC) = arg1;
}
