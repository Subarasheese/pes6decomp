/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF860(void *, void *);
M2C_UNK func_001EE5D0(f32 *);                       /* extern */

void func_0063AF40(void *arg0, f32 fparg0, f32 fparg1) {
    f32 sp30;
    f32 sp34;

    if (arg0 != NULL) {
        func_001EE5D0(&sp30);
        sp30 = fparg0;
        sp34 = fparg1;
        func_001EF860(arg0, &sp30);
    }
}
