/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_009B30B0(s32, s32);
extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_00591E4C[];
extern char D_005926D8[];
extern char D_005926F4[];
extern char Pes6MatchSquads[];

s32 func_00C41920(void *arg0, s32 arg1) {
    char *a = (char *)arg0;
    char *b;
    u32 sq;
    s32 t;
    u8 id;
    f32 f;

    sq = *(u8 *)(Pes6MatchSquads + *(u8 *)(a + 0x12) * 0x6900 + *(u8 *)(a + 0x11) * 0x348 + 0x8C);
    t = (s32)((sq >> 2) + 0x94) * -0x1DC;
    if ((*(s32 *)(a + 0x98) < t / 180) && (arg1 < 0x10000)) {
        if ((func_009B30B0(*(u16 *)(a + 0x26), *(u16 *)(a + 0x28)) & 0xFFFF) >= 0x11) {
            return 0;
        }
        if (!((0x1700 - *(u8 *)(a + 0x5C) * 12) < *(s32 *)(a + 0x1C))) {
            return 0;
        }
    }
    b = (char *)Pes6Ball_Current;
    if (*(s32 *)(b + 0x50) >= 0x2001) {
        if ((func_009B30B0(*(u16 *)(a + 0x2C), *(u16 *)(b + 0x58)) & 0xFFFF) < 0x61) {
            return 0;
        }
    }
    if ((func_009B30B0(*(u16 *)(a + 0x2C), *(u16 *)(a + 0x28)) & 0xFFFF) >= 0x11) {
        return 0;
    }
    if ((func_009B30B0(*(u16 *)(a + 0x2C), *(u16 *)(a + 0x26)) & 0xFFFF) >= 0x11) {
        return 0;
    }
    id = *(u8 *)a;
    if (id != *(u8 *)D_00591E4C) {
        f = (f32)*(u8 *)D_005926F4;
        if (*(f32 *)D_005926D8 <= f) {
            if (id != *(u8 *)D_00591E19) {
                return 0;
            }
        }
    }
    if (arg1 >= 0x7901 && *(s32 *)(a + 0x1C) >= 0xF01) {
        return 1;
    }
    if (*(s32 *)(a + 0x1C) >= 0x1701) {
        return 1;
    }
    return 0;
}
