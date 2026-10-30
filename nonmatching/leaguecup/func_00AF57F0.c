/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AF59E0();                            /* extern */
M2C_UNK func_00AF5F80();                            /* extern */
extern s32 D_003EAD4C;

void func_00AF57F0(void) {
    if (D_003EAD4C != 0) {
        func_00AF5F80();
        func_00AF59E0();
    }
}
