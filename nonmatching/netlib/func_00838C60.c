/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008AB740[];

u16 func_00838C60(s32 arg0) {
    s32 *var_v0;

    if ((*(s32 *)D_008AB740) != arg0) {
        var_v0 = NULL;
    } else if (arg0 == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008AB740);
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, u16 *, 0x16);
    }
    return 0U;
}
