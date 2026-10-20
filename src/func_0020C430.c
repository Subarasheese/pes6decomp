/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0020A540(s32);                         /* extern */
extern s32 D_003E99E8;

void func_0020C430(void) {
    if (D_003E99E8 != 0) {
        func_0020A540(D_003E99E8);
        D_003E99E8 = 0;
    }
}
