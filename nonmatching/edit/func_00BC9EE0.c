/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE4F40[];

s32 func_00BC9EE0(s32 arg0) {
    return M2C_FIELD((((void *)D_00CE4F40) + (arg0 * 0xC0)), s32 *, 0x28);
}
