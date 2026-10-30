/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00921C38[];

u8 func_008F7E80(s32 arg0) {
    u8 var_v0;

    var_v0 = 0;
    if ((M2C_FIELD(((void *)D_00921C38), s32 *, 4) != 0) && (arg0 < M2C_FIELD(((void *)D_00921C38), s32 *, 0))) {
        var_v0 = M2C_FIELD(((arg0 * 4) + M2C_FIELD(((void *)D_00921C38), s32 *, 4)), u8 *, 3);
    }
    return var_v0;
}
