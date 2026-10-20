/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00231240();                                /* extern */
extern s32 D_003E77AC;

void func_00238810(void) {
    if (func_00231240() != 1) {
        func_001C48E8(D_003E77AC + 0x7980, 0, 0x655C);
    }
}
