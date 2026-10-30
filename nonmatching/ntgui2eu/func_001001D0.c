/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00119144(f32);
extern void func_00119180(f32);
extern s32 func_00119548(void);
s32 func_0011931C(s32);                             /* extern */
extern f32 D_0060200C;
extern s32 D_00602010;

s32 func_001001D0(s32 arg0, s32 arg1, void *arg2, f32 fparg0) {
    if (D_0060200C != fparg0) {
        func_00119180(fparg0);
        D_0060200C = fparg0;
    }
    if (D_00602010 != arg0) {
        func_00119144((f32) ((s32) ((arg0 < 0) ? (arg0 + 0xF) : arg0) >> 4));
        D_00602010 = arg0;
    }
    M2C_FIELD(arg2, s32 *, 8) = 0;
    M2C_FIELD(arg2, s32 *, 0) = 0;
    M2C_FIELD(arg2, f32 *, 0xC) = (f32) ((f32) func_0011931C(arg1) * 16.0f);
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((f32) func_00119548() * 16.0f);
    return 0;
}
