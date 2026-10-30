/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009AD820();                            /* extern */
M2C_UNK func_009ADA30();                            /* extern */
extern s32 D_003EA9A8;

void func_009AF4C0(void) {
    if (D_003EA9A8 != 0) {
        func_009ADA30();
        func_009AD820();
    }
}
