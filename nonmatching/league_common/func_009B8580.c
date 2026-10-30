/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B8310();                            /* extern */
M2C_UNK func_009B8700();                            /* extern */
extern s32 D_003EA9BC;

void func_009B8580(void) {
    if (D_003EA9BC != 0) {
        func_009B8700();
        func_009B8310();
    }
}
