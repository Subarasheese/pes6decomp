/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591E4C[];
extern char D_00591E67[];
extern char D_00591E19[];
extern char D_005926E8[];
extern char D_005926D8[];
extern char D_00591E6C[];
extern char D_00591E74[];
extern char D_00591E70[];
extern char D_0058E5B0[];
extern char D_00592980[];
extern u8 *D_003E7574;

extern s32 func_00AB38D0(u8 *req);
extern s32 func_009F42B0(u8 *req, s32 off);
extern s32 func_00AFBAB0(s32 a);
extern s32 func_00AA3540(u8 *req);
extern s32 func_00A09950(u8 *req);

s32 func_00A41280(u8 *req, u32 idx, u32 fp, s32 a3, s32 a4) {
    u8 *base;
    u8 *p;
    s32 s0, s1, s2, s6, s7;
    s32 A, B, a0, a1, a2, v0, v1, ret;
    f32 f0, f1, f2, f3, f4, f5, f6;
    u32 i4;

    s6 = a4;
    s7 = a3;
    if (*(u8 *)D_00591E4C != 0) {
        base = D_003E7574;
        if (!(*(f32 *)(base + (u8)idx * 4 + 0x7FC) <= -352.0f)) {
            if (func_00AB38D0(req) != 0x41) {
                if (req[0] != *(u8 *)D_00591E4C) {
                    return 0;
                }
            }
        }
    }
    f0 = (f32)*(s16 *)(req + 0x14) * *(f32 *)(req + 0xE0);
    base = D_003E7574;
    i4 = (u32)(u8)idx * 4;
    s1 = (s32)f0;
    ret = func_009F42B0(req, -0x370);
    p = (u8 *)i4 + (u32)base;
    if (*(f32 *)(p + 0x7FC) < (f32)ret) {
        return 0;
    }
    if (req[0x10] != 0 && base[0x70] == 2 && *(u8 *)(D_00591E67 + req[0x12]) == 1) {
        f1 = (f32)*(s16 *)(req + 0x14) * *(f32 *)(p + 0x47C);
        if (!(f1 < -13465.0f)) {
            f1 = (f32)s1;
            if (f1 <= -9241.0f) {
                goto L6FC;
            }
            if (!(f1 < -12697.0f)) {
                goto L6FC;
            }
        }
    }
L424:
    if (*(u8 *)D_00591E19 != req[0] && *(u16 *)(D_003E7574 + 0x84) != 0xB) {
        f1 = *(f32 *)D_005926D8;
        f0 = (f32)(u32) * (u8 *)D_005926E8;
        if (f1 <= f0) {
            return 0;
        }
    }
    f5 = *(f32 *)D_00591E6C;
    base = D_003E7574;
    f4 = *(f32 *)D_00591E74;
    p = (u8 *)i4 + (u32)base;
    s2 = (s32)*(f32 *)(p + 0x7FC);
    A = (s32)*(f32 *)(p + 0x47C);
    B = (s32)*(f32 *)(p + 0xB7C);
    a0 = (s32)(f5 - (f32)A);
    v1 = (s32)(f4 - (f32)B);
    s0 = (u8)s7;
    s1 = (s32)((u32)a0 * (u32)a0 + (u32)v1 * (u32)v1);
    if (s0 == 0x80) {
        if (s1 >= 0x401) {
            return 0;
        }
    }
    if (s1 < 0x640) {
        goto L64C;
    }
    if (s0 == 0xFE) {
        if (s1 < s6) {
            return 2;
        }
    }
L540:
    if (s0 == 0) {
        return 0;
    }
    if (s6 < s1) {
        return 0;
    }
    f3 = *(f32 *)(req + 0xF0);
    f2 = (f32)idx;
    f1 = f5 + f3 * f2;
    a0 = (s32)(f1 - (f32)A);
    f3 = *(f32 *)(req + 0xF8);
    f2 = (f32)idx;
    f1 = f4 + f3 * f2;
    v1 = (s32)(f1 - (f32)B);
    s7 = (s32)((u32)a0 * (u32)a0 + (u32)v1 * (u32)v1);
    if (s7 < s1) {
        v0 = func_00AA3540(req);
        if (v0 >= 0x40001) {
            base = D_003E7574;
            ret = func_009F42B0(req, -0x120);
            f1 = (f32)ret;
            f0 = *(f32 *)((u8 *)i4 + (u32)base + 0x7FC);
            if (f1 < f0) {
                if (*(s32 *)(base + 0x50) < 0x3800) {
                    return 0;
                }
            }
        }
    }
    if (s7 < s1 && s6 < s1 && s6 < s7) {
        return 0;
    }
    if (fp != 0) {
        f0 = *(f32 *)D_00591E70 - (f32)s2;
        v0 = (s32)f0;
        if (v0 <= 0) {
            v0 = -v0;
        }
        if (v0 >= 0x79) {
            return 0;
        }
    }
    {
        u32 v1u = (u8)idx * 4;
        f4 = *(f32 *)D_00591E6C;
        base = D_003E7574;
        f6 = *(f32 *)(v1u + (u32)base + 0x480);
        f2 = *(f32 *)(req + 0xF0);
        f1 = (f32)idx;
        f0 = f4 + f2 * f1;
        f5 = *(f32 *)(v1u + (u32)base + 0xB80);
        f0 = f0 - f6;
        v0 = (s32)f0;
        a2 = v0;
        f2 = *(f32 *)(req + 0xF8);
        f3 = *(f32 *)D_00591E74;
        f1 = (f32)idx;
        f0 = f3 + f2 * f1;
        f0 = f0 - f5;
        a0 = 0;
        {
            s32 a3v = a2;
            s32 a2v = (s32)f0;
            s32 t = (s32)((u32)a3v * (u32)a3v + (u32)a2v * (u32)a2v);
            if (!(s7 < t)) {
                f1 = *(f32 *)D_00591E70;
                f0 = *(f32 *)((u8 *)i4 + (u32)base + 0x7FC) - f1;
                a2 = (s32)f0;
                a1 = a2;
                if (a1 <= 0) {
                    a1 = -a2;
                }
                if (a1 < 0x21) {
                    f0 = *(f32 *)(v1u + (u32)base + 0x800) - f1;
                    v1 = (s32)f0;
                    if (v1 <= 0) {
                        v1 = -v1;
                    }
                    if (a2 <= 0) {
                        a2 = -a2;
                    }
                    if (v1 < a2) {
                        a0 = 1;
                        goto LAC4;
                    }
                }
            }
            if (*(s32 *)(base + 0x50) < 0x2800) {
                a0 = 2;
                goto LAC4;
            }
            f0 = f4 - f6;
            a2 = (s32)f0;
            f1 = (f32)A;
            f0 = f3 - f5;
            a1 = (s32)f0;
            f1 = f4 - f1;
            f0 = f3 - (f32)B;
            v0 = (s32)f1;
            v1 = (s32)f0;
            v1 = (s32)((u32)v0 * (u32)v0 + (u32)v1 * (u32)v1);
            v0 = (s32)((u32)a2 * (u32)a2 + (u32)a1 * (u32)a1);
            if (v0 < v1) {
                a0 = 3;
                goto LAC4;
            }
            {
                s32 q = ((s32)(*(u8 *)(D_00592980 + req[0x12] * 26880 + req[0x11] * 840 + 0x8C) >> 2) + 0x94) * -544;
                v0 = q / 183 - 0x100;
                if (!(v0 < s2)) {
                    a0 = 4;
                    goto LAC4;
                }
            }
            f1 = *(f32 *)D_00591E70 - (f32)s2;
            if (!(f1 < 512.0f)) {
                a0 = 5;
            }
        }
    }
LAC4:
    if (a0 != 0) {
        return 0;
    }
    if (s0 == 0xFF) {
        return 2;
    }
    if (func_00A09950(req) == 1) {
        return 2;
    }
    ret = func_009F42B0(req, -0x120);
    f1 = (f32)ret;
    f0 = *(f32 *)((u8 *)i4 + (u32)D_003E7574 + 0x7FC);
    if (f0 < f1) {
        return 2;
    }
    if (func_00A09950(req) != 0) {
        return 0;
    }
    if (*(s32 *)(req + 0x58) < *(s32 *)(D_003E7574 + 0x50)) {
        return 2;
    }
    return 0;

L64C:
    if (fp == 0) {
        return 2;
    }
    a0 = ((u8)fp == 2) ? 0x58 : 0x34;
    f0 = (f32)s2;
    f2 = *(f32 *)D_00591E70;
    f1 = f2 - f0;
    a1 = (s32)f1;
    if (s0 == 0x80) {
        if (!(f1 < 56.0f)) {
            return 0;
        }
    }
    v0 = a1;
    if (a1 <= 0) {
        v0 = -a1;
    }
    if (v0 < a0) {
        v1 = -a1;
        v0 = (u8)idx;
        v1 = v1 / v0;
        *(f32 *)(req + 0xF4) = (f32)v1;
        return 1;
    }
    if (s0 == 0x80) {
        return 0;
    }
    if (s0 == 1 || (u32)(s0 - 0xFE) < 2) {
        if (s2 < -0x250) {
            if (f2 < (f32)s2) {
                *(s32 *)(req + 0xF4) = 0;
                return 2;
            }
        }
        return 0;
    }
    return 0;

L6FC:
    if ((u8)func_00AFBAB0(req[0]) == 0xFF) {
        a0 = 1;
    } else {
        v1 = (u8)func_00AFBAB0(req[0]);
        a0 = v1 % 0x17;
    }
    v0 = *(u8 *)(D_0058E5B0 + a0 * 576);
    if ((u32) * (s32 *)(req + v0 * 4 + 0x158) < 0x14401u) {
        return 0;
    }
    goto L424;
}
