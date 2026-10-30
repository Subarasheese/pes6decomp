/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE64C0[];

s8 func_00BECA20(s32 arg0) {
    if ((arg0 != 0xD) && (arg0 != 0xB) && (arg0 != 8)) {
        return 0;
    }
    return M2C_FIELD(((void *)D_00CE64C0), s8 *, 9);
}
