/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008FEA80[];

s32 func_008F6D60(s32 arg0) {
    s32 var_v0;

    var_v0 = 2;
    switch (arg0) {                                 /* irregular */
    case 2:
        return M2C_FIELD(((void *)D_008FEA80), s32 *, 0x10);
    case 3:
        var_v0 = M2C_FIELD(((void *)D_008FEA80), s32 *, 0x14);
        /* fallthrough */
    case 0:
        return var_v0;
    default:
        return 2;
    }
}
