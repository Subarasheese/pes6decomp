/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s8 *func_0021E4B0(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
extern char D_003DAB60[];

s8 *func_002D56C0(s32 arg0) {
    s8 *temp_v0;
    s8 *var_s0;

    var_s0 = ((void *)D_003DAB60);
    temp_v0 = func_0021E4B0(arg0 & 0xFFFF, 0, 0, 0);
    if ((temp_v0 != NULL) && (*temp_v0 != 0)) {
        var_s0 = temp_v0;
    }
    return var_s0;
}
