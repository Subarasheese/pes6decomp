/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00874460(void *);
extern void func_00874470(void *);
extern s32 func_00873FD0(void *, void *);
s32 func_00875800(s32 *arg0, void *arg1) {
    s32 temp_s0;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x9105) {
            return -0x46;
        }
        func_00874470(arg0);
        temp_s0 = func_00873FD0(arg0, arg1);
        func_00874460(arg0);
        return (temp_s0 == 0) ? 0 : -0x47;
    }
    return -0x18;
}
