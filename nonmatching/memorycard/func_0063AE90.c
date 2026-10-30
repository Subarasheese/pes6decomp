/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001D6820(s32, s32);
extern s32 func_001D7820(void *);
extern void func_001ED840(void *, s8);
s32 func_0063AE90(s32 arg0, void **arg1, s32 arg2) {
    s32 var_v0;
    void *temp_s0;
    void *temp_v0;

    var_v0 = 0;
    if ((arg0 != 0) && (arg1 != NULL) && (*arg1 == NULL)) {
        temp_v0 = func_001D6820(arg0, arg2);
        *arg1 = temp_v0;
        temp_s0 = M2C_FIELD(temp_v0, void **, 0xC);
        func_001ED840(temp_s0, func_001D7820((void *) arg0));
        var_v0 = 1;
    }
    return var_v0;
}
