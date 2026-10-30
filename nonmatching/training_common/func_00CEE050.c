/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern u8 func_002645A0(void *, s32);
void func_00CEE050(void *arg0) {
    func_00264790(arg0, func_002645A0(arg0, 1));
}
