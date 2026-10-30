/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0044AA50[];

void func_001108B0(s32 arg0) {
    if (arg0 == 1) {
        M2C_FIELD(((void *)D_0044AA50), s32 *, 8) = 0;
        return;
    }
    M2C_FIELD(((void *)D_0044AA50), s32 *, 8) = 1;
}
