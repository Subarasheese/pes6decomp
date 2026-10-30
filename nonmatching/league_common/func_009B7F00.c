/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B62D0();                            /* extern */
M2C_UNK func_009B7140();                            /* extern */
extern s32 D_003EA9B0;

void func_009B7F00(void) {
    if (D_003EA9B0 != 0) {
        func_009B62D0();
        func_009B7140();
    }
}
