/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027B200(void *, s32, s32);
void func_00B4A340(void **arg0, s32 arg1) {
    func_0027B200(*M2C_FIELD(*arg0, void ***, 4), arg1, arg1);
}
