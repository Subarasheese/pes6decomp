/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001059F8(u32, s32, s32, s32);
void func_00105B58(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    func_001059F8(0x22000009U, ((arg1 >= 0x80U) ? 0x7FU : arg1) | (arg0 << 8) | ((arg2 & 0xFF) << 0x10) | (arg3 << 0x18), 0, 0);
}
