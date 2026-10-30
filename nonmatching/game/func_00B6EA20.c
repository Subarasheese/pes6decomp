/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern void func_00207BE0(void *);
extern s32 func_00207D80(void *, s32);
s64 func_009B33A0(void *, s32, s32);                /* extern */
M2C_UNK func_00AA5D20(void *, M2C_UNK, f32, f32);   /* extern */
M2C_UNK func_00BD4040(void **, M2C_UNK);            /* extern */

void func_00B6EA20(void **arg0) {
    u32 temp_v0;
    u64 temp_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;

    temp_a0 = *arg0;
    func_00AA5D20(temp_a0, 0x2C0, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70));
    func_00207BE0(M2C_FIELD(*arg0, void **, 4));
    temp_a0_2 = *arg0;
    temp_s1 = (u64) (func_009B33A0(temp_a0_2, (s32) M2C_FIELD(temp_a0_2, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0_2, f32 *, 0x70)) << 0x20) >> 0x20;
    temp_v0 = func_00208310(0x2C0);
    if (temp_s1 < 0x310001U) {
        if (func_00207D80(M2C_FIELD(*arg0, void **, 4), (M2C_FIELD(temp_v0, u8 *, 1) * 2) + 1) != 0) {
            M2C_FIELD(*arg0, s16 *, 0x18) = 2;
            func_00BD4040(arg0, 1);
            return;
        }
        goto block_3;
    }
block_3:
    temp_a1 = *arg0;
    if (M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u16 *, 0x30) == 0x38C) {
        M2C_FIELD(temp_a1, s8 *, 0x62) = 0;
    }
}
