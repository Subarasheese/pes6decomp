/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
M2C_UNK func_00961940(void *, M2C_UNK);             /* extern */
s32 func_00962320(void *);                          /* extern */
s32 func_009624F0(void *);                          /* extern */
M2C_UNK func_0096D0A0(u16, M2C_UNK);                /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_00BBB780(s64);                             /* extern */
M2C_UNK func_00C04E00(void *, M2C_UNK, s32);        /* extern */
extern char Pes6MatchSquads[];
extern char D_00CB52A0[];

s32 func_00C083B0(void *arg0) {
    M2C_UNK *var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    func_0096D0A0(M2C_FIELD(arg0, u16 *, 0x120), 0);
    if (func_00962320(arg0) != 0) {
        var_a2 = 0;
        var_a1 = ((void *)D_00CB52A0);
loop_2:
        if ((M2C_FIELD(var_a1, u8 *, 0x444) == M2C_FIELD(arg0, u8 *, 0)) && (M2C_FIELD(var_a1, s32 *, 0x43C) == 3)) {
            var_v0 = 1;
        } else {
            var_a2 += 1;
            var_a1 += 0x40;
            if (var_a2 >= 0xA) {
                var_v0 = 0;
            } else {
                goto loop_2;
            }
        }
        if (var_v0 == 0) {
            func_00C04E00(arg0, 2, var_a2);
            return 1;
        }
        goto block_9;
    }
block_9:
    if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) < 0x2000) {
        var_s0 = 1;
    }
    if (func_009624F0(arg0) != 0) {
        if (func_00BBB780((s64) (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7A) & 0x7F, 0x1EU) << 0x30) >> 0x30) != 0) {
            func_00961940(arg0, 4);
            goto block_21;
        }
        goto block_14;
    }
block_14:
    if (var_s0 != 0) {
        func_00961940(arg0, 3);
block_21:
        return 4;
    }
    return 3;
}
