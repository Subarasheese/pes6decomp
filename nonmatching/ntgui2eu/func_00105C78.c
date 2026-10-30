/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001059F8(u32, s32, s32, s32);
void func_00105C78(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_001059F8(0x22000031U, (arg0 << 0x18) + arg3 + ((arg2 << 8) + (arg1 << 0x10)), 0, 0);
}
