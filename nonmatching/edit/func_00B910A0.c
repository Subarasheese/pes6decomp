/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CDF8F4[];

void func_00B910A0(s32 arg0) {
    if (((void *)D_00CDF8F4) != NULL) {
        M2C_FIELD(((void *)D_00CDF8F4), s32 *, 8) = arg0;
        M2C_FIELD(((void *)D_00CDF8F4), s32 *, 0) = 2;
        M2C_FIELD(((void *)D_00CDF8F4), s32 *, 4) = 0;
    }
}
