/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u8 *D_003E7574;
extern char D_005E3934[];
extern char D_00591E19[];
extern char D_0058E5B0[];
extern char D_00591F38[];
extern char D_00591BBC[];
extern char D_00591E4C[];
extern char D_005926F0[];
extern char D_005926D8[];
extern char D_00591E4F[];
extern char D_00591E50[];
extern char D_00592980[];

extern s32 func_00B29CB0(void);
extern s32 func_00B2A340(void *p);
extern s32 func_00B27440(void *p);
extern s32 func_00B274B0(s32 p);
extern u32 func_009B30B0(s32 a, s32 b);
extern u32 func_009B33A0(void *a, s32 b, s32 c);
extern u32 func_009B3350(void *a, s32 b, s32 c);
extern u32 func_009B3480(void *a, s32 a1, s32 a2, s32 a3, f32 b, f32 c);
extern s32 func_0098F7E0(void *a);
extern s32 func_009975E0(void *a);
extern s32 func_00A14EC0(void *a, void *b);
extern void func_00AA9F90(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
extern void func_00A15540(void *a, void *b);
extern void func_00A997C0(void *a, f32 b, f32 c);

s32 func_00A10C50(u8 *a, s32 a1, s32 a2, s32 a3) {
    u8 *s4;
    u32 s1, dist;
    s32 s3;
    s32 s2;
    s32 v2;
    f32 f20, f21;
    u32 d;
    u8 *G;
    u8 *t;
    s32 x;

    if (func_00B29CB0()) {
        if (func_00B2A340(D_005E3934) != 4) return 0;
    }
    if (!func_00B27440(a)) return 0;
    if (a[0x46]) return 0;

    d = *(u8 *)D_00591E19;
    if (d == 0xFF) {
        v2 = 1;
    } else {
        t = (u8 *)D_0058E5B0 + (d == 0xFF ? 1 : d % 23) * 0x240;
        v2 = (a[0x13] != t[0x13]);
    }
    if (!v2) {
        if (*(u16 *)(D_003E7574 + 0x84) == 1) {
            if ((u16)func_009B30B0(*(u16 *)(a + 0x10C), *(u16 *)(D_003E7574 + 0x58)) >= 0x70)
                return 0;
        }
    }
    G = D_003E7574;
    dist = func_009B33A0(a, (s32)*(f32 *)(G + 0x1454), (s32)*(f32 *)(G + 0x145C));
    if (dist >= 0x24001) {
        if (*(s32 *)D_00591F38 != 0x7FFF) return 0;
    }
    d = *(u8 *)D_00591E19;
    if (a[0] == d && *(s32 *)(a + 0x1C) < 0x1100 && *(u32 *)(a + 0x114) < 0x180
        && *(s32 *)(D_003E7574 + 0x50) < 0xE00)
        return 0;
    if (*(s32 *)(a + 0x1C) < 0x1100) {
        if (a[0] == d && *(u16 *)(D_003E7574 + 0x84) == 5) return 0;
    }
    if (a[0x24] == 1 && *(u8 *)D_00591BBC == 1) return 0;
    if (a[0] != d) {
        if (*(u8 *)D_00591E4C == 0) {
            f32 f1 = *(f32 *)D_005926D8;
            f32 f0 = (f32)*(u8 *)D_005926F0;
            if (f1 <= f0) return 0;
        }
    }
    if (!v2) {
        s32 h;
        if (*(u8 *)D_00591E4C != 0) return 0;
        if (*(s32 *)D_00591F38 != 0x7FFF) return 0;
        h = *(u16 *)(D_003E7574 + 0x84);
        if (h == 8 || h == 6 || h == 5 || h == 3 || h == 9 || h == 4 || h == 2 || h == 1 || h == 15) {
            if (dist >= 0x24001) {
                if (!func_0098F7E0(a)) return 0;
                G = D_003E7574;
                if (*(s32 *)(G + 0x50) >= 0x1000) {
                    f32 g1 = *(f32 *)(G + 0x1454);
                    f32 g2 = *(f32 *)(G + 0x145C);
                    u32 r = func_009B3480(a, (s32)g1, (s32)g2, a3, g1, g2);
                    if ((u16)func_009B30B0(r, *(u16 *)(G + 0x58)) >= 0x21) return 0;
                }
            }
        }
    }
    G = D_003E7574;
    f21 = *(f32 *)(G + 0x1454);
    f20 = *(f32 *)(G + 0x145C);
    s4 = 0;
    if (func_00B274B0(*(u8 *)(D_00591E4F + (a[0x13] ^ 1) * 2))) {
        d = *(u8 *)(D_00591E4F + (a[0x13] ^ 1) * 2);
        s4 = (u8 *)D_0058E5B0 + (d == 0xFF ? 1 : d % 23) * 0x240;
        if (s4[0x16] == 0x10 || !func_009975E0(s4)) {
            if (func_00B274B0(*(u8 *)(D_00591E50 + (a[0x13] ^ 1) * 2))) {
                d = *(u8 *)(D_00591E50 + (a[0x13] ^ 1) * 2);
                s4 = (u8 *)D_0058E5B0 + (d == 0xFF ? 1 : d % 23) * 0x240;
            }
        }
    }
    if (s4 == 0) return 0;
    if (func_00A14EC0(s4, a) == 0) {
        x = (*(u8 *)(D_00592980 + 0x8C + a[0x11] * 840 + a[0x12] * 26880) >> 2) + 0x94;
        a3 = 0;
        func_00AA9F90(s4, a, *(s32 *)(s4 + 0x1C), 0, 0xC0, (x * -420) / 183);
        if (s4[0x16] == 7) {
            func_00A15540(s4, a);
        }
    }
    s3 = 0;
    s1 = func_009B3350(D_003E7574, (s32)f21, (s32)f20);
    if (*(u8 *)D_00591E4C != 0) s1 += 0x100000;
    s2 = (u16)func_009B3480(a, (s32)f21, (s32)f20, a3, f21, f20);
    if (s1 < 0x100000) goto l1474;
    if (*(u8 *)D_00591E4C != 0) {
        if (s1 < 0x400000) goto l1474;
    }
l126c:
    if (*(s32 *)(a + 0x1C) >= 0x1701) {
        if (*(u32 *)(a + s4[0] * 4 + 0x158) < 0x19001) {
            if (*(s32 *)(s4 + 0x1C) >= 0xC81) {
                if (*(u32 *)(a + 0x114) < *(u32 *)(s4 + 0x114) + 0x40) {
                    if ((u16)func_009B30B0(*(u16 *)(a + 0x28), *(u16 *)(s4 + 0x28)) < 0x31) {
                        if ((u16)func_009B30B0(s2, *(u16 *)(a + s4[0] * 2 + 0x128)) < 0x51)
                            s3 = 2;
                    }
                }
            }
        }
    }
    goto l1310;
l1474:
    G = D_003E7574;
    if (func_009B3350(G, (s32)*(f32 *)(G + 0x1454), (s32)*(f32 *)(G + 0x145C)) < s1) goto l126c;
    s3 = 1;
l1310:
    if (s3 == 0) {
        *(f32 *)(D_003E7574 + 0x1454) = f21;
        *(f32 *)(D_003E7574 + 0x145C) = f20;
        return 0;
    }
    if (a[0] == *(u8 *)(D_00591E50 + a[0x13] * 2)) {
        d = *(u8 *)(D_00591E4F + a[0x13] * 2);
        s4 = (u8 *)D_0058E5B0 + (d == 0xFF ? 1 : d % 23) * 0x240;
        if (a != s4) {
            G = D_003E7574;
            if (func_009B33A0(s4, (s32)*(f32 *)(G + 0x1454), (s32)*(f32 *)(G + 0x145C)) < s1) {
                *(f32 *)(D_003E7574 + 0x1454) = f21;
                *(f32 *)(D_003E7574 + 0x145C) = f20;
                return 0;
            }
        }
    }
    if (a[0x16] == 0xF) {
        a[0x4E] = a[0x4E] + 2;
    } else if (*(u8 *)D_00591E4C == 0 && *(u32 *)(a + 0x114) < *(u32 *)(s4 + 0x114)) {
        a[0x16] = 0x1B;
        *(u16 *)(a + 0x18) = 0;
        func_00A997C0(a, f21, f20);
        *(s32 *)(a + 0xAC) = 0xFF;
    } else {
        a[0x16] = 0xF;
        *(u16 *)(a + 0x18) = 0;
    }
    *(f32 *)(D_003E7574 + 0x1454) = f21;
    *(f32 *)(D_003E7574 + 0x145C) = f20;
    return 1;
}
