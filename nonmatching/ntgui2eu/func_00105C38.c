/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001059F8(u32, s32, s32, s32);
void func_00105C38(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_001059F8(0x2200002CU, (arg3 << 0x18) + arg0 + ((arg1 << 8) + (arg2 << 0x10)), 0, 0);
}
