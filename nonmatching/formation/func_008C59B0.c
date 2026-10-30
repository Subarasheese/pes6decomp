/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
void func_008C59B0(void *arg0, s32 arg1) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 8);
    if (temp_v1 != NULL) {
        func_001DF820(M2C_FIELD(temp_v1, void **, 0xC), arg1);
    }
}
