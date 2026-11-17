/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern char D_00592268[];
extern char D_00592980[];
extern u8 *D_003E7574;
extern s32 func_00288670(s32 a, s32 b);
extern s32 func_00BBB8C0(s32 a);
extern s32 func_00A13E50(s32 a, s32 b);
extern s32 func_00AB4850(void *p, s32 a);
extern s32 func_00A07B40(void);
extern s32 func_00AA3210(void *p, f32 x, f32 z);
extern s32 func_009B30B0(s32 a, s32 b);
extern void func_00285080(s32 a);

s32 func_00A8F230(u8 *p, s32 a1, s32 s3, s32 s5, s32 s6, s32 mode)
{
    s32 s0, s1, s2, s7, t, q;
    s32 L0, L1, L2, L3;
    u8 *g;

    *(s32 *)D_00592268 = s5;
    if (mode >= 6u) {
        goto tail;
    }
    if (mode == 0 || mode == 4) {
        s1 = func_00BBB8C0(func_00288670(((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x76] & 0x7F, 0x28) + 0x63);
        t = func_00288670(((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x77] & 0x7F, 0x32) * s1;
        q = t / 100;
        if (s3 < 0x1000) {
            s2 = 0x4800;
        } else {
            s2 = s3 + 0x3800;
        }
        if (s2 > 0x5800) {
            s2 = 0x5800;
        }
        s2 += q * 40;
        if (mode == 4) {
            s2 -= 0x3000;
        }
        if (*(u8 *)(*(s32 *)(p + 4) + 0x2D) != (((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x68] & 1)) {
            t = func_00AB4850(p, 0x100) + 0x100;
            s2 = (s2 << 8) / (t / 2);
        }
    } else if (mode == 3 || mode == 5) {
        s0 = func_00BBB8C0(func_00288670(((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x76] & 0x7F, 0x28) + 0x63);
        t = func_00288670(((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x77] & 0x7F, 0x32) * s0;
        q = t / 100;
        if (mode == 3) {
            t = s3 / 2;
        } else {
            t = s3;
        }
        s2 = func_00A13E50(t + 0x3400 + q * 40, 0x4800);
        if (*(u8 *)(*(s32 *)(p + 4) + 0x2D) != (((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x68] & 1)) {
            t = func_00AB4850(p, 0x100) + 0x100;
            s2 = (s2 << 8) / (t / 2);
        }
    } else if (mode == 1) {
        s2 = 0x2000;
    } else {
        s0 = func_00BBB8C0(func_00288670(((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x7D] & 0x7F, 0x32) * 10);
        t = func_00288670(((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x7D] & 0x7F, 0x32);
        s0 += t * 30 + 0x2400;
        if (s3 < 0x1000) {
            s0 -= 0x800;
        } else {
            f32 dx, dz;
            s32 d;
            g = D_003E7574;
            dx = *(f32 *)(g + 0x1454) - 13465.0f * (f32)*(s16 *)(p + 0x14);
            dz = *(f32 *)(g + 0x145C) - 0.0f;
            {
                s32 ix = (s32)dx;
                s32 iz = (s32)dz;
                d = ix * ix + iz * iz;
            }
            if (d < 0x1000001) {
                s0 += func_00BBB8C0(0x200) + 0x400;
            }
            g = D_003E7574;
            if (func_00AA3210(p, *(f32 *)(g + 0x1454), *(f32 *)(g + 0x145C)) < 0x240001) {
                s0 += func_00BBB8C0(0x400) + 0x600;
            }
        }
        s2 = func_00A13E50(s0, 0x3200);
    }
tail:
    g = D_003E7574;
    L0 = *(s32 *)(g + 0x1440);
    L1 = func_00A13E50((s6 * 14) / 10, -0x100);
    s7 = 0;
    s0 = s3 * s3;
    L3 = (s2 * 7) / 10;
    L2 = s2 / 2;
    for (;;) {
        f32 fx, fz;
        if (!(s7 < 0x40 || s3 < 0x9000)) {
            *(s32 *)D_00592268 = s5;
            return s3;
        }
        g = D_003E7574;
        s1 = 0;
        *(f32 *)(g + 0x1454) = *(f32 *)(g + 0x47C);
        g = D_003E7574;
        *(f32 *)(g + 0x1458) = *(f32 *)(g + 0x14);
        g = D_003E7574;
        *(f32 *)(g + 0x145C) = *(f32 *)(g + 0xB7C);
        g = D_003E7574;
        *(s16 *)(g + 0x1450) = a1;
        g = D_003E7574;
        *(s16 *)(g + 0x144C) = 0;
        g = D_003E7574;
        g[0x144E] = 0;
        g = D_003E7574;
        *(s32 *)(g + 0x1444) = s3;
        g = D_003E7574;
        *(s32 *)(g + 0x1440) = L0;
        g = D_003E7574;
        *(f32 *)(g + 0x1448) = (f32)(-s5 * 188);
        g = D_003E7574;
        g[0x144F] = 1;
        do {
            s32 ix, iz;
            func_00285080(2);
            g = D_003E7574;
            fx = *(f32 *)(g + 0x1454);
            fz = *(f32 *)(g + 0x145C);
            ix = (s32)(*(f32 *)(g + 0x10) - fx);
            iz = (s32)(*(f32 *)(g + 0x18) - fz);
            if (s0 < ix * ix + iz * iz) {
                break;
            }
            s1 += 2;
        } while (s1 < 0xFF);
        t = *(s32 *)(g + 0x1444);
        if (s2 < t) {
            if (*(f32 *)(g + 0x1458) <= (f32)(s6 + 0x20)) {
                goto done;
            }
            if ((((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0xA2] & 0x7F) < 0x47) {
                if ((u16)func_009B30B0(a1, *(u16 *)(p + 0x26)) >= 0x15) {
                    goto done;
                }
            }
            g = D_003E7574;
            {
                s32 a0 = (s32)(1.0f + (*(f32 *)(g + 0x1458) - (f32)(s6 + 0x20)) / 128.0f);
                s5 += a0;
                s3 -= (a0 * 188) / 2 + 0x400;
            }
        } else {
            if (L3 < t) {
                if (*(f32 *)(g + 0x1458) < (f32)(s6 - 0x80)) {
                    goto done;
                }
            }
            if (!(*(f32 *)(g + 0x1458) < (f32)L1)
                && fx <= 13081.0f
                && !(fx < -13081.0f)
                && fz <= 8345.0f
                && !(fz < -8345.0f)) {
                goto nocheck;
            }
            if (func_00A07B40() != 0
                && *(s32 *)(D_003E7574 + 0x10BC + s1 * 4) < 0xBC0
                && L2 < *(s32 *)(D_003E7574 + 0x1444)) {
                goto done;
            }
nocheck:
            if (s1 >= 0x100) {
                s3 += 0x400;
            }
        }
        s7++;
        s3 += (0x63 - func_00288670(((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x76] & 0x7F, 0x28)) * 4 + 0x300;
    }
done:
    *(s32 *)D_00592268 = s5;
    return s3;
}
