/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001990A8(void *, void *);
void func_001995A0(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    func_001990A8(arg0, arg1);
    func_001990A8(arg0 + 0x10, arg2);
    func_001990A8(arg0 + 0x20, arg3);
    func_001990A8(arg0 + 0x30, arg4);
}
