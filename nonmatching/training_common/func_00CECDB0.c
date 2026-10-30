/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264500(s32);
extern s32 D_003EB310;

void func_00CECDB0(void) {
    if (D_003EB310 != 0) {
        D_003EB310 = 0;
        func_00264500(0);
    }
}
