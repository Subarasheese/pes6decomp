/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_009B33A0(void *, s32, s32);
extern s32 func_009B30B0(s32, s32);
s32 func_0099DFF0(void *);
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_00591E7C[];
extern char D_005926E6[];
extern char Pes6MatchSquads[];

s32 func_00A9EC60(void *arg0) {
    u32 s0;
    s32 s1;
    s32 q;
    void *p;

    if (*(u8 *)D_00591E4C != 0 && M2C_FIELD(arg0, u8 *, 0) != *(u8 *)D_00591E4C) {
        return 0x80;
    }
    if (M2C_FIELD(arg0, u8 *, 0x41) != 0) {
        return 0x80;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) == 0x39A) {
        return 0x80;
    }
    p = (char *)Pes6Ball_Current + *(u8 *)D_005926E6 * 4;
    s0 = func_009B33A0(arg0, (s32) M2C_FIELD(p, f32 *, 0x47C), (s32) M2C_FIELD(p, f32 *, 0xB7C));
    s1 = func_0099DFF0(arg0) & 0xFFFF;
    if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x1000 && s0 < 0x14401U) {
        q = (M2C_FIELD(Pes6MatchSquads + M2C_FIELD(arg0, u8 *, 0x12) * 0x6900 + M2C_FIELD(arg0, u8 *, 0x11) * 0x348, u8 *, 0x8C) >> 2) + 0x94;
        if (M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) < (f32) ((q * -96) / 183)
            && *(s32 *)D_00591E7C != 0
            && (func_009B30B0(s1, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) >= 0x40) {
            return 0xFF;
        }
    }
    if (s0 >= 0x40001U) {
        return 0xFF;
    }
    if (*(u8 *)D_00591E4C != 0) {
        return 0x80;
    }
    if ((func_009B30B0(s1, M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) > 0x30) {
        return 0x80;
    }
    return 0xFF;
}
