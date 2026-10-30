/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B0EE60();                            /* extern */
M2C_UNK func_00B10910();                            /* extern */
extern s32 D_003EAD68;

void func_00B0D1D0(void) {
    if (D_003EAD68 != 0) {
        func_00B10910();
        func_00B0EE60();
    }
}
