/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00591E00[];
extern char D_00592800[];
extern char Pes6MatchSquads[];
extern char D_00CB62B0[];

void func_00BBB4F0(u8 *arg0) {
    u8 sp58[8];
    u8 *p;
    int i, j, t8, ok;
    u32 a7, a6, v;

    p = (u8 *)D_00592800;
    for (i = 0; i < 8; i++) {
        if (p[3] < 2) {
            sp58[i] = p[0x10];
        } else {
            sp58[i] = 0xFF;
        }
        p += 0x28;
    }
    p = (u8 *)D_00592800;
    for (i = 0; i < 8; i++, p += 0x28) {
        if (!(p[3] < 2 && p[0] != 8)) continue;
        a7 = arg0[0];
        t8 = 1;
        ok = 0;
        if (*(u8 *)0x591E4C != a7 && *(u8 *)0x591E18 != a7) {
            a6 = arg0[0x12];
            if (*(u8 *)(D_00591E00 + a6 + 0x67) == 0) {
                u32 s4 = arg0[0x13];
                if (*(u8 *)(D_00591E00 + s4 * 3 + 0x4F) != a7 && a7 == p[0x10]) {
                    if (*(u8 *)(Pes6MatchSquads + a6 * 0x6900 + arg0[0x11] * 0x348 + 0xF8) == 0
                        && arg0[0x16] != 0xFF
                        && *(u8 *)(*(u8 **)(arg0 + 4) + 0x2C) != 0) {
                        ok = 1;
                    }
                }
            }
        }
        if (!ok) {
            for (j = 0; j < 8; j++) {
                if (j != i && a7 == sp58[j]) t8 = 0;
            }
            if (t8) {
                *(s32 *)(arg0 + 0x214) = 0;
                arg0[0x21F] = 0;
            }
            continue;
        }
        v = *(s32 *)(arg0 + 0x214);
        if (v == 0) {
            arg0[0x21F] = 0x3C;
        } else if (v == 3) {
            arg0[0x21F] = 0xA0;
        }
        arg0[0x21F] = arg0[0x21F] - 1;
        if (arg0[0x21F] > 0) {
            if ((*(s32 *)(arg0 + 0xB4) & 0x200) && !(*(s32 *)(D_00CB62B0 + i * 0x18 + 8) & 0x100)) {
                *(s32 *)(arg0 + 0x214) = *(s32 *)(arg0 + 0x214) + 1;
                return;
            }
        } else {
            *(s32 *)(arg0 + 0x214) = 0;
            arg0[0x21F] = 0;
        }
    }
}
