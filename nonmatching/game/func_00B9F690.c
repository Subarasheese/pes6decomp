/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBD00E[];
extern char D_00CBCE2D[];
extern char D_00CBD028[];
extern char D_00CBD00C[];
extern char D_00CBD024[];
extern char D_00CBCE60[];
extern char D_00CBD010[];
extern char D_00CBD020[];
extern char D_00CBCE2C[];
extern char D_00CBCFBC[];
extern char D_00CBCED0[];
extern char D_00CBCE28[];
extern char D_00CBCE40[];

s32 func_009B4390(void);
f32 func_00BC8CA0(void);
f32 sqrtf(f32);
f32 func_001A4790(s32);
void func_001A4210(void *, s32, s32, s32, s32, f32, f32);
void func_001A55C0(void *);
void func_00103D80(void *, void *, void *, f32);

void func_00B9F690(void) {
    f32 w;
    f32 buf[8] __attribute__((aligned(16)));
    f32 *v = buf;
    f32 *r = buf + 4;

    if (*(u8 *)D_00CBD00E == 0) {
        s32 n;
        if (*(u8 *)D_00CBCE2D == 0) {
            *(s32 *)D_00CBD028 = 0;
        }
        n = func_009B4390() & 0xffff;
        if (*(u16 *)D_00CBD00C < n) {
            f32 t = func_00BC8CA0();
            f32 a = *(f32 *)D_00CBD028 + t;
            f32 b = *(f32 *)D_00CBD024;
            *(f32 *)D_00CBD028 = a;
            if (a < b) {
                w = a / b;
            } else {
                w = 1.0f;
            }
        } else {
            w = 0.0f;
        }
    } else if (*(u8 *)D_00CBCE2D == 0) {
        w = 0.0f;
    } else {
        f32 s;
        __asm__ volatile("lqc2 $vf4, 0x0(%0)\n lqc2 $vf5, 0x0(%1)\n vsub.xyzw $vf6, $vf4, $vf5\n sqc2 $vf6, 0x0(%2)\n lqc2 $vf4, 0x0(%2)\n lqc2 $vf5, 0x0(%2)\n vmul.xyz $vf5, $vf4, $vf5\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n" : : "r"(D_00CBCE60), "r"(D_00CBD010), "r"(v) : "memory");
        __asm__ volatile("qmfc2.ni %0, $vf5" : "=r"(s));
        if (!(s <= 0.0f)) {
            s = sqrtf(s);
        }
        {
            f32 d = *(f32 *)D_00CBD020;
            if (s < d) {
                w = 1.0f - s / d;
            } else {
                w = 0.0f;
            }
        }
    }
    {
        f32 k = func_001A4790(((s32 *)D_00CBCFBC)[*(u8 *)D_00CBCE2C]);
        func_001A4210(D_00CBCED0, 0, 0, 0, 15, 1.0f, w * k);
    }
    func_001A55C0(r);
    if (*(s32 *)D_00CBCE28 == 1) {
        r[0] = -r[0];
    }
    if (*(u8 *)D_00CBCE2D == 0) {
        ((f32 *)D_00CBCE40)[0] = r[0];
        ((f32 *)D_00CBCE40)[1] = r[1];
        ((f32 *)D_00CBCE40)[2] = r[2];
    } else {
        v[0] = r[0];
        v[1] = r[1];
        v[2] = r[2];
        func_00103D80(D_00CBCE40, v, D_00CBCE40, 0.1f);
    }
}
