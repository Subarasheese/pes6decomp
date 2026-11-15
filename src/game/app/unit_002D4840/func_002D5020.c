/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00362AF0();                            /* extern */
M2C_UNK Pes6Keyboard_Acquire();                            /* extern */
extern s32 D_003E9D94;

void func_002D5020(void) {
    func_00362AF0();
    if (D_003E9D94 != 0) {
        Pes6Keyboard_Acquire();
    }
    D_003E9D94 = 0;
}
