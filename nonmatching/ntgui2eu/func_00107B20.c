/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_002BA0C0[];

s32 func_00107B20(void) {
    return M2C_FIELD(((M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) * 4) + ((void *)D_002BA0C0)), s32 *, 0x5C38);
}
