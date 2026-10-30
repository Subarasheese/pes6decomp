/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B0BB10();                            /* extern */
M2C_UNK func_00B0BC40();                            /* extern */
extern s32 D_003EAD64;

void func_00B0BFA0(void) {
    if (D_003EAD64 != 0) {
        func_00B0BB10();
        func_00B0BC40();
    }
}
