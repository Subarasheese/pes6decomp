/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001B9DF0(void);
extern s32 D_003EA8F4;

s32 func_0095F190(void) {
    if (D_003EA8F4 != 1) {
        if (D_003EA8F4 != 0) {
            D_003EA8F4 = 0;
            return 1;
        }
        goto block_7;
    }
    if (func_001B9DF0() != 0) {
        return 0;
    }
    D_003EA8F4 = 0;
block_7:
    return 1;
}
