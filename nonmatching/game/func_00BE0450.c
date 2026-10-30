/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BBB990(u16, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(void **, M2C_UNK);            /* extern */

void func_00BE0450(void **arg0) {
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;

    temp_s0 = *arg0;
    M2C_FIELD(temp_s0, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s0, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s0, u16 *, 0x26), 0x800));
    temp_s0_2 = *arg0;
    M2C_FIELD(temp_s0_2, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s0_2, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s0_2, u16 *, 0x26), 0x800));
    if (M2C_FIELD(*arg0, s32 *, 0x1C) < 0x681) {
        func_00BD4040(arg0, 0);
    } else {
        func_00BD4040(arg0, 1);
    }
    temp_v0 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    M2C_FIELD(*arg0, s16 *, 0x18) = 0x8A;
}
