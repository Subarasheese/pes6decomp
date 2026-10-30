/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void func_0026AEC0(void);
extern void *D_003AE9D0;

s32 func_00900E40(void) {
    func_0026AEC0();
    func_00153FA0(D_003AE9D0);
    D_003AE9D0 = NULL;
    return 1;
}
