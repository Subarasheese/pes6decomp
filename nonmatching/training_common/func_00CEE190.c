/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00CEDF00(s32);
extern void func_00264790(void *, u8);
void func_00CEE190(s32 arg0) {
    if (func_00CEDF00(arg0) != 0) {
        func_00264790((void *) arg0, 0x1AU);
    }
}
