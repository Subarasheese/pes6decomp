/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A69000[];

s32 func_0097F0A0(void) {
    if (((void *)D_00A69000) != NULL) {
        return M2C_FIELD(((void *)D_00A69000), s32 *, 4);
    }
    return 0;
}
