/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009A5690();                            /* extern */
M2C_UNK func_009A5E90();                            /* extern */
extern s32 D_003EA998;

void func_009A8580(void) {
    if (D_003EA998 != 0) {
        func_009A5690();
        func_009A5E90();
    }
}
