/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0011910C(f32, f32);
void func_001002A0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg1 - 2;
    func_0011910C((f32) ((s32) ((arg0 < 0) ? (arg0 + 0xF) : arg0) >> 4), (f32) ((s32) ((temp_v0 < 0) ? (arg1 + 0xD) : temp_v0) >> 4));
}
