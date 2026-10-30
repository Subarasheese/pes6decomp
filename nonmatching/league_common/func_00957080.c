/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDC80(void *, s32);
M2C_UNK func_00956D80(void *, s32, s32, s32);       /* extern */

void func_00957080(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    if (arg0 != NULL) {
        temp_v0 = func_001EDC80(arg0, 0);
        if (temp_v0 != NULL) {
            func_00956D80(temp_v0, arg1, arg2, arg3);
        }
    }
}
