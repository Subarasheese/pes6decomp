/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B5100();                            /* extern */
M2C_UNK func_009B5880();                            /* extern */
extern s32 D_003EA9B8;

void func_009B80C0(void) {
    if (D_003EA9B8 != 0) {
        func_009B5100();
        func_009B5880();
    }
}
