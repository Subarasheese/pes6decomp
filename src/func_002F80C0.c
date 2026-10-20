/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_002F82D0(M2C_UNK, s32, M2C_UNK, s32);    /* extern */

void func_002F80C0(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_002F82D0(2, arg0, 0, arg1);
    func_001C48E8(temp_v0, 0, 4);
    M2C_FIELD(temp_v0, s8 *, 0) = 0x55;
    M2C_FIELD(temp_v0, s8 *, 2) = 1;
}
