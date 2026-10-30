/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDAE0(void *, s8);
extern void func_001EDA30(void *, s32);
void *func_001EE0D0();                              /* extern */

s32 func_00B902A0(void **arg0, s32 arg1) {
    void *temp_v0;

    if (*arg0 == NULL) {
        temp_v0 = func_001EE0D0();
        *arg0 = temp_v0;
        func_001EDA30(temp_v0, arg1);
        func_001EDAE0(*arg0, 1);
        return 1;
    }
    return 0;
}
