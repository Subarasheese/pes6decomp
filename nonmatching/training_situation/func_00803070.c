/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern void *D_00CFF0B8;
extern void *D_00CFF0BC;

void func_00803070(s32 arg0, s32 arg1) {
    void *var_a0;
    void *var_a0_2;

    if (D_00CFF0B8 != NULL) {
        var_a0 = M2C_FIELD(D_00CFF0B8, void **, 0xC);
    } else {
        var_a0 = NULL;
    }
    func_001DF820(var_a0, arg1);
    if (D_00CFF0BC == NULL) {
        var_a0_2 = NULL;
    } else {
        var_a0_2 = M2C_FIELD(D_00CFF0BC, void **, 0xC);
    }
    func_001DF820(var_a0_2, arg0);
}
