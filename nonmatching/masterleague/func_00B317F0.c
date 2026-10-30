/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B310D0();                            /* extern */
M2C_UNK func_00B31670();                            /* extern */
extern s32 D_003EAE3C;

void func_00B317F0(void) {
    if (D_003EAE3C != 0) {
        func_00B310D0();
        func_00B31670();
    }
}
