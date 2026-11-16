/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00952420(void *, u16, s32, s32);
s32 func_00952A50(u16);
M2C_UNK func_0096D0A0(void *, u16, s32);
s32 func_009B3070(u16, u16);
M2C_UNK func_00C04AD0(void *, s32);
extern char D_00591BE4[];
extern char D_005926EC[];

s32 func_00C0DB40(void *arg0, void *arg1) {
    s32 v;
    s32 t;
    u16 s0;

    s0 = M2C_FIELD(arg1, u16 *, 0x28);
    func_0096D0A0(arg0, s0, 0);
    v = (s32)M2C_FIELD(arg0, f32 *, 0xE0);
    if (v <= 0) {
        v = -v;
    }
    if (((f32)v < 12569.0f)
        && ((func_009B3070(s0, M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) < 0x2000)
        && ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) > 0x3000)
        && ((func_009B3070(s0, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) > 0x3000)
        && (func_00952420(arg0, s0, 0x2000, 0x240000) == 0)) {
        func_00C04AD0(arg0, 7);
        return 1;
    }
    if ((func_00952A50(s0) & 0xFF) >= 0x60) {
        return 1;
    }
    if (((u32)(*(u8 *)D_00591BE4 >> 1) < M2C_FIELD(arg1, u32 *, 0x10))
        && ((func_00952A50(M2C_FIELD(arg0, u16 *, 0x26)) & 0xFF) >= 0x50)) {
        return 1;
    }
    if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), s0) & 0xFFFF) < 0x800) {
        return 1;
    }
    if (*(u8 *)D_005926EC < M2C_FIELD(arg1, u32 *, 0x10)) {
        t = func_00952A50(s0) & 0xFF;
        if (M2C_FIELD(arg1, u8 *, 0x36) + 0x1E < t) {
            return 1;
        }
    }
    return 3;
}
