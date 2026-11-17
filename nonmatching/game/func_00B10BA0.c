/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003E7574;
extern u8 *D_003E74CC;
extern char D_00591E74[];
extern char D_00591E6C[];
extern char D_00591E70[];
extern char D_00591E7C[];
extern char D_00592264[];
extern char D_005926E6[];

extern f32 func_00AB4270(void *p);
extern u32 func_009B30B0(u32 a, u32 b);
extern u32 func_009B32D0(u32 a, u32 b, u32 c);
extern void func_009B36C0(void *p, u32 id, u32 z, u32 v, u32 f);
extern f32 func_001CD9E0(f32 x);
extern s32 func_009F42B0(void *p, s32 d);
extern void func_009B3500(void *p, u32 id, u32 z);
extern u8 *func_00208310(u32 id);
extern s32 func_00B0B6B0(void *p, u32 id, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g, f32 fl);
extern s32 func_00B104E0(void *p, u32 a, u32 b, u32 c, f32 fl);
extern void func_00AF8180(void *p, u32 a);
extern void func_00209A00(void *p, u32 id, u32 v);
extern f32 func_00AB3C60(void *p, u32 a);
extern void func_00AADED0(void *p, u32 a, u32 b, u32 c);
extern u32 func_00AB3B70(void *p, u32 a, u32 b);
extern void func_00A9D570(void *p);
extern void func_00207390(void *p, u32 a);

s32 func_00B10BA0(u8 *p, u32 id, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7,
                  u32 s6, s32 in10, u32 in11, s32 in12)
{
    u32 s3 = id;
    u32 s2 = a3;
    u16 w10e = a4;
    u16 w10c = a5;
    u16 w10a = a6;
    u16 orig = id;
    s32 found = 0;
    u32 s0, s1, s5, s7, fp, d0, lt, q, x;
    s32 v3, v2, ab;
    f32 f20, f0, f1, f2, dx, dz;
    u8 *g;
    u32 w;

    f20 = func_00AB4270(p);
    s5 = (s32)((u16)(((u16)s2 - *(u16 *)(p + 0x26)) + 0x10000)) < 0x8001;
    d0 = (u16)func_009B30B0(s2, (u16)(*(u16 *)(D_003E7574 + 0x58) + 0x8000));
    fp = (u16)func_009B32D0(s2, (u16)(*(u16 *)(D_003E7574 + 0x58) + 0x8000), 0x1400);
    s0 = s6 << 2;
    if ((u16)func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(p + 0x10C)) < 0x21) {
        if ((u16)func_009B30B0(*(u16 *)(p + 0x10C), *(u16 *)(D_003E7574 + 0x58)) < 0x60) {
            s7 = w10c;
        } else {
            s7 = (u16)(*(u16 *)(D_003E7574 + 0x58) + 0x8000);
        }
    } else {
        s7 = w10c;
    }

    s1 = (u16)(*(u16 *)(D_003E7574 + 0x58) + 0x8000);
    func_009B36C0(p, s3, 0, s1, 0);
    dx = *(f32 *)(D_003E7574 + s0 + 0xB7C) - *(f32 *)D_00591E74;
    dz = *(f32 *)(D_003E7574 + s0 + 0x47C) - *(f32 *)D_00591E6C;
    f0 = func_001CD9E0(dx * dx + dz * dz);
    x = s1;
    s1 = (s32)f0;
    func_009B36C0(p, s3, 0, x, 1);
    dx = *(f32 *)(D_003E7574 + s0 + 0xB7C) - *(f32 *)D_00591E74;
    dz = *(f32 *)(D_003E7574 + s0 + 0x47C) - *(f32 *)D_00591E6C;
    f0 = func_001CD9E0(dx * dx + dz * dz);
    v2 = (s32)f0;
    v3 = (s32)s1 - v2;
    if (v3 <= 0) v3 = -v3;
    lt = v2 < (s32)s1;
    *(s32 *)D_00592264 = v3;
    if (*(s32 *)D_00591E7C != 0) {
        func_009B30B0(s7, w10a);
    }
    if (s5 == lt) goto L10EA4;
    if (*(s32 *)D_00592264 < 0x35) goto L10EA4;
    g = D_003E7574;
    v3 = *(s32 *)(g + s0 + 0x10BC);
    if (v3 < -0xBC0) goto L111AC;
    if (v3 >= 0x11A1) goto L111AC;
    f1 = (f32)func_009F42B0(p, -0xE0);
    f0 = *(f32 *)(g + s0 + 0x7FC);
    if (!(f0 <= f1)) goto L111AC;
    v3 = *(s32 *)(D_003E7574 + s0 + 0x10BC);
    v2 = *(s32 *)(D_003E7574 + s0 + 0xFC);
    if (v2 < v3) goto L111AC;
    w = (u16)func_009B32D0(fp, *(u16 *)(p + 0x26), 0x2000);
    s1 = (u16)func_009B32D0(w, (u16)(*(u16 *)(D_003E7574 + 0x58) + 0x8000), 0x3000);
    s3 = 0x371;
L10E3C:
    if (func_00B0B6B0(p, s3, s1, (*(s32 *)(p + 0x1C) * 9) / 10, s5, in11, s6, 0, in12, f20))
        found = 1;
L10EA4:
    s1 = (u16)fp;
    if (found) goto L10FA0;
    if (orig == 0x343 || orig == 0x360) goto L112A4;
    f0 = (f32) * (s32 *)(D_003E7574 + 0x50);
    f1 = *(f32 *)(D_003E7574 + 0x30);
    if (!(f1 <= f0)) {
        f1 = (f32)func_009F42B0(p, -0x110);
        f0 = *(f32 *)(D_003E7574 + ((u32) * (u8 *)D_005926E6 << 2) + 0x7FC);
        if (f0 < f1) {
            s3 = 0x371;
            goto L10EF0;
        }
    }
    s3 = 0x34A;
L10EF0:
    {
        u8 *r = func_00208310((u16)s3);
        u32 h = *(u16 *)(r + 8);
        s32 dv = *(s32 *)(D_003E74CC + ((u32)(u16)s3 << 2) + 0x2FD8);
        s1 = (u16)func_009B32D0(fp, w10c, (u16)((s32)(((h << 12) - h) * 8) / dv));
    }
L10F38:
    if (func_00B0B6B0(p, s3, s1, (*(s32 *)(p + 0x1C) * 9) / 10, s5, in11, s6, 0, in12, f20))
        found = 1;
L10FA0:
    if (found) goto L110D0;
    w = (u16)s3;
    if (w == 0x34A || w == 0x34B) goto L110A4;
    if (w == 0x344 || w == 0x345) {
        s32 a0v, b0v;
        a0v = *(s32 *)(D_003E7574 + s0 + 0xFC);
        b0v = *(s32 *)(D_003E7574 + s0 + 0x10BC);
        if (a0v < b0v) return 0;
        if (*(s32 *)D_00592264 < 0x28) return 0;
        if (b0v < -0xBC0) goto L11434;
        if (b0v >= 0x11A1) goto L11434;
        if (a0v < b0v) goto L11434;
        f1 = (f32)func_009F42B0(p, -0x110);
        f0 = *(f32 *)(D_003E7574 + s0 + 0x7FC);
        if (!(f0 <= f1)) goto L11434;
        func_009B32D0(s2, *(u16 *)(p + 0x26), 0x2000);
        s1 = (u16)func_009B32D0(s2, (u16)(*(u16 *)(D_003E7574 + 0x58) + 0x8000), 0x3000);
        s3 = 0x371;
        goto L110D0;
    }
    return 0;
L110A4:
    s1 = (u32)D_003E7574;
    v3 = *(s32 *)(D_003E7574 + s0 + 0x10BC);
    v2 = *(s32 *)(D_003E7574 + s0 + 0xFC);
    if (v2 < v3) return 0;
    goto L11478;
L110D0:
    if (func_00B104E0(p, w10a, in11, s6, f20) == 1) return 1;
    if (found == 1) goto L116F0;
    if (func_00B0B6B0(p, s3, s1, (*(s32 *)(p + 0x1C) * 9) / 10, s5, in11, s6, 0, in12, f20))
        goto L116F0;
    return 0;
L111AC:
    func_009B3500(p, 0x346, 0);
    s3 = 0x346;
    f1 = 32.0f;
    f0 = f1 + *(f32 *)D_00591E70;
    f2 = *(f32 *)(D_003E7574 + s0 + 0x7FC);
    if (!(f2 <= f0)) s3 = 0x34C;
L111F0:
    {
        u8 *r = func_00208310((u16)s3);
        u32 h = *(u16 *)(r + 8);
        s32 dv = *(s32 *)(D_003E74CC + ((u32)(u16)s3 << 2) + 0x2FD8);
        q = (u16)((s32)(((h << 12) - h) * 8) / dv);
        q = (u16)q * d0;
        q = (u16)((s32)q / 64);
    }
    s1 = (u16)func_009B32D0(s2, s7, q);
    if ((u16)func_009B30B0(s1, w10e) >= 0x30) return 0;
    if ((u16)func_009B30B0(*(u16 *)(D_003E7574 + 0x58), s1) >= 0x21) goto L10E3C;
    return 0;
L112A4:
    if ((u16)func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(p + 0x28)) < 0x21 &&
        *(s32 *)(p + 0x1C) >= 0xC01) {
        u8 *r;
        u32 h;
        s3 = 0x345;
        r = func_00208310(0x345);
        h = *(u16 *)(r + 8);
        q = (u16)((s32)(h * 0x6388) / *(s32 *)(D_003E74CC + 0x3CEC));
    } else {
        func_009B3500(p, 0x344, 0);
        s3 = 0x344;
        f1 = 32.0f;
        f0 = f1 + *(f32 *)D_00591E70;
        f2 = *(f32 *)(D_003E7574 + s0 + 0x7FC);
        if (!(f2 <= f0)) s3 = 0x34A;
        {
            u8 *r = func_00208310((u16)s3);
            u32 h = *(u16 *)(r + 8);
            s32 dv = *(s32 *)(D_003E74CC + ((u32)(u16)s3 << 2) + 0x2FD8);
            q = (u16)((s32)(((h << 12) - h) * 8) / dv);
        }
    }
L112FC:
    s1 = (u16)func_009B32D0(s2, (u16)(*(u16 *)(D_003E7574 + 0x58) + 0x8000), q);
    if ((u16)func_009B30B0(s2, w10e) >= 0x31) goto L10F38;
    if ((u16)func_009B30B0(*(u16 *)(D_003E7574 + 0x58), s2) >= 0x31) goto L10F38;
    if (*(s32 *)(D_003E7574 + 0x50) >= 0x2000) goto L10F38;
    s3 = 0x36C;
    s1 = (u16)s2;
    goto L10F38;
L11434:
    s1 = (u16)func_009B32D0(fp, *(u16 *)(p + 0x26), 0x3800);
    if ((u16)func_009B30B0(s1, w10e) >= 0x50) return 0;
    if (s5 == lt) return 0;
    s3 = 0x346;
    goto L110D0;
L11478:
    f1 = (f32)func_009F42B0(p, -0x110);
    f0 = *(f32 *)((u8 *)s1 + s0 + 0x7FC);
    if (f0 <= f1) {
        v3 = *(s32 *)((u8 *)s1 + s0 + 0x10BC);
        if (!(v3 < -0xBC0) && v3 < 0x11A1) {
            v2 = *(s32 *)(D_003E7574 + s0 + 0xFC);
            if (!(v2 < v3)) {
                func_009B32D0(s2, *(u16 *)(p + 0x26), 0x2000);
                s1 = (u16)func_009B32D0(s2, (u16)(*(u16 *)(D_003E7574 + 0x58) + 0x8000), 0x3000);
                func_009B3500(p, 0x371, 0);
                s3 = 0x371;
                f1 = 64.0f;
                f0 = f1 + *(f32 *)D_00591E70;
                f2 = *(f32 *)(D_003E7574 + s0 + 0x7FC);
                if (f2 <= f0) goto L110D0;
                return 0;
            }
        }
    }
    if (*(s32 *)D_00592264 < 0x34) return 0;
    s3 = 0x34C;
    s1 = (u16)(*(u16 *)((u8 *)s1 + 0x58) + 0x8000);
    func_009B36C0(p, 0x34C, 0, s1, 0);
    dz = *(f32 *)(D_003E7574 + s0 + 0x47C) - *(f32 *)D_00591E6C;
    dx = *(f32 *)(D_003E7574 + s0 + 0xB7C) - *(f32 *)D_00591E74;
    f0 = func_001CD9E0(dx * dx + dz * dz);
    x = s1;
    s1 = (s32)f0;
    func_009B36C0(p, 0x34C, 0, x, 1);
    dz = *(f32 *)(D_003E7574 + s0 + 0x47C) - *(f32 *)D_00591E6C;
    dx = *(f32 *)(D_003E7574 + s0 + 0xB7C) - *(f32 *)D_00591E74;
    f0 = func_001CD9E0(dx * dx + dz * dz);
    v2 = (s32)f0;
    v3 = (s32)s1 - v2;
    if (v3 <= 0) v3 = -v3;
    lt = v2 < (s32)s1;
    *(s32 *)D_00592264 = v3;
    if (s5 == lt) return 0;
    {
        u8 *r = func_00208310(0x34C);
        u32 h = *(u16 *)(r + 8);
        q = (u16)((s32)(((h << 12) - h) * 8) / *(s32 *)(D_003E74CC + 0x3D08));
        q = (u16)q * d0;
        q = (u16)((s32)q / 64);
    }
    s1 = (u16)func_009B32D0(s2, s7, q);
    if ((u16)func_009B30B0(s1, w10e) >= 0x30) return 0;
    if ((u16)func_009B30B0(*(u16 *)(D_003E7574 + 0x58), s1) >= 0x21) goto L110D0;
    return 0;
L116F0:
    func_00AF8180(p, s1);
    func_00209A00(*(u8 **)(p + 4), s3, (u16)in11);
    *(u16 *)(p + 0x26) = s7;
    f0 = func_00AB3C60(p, s6);
    *(f32 *)(*(u8 **)(p + 4) + 0x28) = f0;
    *(u8 *)(*(u8 **)(p + 4) + 0x2D) = s5;
    func_00AADED0(p, s1, 0, s6);
    *(u16 *)(p + 0x2C) = s1;
    *(s16 *)(p + 0x38) = func_00AB3B70(p, s1, s6);
    func_00A9D570(p);
    func_00207390(*(u8 **)(p + 4), 3);
    *(u8 *)(p + 0x66) = 3;
    *(u8 *)(p + 0x16) = 0xE;
    ab = in10 - *(s32 *)(p + 0x1C);
    if (ab <= 0) ab = -ab;
    *(s32 *)(p + 0x90) = ab;
    w = *(u16 *)(*(u8 **)(p + 4) + 0x30);
    if (w == 0x34B || w == 0x34A || w == 0x345 || w == 0x34C || w == 0x346 || w == 0x344)
        *(u16 *)(p + 0x18) = 0x12;
    else if (w == 0x371)
        *(u16 *)(p + 0x18) = 0x14;
    else
        *(u16 *)(p + 0x18) = 0x11;
    return 1;
}
