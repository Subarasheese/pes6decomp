/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

M2C_UNK FlushCache(M2C_UNK);                     /* extern */
M2C_UNK func_00142630();                            /* extern */
extern s32 D_003E9800;
extern s32 D_003E9804;

void func_001427D0(void) {
    if (D_003E9800 != 0) {
        D_003E9800 = 0;
        if (D_003E9804 != 0) {
            FlushCache(0);
        }
        func_00142630();
    }
}
