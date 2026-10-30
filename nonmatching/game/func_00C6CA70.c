/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5630(void *, s32);
extern s32 D_003EA80C;
extern char D_00CCBB68[];

void func_00C6CA70(void) {
    if (D_003EA80C != 0) {
        func_002D5630(((void *)D_00CCBB68), 1);
    }
}
