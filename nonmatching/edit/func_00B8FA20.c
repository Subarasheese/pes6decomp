/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF460(void *, void *);
M2C_UNK func_001DED80(void *, s32, void *);         /* extern */

void func_00B8FA20(void *arg0, s32 arg1, void *arg2) {
    void *var_a0;
    void *var_a0_2;

    if (arg0 == NULL) {
        var_a0 = NULL;
    } else {
        var_a0 = M2C_FIELD(arg0, void **, 0xC);
    }
    func_001DF460(var_a0, arg2);
    if (arg0 != NULL) {
        var_a0_2 = M2C_FIELD(arg0, void **, 0xC);
    } else {
        var_a0_2 = NULL;
    }
    func_001DED80(var_a0_2, arg1, arg2);
}
