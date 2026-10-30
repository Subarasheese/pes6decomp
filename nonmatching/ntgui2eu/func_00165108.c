/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016B068(s32, void *, s32);
void func_00165108(void *arg0, s32 arg1) {
    func_0016B068(arg1, (void *) arg1, M2C_FIELD(arg0, s32 *, 0x68));
}
