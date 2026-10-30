/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B299E0();                            /* extern */
M2C_UNK func_00B2A120();                            /* extern */
extern s32 D_003EAE30;

void func_00B2A260(void) {
    if (D_003EAE30 != 0) {
        func_00B299E0();
        func_00B2A120();
    }
}
