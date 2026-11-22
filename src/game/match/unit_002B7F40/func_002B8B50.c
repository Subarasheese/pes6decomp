/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_005E2F50[];

u8 func_002B8B50(s32 arg0) {
    char *var_v0;

    if ((arg0 >= 0) && (arg0 < 2)) {
        var_v0 = ((char *)D_005E2F50) + (arg0 * 7);
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, u8 *, 4);
    }
    return 0U;
}
