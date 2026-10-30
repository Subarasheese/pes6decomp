/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B1618[];
extern char D_008B1638[];

s32 func_00853430(u32 arg0, s32 *arg1) {
    M2C_UNK *var_v1;

    if (arg0 < 4U) {
        var_v1 = ((void *)D_008B1638);
    } else {
        var_v1 = ((void *)D_008B1618);
    }
    if (arg1 != NULL) {
        *arg1 = (s32) M2C_FIELD(var_v1, u8 *, 9);
    }
    return M2C_FIELD(var_v1, s32 *, 0x14);
}
