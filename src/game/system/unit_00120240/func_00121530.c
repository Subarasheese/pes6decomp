/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00101EF8(M2C_UNK);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);
extern s32 D_003E9788;

void func_00121530(void) {
    func_001C48E8((s32)&D_003E9788, 0, 4);
    D_003E9788 = func_00101EF8(2);
}
