/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001191E0(s32, s32, s32, s32);
void func_00100330(void *arg0) {
    func_001191E0((s32) M2C_FIELD(arg0, u8 *, 0), (s32) M2C_FIELD(arg0, u8 *, 1), (s32) M2C_FIELD(arg0, u8 *, 2), (s32) M2C_FIELD(arg0, u8 *, 3));
}
