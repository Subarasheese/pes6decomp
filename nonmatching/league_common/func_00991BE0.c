/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00991240();                            /* extern */
M2C_UNK func_009918B0();                            /* extern */
extern s32 D_003EA97C;

void func_00991BE0(void) {
    if (D_003EA97C != 0) {
        func_00991240();
        func_009918B0();
    }
}
