/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0096DB90(M2C_UNK);                         /* extern */
extern s32 D_003E9FD0;

void func_00360A70(void) {
    s32 temp_v0;

    if (D_003E9FD0 == 0) {
        temp_v0 = func_0096DB90(4);
        D_003E9FD0 = temp_v0;
        func_001C48E8(temp_v0, 0, 4);
    }
}
