/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B32D0(s32, s32, s32);
s32 func_00BBB9C0(s32, M2C_UNK);                    /* extern */
extern void *Pes6Ball_Current;

s32 func_00B04540(void *arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    var_v0_2 = (s32) (M2C_FIELD(Pes6Ball_Current, f32 *, 0xB7C) + (f32) func_00BBB9C0(arg1, 0x300));
    if (var_v0_2 <= 0) {
        var_v0_2 = -var_v0_2;
    }
    if ((f32) var_v0_2 < 8729.0f) {
        var_v0_3 = (s32) (M2C_FIELD(Pes6Ball_Current, f32 *, 0xB7C) + (f32) func_00BBB9C0(arg1, 0x500));
        if (var_v0_3 <= 0) {
            var_v0_3 = -var_v0_3;
        }
        if (!((f32) var_v0_3 < 8729.0f)) {
            var_v0 = func_009B32D0((M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) * 0x4800)) & 0xFFFF, arg1, 0x1000);
            goto block_13;
        }
        return arg1;
    }
    var_v0 = func_009B32D0((M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) * 0x4800)) & 0xFFFF, arg1, 0x4000);
block_13:
    return var_v0 & 0xFFFF;
}
