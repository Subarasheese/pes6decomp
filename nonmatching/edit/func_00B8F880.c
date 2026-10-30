/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEE60(void *, void *);
extern void * func_001EDC80(void *, s32);
void func_00B8F880(void *arg0, s32 arg1, void *arg2) {
    void *var_a0;

    if (arg0 == NULL) {
        var_a0 = NULL;
    } else {
        var_a0 = M2C_FIELD(arg0, void **, 0xC);
    }
    func_001EEE60(func_001EDC80(var_a0, arg1), arg2);
}
