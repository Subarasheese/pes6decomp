/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7CE0(void *, void *);
extern void func_001D7BE0(void *, void *);
void func_00973BF0(void *arg0, void *arg1, f32 fparg0, f32 fparg1) {
    f32 sp40;
    f32 sp44;

    if (arg0 != NULL) {
        func_001D7BE0(arg0, &sp40);
        sp40 = M2C_FIELD(arg1, f32 *, 0) + fparg0;
        sp44 = M2C_FIELD(arg1, f32 *, 4) + fparg1;
        func_001D7CE0(arg0, &sp40);
    }
}
