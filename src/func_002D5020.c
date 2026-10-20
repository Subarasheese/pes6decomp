/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00362AF0();                            /* extern */
M2C_UNK func_00363C40();                            /* extern */
extern s32 D_003E9D94;

void func_002D5020(void) {
    func_00362AF0();
    if (D_003E9D94 != 0) {
        func_00363C40();
    }
    D_003E9D94 = 0;
}
