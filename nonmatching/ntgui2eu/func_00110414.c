/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0044AA50[];

void func_00110414(void) {
    M2C_FIELD(((void *)D_0044AA50), s32 *, 0x10) = 0;
    M2C_FIELD(((void *)D_0044AA50), s32 *, 0xC) = 0;
}
