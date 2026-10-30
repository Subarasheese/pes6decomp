/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern void * func_001EDC80(void *, s32);
void func_00972D60(void *arg0, s32 arg1, s8 arg2) {
    void *temp_a0;
    void *temp_v0;

    temp_a0 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_a0 != NULL) {
        temp_v0 = func_001EDC80(temp_a0, arg1);
        if (temp_v0 != NULL) {
            func_001EF900(temp_v0, arg2);
        }
    }
}
