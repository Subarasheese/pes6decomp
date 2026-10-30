/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0029A000(s32);
M2C_UNK func_0027B270(s32, M2C_UNK);                /* extern */
extern s32 *D_00CBD7B0;

s32 func_00BF8C10(void) {
    if (D_00CBD7B0 != NULL) {
        func_0027B270(*D_00CBD7B0, 0x8CB4);
        func_0029A000(0);
    }
    return 1;
}
