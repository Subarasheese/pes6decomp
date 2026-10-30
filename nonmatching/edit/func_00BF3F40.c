/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE8E20[];

u16 func_00BF3F40(s32 arg0) {
    return M2C_FIELD((((void *)D_00CE8E20) + (arg0 * 0x146C)), u16 *, 0x142A);
}
