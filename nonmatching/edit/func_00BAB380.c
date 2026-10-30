/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B91590(s32, s8);
extern char D_00CE47EC[];

void func_00BAB380(s8 arg0) {
    (*(s8 *)D_00CE47EC) = arg0;
    func_00B91590((s32) arg0, 1);
}
