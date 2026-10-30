/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B2AF90();                            /* extern */
M2C_UNK func_00B2B7C0();                            /* extern */
extern s32 D_003EAD98;

void func_00B2C270(void) {
    if (D_003EAD98 != 0) {
        func_00B2AF90();
        func_00B2B7C0();
    }
}
