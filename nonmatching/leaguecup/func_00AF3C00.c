/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00AF3910();                            /* extern */
M2C_UNK func_00AF41B0();                            /* extern */
extern s32 D_003EAD48;

void func_00AF3C00(void) {
    if (D_003EAD48 != 0) {
        func_00AF3910();
        func_00AF41B0();
    }
}
