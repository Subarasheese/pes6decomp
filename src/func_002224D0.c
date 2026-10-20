/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001F85A0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK *func_002228B0(s32, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_0024EC90(s32);                             /* extern */
extern char D_00539530[];

M2C_UNK *func_002224D0(s32 arg0, s32 arg1) {
    M2C_UNK *var_v0;
    s32 temp_v0;

    temp_v0 = func_0024EC90(arg1);
    var_v0 = func_002228B0(arg0, 0, temp_v0, 0);
    if (temp_v0 != 4) {
        func_001F85A0(var_v0, ((void *)D_00539530));
        var_v0 = ((void *)D_00539530);
    }
    return var_v0;
}
