/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDC80(void *, s32);
void *func_00972D30(void *arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_a0 == NULL) {
        return NULL;
    }
    return func_001EDC80(temp_a0, arg1);
}
