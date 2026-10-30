/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC2B0(void);
extern void func_00153FA0(void *);
extern void *D_003AE9D4;

s32 func_00C75FA0(void) {
    func_001BC2B0();
    func_00153FA0(D_003AE9D4);
    D_003AE9D4 = NULL;
    return 0;
}
