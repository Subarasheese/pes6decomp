/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001864B0(s32);
extern s32 D_003EA8B0;

void func_00C93230(s32 arg0) {
    if ((D_003EA8B0 != 0) && (arg0 == 0)) {
        func_001864B0(arg0);
    }
}
