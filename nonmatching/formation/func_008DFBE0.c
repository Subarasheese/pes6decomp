/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
void func_008DFBE0(void *arg0, s8 arg1) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x4C);
    if (temp_a0 != NULL) {
        func_001EF900(temp_a0, arg1);
    }
}
