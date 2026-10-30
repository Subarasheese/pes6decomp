/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE8E20[];

u16 func_00BF4420(s32 arg0) {
    void *temp_v0;

    temp_v0 = ((void *)D_00CE8E20) + (arg0 * 0x146C) + 0x13A8;
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, u16 *, 0x80);
    }
    return 0U;
}
