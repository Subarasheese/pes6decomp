/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001F2050(s32);                             /* extern */
M2C_UNK func_001F3D10(s32, M2C_UNK);                /* extern */

void func_002E5A40(void *arg0, void *arg1) {
    s32 temp_v0;

    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 0x14) = 1;
    temp_v0 = func_001F2050(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v0;
    func_001F3D10(temp_v0, 1);
}
