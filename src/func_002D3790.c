/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0026DB40(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_0026E0E0(M2C_UNK);                     /* extern */
extern s32 D_003E9D74;

void func_002D3790(void *arg0) {
    s32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x44);
    D_003E9D74 = temp_a2;
    func_0026DB40(0x64, 0, temp_a2);
    func_0026E0E0(0x64);
}
