/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_005202C0[];
extern char D_00397770[];
extern char D_00397760[];
extern char D_00397761[];
extern char D_00397762[];
extern char D_00397763[];

s32 Pes6Random_Below(s32);
void func_00103BB8(void *, void *, void *);
f32 func_0011D468(f32);
void *func_00129B60(void);
void *func_00129C60(void);
f32 func_00151CF0(f32);
s32 func_00183630(void *, void *, void *, s32, f32);
s32 func_001838E0(void *, void *);
s32 func_001CDAA0(void);
f32 sqrtf(f32);

void func_0019A080(void) {
    f32 ctx[16] __attribute__((aligned(16)));
    f32 v[4] __attribute__((aligned(16)));
    f32 scaleBase, radMin, grav;
    f32 baseX, baseY, baseZ;
    char *s5;
    s32 obj;
    s32 i;

    if (*(s32 *)D_005202C0 == 0) {
        return;
    }
    scaleBase = 10.0f;
    radMin = 5.0f;
    grav = 0.1f;
    if (func_001CDAA0() == 1) {
        scaleBase = scaleBase * 1.2f;
        radMin = radMin * 1.2f;
        grav = grav * 1.2f;
    }
    {
        void *p0 = func_00129C60();
        void *p1 = func_00129B60();
        func_00103BB8(ctx, p1, p0);
    }
    s5 = (char *)*(s32 *)D_005202C0 + 0x20;
    for (obj = 0; obj < 3; obj++, s5 += 0x350) {
        u8 *p = (u8 *)(s5 + 4);
        f32 *pt = (f32 *)(s5 + 0x40);
        f32 *vel = (f32 *)(s5 + 0x20);

        if (**(s32 **)D_005202C0 == 0 && *(s32 *)s5 != 0) {
            goto update;
        }
        {
            s32 h = func_00183630(ctx, pt, vel, 64, -0.1f - func_00151CF0(0.6f));
            *(s32 *)s5 = h;
            if (h == 0) {
                continue;
            }
        }
        p[0] = 1;
        *(s32 *)(s5 + 0x14) = 0;
        *(s32 *)(s5 + 0x18) = (u16)Pes6Random_Below(60);
        *(s32 *)(s5 + 0x1C) = 0;
        v[0] = vel[0];
        v[1] = vel[1];
        v[2] = vel[2];
        {
            f32 r = scaleBase + func_00151CF0(radMin);
            __asm__ volatile("lqc2 $vf4, 0(%0)\n qmtc2.ni %1, $vf5\n vmulx.xyzw $vf6, $vf4, $vf5x\n sqc2 $vf6, 0(%0)" : : "r"(v), "r"(*(s32 *)&r) : "memory");
        }
        vel[0] = v[0];
        vel[1] = v[1];
        vel[2] = v[2];
        __asm__ volatile("lqc2 $vf4, 0(%0)\n lqc2 $vf5, 0(%1)\n vopmula.xyz ACC, $vf4, $vf5\n vopmsub.xyz $vf6, $vf5, $vf4\n vsub.w $vf6, $vf6, $vf6\n sqc2 $vf6, 0(%2)" : : "r"(v), "r"(D_00397770), "r"(s5 + 0x30) : "memory");
        __asm__ volatile("lqc2 $vf4, 0(%0)\n vmul.xyz $vf5, $vf4, $vf4\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n vrsqrt Q, $vf0w, $vf5x\n vsub.w $vf4, $vf0, $vf0\n vwaitq\n vmulq.xyz $vf4, $vf4, Q\n sqc2 $vf4, 0(%0)" : : "r"(s5 + 0x30) : "memory");
        {
            f32 two = 2.0f;
            __asm__ volatile("lqc2 $vf4, 0(%0)\n qmtc2.ni %1, $vf5\n vmulx.xyzw $vf6, $vf4, $vf5x\n sqc2 $vf6, 0(%0)" : : "r"(s5 + 0x30), "r"(*(s32 *)&two) : "memory");
            __asm__ volatile("lqc2 $vf4, 0(%0)\n qmtc2.ni %1, $vf5\n vmulx.xyzw $vf6, $vf4, $vf5x\n sqc2 $vf6, 0(%0)" : : "r"(v), "r"(*(s32 *)&two) : "memory");
        }
        baseX = v[0];
        baseY = v[1];
        baseZ = v[2];
        for (i = 1; i < 13; i++) {
            p[i] = 1;
            pt[i * 3 + 0] = pt[i * 3 - 3] - baseX;
            pt[i * 3 + 1] = pt[i * 3 - 2] - baseY;
            pt[i * 3 + 2] = pt[i * 3 - 1] - baseZ;
        }
        *(u8 *)(s5 + 0x34C) = *(u8 *)D_00397760;
        *(u8 *)(s5 + 0x34D) = *(u8 *)D_00397761;
        *(u8 *)(s5 + 0x34E) = *(u8 *)D_00397762;
        *(u8 *)(s5 + 0x34F) = *(u8 *)D_00397763;
    update:
        if (*(s32 *)(s5 + 0x14) != 0) {
            u32 c;
            f32 t;
            *(s32 *)(s5 + 0x14) = *(s32 *)(s5 + 0x14) + 1;
            c = *(u32 *)(s5 + 0x14);
            if (c >= 30) {
                *(s32 *)s5 = 0;
                continue;
            }
            t = 255.0f * (1.0f - (f32)c / 30.0f);
            *(u8 *)(s5 + 0x34F) = (u32)t;
            continue;
        }
        if (p[0] == 1) {
            u32 n = *(u32 *)(s5 + 0x1C);
            if (n < 120) {
                *(u32 *)(s5 + 0x1C) = n + 1;
            }
            vel[0] = vel[0] * 0.99f;
            vel[1] = vel[1] * 0.99f;
            vel[2] = vel[2] * 0.99f;
            vel[1] = vel[1] + grav;
            pt[0] = pt[0] + vel[0];
            pt[1] = pt[1] + vel[1];
            pt[2] = pt[2] + vel[2];
            if (!(pt[1] <= -1.0f)) {
                pt[1] = -1.0f;
                p[0] = 0;
            }
        }
        {
            f32 k = (0.5f * (f32) * (u32 *)(s5 + 0x1C)) / 120.0f;
            for (i = 1; i < 13; i++) {
                if (p[i] != 0) {
                    f32 *q = pt + i * 3;
                    f32 *pr = q - 3;
                    f32 fr, w, ang, a, d, mag;
                    u32 m;
                    q[1] = q[1] + 2.0f;
                    fr = (f32)(u32)(i - 1) / 11.0f;
                    w = 60.0f * (1.0f - fr) + 30.0f * fr;
                    m = (u32)w;
                    ang = fr + (f32)(*(u32 *)(s5 + 0x18) % m) / (f32)m;
                    d = k * func_0011D468(6.2831855f * ang);
                    q[0] = (0.0f + q[0]) + ((f32 *)(s5 + 0x30))[0] * d;
                    q[1] = (0.0f + q[1]) + ((f32 *)(s5 + 0x30))[1] * d;
                    q[2] = (0.0f + q[2]) + ((f32 *)(s5 + 0x30))[2] * d;
                    v[0] = q[0] - pr[0];
                    v[1] = q[1] - pr[1];
                    v[2] = q[2] - pr[2];
                    {
                        s32 bits;
                        __asm__ volatile("lqc2 $vf4, 0(%1)\n lqc2 $vf5, 0(%1)\n vmul.xyz $vf5, $vf4, $vf5\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n qmfc2.ni %0, $vf5" : "=r"(bits) : "r"(v) : "memory");
                        mag = *(f32 *)&bits;
                    }
                    if (0.0f == mag) {
                        continue;
                    }
                    a = sqrtf(mag);
                    if (!(a <= 20.0f)) {
                        f32 nx = v[0] / a;
                        f32 ny = v[1] / a;
                        f32 nz = v[2] / a;
                        q[0] = (0.0f + pr[0]) + 20.0f * nx;
                        v[0] = nx;
                        v[1] = ny;
                        v[2] = nz;
                        q[1] = (0.0f + pr[1]) + 20.0f * ny;
                        q[2] = (0.0f + pr[2]) + 20.0f * nz;
                    }
                    if (!(q[1] <= -1.0f)) {
                        q[1] = -1.0f;
                        p[i] = 0;
                        if (i == 12) {
                            *(s32 *)(s5 + 0x14) = 1;
                        }
                    }
                }
            }
        }
        if (func_001838E0(ctx, pt) != 0 && func_001838E0(ctx, (char *)pt + 0x90) != 0) {
            *(s32 *)s5 = 0;
            continue;
        }
        *(s32 *)(s5 + 0x18) = *(s32 *)(s5 + 0x18) + 1;
        {
            f32 *o = (f32 *)(s5 + 0xDC);
            for (i = 0; i < 13; i++) {
                o[0] = pt[0] - ((f32 *)(s5 + 0x30))[0];
                o[1] = pt[1] - ((f32 *)(s5 + 0x30))[1];
                o[2] = pt[2] - ((f32 *)(s5 + 0x30))[2];
                o[6] = ((f32 *)(s5 + 0x30))[0] + pt[0];
                o[7] = ((f32 *)(s5 + 0x30))[1] + pt[1];
                o[8] = ((f32 *)(s5 + 0x30))[2] + pt[2];
                pt += 3;
                o += 12;
            }
        }
    }
}
