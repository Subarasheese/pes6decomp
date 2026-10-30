/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF860(void *, void *);
extern void * func_001EDD00(void *);
s32 func_0063AFA0(void *arg0, void **arg1, f32 fparg0, f32 fparg1) {
    f32 sp30;
    f32 sp34;
    s32 sp38;
    s32 sp3C;

    if ((arg0 != NULL) && (*arg1 == NULL)) {
        *arg1 = func_001EDD00(arg0);
        sp30 = fparg0;
        sp3C = 0;
        sp34 = fparg1;
        sp38 = 0;
        func_001EF860(*arg1, &sp30);
        return 1;
    }
    return 0;
}
