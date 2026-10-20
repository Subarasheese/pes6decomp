/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001F85A0(M2C_UNK *, M2C_UNK *);
M2C_UNK *func_002228B0(s32, M2C_UNK, s32, M2C_UNK);
extern char D_00539530[];
M2C_UNK *func_00222850(s32 arg0, s32 arg1) {
    M2C_UNK *var_v0;
    var_v0 = func_002228B0(arg0, 0, arg1, 0);
    if (arg1 != 4) {
        func_001F85A0(var_v0, ((void *)D_00539530));
        var_v0 = ((void *)D_00539530);
    }
    return var_v0;
}
