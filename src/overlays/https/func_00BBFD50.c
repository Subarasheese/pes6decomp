/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_001C48E8(s32 *, s32, s32);

s32 *func_00BC0A38(M2C_UNK);

s32 *func_00BBFD50(void) {
    s32 *temp_v0;

    temp_v0 = func_00BC0A38(0x18);
    if (temp_v0 == NULL) {
        return NULL;
    }
    func_001C48E8(temp_v0, 0, 0x18);
    M2C_FIELD(temp_v0, s32 *, 0x14) = 1;
    return temp_v0;
}
