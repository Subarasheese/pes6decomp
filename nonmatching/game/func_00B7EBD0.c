/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002BDE70(s32, s32, s32, s32, s32);
extern s32 func_00C222B0(s32, s32);
extern void func_00C22890(s32);
extern char D_00591A90[];
extern char D_00591C09[];
extern char Pes6MatchSquads[];
extern char D_00C9A710[];

void func_00B7EBD0(void) {
    s32 spA8;
    s32 spA4;
    s32 spA0;
    u8 spAE;
    u8 spAF;
    u8 i;
    u32 idx;
    u32 j;
    u32 k;
    u32 n;
    u8 *e;
    u8 *p;
    u8 *sq;
    u8 *pl;
    u8 *pl2;
    s32 big;
    s32 a, b;
    s32 *q4 = &spA4;
    s32 *q8 = &spA8;
    u8 *qF = &spAF;
    u8 *qE = &spAE;

    for (i = 0; i < 2; i++) {
        idx = i;
        e = (u8 *)D_00C9A710 + idx * 8;
        if (e[0x12] != 0xFF) {
            u8 t = e[0x12];
            u8 s1 = e[0x14];
            u8 s2 = e[0x16];
            p = (u8 *)D_00591A90 + t * 0x8B;
            for (n = 0; n < 0x20; n++) {
                if (s1 == p[7 + n]) break;
            }
            *qF = n;
            for (n = 0; n < 0x20; n++) {
                if (s2 == p[7 + n]) break;
            }
            *qE = n;
            sq = (u8 *)Pes6MatchSquads + t * 0x6900;
            pl = sq + s2 * 0x348;
            *(u8 *)&spA0 = i;
            if ((pl[0xCF] >> 2) & 1) {
                *q4 = 6;
                *q8 = 1;
            } else {
                if ((s16)func_002BDE70(t, s2, 0, 10, 0) > 0) {
                    big = (func_00C222B0(t, s2) & 0xFF) >= 0xB;
                } else {
                    big = (func_00C222B0(t, s2) & 0xFF) >= 0x11;
                }
                if (big) {
                    *q4 = 4;
                    *q8 = 1;
                    if (sq[s1 * 0x348 + 0xCF] & 1) {
                        *q8 = 0;
                        *q4 = 5;
                    }
                } else {
                    pl2 = sq + s1 * 0x348;
                    if (pl2[0xCF] & 1) {
                        *q8 = 0;
                        *q4 = 5;
                    } else {
                        a = pl[0x89] & 7;
                        b = pl2[0x89] & 7;
                        if (b == a) {
                            *q8 = 2;
                            *q4 = (b + 3) / 3 - 1;
                        } else if (a < b) {
                            *q8 = 0;
                            *q4 = (b + 3) / 3 - 1;
                        } else {
                            *q8 = 1;
                            *q4 = (a + 3) / 3 - 1;
                        }
                    }
                }
            }
            if (*(u8 *)(D_00591C09) == 4 || *(u8 *)(D_00591C09) == 0xE) {
                func_00C22890(*(u8 *)(D_00591C09));
            }
            e = (u8 *)D_00C9A710 + idx * 12;
            *(f32 *)(e + 0x24) = *(f32 *)&spA0;
            *(f32 *)(e + 0x28) = *(f32 *)&spA4;
            *(f32 *)(e + 0x2C) = *(f32 *)&spA8;
        }
    }
    for (j = 0; j + 1 < 2; j = (j + 1) & 0xFF) {
        k = j;
        while (k + 1 < 2) {
            e = (u8 *)D_00C9A710 + k * 12;
            if (!(*(s32 *)(e + 0x28) < *(s32 *)(e + 0x34))) break;
            {
                u8 t = e[0x24];
                k = (k + 1) & 0xFF;
                e[0x24] = e[0x30];
                e[0x30] = t;
            }
        }
    }
}
