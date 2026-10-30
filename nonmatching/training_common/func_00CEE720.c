/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern s32 func_002640F0(s32, s32);
void func_00CEE720(s32 arg0) {
    if (func_002640F0(arg0, 0x11) != 0) {
        func_00264790((void *) arg0, 2U);
    }
}
