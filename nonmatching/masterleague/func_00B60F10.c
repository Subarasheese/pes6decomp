/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B61090();                            /* extern */
M2C_UNK func_00B62230();                            /* extern */
extern s32 D_003EAEC8;

void func_00B60F10(void) {
    if (D_003EAEC8 != 0) {
        func_00B61090();
        func_00B62230();
    }
}
