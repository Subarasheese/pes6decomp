/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF4F0(void *, s8);
void func_00971B50(void *arg0, s8 arg1) {
    void *temp_v1;

    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, void **, 8);
        if (temp_v1 != NULL) {
            func_001DF4F0(M2C_FIELD(temp_v1, void **, 0xC), arg1);
        }
    }
}
