/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011B1A40[];

void func_00106080(void) {
    M2C_FIELD(((void *)D_011B1A40), s32 *, 0x1C) = 0;
    M2C_FIELD(((void *)D_011B1A40), s32 *, 4) = 0;
    M2C_FIELD(((void *)D_011B1A40), s32 *, 8) = 0;
}
