/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001CDA50(s32);
extern s32 func_00326070(s32);
extern s32 func_003258F0(s32, s32);
extern s32 func_0021E2F0(s32);
extern void func_0017FA00(s32, void *, s32, s32);
extern void func_00334500(s32);
extern void func_00334AC0(void *, s32, s32);
extern void func_00334BA0(void *, s32, s32);

extern char D_005F0C20[];
extern char D_003B73C0[];
extern char D_003B7390[];
extern char D_00591BB0[];
extern char D_003E2A70[];
extern char D_003E3880[];
extern char D_003E2BE0[];
extern char D_003E2BE4[];
extern char D_003E2BE8[];
extern char D_003E2C5C[];
extern char D_003E2F60[];
extern char D_003E30A0[];
extern char D_003E31E0[];
extern char D_003E32D0[];
extern char D_003E33C0[];
extern char D_003E3620[];
extern char D_003E2650[];
extern char D_003E2790[];
extern char D_003E2D30[];
extern char D_003E2D60[];
extern char D_003E2D90[];
extern char D_003E2DC0[];
extern char D_003E28D0[];
extern char D_003E29A0[];
extern char D_003E2DF0[];

typedef struct { s32 v[60]; } TabT;
typedef struct { s32 v[10]; } FlT;

s32 func_00334C70(s32 a0)
{
    TabT tab;
    FlT fl;
    s32 i, j, s4;
    s32 *s2 = (s32 *)D_005F0C20;
    s32 *a3;
    s32 *a1;
    s32 *a0p;
    s32 *p3;
    s32 *p2;
    s32 *src;
    u8 *s5;

    s4 = func_001CDA50(0);
    s2[0] = s4;
    if (func_00326070(a0)) {
        if (func_003258F0(a0, 0) == 0x35) {
            s2[0xFFC / 4] = 0;
        } else if (func_003258F0(a0, 1) == 0x35) {
            s2[0xFFC / 4] = 1;
        } else {
            s2[0xFFC / 4] = 0xFF;
        }
    } else {
        s2[0xFFC / 4] = 0xFF;
    }

    tab = *(TabT *)D_003B73C0;
    a3 = &tab.v[s4 * 6];
    s2[1] = a3[0];
    tab = *(TabT *)D_003B73C0;
    s2[2] = a3[1];
    tab = *(TabT *)D_003B73C0;
    s2[3] = a3[2];

    s5 = (u8 *)D_003E2A70 + s4 * 36;
    for (i = 0; i < 2; i++) {
        u32 v = func_0021E2F0(((u16 *)D_00591BB0)[i]) & 0xFFFF;
        if (v - 0x126 < 2) {
            src = (s32 *)s5;
        } else {
            src = (s32 *)((u8 *)D_003E3880 + v * 36);
        }
        p3 = (s32 *)((u8 *)s2 + 0x10 + i * 36);
        for (j = 0; j < 9; j++) p3[j] = src[j];
    }

    fl = *(FlT *)D_003B7390;

    if ((u32)s4 < 10 && !(s4 >= 6 && s4 <= 8)) {
        func_0017FA00(fl.v[s4], (void *)func_00334500, 0, 0);
    } else {
        func_00334500(0);
    }

    s2[0x58 / 4] = -1;
    s2[0x5C / 4] = ((s32 *)(D_003E2BE0 + s4 * 12))[0];
    s2[0x60 / 4] = ((s32 *)(D_003E2BE4 + s4 * 12))[0];
    s2[0x68 / 4] = ((s32 *)(D_003E2BE8 + s4 * 12))[0];
    p3 = (s32 *)(D_003E2C5C + s4 * 20);
    s2[0x6C / 4] = p3[1];
    s2[0x70 / 4] = p3[2];
    s2[0x74 / 4] = p3[3];
    s2[0x78 / 4] = p3[4];
    s2[0x7C / 4] = p3[5];

    p3 = (s32 *)(D_003E2F60 + s4 * 32);
    p2 = (s32 *)(D_003E30A0 + s4 * 32);
    for (i = 0; i < 8; i++) {
        s2[0x80 / 4 + i] = p3[i];
        s2[0xA0 / 4 + i] = p2[i] - p3[i];
    }

    a1 = (s32 *)(D_003E31E0 + s4 * 24);
    a0p = (s32 *)(D_003E32D0 + s4 * 24);
    for (i = 0; i < 6; i++) {
        s2[0xF28 / 4 + i] = a1[i];
        s2[0xF40 / 4 + i] = a0p[i] - a1[i];
    }

    p3 = (s32 *)(D_003E33C0 + s4 * 60);
    p2 = (s32 *)(D_003E3620 + s4 * 60);
    for (i = 0; i < 14; i++) {
        s2[0xF58 / 4 + i] = p3[i];
        s2[0xF94 / 4 + i] = p2[i] - p3[i];
    }
    s2[0xFD0 / 4] = 0x22C73;
    s2[0xFD4 / 4] = 0x22C76;
    func_00334AC0(s2, s4, a0);
    func_00334BA0(s2, s4, a0);
    s2[0xFD8 / 4] = (s32)(D_003E2650 + s4 * 32);
    s2[0xFDC / 4] = (s32)(D_003E2790 + s4 * 32);
    s2[0xFE0 / 4] = ((s32 *)D_003E2D30)[s4];
    s2[0xFE4 / 4] = ((s32 *)D_003E2D60)[s4];
    s2[0xFF4 / 4] = ((s32 *)D_003E2D90)[s4];
    s2[0xFEC / 4] = (s32)(D_003E28D0 + s4 * 20);
    s2[0xFF8 / 4] = ((s32 *)D_003E2DC0)[s4];
    s2[0xFF0 / 4] = (s32)(D_003E29A0 + s4 * 20);
    s2[0xFE8 / 4] = ((s32 *)D_003E2DF0)[s4];
    return 1;
}
