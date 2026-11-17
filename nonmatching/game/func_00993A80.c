/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_0098F6C0(char *);
s32 func_0098F7E0(char *);
s32 func_00990590(char *, u16, s32, s32, s32);
s32 func_009909D0(char *, s32, char *, s32, s32, s32);
extern char *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_0058E6C0[];
extern char D_00591E4C[];
extern char D_00591E67[];
extern char D_00591E90[];
extern char D_00CB5397[];
extern char D_00CB56BC[];

s32 func_00993A80(s32 arg0) {
    f32 f6;
    f32 f5;
    s32 a0;
    s32 a3;
    s32 a4;
    s32 a5;
    s32 n;
    u8 idx;
    char *s0;
    char *p;

    a0 = ((arg0 & 0xFF) ^ 1) * 0xB;
    if ((a0 + 1) != 0xFF) {
        a0 = (a0 % 23) + 1;
    } else {
        a0 = 1;
    }
    s0 = Pes6MatchPlayers + a0 * 0x240;
    if (D_00591E67[*(u8 *)(s0 + 0x12)] == 0) return 0;
    if (func_0098F7E0(s0) == 0) return 0;
    if (func_0098F6C0(s0) != 0) return 0;
    if (!(fabsf(*(f32 *)(Pes6Ball_Current + 0x18)) <= 5160.0f)) return 0;
    idx = *(u8 *)D_00591E4C;
    if (idx == 0) return 0;
    f6 = (f32) *(s16 *)(s0 + 0x14);
    if ((*(f32 *)(D_00591E90 + *(u8 *)(s0 + 0x13) * 4) * f6) < -6732.5f) return 0;
    a4 = 0;
    for (a5 = 0; a5 < 0xB; a5++, s0 += 0x240) {
        if (*(u8 *)(*(char **)(s0 + 4) + 0x2C) != 0) {
            f5 = *(f32 *)(s0 + 0xE0) * f6;
            if (!(*(f32 *)(Pes6Ball_Current + 0x10) * f6 <= 256.0f + f5)
                && fabsf(*(f32 *)(s0 + 0xE8) - *(f32 *)(Pes6Ball_Current + 0x18)) < 5120.0f) {
                a4 += 1;
            } else if (!(f5 >= -6732.5f)) {
                a4 += 1;
            }
        }
    }
    if (a4 >= 3) return 0;
    if (idx == 0xFF) n = 1; else n = idx % 23;
    s0 = Pes6MatchPlayers + n * 0x240;
    a3 = *(u8 *)(s0 + 0x13) ^ 1;
    idx = *(u8 *)(D_00CB56BC + a3 * 0xB);
    if (idx == 0xFF) n = 1; else n = idx % 23;
    if (*(u32 *)(D_0058E6C0 + n * 0x240) >= (u32)(*(s32 *)(s0 + 0x110) + 0x10000)) {
        if (!(func_009909D0(s0, 0x100000, D_00CB56BC, a3, a4, a5) & 0xFF)
            && !(func_00990590(s0, *(u16 *)(s0 + 0x26), 0x3000, 0x240000, 1) & 0xFF)) {
            return 1;
        }
    }
    return *(u8 *)D_00CB5397 != 0;
}
