/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009B7C90(void);
M2C_UNK func_00972040(s32, s64, s64);               /* extern */
M2C_UNK func_009720E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009721F0(s32, f32 *, s8);              /* extern */

void func_009B5940(s64 arg0) {
    f32 sp30;
    f32 sp34;
    s64 temp_a1;
    s8 temp_a2;
    u32 temp_v0;

    temp_v0 = func_009B7C90();
    if (temp_v0 != 0) {
        func_009720E0(M2C_FIELD(temp_v0, s32 *, 0x228), 1);
        temp_a1 = (s64) (arg0 << 0x38) >> 0x38;
        func_00972040(M2C_FIELD(temp_v0, s32 *, 0x228), temp_a1, temp_a1);
        temp_a2 = M2C_FIELD(temp_v0, s8 *, 0x22C);
        sp30 = (f32) (temp_a2 % 10) * M2C_FIELD(temp_v0, f32 *, 0x220);
        sp34 = (f32) ((M2C_FIELD(temp_v0, s8 *, 0x22C) / 10) + ((u32) temp_a2 >> 0x1F)) * M2C_FIELD(temp_v0, f32 *, 0x224);
        func_009721F0(M2C_FIELD(temp_v0, s32 *, 0x228), &sp30, temp_a2);
    }
}
