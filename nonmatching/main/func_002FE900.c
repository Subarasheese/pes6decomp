/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00305E60(void *, int);
s32 func_00BD9770();                                /* extern */
extern M2C_UNK func_002FE8B0;

s32 func_002FE900(void *arg0) {
    if (func_00BD9770() == 0) {
        return 0;
    }
    func_00305E60(arg0, (s32) &func_002FE8B0);
    return 1;
}
