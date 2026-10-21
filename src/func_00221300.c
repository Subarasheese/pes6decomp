/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *Pes6Player_FindRecord(s32, s32);                       /* extern */

u8 func_00221300(s32 arg0) {
    u8 var_s0;
    void *temp_v0;

    var_s0 = 0;
    temp_v0 = Pes6Player_FindRecord(arg0, 0);
    if (temp_v0 != NULL) {
        var_s0 = M2C_FIELD(temp_v0, u8 *, 0x33);
    }
    return var_s0;
}
