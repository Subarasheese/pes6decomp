/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A43F0[];

s32 func_008216B0(void) {
    if (((void *)D_008A43F0) != NULL) {
        return M2C_FIELD(((void *)D_008A43F0), s32 *, 0x500);
    }
    return 0;
}
