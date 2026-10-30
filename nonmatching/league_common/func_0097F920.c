/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F3C80(void *, f32);
extern f32 func_001D79A0(void *, u16);
void func_0097F920(void *arg0, void *arg1, u16 arg2) {
    func_001F3C80(arg0, func_001D79A0(arg1, arg2) - 12400.0f);
}
