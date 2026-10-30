/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A00(void);
void func_009949A0(void) {
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_v0 = func_00228A00();
    if (temp_v0 != NULL) {
        *temp_v0 = (*temp_v0 & ~1) | (0 & 1);
    }
    temp_v0_2 = func_00228A00();
    if (temp_v0_2 != NULL) {
        *temp_v0_2 = (*temp_v0_2 & ~2) | ((0 & 1) * 2);
    }
}
