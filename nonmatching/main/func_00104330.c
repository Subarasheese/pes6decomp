/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00103E38(void *, void *);
void func_00104330(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    func_00103E38(arg0, arg1);
    func_00103E38(arg0 + 0x10, arg2);
    func_00103E38(arg0 + 0x20, arg3);
    func_00103E38(arg0 + 0x30, arg4);
}
