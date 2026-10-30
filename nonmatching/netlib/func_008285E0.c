/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A9848[];

u16 func_008285E0(s32 arg0) {
    M2C_UNK *var_v0;
    void *var_v1;

    if ((*(s32 *)D_008A4398) == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008A9848);
    }
    if (var_v0 != NULL) {
        var_v1 = var_v0 + 4;
    } else {
        var_v1 = NULL;
    }
    if (var_v1 == NULL) {
        return 0xFFFF & 0xFFFF;
    }
    if (arg0 >= 0) {
        if (arg0 < 5) {
            return M2C_FIELD(((arg0 * 2) + var_v1), u16 *, 0x194);
        }
        goto block_13;
    }
block_13:
    return 0xFFFF & 0xFFFF;
}
