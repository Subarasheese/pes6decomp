/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
void func_00AEE070(void *arg0, s32 arg1) {
    void *temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 8);
        if ((temp_a0 != NULL) && (arg1 != 0)) {
            func_001DF820(temp_a0, arg1);
        }
    }
}
