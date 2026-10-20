/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001F1EA0(s32);                         /* extern */
extern s32 D_003E9A30;

void func_0023AFF0(void) {
    if (D_003E9A30 != 0) {
        func_001F1EA0(D_003E9A30);
        D_003E9A30 = 0;
    }
}
