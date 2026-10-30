/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A64CC[];

u8 func_00828320(s32 arg0) {
    M2C_UNK *var_v1;
    void *var_v0;

    if ((*(s32 *)D_008A4398) == 0) {
        var_v1 = NULL;
    } else {
        var_v1 = ((void *)D_008A64CC);
    }
    if (var_v1 == NULL) {
        var_v0 = NULL;
    } else if (arg0 < 0) {
        var_v0 = NULL;
    } else if (arg0 < 0x32) {
        var_v0 = var_v1 + (arg0 * 0x38) + 0xC;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, u8 *, 4);
    }
    return 2U;
}
