/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_009B30B0(s32 a, s32 b);
extern s32 func_009B3500(void *p, s32 a, s32 b);
extern s32 func_00BBB8C0(s32 a);
extern s32 func_00BBB780(s32 a);
extern s64 func_00288670(s32 a, s32 b);
extern s32 func_00A9C640(void *p);
extern s32 func_00A9B980(void *p);
extern u8 *D_003E7574;
extern char D_0058E5B0[];
extern char D_00591E4F[];
extern char D_00591E50[];
extern char D_00591E70[];
extern char D_0059225C[];
extern char D_00592980[];

s32 func_00A65280(u8 *p, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 f12v, s32 st0, s32 st1) {
    s32 s0, s2, s1, s5, v, n, v0;
    u8 *t, *t1, *q;

    s2 = a2;
    s0 = a2 & 0xFFFF;
    if (s0 >= 0x60) {
        if ((func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) >= 0x50) {
            if ((func_009B30B0(*(u16 *)(D_003E7574 + 0x58), *(u16 *)(p + 0x2A)) & 0xFFFF) < 0x21 ||
                !((f32)*(s16 *)(p + 0x14) * *(f32 *)(p + 0xE0) <= -9241.0f)) {
                if ((func_009B30B0(a4, *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) >= 0x60 &&
                    *(s32 *)(D_003E7574 + 0x50) >= 0x3001) {
                    *(u16 *)(p + 0x2C) = *(u16 *)(D_003E7574 + 0x58) + 0x8000;
                    return 0x77;
                }
                return 0x78;
            }
        }
    }
    if (!((f32)*(s16 *)(p + 0x14) * f12v < -9241.0f)) {
        if (func_00BBB8C0(2) != 0 && s0 < 0x21 && (a3 & 0xFFFF) < 0x21) {
            if (a1 < 0x600) {
                if (s0 < 0x18) s2 = 0x88;
                else if (s0 < 0x30) s2 = 0x8A;
                else s2 = 0x8B;
            } else if (s0 >= 0x18) {
                s2 = 0x8A;
            } else {
                s2 = 0x88;
            }
        } else {
            v = func_009B30B0(*(u16 *)(p + 0x26), a7) & 0xFFFF;
            if (*(s32 *)(p + 0x1C) >= 0xA01 && v >= 0x60) {
                s2 = 0x8F;
                *(u16 *)(p + 0x2C) = *(u16 *)(p + 0x26);
            } else {
                if (s0 < v) s2 = v;
                s0 = s2 & 0xFFFF;
                if (s0 < 0x18) s2 = 0x88;
                else if (s0 < 0x30) s2 = 0x8A;
                else s2 = 0x8B;
            }
        }
    } else if (p[0] == (u8)D_00591E4F[p[0x13] * 2] &&
               st0 == (((((a4 & 0xFFFF) - (a6 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001) &&
               s0 >= 0x30 && s0 < 0x61 &&
               (func_009B30B0(*(u16 *)(p + 0x26), a4) & 0xFFFF) < 0x31) {
        if (s0 < 0x41 && func_00BBB8C0(3) != 0) s2 = 0x82;
        else s2 = 0x8B;
    } else if (func_00BBB8C0(2) != 0 && (a3 & 0xFFFF) < 0x21) {
        if (a1 < 0x600) {
            if (s0 >= 0x18) s2 = 0x79;
            else s2 = 0x81;
        } else if (s0 >= 0x18) {
            s2 = 0x79;
        } else {
            s2 = 0x76;
        }
    } else if (s0 < 0x18) {
        s2 = 0x88;
    } else if (s0 < 0x30) {
        s2 = 0x8A;
    } else {
        s2 = 0x8B;
    }

    func_009B3500(p, s2, 0);
    if (!(*(f32 *)(D_003E7574 + st1 * 4 + 0x7FC) <= 32.0f + *(f32 *)D_00591E70) && s0 < 0x61) {
        q = (u8 *)D_00592980 + p[0x12] * 0x6900 + p[0x11] * 0x348;
        if ((q[0xA9] & 0x7F) < 0x3D) {
            if (func_00BBB780((s16)func_00288670(q[0x7D] & 0x7F, 0x32)) != 0) {
                s2 = (s0 >= 0x18) ? 0x1C2 : 0x16A;
            }
        } else {
            s2 = (s0 >= 0x18) ? 0x1C2 : 0x16A;
        }
    }

    n = (u8)D_00591E4F[(p[0x13] ^ 1) * 2];
    if (n == 0xFF) n = 1; else n = n % 23;
    t = (u8 *)D_0058E5B0 + n * 0x240;
    s5 = *(u16 *)(p + t[0] * 2 + 0x128);
    s0 = func_009B30B0(a5, s5) & 0xFFFF;
    s1 = 1;
    if (s0 >= 0x61) {
        if ((func_009B30B0(*(u16 *)(p + 0x2C), func_00A9C640(p)) & 0xFFFF) >= 0x40) s1 = 0;
    }
    if (s0 < 0x31) {
        if ((func_009B30B0(a5, *(u16 *)(p + 0x2A)) & 0xFFFF) < 0x31) {
            if (func_00A9B980(p) >= 0x900000) s1 = 0;
        }
    }
    if (s1 != 0) {
        if ((func_009B30B0(a6, s5) & 0xFFFF) < 0x20) {
            if (a1 < 0xC00) s1 = 0;
        } else {
            s1 = 0;
        }
    }
    if (s1 != 0) {
        n = (u8)D_00591E4F[(p[0x13] ^ 1) * 2];
        if (n == 0xFF) n = 1; else n = n % 23;
        t1 = (u8 *)D_0058E5B0 + n * 0x240;
        v0 = 0;
        if (t1[0x16] != 0x10 && *(u16 *)(D_003E7574 + 0x84) != 0xB &&
            (func_009B30B0(*(u16 *)(p + 0x2C), *(u16 *)(t1 + 0x26)) & 0xFFFF) < 0x51) {
            v = *(s32 *)(p + t1[0] * 4 + 0x158);
            if (v < 0x24001) {
                if (v < 0x10001) {
                    v0 = 1;
                } else if ((u32)v < *(u32 *)(p + 0x110)) {
                    if ((func_009B30B0(*(u16 *)(D_003E7574 + 0x58), *(u16 *)(p + t1[0] * 2 + 0x128)) & 0xFFFF) >= 0x70)
                        v0 = 1;
                }
            }
        }
        if (v0 != 0) {
            *(s32 *)D_0059225C = st0;
            if (*(s32 *)(p + 0x1C) >= 0x1101) {
                if ((func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(p + 0x28)) & 0xFFFF) < 0x21) {
                    *(u16 *)(p + 0x2C) = *(u16 *)(p + 0x28);
                    *(s32 *)D_0059225C = ((((*(s32 *)(p + 0x228) - (s5 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001);
                }
            }
            if (s0 < 0x19) s2 = 0x91;
            else if (s0 >= 0x61) s2 = 0x92;
            else if (s0 >= 0x31) s2 = 0x94;
            else s2 = 0x93;
            v = s2 & 0xFFFF;
            if (v == *(u16 *)(*(u8 **)(t + 4) + 0x30)) {
                if (v == 0x92) return 0x77;
                if (v == 0x93) s2 = 0x94;
                else if (v == 0x94 || v == 0x91) s2 = 0x93;
            }
        }
    }

    {
        s32 b13 = p[0x13];
        s32 a0v = (u8)D_00591E4F[b13 * 2];
        s32 a1v = s2 & 0xFFFF;
        s32 w;
        if (p[0] != a0v) {
            n = (a0v == 0xFF) ? 1 : a0v % 23;
        } else {
            a0v = (u8)D_00591E50[b13 * 2];
            n = (a0v == 0xFF) ? 1 : a0v % 23;
        }
        w = *(u16 *)(*(u8 **)((u8 *)D_0058E5B0 + n * 0x240 + 4) + 0x30);
        if (w == a1v) {
            if (w == 0x92) return 0x77;
            if (w == 0x81 || w == 0x76 || w == 0x16A) s2 = 0x88;
            else if (w == 0x1C2) s2 = 0x16A;
            else if (w == 0x94) s2 = 0x93;
            else if (w == 0x93) s2 = 0x94;
            else if (w == 0x91 || w == 0x88) s2 = 0x81;
        } else {
            n = (u8)D_00591E4F[((b13 & 0xFF) ^ 1) * 2];
            n = (n == 0xFF) ? 1 : n % 23;
            w = *(u16 *)(*(u8 **)((u8 *)D_0058E5B0 + n * 0x240 + 4) + 0x30);
            if (w == a1v) {
                if (w == 0x92) return 0x77;
                if (w == 0x81 || w == 0x76) s2 = 0x88;
                else if (w == 0x88) s2 = 0x81;
            }
        }
    }
    return s2;
}
