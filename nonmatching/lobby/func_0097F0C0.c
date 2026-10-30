/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A69000[];

s32 func_0097F0C0(s32 arg0) {
    if (((void *)D_00A69000) != NULL) {
        M2C_FIELD(((void *)D_00A69000), s32 *, 4) = arg0;
        if (((void *)D_00A69000) != NULL) {
            M2C_FIELD(((void *)D_00A69000), s32 *, 8) = 0;
        }
        return 1;
    }
    return 0;
}
