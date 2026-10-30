/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_008183F0(s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, s64, s64, s64, s64, s64, s64); /* extern */
extern f32 D_003E7384;

void func_00817AD0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = func_001F08B0(arg0);
    temp_s0 = func_001F08B0(0x6C0006);
    func_008183F0(temp_s1, temp_s0, func_001F08B0(0x6C0007), 0, 0, 1, 0, 0, 0x40800000, 0x41000000, 0x40800000, D_003E7384, 1, 1, 0, 0, 0, 1);
}
