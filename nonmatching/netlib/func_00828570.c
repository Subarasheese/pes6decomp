/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A9848[];

u16 func_00828570(s32 arg0) {
    M2C_UNK *var_v1;
    void *var_v0;

    if ((*(s32 *)D_008A4398) == 0) {
        var_v1 = NULL;
    } else {
        var_v1 = ((void *)D_008A9848);
    }
    if (var_v1 == NULL) {
        var_v0 = NULL;
    } else if (arg0 < 0) {
        var_v0 = NULL;
    } else if (arg0 < 5) {
        var_v0 = var_v1 + (arg0 * 8) + 0x1A4;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, u16 *, 2);
    }
    return 0U;
}
