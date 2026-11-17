/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef int u128 __attribute__((mode(TI)));

extern char D_00520570[];
extern char D_00520574[];
extern char D_00520578[];
extern char D_00520580[];
extern char D_00520590[];
extern char D_005205A0[];
extern char D_005205B0[];
extern char D_005205C0[];
extern char D_005205D8[];
extern char D_005205E0[];
extern s32 D_003E9890;

void func_0012FFF0(void *a0, f32 f12);
void func_0012F250(void *a0, s32 a1, f32 f12);
f32 func_0011D550(f32 f12);
void func_00103CD0(void *a0, void *a1);
void func_001040A0(void *a0, void *a1, f32 f12);
void func_00103BB8(void *a0, void *a1, void *a2);
void func_001A3AC0(void);
f32 func_0011D238(f32 f12);
f32 func_0011D5F8(f32 f12);
f32 sqrtf(f32);

void func_001A4210(char *a0, void *a1, s32 a2, s32 a3, s32 a4, f32 f12, f32 f13) {
    char mB0[0x40] __attribute__((aligned(16)));
    char m70[0x40] __attribute__((aligned(16)));
    f32 *fm = (f32 *)mB0;
    f32 scale = f12;
    f32 pi, f8, t, k, w;

    if (*(s32 *)a0 == 0) return;
    func_0012FFF0(a0, f13);
    func_0012F250(a0, a2, f13);
    if (!(a4 & 1)) {
        f32 v68 = *(f32 *)(a0 + 0x68);
        f32 v6c = *(f32 *)(a0 + 0x6C);
        if (v68 < 1.0f) *(f32 *)D_00520570 = 1.0f; else *(f32 *)D_00520570 = v68;
        t = *(f32 *)D_00520570;
        if (v6c - t < 100.0f) *(f32 *)D_00520574 = 100.0f + t; else *(f32 *)D_00520574 = v6c;
    }
    if (!(a4 & 2)) {
        f32 r = 320.0f / func_0011D550(*(f32 *)(a0 + 0x60) / 2.0f);
        if (r < 200.0f) *(f32 *)D_00520578 = 200.0f; else *(f32 *)D_00520578 = r;
    }
    if (!(a4 & 4)) {
        *(u128 *)D_00520580 = *(u128 *)(a0 + 0x50);
    }
    func_00103CD0(mB0, a0 + 0x10);
    pi = 3.14159274f;
    func_001040A0(mB0, mB0, pi);
    if (a1) func_00103BB8(mB0, a1, mB0);
    fm[12] = fm[12] * scale;
    fm[13] = fm[13] * scale;
    fm[14] = fm[14] * scale;
    if (a3) {
        func_001A3AC0();
        func_00103CD0(m70, D_005205E0);
        func_00103BB8(mB0, m70, mB0);
        if (!(D_003E9890 & 1)) {
            f32 d, s;
            __asm__ volatile(
                "lqc2 $vf4, 0x0(%1)\n"
                "lqc2 $vf5, 0x0(%2)\n"
                "vsub.xyzw $vf6, $vf4, $vf5\n"
                "sqc2 $vf6, 0x0(%3)\n"
                "lqc2 $vf4, 0x0(%3)\n"
                "lqc2 $vf5, 0x0(%3)\n"
                "vmul.xyz $vf5, $vf4, $vf5\n"
                "vaddy.x $vf5, $vf5, $vf5y\n"
                "vaddz.x $vf5, $vf5, $vf5z\n"
                "qmfc2.ni %0, $vf5\n"
                : "=r"(d)
                : "r"(D_005205A0), "r"(D_00520590), "r"(D_005205C0)
                : "memory");
            if (0.0f == d) {
                *(s32 *)D_005205B0 = 0x461C4000;
                *(f32 *)(D_005205C0 + 8) = 1.0f;
            } else {
                s = sqrtf(d);
                *(f32 *)D_005205B0 = s;
                *(f32 *)D_005205C0 = *(f32 *)D_005205C0 / s;
                *(f32 *)(D_005205C0 + 4) = *(f32 *)(D_005205C0 + 4) / s;
                *(f32 *)(D_005205C0 + 8) = *(f32 *)(D_005205C0 + 8) / s;
            }
            *(s32 *)(D_005205C0 + 12) = 0;
        }
        f8 = *(f32 *)D_005205B0;
    } else {
        f8 = 10000.0f;
    }
    {
        f32 e4 = fm[13], e0 = fm[12], e8 = fm[14];
        f32 p0 = 5.0f * e4;
        f32 p2 = 5.0f * e8;
        f32 p1 = 5.0f * -e0;
        f32 z = 0.0f;
        *(f32 *)(D_00520590 + 0xC) = 1.0f;
        D_003E9890 = 0;
        *(f32 *)(D_005205A0 + 0xC) = 1.0f;
        *(f32 *)D_00520590 = p1;
        *(f32 *)(D_00520590 + 4) = p0;
        *(f32 *)(D_00520590 + 8) = p2;
        *(f32 *)D_005205A0 = p1 + (-fm[8]) * f8;
        *(f32 *)(D_005205A0 + 4) = p0 + fm[9] * f8;
        *(f32 *)(D_005205A0 + 8) = p2 + fm[10] * f8;
        if (!(a4 & 8)) {
            if (!(fm[5] < z)) {
                w = func_0011D5F8(-fm[1]);
                if (w < -pi || !(w <= pi)) {
                    k = 0.15915494f * w;
                    k = k - func_0011D238(k);
                    if (!(k <= 0.5f)) k = k - 1.0f;
                    w = pi * (2.0f * k);
                }
                *(f32 *)D_005205D8 = w;
                D_003E9890 = D_003E9890 & -9;
            } else {
                w = func_0011D5F8(-fm[1]);
                w = pi - w;
                if (w < -pi || !(w <= pi)) {
                    k = 0.15915494f * w;
                    k = k - func_0011D238(k);
                    if (!(k <= 0.5f)) k = k - 1.0f;
                    w = pi * (2.0f * k);
                }
                *(f32 *)D_005205D8 = w;
                D_003E9890 = D_003E9890 & -9;
            }
        }
    }
    func_00103CD0(D_005205E0, mB0);
    D_003E9890 = D_003E9890 | 8;
}
