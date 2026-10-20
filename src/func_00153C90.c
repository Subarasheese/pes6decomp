/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 *func_00154060(M2C_UNK, M2C_UNK);               /* extern */
extern s32 *D_003E9834;

void func_00153C90(void) {
    s32 *temp_v0;

    temp_v0 = func_00154060(1, 0x58);
    D_003E9834 = temp_v0;
    *temp_v0 = 0x3F000000;
    M2C_FIELD(D_003E9834, s32 *, 0x48) = 0xFF;
    M2C_FIELD(D_003E9834, s32 *, 0x4C) = 0;
}
