/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
extern s32 func_001E6C50(void *);
void func_00C186B0(void) {
    void *temp_v0;

    temp_v0 = func_001E6E10(0x740A);
    if (temp_v0 != NULL) {
        func_001E6C50(temp_v0);
    }
}
