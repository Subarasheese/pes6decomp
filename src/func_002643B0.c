/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00154070(M2C_UNK);                         /* extern */
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */

s32 func_002643B0(void) {
    s32 temp_v0;

    temp_v0 = func_00154070(0x13B0);
    func_001C48E8(temp_v0, 0, 0x13B0);
    return temp_v0;
}
