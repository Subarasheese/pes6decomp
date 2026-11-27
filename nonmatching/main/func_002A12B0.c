/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_005E19B0[];
extern char D_005E19B6[];
extern char D_005E19B8[];
extern char D_005E19C4[];
extern char D_005E1A34[];
extern char D_005E2200[];
extern char D_005E2208[];
extern char D_005E2220[];
extern char D_005E2250[];
extern char D_005E225C[];

void Pes6CameraFocus_Update(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 g7, float h, float i, float j);
void func_002A0270(void *a, void *b, void *c);
void func_002A1D60(void *a, void *b, void *c, void *d, void *e, float f, float g);

typedef struct {
    u8 pad080[0x70];
    f32 d[4];
    f32 d2[4];
    u8 pad110[0x28];
    f32 oz;
    u8 pad13C[0x24];
    f32 mnx;
    f32 mny;
    u8 pad168[8];
    f32 mxx;
    f32 mxy;
    u8 pad178[0x38];
} Frame;

void func_002A12B0(f32 *out, f32 *out2, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 i12, f32 i13, f32 i14) {
    Frame L;
    f32 g, t, k12, k13, f7, f8;
    f32 fi;
    f32 hx, hy, cx, cy;
    f32 lo0, lo1, hi0, hi1;
    f32 p0, p1, q0, q1;
    f32 tt;
    u32 mask;
    u32 mask0;
    u8 cnt;
    s32 i;
    char *tab;

    tab = D_005E19B0;
    *(s32 *)D_005E1A34 = 0x3f800000;
    if (!(*(u16 *)D_005E19B6 & 0x20)) {
        Pes6CameraFocus_Update(0x3f800000, out2, a2, a3, a4, a5, a6, a7, i12, i13, i14);
        *(u16 *)D_005E19B6 |= 0x20;
    }
    g = *(f32 *)D_005E2208;
    if (g <= 0.0f) {
        if (g == 0.0f) {
            t = *(f32 *)D_005E2200;
        } else {
            t = -g;
        }
    } else {
        t = g;
    }
    k13 = 192.0f * t / 1375.0f;
    if (g <= 0.0f) {
        if (g == 0.0f) {
            g = *(f32 *)D_005E2200;
        } else {
            g = -g;
        }
    }
    k12 = 256.0f * g / 1375.0f;
    cnt = tab[4];
    f7 = 0.75f * k13;
    f8 = 0.75f * k12;
    fi = 0.0f;
    for (i = 0; i < cnt; i++) {
        u32 n;
        char *a12;
        char *a8;
        f32 vx, vy, vz, ex, ey, xp, yp, xm, ym;
        n = ((u8)i < cnt) ? (u8)tab[(u8)i] : 0x1D;
        a12 = tab + n * 12;
        a8 = tab + n * 8;
        vx = *(f32 *)(a12 + 0x104);
        vy = *(f32 *)(a12 + 0x108);
        vz = *(f32 *)(a12 + 0x10C);
        ex = *(f32 *)(a8 + 0x260);
        ey = *(f32 *)(a8 + 0x264);
        xp = vx + ex;
        yp = vy + ey;
        xm = vx - ex;
        ym = vy - ey;
        if (fi <= 0.0f) {
            L.mxx = xp;
            L.mxy = yp;
            L.mnx = xm;
            L.oz = vz;
            L.mny = ym;
        } else {
            L.mxx = (L.mxx <= xp) ? xp : L.mxx;
            L.mxy = (L.mxy <= yp) ? yp : L.mxy;
            L.mnx = (L.mnx <= xm) ? L.mnx : xm;
            L.mny = (L.mny <= ym) ? L.mny : ym;
        }
        fi += 1.0f;
    }
    hx = L.mxx - L.mnx;
    hy = L.mxy - L.mny;
    hx *= 0.5f;
    hy *= 0.5f;
    cx = L.mnx + hx;
    cy = L.mny + hy;
    lo0 = -1.0f * hx;
    lo1 = -1.0f * hy;
    hi0 = hx;
    hi1 = hy;
    p0 = -f8 - lo0;
    p1 = -f7 - lo1;
    q0 = f8 - hx;
    q1 = f7 - hy;
    mask = *(u32 *)D_005E19B8;
    mask0 = mask;
    if (mask == 0) {
        out[0] = cx;
        out[1] = cy;
        out[2] = L.oz;
        *(s32 *)&out[3] = 0x3f800000;
        if (out2 != 0) {
            out2[0] = p0;
            out2[1] = p1;
            out2[2] = q0;
            out2[3] = q1;
        }
    } else {
        f32 e0, e1, e2, e3, c2;
        f32 s080, s084, s090, s094, dx, dy, dd, dd2, K, sf0, sf1, d0, d1, c0, c1;
        s32 j;
        e0 = 0.0f;
        e1 = 0.0f;
        e2 = 0.0f;
        e3 = 0.0f;
        c2 = 0.0f;
        for (j = 0; mask != 0 && j < 0x1D; j++) {
            u32 bit = 1 << j;
            if (mask & bit) {
                f32 vx, vy, ex, ey, xp, yp, xm, ym, m, sa, sb;
                vx = *(f32 *)(tab + j * 12 + 0x104);
                ex = *(f32 *)(tab + j * 8 + 0x260);
                vy = *(f32 *)(tab + j * 12 + 0x108);
                ey = *(f32 *)(tab + j * 8 + 0x264);
                xp = vx + ex;
                xm = vx - ex;
                yp = vy + ey;
                ym = vy - ey;
                hi0 = (hi0 <= xp) ? xp : hi0;
                hi1 = (hi1 <= yp) ? yp : hi1;
                lo0 = (lo0 <= xm) ? lo0 : xm;
                lo1 = (lo1 <= ym) ? lo1 : ym;
                sa = (vx < 0.0f ? -vx : vx) / k12;
                sb = (vy < 0.0f ? -vy : vy) / k13;
                L.d[0] = sa;
                L.d[1] = sb;
                m = (sa <= sb) ? sa : sb;
                tt = 2.2f - m;
                L.d[2] = tt;
                if (tt <= 1.0f) {
                    if (tt < 0.0f) {
                        tt = 0.0f;
                    }
                } else {
                    tt = 1.0f;
                }
                L.d[2] = tt;
                if (c2 == 0.0f) {
                    e0 = xp * tt;
                    e1 = yp * tt;
                    e2 = xm * tt;
                    e3 = ym * tt;
                } else {
                    if (!(xp <= e0)) {
                        e0 = e0 + tt * (xp - e0);
                    }
                    if (!(yp <= e1)) {
                        e1 = e1 + tt * (yp - e1);
                    }
                    if (xm < e2) {
                        e2 = e2 + tt * (xm - e2);
                    }
                    if (ym < e3) {
                        e3 = e3 + tt * (ym - e3);
                    }
                }
                c2 += 1.0f;
                mask &= ~bit;
            }
        }
        hx = e0 - e2;
        hy = e1 - e3;
        hx *= 0.5f;
        hy *= 0.5f;
        s090 = f8 - hx;
        s080 = -f8 - (-1.0f * hx);
        s084 = -f7 - (-1.0f * hy);
        s094 = f7 - hy;
        {
            f32 cx2 = e2 + hx;
            f32 cy2 = e3 + hy;
            dx = cx2 - cx;
            dy = cy2 - cy;
        }
        K = *(f32 *)D_005E19C4;
        sf0 = dx * K;
        sf1 = dy * K;
        d0 = (p0 <= 0.0f) ? p0 : 0.0f;
        d1 = (p1 <= 0.0f) ? p1 : 0.0f;
        c0 = (q0 < 0.0f) ? 0.0f : q0;
        c1 = (q1 < 0.0f) ? 0.0f : q1;
        if (sf0 <= -d0) {
            if (sf0 < -c0) {
                sf0 = -c0;
            }
        } else {
            sf0 = -d0;
        }
        if (sf1 <= -d1) {
            sf1 = (sf1 < -c1) ? -c1 : sf1;
        } else {
            sf1 = -d1;
        }
        out[0] = cx + sf0;
        out[1] = cy + sf1;
        out[2] = L.oz + tt;
        *(s32 *)&out[3] = 0x3f800000;
        if (out2 != 0) {
            dd = sf0 - dx;
            dd2 = sf1 - dy;
            s090 = s090 + dd;
            s080 = s080 + dd;
            s084 = s084 + dd2;
            s094 = s094 + dd2;
            p0 = p0 + sf0;
            p1 = p1 + sf1;
            q0 = q0 + sf0;
            q1 = q1 + sf1;
            out2[0] = (p0 <= s080) ? s080 : p0;
            out2[1] = (p1 <= s084) ? s084 : p1;
            out2[2] = (q0 <= s090) ? q0 : s090;
            out2[3] = (q1 <= s094) ? q1 : s094;
        }
    }
    *(f32 *)(D_005E19B0 + 0xC0) = 0.5f * (hi0 - lo0);
    *(f32 *)(D_005E19B0 + 0xC4) = 0.5f * (hi1 - lo1);
    if (out2 != 0) {
        if (!(out2[0] <= 0.0f)) {
            out2[0] = 0.0f;
        }
        if (!(out2[1] <= 0.0f)) {
            out2[1] = 0.0f;
        }
        if (out2[2] < 0.0f) {
            out2[2] = 0.0f;
        }
        if (out2[3] < 0.0f) {
            out2[3] = 0.0f;
        }
        out2[0] = out2[0] / k12 - 0.25f;
        out2[1] = out2[1] / k13 - 0.25f;
        out2[2] = 0.25f + out2[2] / k12;
        out2[3] = 0.25f + out2[3] / k13;
        func_002A1D60(out, out2, (cnt || mask0) ? (void *)(L.d + 2) : (void *)a2, L.d + 3, L.d + 1, k12, k13);
    }
    func_002A0270(D_005E2220, out, out);
    {
        s32 ix;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x0(%2)\n vsub.xyzw $vf6, $vf4, $vf5\n sqc2 $vf6, 0x0(%3)\n"
                         "lqc2 $vf4, 0x0(%3)\n vmul.xyz $vf5, $vf4, $vf4\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n"
                         "vsqrt Q, $vf5x\n vwaitq\n vaddq.x $vf5, $vf0, Q\n qmfc2.ni %0, $vf5\n"
                         : "=r"(ix) : "r"(out), "r"(D_005E2250), "r"(L.d) : "memory");
        *(s32 *)&L.d[3] = ix;
        L.d2[0] = *(f32 *)D_005E225C / L.d[3];
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n lqc2 $vf5, 0x0(%1)\n vmulx.xyzw $vf6, $vf4, $vf5x\n sqc2 $vf6, 0x0(%0)\n"
                         "lqc2 $vf4, 0x0(%0)\n lqc2 $vf5, 0x0(%2)\n vadd.xyzw $vf6, $vf4, $vf5\n sqc2 $vf6, 0x0(%3)\n"
                         : : "r"(L.d), "r"(L.d2), "r"(D_005E2250), "r"(out) : "memory");
    }
}
