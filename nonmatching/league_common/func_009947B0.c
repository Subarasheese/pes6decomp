/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A00(void);
void func_009947B0(s32 arg0) {
    u8 *temp_v0;

    temp_v0 = func_00228A00();
    if (temp_v0 != NULL) {
        *temp_v0 = (*temp_v0 & ~0x30) | ((arg0 & 3) * 0x10);
    }
}
