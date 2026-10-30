/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00162BD8(void *, s32);
void func_00162C30(void *arg0, s32 arg1) {
    func_00162BD8(arg0, arg1 - M2C_FIELD(arg0, s32 *, 0x898));
}
