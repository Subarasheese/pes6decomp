/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef int s128 __attribute__((mode(TI)));
extern f32 sqrtf(f32 x);
extern s32 func_001314B0(s32 a);
extern f32 func_0012BEF0(void *a, void *b);
extern f32 func_00152EA0(f32 y, f32 x);
extern f32 func_00152DB0(f32 x);
extern void func_00103D80(void *out, void *a, void *b, f32 t);
extern f32 sqrtf(f32 x);

/* out = a * w0 + b * w1 (xyzw), VU0 macro mode. */
static inline void blend(void *s, f32 w0, f32 w1) {
    union { f32 f; s32 i; } u0, u1;
    u0.f = w0; u1.f = w1;
    __asm__ volatile(
        "lqc2 $vf4, 0x80(%0)\n"
        "lqc2 $vf5, 0x90(%0)\n"
        "qmtc2.ni %1, $vf6\n"
        "qmtc2.ni %2, $vf7\n"
        "vmulax.xyzw ACC, $vf4, $vf6x\n"
        "vmaddx.xyzw $vf12, $vf5, $vf7x\n"
        "sqc2 $vf12, 0x50(%0)\n"
        : : "r"(s), "r"(u0.i), "r"(u1.i) : "memory");
}


void func_001316F0(void *arg0) {
    u8 *s;
    s32 flag;
    s32 neg;
    f32 x, w0, w1, sn, r;

    struct F { s8 pad[0x1D]; u8 b; } *p = (struct F *)arg0;
    struct G { s8 pad[0x1D]; s8 b; } *p2 = (struct G *)arg0;
    if (p2->b & 0x80) return;
    p2->b |= ~0x7F;
    p->b = (p->b & ~0x3F) | 1;
    flag = func_001314B0(M2C_FIELD(arg0, s32 *, 4)) != 0;
    s = M2C_FIELD(arg0, u8 **, 0);
    if (s == NULL) return;
    do {
        if (M2C_FIELD(s, f32 *, 0xC0) <= 0.0f || M2C_FIELD(s, f32 *, 0xC4) == 0.0f) {
            M2C_FIELD(s, f32 *, 0x50) = M2C_FIELD(s, f32 *, 0x80);
            M2C_FIELD(s, f32 *, 0x54) = M2C_FIELD(s, f32 *, 0x84);
            M2C_FIELD(s, f32 *, 0x58) = M2C_FIELD(s, f32 *, 0x88);
            M2C_FIELD(s, f32 *, 0x5C) = M2C_FIELD(s, f32 *, 0x8C);
        } else {
            x = func_0012BEF0(s + 0x80, s + 0x90);
            if (x < 0.0f) { x = -x; neg = 1; } else neg = 0;
            if (M2C_FIELD(s, f32 *, 0xC4) < M2C_FIELD(s, f32 *, 0xC0)) {
                f32 t = M2C_FIELD(s, f32 *, 0xC4) / M2C_FIELD(s, f32 *, 0xC0);
                if (1.0f - x <= 0.00001f) {
                    w1 = t;
                    w0 = 1.0f - w1;
                } else {
                    sn = sqrtf(1.0f - x * x);
                    r = func_00152DB0(t * func_00152EA0(sn, x));
                    w1 = r / sn;
                    w0 = sqrtf(1.0f - r * r) - x * w1;
                }
                if (neg) w1 = -w1;
                blend(s, w0, w1);
            } else if (neg == 0) {
                M2C_FIELD(s, f32 *, 0x50) = M2C_FIELD(s, f32 *, 0x90);
                M2C_FIELD(s, f32 *, 0x54) = M2C_FIELD(s, f32 *, 0x94);
                M2C_FIELD(s, f32 *, 0x58) = M2C_FIELD(s, f32 *, 0x98);
                M2C_FIELD(s, f32 *, 0x5C) = M2C_FIELD(s, f32 *, 0x9C);
            } else {
                M2C_FIELD(s, f32 *, 0x50) = -M2C_FIELD(s, f32 *, 0x90);
                M2C_FIELD(s, f32 *, 0x54) = -M2C_FIELD(s, f32 *, 0x94);
                M2C_FIELD(s, f32 *, 0x58) = -M2C_FIELD(s, f32 *, 0x98);
                M2C_FIELD(s, f32 *, 0x5C) = -M2C_FIELD(s, f32 *, 0x9C);
            }
        }
        if (flag) {
            f32 a = M2C_FIELD(s, f32 *, 0xC8);
            f32 c;
            if (a <= 0.0f || (c = M2C_FIELD(s, f32 *, 0xCC)) == 0.0f) {
                *(s128 *)(s + 0x40) = *(s128 *)(s + 0xA0);
            } else if (c < a) {
                func_00103D80(s + 0x40, s + 0xB0, s + 0xA0, c / a);
            } else {
                *(s128 *)(s + 0x40) = *(s128 *)(s + 0xB0);
            }
        } else if (M2C_FIELD(s, s32 *, 0x108) != 0) {
            *(s128 *)(s + 0x40) = *(s128 *)(s + 0xA0);
        } else {
            f32 a = M2C_FIELD(s, f32 *, 0xC8);
            f32 c = M2C_FIELD(s, f32 *, 0xCC);
            if (c < a) {
                func_00103D80(s + 0x40, s + 0xB0, s + 0xA0, c / a);
            } else {
                *(s128 *)(s + 0x40) = *(s128 *)(s + 0xB0);
            }
        }
        s = M2C_FIELD(s, u8 **, 0x104);
    } while (s != NULL);
}
