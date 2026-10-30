/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B2610();                            /* extern */
M2C_UNK func_009B2960();                            /* extern */
extern s32 D_003EA9A0;

void func_009A9870(void) {
    if (D_003EA9A0 != 0) {
        func_009B2960();
        func_009B2610();
    }
}
