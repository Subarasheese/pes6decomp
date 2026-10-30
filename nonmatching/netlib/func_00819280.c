/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_00819460(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, s64, s64, s64, s64); /* extern */
extern f32 D_003E7384;

void func_00819280(s32 arg0, s32 arg1) {
    func_00819460(0, func_001F08B0(arg0), 0, 0, arg1, 0, 1, 1, 0x40800000, 0x41000000, 0x40800000, D_003E7384, 2, 1, 0, 0);
}
