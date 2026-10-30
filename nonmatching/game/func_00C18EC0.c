/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCAF70[];

s32 func_00C18EC0(void) {
    return M2C_FIELD(((void *)D_00CCAF70), u8 *, 1) != M2C_FIELD(((void *)D_00CCAF70), u8 *, 0);
}
