/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7BE0(void *, void *);
extern void func_001D7CE0(void *, void *);
s32 func_0081D770(void *arg0, void *arg1) {
    f32 sp30;
    f32 sp34;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 != NULL) {
        func_001D7BE0(arg0, &sp30);
        sp30 = M2C_FIELD(arg1, f32 *, 0);
        sp34 = M2C_FIELD(arg1, f32 *, 4);
        func_001D7CE0(arg0, &sp30);
        return 1;
    }
    return 0;
}
