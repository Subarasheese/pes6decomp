/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00CBCE2C[];
extern u8 D_00CBCE2D[];
extern u8 D_00CBCE2F[];
extern u8 D_00CBCEBC[];
extern u8 D_00CBCEBD[];
extern char D_00CBCE86[];
extern f32 D_00CBD030[];
extern f32 D_00CBD02C[];
extern s32 D_00CBD034[];
extern s32 D_00CBCE28[];
extern f32 D_00CBCE3C[];
extern u16 D_00CBD038[];
extern f32 D_00CBCE40[];
extern f32 D_00CBCE44[];
extern f32 D_00CBCE48[];
extern f32 D_00CBCE4C[];
extern f32 D_00CBCE70[];
extern char D_0058E5B0[];
extern char D_00C9E5E0[];
extern char D_00C9E5F0[];
extern char D_00C9E6C0[];
extern u8 *D_003E758C;

void func_002871C0(void *);
void func_00270530(void *, void *);
u32 func_009B4390(void);
u32 func_009B44E0(void);
f32 func_00BC8CA0(void);
void func_00103D80(void *, void *, void *, f32);
void func_00B9EE40(void);

typedef struct { f32 x, y, z, w; } V4;

void func_00B9EF90(void) {
    V4 r __attribute__((aligned(16)));
    V4 q __attribute__((aligned(16)));
    V4 p __attribute__((aligned(16)));
    V4 v __attribute__((aligned(16)));
    V4 w __attribute__((aligned(16)));
    V4 res __attribute__((aligned(16)));
    f32 t, f20;
    s32 s1;
    u32 idx;
    char *s3;
    f32 *s0;
    V4 *s2;

    func_002871C0(&r);
    s1 = D_00CBCE2C[0] - 0x14;
    if (D_00CBCE2F[0] == 0xFF) {
        idx = 1;
    } else {
        idx = D_00CBCE2F[0] % 23;
    }
    s3 = D_0058E5B0 + idx * 576;
    if (D_00CBCE2D[0] == 0) {
        if (D_00CBCEBD[0] > 0) {
            D_00CBD030[0] = (f32)func_009B4390();
            D_00CBD02C[0] = (f32)(u32)*(u16 *)(D_00CBCE86 + D_00CBCEBC[0] * 20);
        } else {
            u32 a;
            D_00CBD030[0] = 0;
            a = func_009B44E0() & 0xFFFF;
            D_00CBD02C[0] = (f32)(s32)(a - (func_009B4390() & 0xFFFF));
        }
    }
    f20 = 1.0f;
    if (D_00CBD030[0] < D_00CBD02C[0]) {
        D_00CBD030[0] = D_00CBD030[0] + func_00BC8CA0();
        if (D_00CBD030[0] < D_00CBD02C[0]) {
            f20 = D_00CBD030[0] / D_00CBD02C[0];
        }
    }
    p = *(V4 *)(D_00C9E5E0 + s1 * 32);
    q = *(V4 *)(D_00C9E5F0 + s1 * 32);
    s2 = &q;
    s0 = (f32 *)(D_00C9E6C0 + s1 * 8);
    if ((u32)s1 <= 6) {
        if (s1 == 0 || s1 == 2) {
            if (D_00CBCE28[0] == 0) {
                p.x = -p.x;
                q.x = -q.x;
            }
            if (D_00CBD034[0] != 0) {
                p.z = -p.z;
                q.z = -q.z;
            }
            if (s1 == 2) {
                t = 1.0f - f20;
                f20 = 1.0f - t * t;
            }
        } else if (s1 == 1 || s1 == 4) {
            f32 df;
            func_00270530(s3, &v);
            p.x = v.x;
            q.x = v.x;
            p.z = v.z;
            q.z = v.z;
            if (D_00CBCE28[0] == 0) {
                v.x = v.x + 13465.0f;
            } else {
                v.x = v.x - 13465.0f;
            }
            *(s32 *)&v.y = 0;
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n lqc2 $vf5, 0x0(%0)\n vmul.xyz $vf5, $vf4, $vf5\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n qmfc2.ni %1, $vf5" : "+r"(&v), "=r"(df) : : "memory");
            if (df == 0.0f) {
                if (D_00CBCE28[0] != 0) {
                    v.x = -1.0f;
                } else {
                    v.x = 1.0f;
                }
            }
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n vmul.xyz $vf5, $vf4, $vf4\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n vrsqrt Q, $vf0w, $vf5x\n vsub.w $vf4, $vf0, $vf0\n vwaitq\n vmulq.xyz $vf4, $vf4, Q\n sqc2 $vf4, 0x0(%0)" : : "r"(&v) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n qmtc2.ni %2, $vf5\n vmulx.xyzw $vf6, $vf4, $vf5x\n sqc2 $vf6, 0x0(%1)" : : "r"(&v), "r"(&w), "r"(*(s32 *)&q.x) : "memory");
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n qmtc2.ni %1, $vf5\n vmulx.xyzw $vf6, $vf4, $vf5x\n sqc2 $vf6, 0x0(%0)" : : "r"(&v), "r"(*(s32 *)&p.x) : "memory");
            q.x = q.x + w.x;
            p.z = p.z + v.z;
            p.x = p.x + v.x;
            q.z = q.z + w.z;
            if (s1 == 4) {
                t = 1.0f - f20;
                f20 = 1.0f - t * t;
            }
            if ((s32)(func_009B4390() & 0xFFFF) < (s32)D_00CBD038[0]) {
                D_00CBCE3C[0] = 0.25f;
            } else {
                D_00CBCE3C[0] = 0.375f;
            }
        } else if (s1 == 3) {
            if (D_00CBCE28[0] == 0) {
                p.x = -p.x;
                q.x = -q.x;
            }
            if (D_00CBCE2D[0] == 0) {
                u32 i = func_009B44E0() & 0xFFFF;
                D_00CBD034[0] = *(s16 *)(D_003E758C + i * 0x354 + 0x34C) > 0;
            }
            if (D_00CBD034[0] != 0) {
                p.z = -p.z;
                q.z = -q.z;
            }
            if ((s32)(func_009B4390() & 0xFFFF) < (s32)D_00CBD038[0]) {
                D_00CBCE3C[0] = 0.25f;
            } else {
                D_00CBCE3C[0] = 0.375f;
            }
        } else {
            if (D_00CBCE28[0] == 0) {
                p.x = -p.x;
                q.x = -q.x;
            }
            if (s1 == 5) {
                f32 n = -r.z;
                p.z = n;
                q.z = n;
            } else {
                if (D_00CBCE2D[0] == 0) {
                    D_00CBD034[0] = r.z < 0.0f;
                }
                if (D_00CBD034[0] != 0) {
                    p.z = -p.z;
                    q.z = -q.z;
                }
                t = 1.0f - f20;
                f20 = 1.0f - t * t;
            }
            func_00B9EE40();
        }
    }
    func_00103D80(&res, s2, &p, f20);
    f20 = s0[1] * f20 + s0[0] * (1.0f - f20);
    if (D_00CBCE2D[0] == 0) {
        D_00CBCE70[0] = f20;
        D_00CBCE40[0] = res.x;
        D_00CBCE44[0] = res.y;
        D_00CBCE48[0] = res.z;
        D_00CBCE4C[0] = res.w;
    } else {
        func_00103D80(&D_00CBCE40[0], &res, &D_00CBCE40[0], 0.05f);
        D_00CBCE70[0] = 0.05f * f20 + 0.95f * D_00CBCE70[0];
    }
}
