/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011B5CA8[];

void func_0010C8D8(void) {
    M2C_FIELD(((void *)D_011B5CA8), s32 *, 0x2C) = 0;
    M2C_FIELD(((void *)D_011B5CA8), s32 *, 0x30) = 0;
}
