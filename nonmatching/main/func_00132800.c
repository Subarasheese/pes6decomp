/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u64 lo, hi; } __attribute__((aligned(16))) Q;

extern void func_00103CD0(void *, void *);
extern void func_00103BB8(void *, void *, void *);
extern void func_0012BBD0(void *, void *);

void func_00132800(char *a0, Q *a1) {
    char *p;
    char *s3;
    f32 n[16];
    f32 m[16];

    p = a0;
    if (a0 != 0) {
        do {
            Q *d = (Q *)p;
            Q q0 = a1[0];
            Q q1 = a1[1];
            Q q2 = a1[2];
            Q q3 = a1[3];
            d[0] = q0;
            d[1] = q1;
            d[2] = q2;
            d[3] = q3;
            p = *(char **)(p + 0x104);
            a1 += 4;
        } while (p != 0);
    }
    s3 = a0;
    if (a0 != 0) {
        do {
            if (*(void **)(s3 + 0x108) != 0) {
                func_00103CD0(n, *(void **)(s3 + 0x108));
                func_00103BB8(m, n, s3);
                func_0012BBD0(s3 + 0x80, m);
                *(f32 *)(s3 + 0xA0) = m[12];
                *(f32 *)(s3 + 0xA4) = m[13];
                *(f32 *)(s3 + 0xA8) = m[14];
                *(s32 *)(s3 + 0xAC) = 0x3F800000;
            } else {
                func_0012BBD0(s3 + 0x80, s3);
                *(f32 *)(s3 + 0xA0) = *(f32 *)(s3 + 0x30);
                *(f32 *)(s3 + 0xA4) = *(f32 *)(s3 + 0x34);
                *(f32 *)(s3 + 0xA8) = *(f32 *)(s3 + 0x38);
                *(s32 *)(s3 + 0xAC) = 0x3F800000;
            }
            {
                f32 f3 = *(f32 *)(s3 + 0x80);
                f32 f2 = *(f32 *)(s3 + 0x84);
                f32 f1 = *(f32 *)(s3 + 0x88);
                f32 f0 = *(f32 *)(s3 + 0x8C);
                *(f32 *)(s3 + 0x50) = f3;
                *(f32 *)(s3 + 0x54) = f2;
                *(f32 *)(s3 + 0x58) = f1;
                *(f32 *)(s3 + 0x5C) = f0;
            }
            *(Q *)(s3 + 0x40) = *(Q *)(s3 + 0xA0);
            s3 = *(char **)(s3 + 0x104);
        } while (s3 != 0);
    }
}
