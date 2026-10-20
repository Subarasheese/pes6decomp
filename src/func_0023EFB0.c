/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_002F4E10(s32);                         /* extern */
extern s32 D_003E9A38;
extern s32 D_003E9A3C;

void func_0023EFB0(void) {
    if (D_003E9A38 != 0) {
        func_002F4E10(D_003E9A38);
        D_003E9A38 = 0;
        D_003E9A3C = 0;
    }
}
