/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE35B0[];

u8 func_00B94880(s32 arg0) {
    void *temp_v0;

    temp_v0 = (*(s32 *)D_00CE35B0) + 0xDD31C;
    if (arg0 == 0) {
        return M2C_FIELD(temp_v0, u8 *, 4);
    }
    return M2C_FIELD(temp_v0, u8 *, 5);
}
