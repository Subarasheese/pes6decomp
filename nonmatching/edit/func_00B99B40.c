/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE3F10[];

s32 func_00B99B40(s32 arg0) {
    s32 var_v0;

    var_v0 = 2;
    switch (arg0) {                                 /* irregular */
    case 2:
        return M2C_FIELD(((void *)D_00CE3F10), s32 *, 8);
    case 3:
        var_v0 = M2C_FIELD(((void *)D_00CE3F10), s32 *, 0xC);
        /* fallthrough */
    case 0:
        return var_v0;
    default:
        return 2;
    }
}
