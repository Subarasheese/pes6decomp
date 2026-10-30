/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00952A50(u16);                             /* extern */
M2C_UNK func_0096D0A0(void *, u16, M2C_UNK);        /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
extern char D_005926EC[];

s32 func_00C07510(void *arg0, void *arg1) {
    s32 temp_f0;
    s32 temp_f2;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;
    u16 var_s2;
    u8 temp_v1;

    temp_f2 = (s32) (M2C_FIELD(arg0, f32 *, 0xE0) - (f32) M2C_FIELD(arg1, s16 *, 4));
    temp_f0 = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) - (f32) M2C_FIELD(arg1, s16 *, 6));
    temp_s1 = (temp_f2 * temp_f2) + (temp_f0 * temp_f0);
    if (M2C_FIELD(arg1, u8 *, 0x29) != 0) {
        var_s2 = M2C_FIELD(arg1, u16 *, 0x2A);
    } else {
        M2C_FIELD(arg1, u8 *, 0x29) = 1U;
        if (M2C_FIELD(arg0, u8 *, 0x13) != 0) {
            if (!(M2C_FIELD(arg0, f32 *, 0xE8) < 0.0f)) {
                var_v0 = M2C_FIELD(arg0, u16 *, 0x26) - 0x4000;
            } else {
                var_v0 = M2C_FIELD(arg0, u16 *, 0x26) + 0x4000;
            }
        } else if (!(M2C_FIELD(arg0, f32 *, 0xE8) < 0.0f)) {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x26) + 0x4000;
        } else {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x26) - 0x4000;
        }
        var_s2 = var_v0 & 0xFFFF;
        if ((func_00952A50(var_s2) & 0xFF) >= 0x50) {
            temp_s0 = func_00952A50(var_s2) & 0xFF;
            if ((func_00952A50(((var_s2 & 0xFFFF) + 0x7FFF + 1) & 0xFFFF) & 0xFF) < temp_s0) {
                var_s2 = (var_s2 + 0x7FFF + 1) & 0xFFFF;
            }
        }
        M2C_FIELD(arg1, u16 *, 0x2A) = var_s2;
    }
    if ((u8) (*(u8 *)D_005926EC) < (u32) M2C_FIELD(arg1, u32 *, 0x10)) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
        if ((temp_v1 != 2) && (temp_v1 != 0x19)) {
            goto block_26;
        }
        return 1;
    }
block_26:
    func_0096D0A0(arg0, var_s2, 0);
    M2C_FIELD(arg0, s32 *, 0x1EC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1EC) | 0x200);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(arg0, s32 *, 0x1EC);
    if (temp_s1 >= 0x24001) {
        goto block_27;
    }
    if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), var_s2) & 0xFFFF) >= 0x800) {
        return 3;
    }
block_27:
    return 1;
}
