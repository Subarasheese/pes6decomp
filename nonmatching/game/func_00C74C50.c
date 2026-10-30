/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7CE0(void *, void *);
extern void func_001D7BE0(void *, void *);
void func_00C74C50(void *arg0, f32 fparg0, f32 fparg1) {
    f32 sp30;
    f32 sp34;

    func_001D7BE0(arg0, &sp30);
    sp30 += fparg0;
    sp34 += fparg1;
    func_001D7CE0(arg0, &sp30);
}
