/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
u16 *func_002228B0(s32, M2C_UNK, s32, M2C_UNK);     /* extern */
s32 Pes6Team_GetPlayerId();                                /* extern */
s32 func_0024EC90(s32);                             /* extern */

u16 func_002222B0(s32 arg0) {
    s32 temp_s1;
    s32 var_v0;
    u16 *temp_v0;
    u16 var_s0;

    temp_s1 = Pes6Team_GetPlayerId() & 0xFFFF;
    var_v0 = func_0024EC90(arg0);
    var_s0 = 0xFFFF & 0xFFFF;
    if (var_v0 == 4) {
        var_v0 = 0;
    }
    temp_v0 = func_002228B0(temp_s1, 2, var_v0, 0);
    if (temp_v0 != NULL) {
        var_s0 = *temp_v0;
    }
    return var_s0;
}
