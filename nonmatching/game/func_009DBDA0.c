/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern f32 func_001CD9E0(f32 x);
extern s32 func_00284380(s32 a, s32 b);
extern s32 func_00288670(s32 a, s32 b);
extern s32 func_002AE670(s32 a);
extern s32 func_009B30B0(u16 a, u16 b);
extern u32 func_009B33A0(void *p, s32 a, s32 b);
extern void func_009D8F10(void *p, void *q, s32 r);
extern u8 *D_003E7574;
extern char D_0058E5B0[];
extern char D_00591BEC[];
extern char D_00591E4F[];
extern char D_005926D8[];
extern char D_005926DC[];
extern char D_005926E4[];
extern char D_005926E8[];
extern char D_005926EC[];
extern char D_005926FC[];
extern char D_00592980[];

s32 func_009DBDA0(u8 *a0, u8 *a1) {
    s32 s6 = *(s16 *)(a0 + 0x14);
    s32 s0, s1, s5, s7, a2, t, v;
    f32 f3, f20, f21, f22, fv;
    u8 *s2, *g;
    u8 e;

    t = *(u8 *)(D_00591E4F + a0[0x13] * 2);
    if (t != 0xFF) t = t % 23; else t = 1;
    s2 = (u8 *)D_0058E5B0 + t * 0x240;
    s0 = func_00288670(*(u8 *)(D_00592980 + a0[0x12] * 0x6900 + a0[0x11] * 0x348 + 0x81) & 0x7F, 0x28);

    f3 = (f32)s6 * *(f32 *)a1;
    s7 = 0;
    if (f3 < -11289.0f + (f32)(s0 * 20)) {
        v = (s32)*(f32 *)(a1 + 8);
        if (v <= 0) v = -v;
        if ((f32)v < 2344.0f + (f32)(s0 * 2)) s7 = 1;
    }
    s5 = 0;
    if (f3 < -9497.0f) {
        v = (s32)*(f32 *)(a1 + 8);
        if (v <= 0) v = -v;
        if ((f32)v < 5032.0f) s5 = 1;
    }
    g = D_003E7574;
    s1 = (s32)func_001CD9E0((f32)*(s32 *)(a1 + 0xC));
    e = *(u8 *)D_005926DC;
    if (*(u16 *)(g + 0x84) != 4 && a0[0x46] == e && a0[0x4C] != 0 && s5 != 0 &&
        *(s32 *)(a0 + 0xAC) == e) {
        if (s1 >= 0x200) {
            if (!((f32)s6 * *(f32 *)a1 < -13081.0f)) goto L128;
            v = (s32)*(f32 *)(a1 + 8);
            if (v <= 0) v = -v;
            if (!((f32)v < 963.0f)) goto L128;
        }
        *(f32 *)(D_003E7574 + 0x1454) = *(f32 *)a1;
        *(f32 *)(D_003E7574 + 0x145C) = *(f32 *)(a1 + 8);
        D_003E7574[0x68] = (u8)*(s32 *)(a1 + 0x10);
        *(s32 *)(a0 + 0xB0) = 0x10000;
        a0[0x4A] = 0xD;
        if (s1 < 0x100) {
            fv = (f32)*(u8 *)D_005926FC;
            if (!(*(f32 *)D_005926D8 < fv) &&
                *(u32 *)(a0 + 0x110) < *(u32 *)(s2 + 0x110) &&
                *(u32 *)(a0 + 0x114) < 0x400) {
                e = a0[0x16];
                if (e == 0x9D || e == 0x82) func_009D8F10(a0, s2, 1);
            }
        }
        return 1;
    }
L128:
    if (*(u16 *)(g + 0x84) == 4 &&
        (func_009B30B0(*(u16 *)(a0 + 0x10C), *(u16 *)(g + 0x58)) & 0xFFFF) >= 0x50 &&
        *(u16 *)(a0 + 0x30) != 0 && a0[0x4C] != 0) {
        v = (s32)*(f32 *)(D_003E7574 + *(u8 *)D_005926DC * 4 + 0x47C);
        if (v <= 0) v = -v;
        if ((f32)v <= 13721.0f && *(u32 *)(a0 + 0x114) >= 0x1800) goto L1FC;
        if (s1 >= 0xC0) goto L578;
        if ((func_009B30B0(*(u16 *)(a0 + 0x2A), *(u16 *)(a0 + 0xA8)) & 0xFFFF) < 0x40) goto L578;
        return 0;
    }
L1FC:
    t = ((*(u8 *)(D_00592980 + a0[0x12] * 0x6900 + a0[0x11] * 0x348 + 0x8C) >> 2) + 0x94) * -0x2B0;
    s5 = func_00284380(t / 180 + 0x20, 0);
    g = D_003E7574;
    f20 = *(f32 *)D_00591BEC;
    f22 = *(f32 *)(g + 0x1454);
    f21 = *(f32 *)(g + 0x145C);
    {
        s32 d = (*(s32 *)(a0 + 0x58) * 90) / 100;
        u32 r;
        f32 fr, f1, f2;
        r = func_009B33A0(a0, (s32)f22, (s32)f21);
        fr = func_001CD9E0((f32)r);
        f2 = f20 * (f32)(s32)fr;
        f1 = (f32)d;
        f2 = f2 / f1;
        f1 = 160.0f * f20 / f1;
        s1 = (s32)((f32)(s32)f2 + f1);
        if (s1 < 0) s1 = 0;
    }
    if (a0[0x16] != 0x9D)
        s1 += *(u8 *)D_005926E8 - func_002AE670(s0 / 10);
    if (a0[0x1FD] == 2) {
        s1 -= *(u8 *)D_005926E4;
    } else {
        if (a0[0x1FD] == 0) {
            if ((f32)s6 * f22 <= -12057.0f) s1 += *(u8 *)D_005926EC;
        }
        if (func_00288670(*(u8 *)(D_00592980 + a0[0x12] * 0x6900 + a0[0x11] * 0x348 + 0x83) & 0x7F, 0x14) >= 0x57 &&
            s0 < 0x50)
            s1 += *(u8 *)D_005926E4;
    }
    {
        u32 r = func_009B33A0(a0, (s32)*(f32 *)a1, (s32)*(f32 *)(a1 + 8));
        s32 q = (s32)func_001CD9E0((f32)r);
        if (q >= 0x140 && q / (s5 + 1) >= 0x1A01) {
            a2 = 0;
        } else {
            g = D_003E7574;
            r = func_009B33A0(a0, (s32)*(f32 *)(g + *(u8 *)D_005926EC * 4 + 0x47C),
                              (s32)*(f32 *)(g + *(u8 *)D_005926EC * 4 + 0xB7C));
            if (r >= 0x40001 && *(s32 *)(D_003E7574 + 0x50) >= 0x3000 && *(u16 *)(a0 + 0x30) != 0)
                a2 = 0;
            else
                a2 = 1;
        }
    }
    if (a0[0x4C] != 0) {
        if (s7 == 0) goto L4D4;
        if (!(s5 < s1)) goto L4F0;
        goto L4D8;
    }
L4D4:
L4D8:
    if (a0[0x4A] != 0xE || a0[0x4E] == 0) return 0;
L4F0:
    if (a0[0x4E] == *(u8 *)D_005926DC) a0[0x4E] = (u8)s5;
    D_003E7574[0x70] = 1;
    *(f32 *)(D_003E7574 + 0x1454) = f22;
    *(f32 *)(D_003E7574 + 0x145C) = f21;
    D_003E7574[0x68] = (u8)s5;
    if (*(u32 *)(a0 + 0x114) >= 0x400) a2 = 0;
    func_009D8F10(a0, s2, a2);
    *(s32 *)(a0 + 0xB0) = 0x10000;
    a0[0x4A] = 0xE;
    return 1;
L578:
    *(f32 *)(D_003E7574 + 0x1454) = *(f32 *)a1;
    *(f32 *)(D_003E7574 + 0x145C) = *(f32 *)(a1 + 8);
    D_003E7574[0x68] = 0;
    *(s32 *)(a0 + 0xB0) = 0x10000;
    a0[0x4A] = 0xF;
    func_009D8F10(a0, s2, s5);
    return 1;
}
