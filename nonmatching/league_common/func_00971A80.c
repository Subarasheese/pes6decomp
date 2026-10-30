/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002E4130(void *, void *);
extern void func_002E4500(void *, void *);
void func_00971A80(void **arg0, f32 fparg0, f32 fparg1) {
    f32 sp30;
    f32 sp34;

    if (arg0 != NULL) {
        func_002E4130(*arg0, &sp30);
        sp30 += fparg0;
        sp34 += fparg1;
        func_002E4500(*arg0, &sp30);
    }
}
