/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001D4E00(s32);                         /* extern */
extern s32 D_003EA03C;

void func_003656B0(void) {
    if (D_003EA03C != 0) {
        func_001D4E00(D_003EA03C);
        D_003EA03C = 0;
    }
}
