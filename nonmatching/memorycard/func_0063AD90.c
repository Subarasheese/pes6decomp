/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DEF30(void *, s8);
extern s32 func_001D6E70(s32, s32, s32);
extern s32 func_001D7820(void *);
s32 func_0063AD90(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_v0;
    void *temp_s0;

    var_v0 = 0;
    if ((arg0 != 0) && (arg1 != NULL) && (*arg1 == 0)) {
        temp_v0 = func_001D6E70(arg0, arg2, arg3);
        *arg1 = temp_v0;
        temp_s0 = M2C_FIELD(temp_v0, void **, 0xC);
        func_001DEF30(temp_s0, func_001D7820((void *) arg0));
        var_v0 = 1;
    }
    return var_v0;
}
