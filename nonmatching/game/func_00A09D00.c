/* compiler: mwcc-3.0.1b151 */
/* Repaired: func_00B046A0 gets the angle at +0x26 from before it is replaced, the second argument is
 * passed as the full register, and +0x20 is a plain signed division by 190. */
#include "pes6/m2c.h"

void func_00207390(void *, s32);
void func_00209A00(void *, s32, s32);
s32 func_009B3070(u16, s32);
s32 func_009B30B0(u16, s32);
void func_00B046A0(void *, s32, u16, s32);

s32 func_00A09D00(void *arg0, s32 arg1, s32 arg2) {
    s32 diff;
    u16 old;
    u16 kind;
    void *obj;

    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), arg2) & 0xFFFF) < 0x50) {
        return 0;
    }
    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), arg2) & 0xFFFF) >= 0x31) {
        return 0;
    }
    kind = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    if (kind == 0x114 || kind == 0x13 || M2C_FIELD(arg0, s32 *, 0x1C) < 0xC01) {
        return 0;
    }
    diff = func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), arg2) & 0xFFFF;
    func_00209A00(M2C_FIELD(arg0, void **, 4), 3, 0);
    obj = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(obj, f32 *, 0x28) = M2C_FIELD(obj, f32 *, 0x28) * 1.2f;
    func_00207390(M2C_FIELD(arg0, void **, 4), 6);
    old = M2C_FIELD(arg0, u16 *, 0x26);
    if ((diff & 0xFFFF) < 0x7000) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = (s32) ((((arg2 & 0xFFFF) - old) + 0x10000) & 0xFFFF) < 0x8001;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = (s32) ((((arg1 & 0xFFFF) - old) + 0x10000) & 0xFFFF) < 0x8001;
    }
    M2C_FIELD(arg0, u16 *, 0x26) = (arg2 & 0xFFFF) + 0x8000;
    func_00B046A0(arg0, arg2, old, 0x8000);
    M2C_FIELD(arg0, s32 *, 0x20) = (M2C_FIELD(arg0, s32 *, 0x1C) << 8) / 190;
    M2C_FIELD(arg0, s16 *, 0x34) = arg2;
    M2C_FIELD(arg0, u16 *, 0x42) = M2C_FIELD(arg0, u16 *, 0x28);
    return 1;
}
