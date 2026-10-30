/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001E5E20(void *);
extern void func_001F3C80(void *, f32);
extern void func_001E5980(void);
M2C_UNK func_001E5C50(void *, s16 *);               /* extern */

s32 func_001F1530(void *arg0, void *arg1) {
    s16 sp38;
    s16 sp3A;
    s16 sp3C;
    s16 sp3E;
    s64 temp_a0;
    s64 temp_v1;

    if ((M2C_FIELD(arg0, u8 *, 0x55) & 1) && (M2C_FIELD(arg0, u8 *, 1) & 1)) {
        if (M2C_FIELD(arg0, u8 *, 0x54) == 0) {
            temp_a0 = (s64) ((s64) (s32) M2C_FIELD(arg1, f32 *, 4) << 0x30) >> 0x30;
            temp_v1 = (s64) ((s64) (s32) M2C_FIELD(arg1, f32 *, 0) << 0x30) >> 0x30;
            sp38 = M2C_FIELD(arg0, s16 *, 0x4C) + temp_v1;
            sp3A = M2C_FIELD(arg0, s16 *, 0x4E) + temp_a0;
            sp3C = M2C_FIELD(arg0, s16 *, 0x50) + temp_v1;
            sp3E = M2C_FIELD(arg0, s16 *, 0x52) + temp_a0;
            func_001E5C50(M2C_FIELD(arg0, void **, 0x48), &sp38);
        } else {
            func_001E5E20(M2C_FIELD(arg0, void **, 0x48));
        }
    }
    M2C_FIELD(arg0, u8 *, 1) = 0U;
    func_001F3C80(arg0, M2C_FIELD(arg1, f32 *, 8));
    func_001E5980();
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), void **, 0x34), s32 *, 0x18);
}
