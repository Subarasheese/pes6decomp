/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s64 func_00288670(u32, u32);
M2C_UNK func_00961940(void *, M2C_UNK, s32, s32);
s32 func_00962320(void *);
s32 func_009624F0(void *);
M2C_UNK func_0096D0A0(void *, u16, s32);
s32 func_009B3070(u16, u16);
s32 func_00BBB780(s64);
M2C_UNK func_00C04E00(void *, M2C_UNK, s32);
extern u8 Pes6MatchSquads[];
extern u8 D_00CB52A0[];

s32 func_00C083B0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *p;
    s32 i;
    s32 found;
    s32 var_s0;
    s64 r;

    var_s0 = 0;
    arg2 = 0;
    func_0096D0A0(arg0, M2C_FIELD(arg0, u16 *, 0x120), 0);
    if (func_00962320(arg0) != 0) {
        found = 0;
        p = D_00CB52A0;
        for (i = 0; i < 0xA; i++) {
            if (p[0x444] == arg0[0] && M2C_FIELD(p, s32 *, 0x43C) == 3) {
                found = 1;
                break;
            }
            p += 0x40;
        }
        arg2 = i;
        if (found == 0) {
            func_00C04E00(arg0, 2, arg2);
            return 1;
        }
    }
    if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) < 0x2000) {
        var_s0 = 1;
    }
    if (func_009624F0(arg0) != 0) {
        arg2 = arg0[0x12] * 105;
        r = func_00288670(Pes6MatchSquads[arg0[0x12] * 0x6900 + arg0[0x11] * 0x348 + 0x7A] & 0x7F, 0x1E);
        if (func_00BBB780((r << 0x30) >> 0x30) != 0) {
            func_00961940(arg0, 4, arg2, arg3);
            return 4;
        }
    }
    if (var_s0 != 0) {
        func_00961940(arg0, 3, arg2, arg3);
        return 4;
    }
    return 3;
}
