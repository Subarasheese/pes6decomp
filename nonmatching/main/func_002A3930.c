/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef int s128 __attribute__((mode(TI)));
extern char D_005E2250[];
extern char D_005E2230[];
extern char D_005E2240[];
extern char D_005E2220[];
extern char D_005E225C[];

void func_002A4490(void *, void *, f32);
void func_002A0520(void *, void *, void *);
void func_002A4050(void *, void *, void *, void *, void *, s32, void *, void *, f32, f32);
void func_002A3D30(void *, void *, void *, void *, void *, f32, f32, f32);

void func_002A3930(f32 *out3, f32 *out2, f32 *p, s32 a3, f32 fa12, f32 fa13, f32 fa14) {
    f32 M[16] __attribute__((aligned(16)));
    f32 C[4] __attribute__((aligned(16)));
    f32 B[4] __attribute__((aligned(16)));
    f32 R[4] __attribute__((aligned(16)));
    f32 V3[4] __attribute__((aligned(16)));
    f32 V2[4] __attribute__((aligned(16)));
    f32 V1[4] __attribute__((aligned(16)));
    f32 V0[4] __attribute__((aligned(16)));
    f32 E[4] __attribute__((aligned(16)));
    f32 E2[4] __attribute__((aligned(16)));
    s32 t;
    f32 *s0;
    f32 *s1;
    f32 *s6;
    f32 *s7;
    f32 one;
    f32 inv;

    func_002A4490(p, p, fa14);
    __asm__ volatile("lqc2 $vf4, 0x10(%1)\n lqc2 $vf5, 0x0(%1)\n vsub.xyzw $vf6, $vf4, $vf5\n sqc2 $vf6, 0x0(%2)\n"
                     "lqc2 $vf4, 0x0(%2)\n vmul.xyz $vf5, $vf4, $vf4\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n"
                     "vsqrt Q, $vf5x\n vwaitq\n vaddq.x $vf5, $vf0, Q\n qmfc2.ni %0, $vf5\n"
                     : "=r"(t) : "r"(p), "r"(C) : "memory");
    s1 = &B[3];
    s0 = &C[3];
    s6 = &R[2];
    s7 = &B[2];
    *(s32 *)s1 = t;
    one = 1.0f;
    if (*s1 <= 0.0f) {
        C[0] = 0.0f;
        *(s32 *)&C[1] = 0x3f800000;
        C[2] = 0.0f;
        C[3] = 0.0f;
    } else {
        R[0] = one / *s1;
        __asm__ volatile("lqc2 $vf4, 0x0(%1)\n qmtc2.ni %0, $vf5\n vmulx.xyzw $vf6, $vf4, $vf5x\n sqc2 $vf6, 0x0(%1)\n"
                         : : "r"(*(s32 *)&R[0]), "r"(C) : "memory");
        *s0 = *s1;
    }
    B[0] = C[0];
    B[1] = C[1];
    B[2] = C[2];
    *s1 = 0.0f;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n qmtc2.ni %2, $vf5\n vmulx.xyzw $vf6, $vf4, $vf5x\n sqc2 $vf6, 0x0(%0)\n"
                     : : "r"(E), "r"(D_005E2250), "r"(0) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x0(%0)\n vsub.xyzw $vf6, $vf4, $vf5\n sqc2 $vf6, 0x0(%0)\n"
                     : : "r"(E), "r"(B) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x0(%2)\n vmul.xyz $vf5, $vf4, $vf5\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n qmfc2.ni %0, $vf5\n" : "=r"(t) : "r"(E), "r"(D_005E2230) : "memory");
    *(s32 *)&B[0] = t;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x0(%2)\n vmul.xyz $vf5, $vf4, $vf5\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n qmfc2.ni %0, $vf5\n" : "=r"(t) : "r"(E), "r"(D_005E2240) : "memory");
    *(s32 *)&B[1] = t ^ 0x80000000;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x0(%2)\n vmul.xyz $vf5, $vf4, $vf5\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n qmfc2.ni %0, $vf5\n" : "=r"(t) : "r"(E), "r"(D_005E2220) : "memory");
    *(s32 *)s7 = t;
    *s1 = -E[3];
    *(s128 *)R = *(s128 *)p;
    *(s32 *)&R[3] = 0x3f800000;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n qmtc2.ni %2, $vf5\n vmulx.xyzw $vf6, $vf4, $vf5x\n sqc2 $vf6, 0x0(%0)\n"
                     : : "r"(E2), "r"(D_005E2250), "r"(0x3f800000) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x0(%0)\n vsub.xyzw $vf6, $vf4, $vf5\n sqc2 $vf6, 0x0(%0)\n"
                     : : "r"(E2), "r"(R) : "memory");
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x0(%2)\n vmul.xyz $vf5, $vf4, $vf5\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n qmfc2.ni %0, $vf5\n" : "=r"(t) : "r"(E2), "r"(D_005E2230) : "memory");
    *(s32 *)&R[0] = t;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x0(%2)\n vmul.xyz $vf5, $vf4, $vf5\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n qmfc2.ni %0, $vf5\n" : "=r"(t) : "r"(E2), "r"(D_005E2240) : "memory");
    *(s32 *)&R[1] = t ^ 0x80000000;
    __asm__ volatile("lqc2 $vf4, 0x0(%1)\n lqc2 $vf5, 0x0(%2)\n vmul.xyz $vf5, $vf4, $vf5\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n qmfc2.ni %0, $vf5\n" : "=r"(t) : "r"(E2), "r"(D_005E2220) : "memory");
    *(s32 *)s6 = t;
    R[3] = -E2[3];
    func_002A0520(M, B, R);
    M[3] = p[8];
    M[7] = p[8];
    M[11] = *s0;
    if (*s7 < 0.0f) {
        *s6 = (0.0f + *s6) + *s7 * *s0;
    }
    inv = *(f32 *)D_005E225C / *s6;
    M[3] = M[3] * inv;
    M[7] = M[7] * inv;
    M[11] = M[11] * inv;
    *s1 = inv;
    p[3] = p[3] * inv;
    p[7] = p[7] * *s1;
    M[12] = M[12] * *s1;
    M[13] = M[13] * *s1;
    func_002A4050(V3, V2, V1, V0, M, a3, &M[7], &M[3], p[7], p[3]);
    func_002A3D30(M, V3, V2, V1, V0, fa12, fa13, fa14);
    out3[0] = M[12];
    out3[1] = M[13];
    out3[2] = M[14];
    out2[0] = V3[0];
    out2[1] = V3[1];
}
