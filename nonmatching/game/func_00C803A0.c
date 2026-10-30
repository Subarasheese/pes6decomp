/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5630(void *, s32);
extern char D_00CCC19C[];

void func_00C803A0(void) {
    func_002D5630(((void *)D_00CCC19C), 1);
}
