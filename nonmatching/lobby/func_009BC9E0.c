/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A02B68[];

M2C_UNK *func_009BC9E0(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) == 1) {
            if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
                return arg0 + 0x3C;
            }
            return ((void *)D_00A02B68);
        }
        return ((void *)D_00A02B68);
    }
    return ((void *)D_00A02B68);
}
