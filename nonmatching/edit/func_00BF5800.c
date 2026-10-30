/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE8E20[];

s32 func_00BF5800(s32 arg0) {
    return M2C_FIELD((((void *)D_00CE8E20) + (arg0 * 0x146C)), s32 *, 0x145C);
}
