/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
typedef unsigned int u128 __attribute__((mode(TI)));

extern char D_0058E5B0[];
extern char D_00591E00[];
extern char D_00591DC4[];
extern char D_00591E6C[];
extern char D_00591E74[];
extern char D_00592380[];

s32 func_0017E140(void);
s32 func_009B45F0(void);
s32 func_009E1C90(s32);
s32 func_00288580(void);
void func_0099FAF0(void);
void func_00270530(void *, void *);
u128 func_00270500(void *);
s32 func_002704D0(void *);
s32 func_009B30B0(u128, s32);
s32 func_00207D80(s32, s32);
void func_0027D0B0(void *, s32);
void func_00186430(void *, void *);
f32 func_001CD9E0(f32);
void func_001CD910(void *, void *);
void func_00186470(void *, void *, f32);
s32 func_00207920(s32);
s32 func_00151EA0(s32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);
void func_002871C0(void *);

void func_0099F490(void) {
    f32 p[4];
    f32 d[4];
    f32 q[4];
    f32 pos[4];
    f32 r[4];
    s32 i, s4, s0, s5, v;
    char *e;
    f32 *s3;
    f32 *d1 = &d[1];
    f32 *d2 = &d[2];

    if (func_0017E140() == 0) return;
    func_009B45F0();
    if ((func_009E1C90(1) & 0xff) == 8) return;
    s4 = func_00288580() & 0xff;
    if (s4 != 0) func_0099FAF0();

    for (i = 0; i < 23; i++) {
        s32 a0, a1, t;
        e = D_0058E5B0 + i * 0x240;
        a1 = *(s32 *)(e + 4);
        if (*(u8 *)(a1 + 0x2c) == 0) continue;
        if (*(u8 *)(*(s32 *)a1 + 3) == 1) continue;
        func_00270530(e, pos);
        if (pos[1] < 0.0f) continue;
        s3 = (f32 *)(D_00591E00 + 0xc * (i + 1) + 0x580);
        if ((*(s32 *)D_00591DC4 & 1) != (i & 1)) continue;
        {
            s32 dx = (s32)(pos[0] - s3[0]);
            s32 dz = (s32)(pos[2] - s3[2]);
            s32 dd = dx * dx + dz * dz;
            if (s4 == 0) {
                if ((u32)dd < 0x241) continue;
            } else {
                if (dd == 0) continue;
            }
        }
        a1 = *(s32 *)(e + 4);
        a0 = *(s32 *)(a1 + 4);
        s0 = 0;
        s5 = 0;
        if (*(u8 *)a0 & 1) {
            s5 = 1;
        } else {
            t = *(u8 *)(a0 + 13) >> 1;
            if (t == 2 || t == 1 || t == 0) {
                f32 f1 = *(f32 *)(a1 + 0x38);
                f32 lo = (f32)(s32)(*(u8 *)(a0 + 1) << 1);
                if (!(f1 < lo)) {
                    f32 hi = (f32)(s32)(*(u8 *)(a0 + 2) << 1);
                    if (f1 <= hi) {
                        u128 r0 = func_00270500(e);
                        s32 r1 = func_002704D0(e);
                        s32 w = func_009B30B0(r0, r1) & 0xffff;
                        if (w < 9) s5 = 1;
                    }
                }
            }
        }
        if (s5 == 0) {
            if (s4 != 0) {
                s32 a0v = *(s32 *)(e + 4);
                s32 vv = *(s32 *)(a0v + 4);
                s32 b = *(u8 *)(vv + 2);
                if (b != 0) {
                    t = *(u8 *)(vv + 0xd) >> 1;
                    if (t == 3 || t == 4) {
                        if (func_00207D80(a0v, (b & 0xff) << 1)) {
                            s0 = 1;
                            if (*(u8 *)(*(s32 *)(e + 4) + 0x2d))
                                func_0027D0B0(e, 0xd);
                            else
                                func_0027D0B0(e, 0xc);
                            p[1] = 0.0f;
                            d[0] = 0.0f;
                            *d2 = 0.0f;
                            *d1 = 16.0f;
                            p[0] = *(f32 *)D_00591E6C;
                            p[2] = *(f32 *)D_00591E74;
                        }
                    } else if (t == 10 || t == 5) {
                        if (func_00207D80(a0v, (b & 0xff) << 1)) {
                            s0 = 1;
                            p[1] = 0.0f;
                            p[0] = pos[0];
                            d[0] = s3[0] - pos[0];
                            *d2 = s3[2] - pos[2];
                            *d1 = s3[1] - pos[1];
                            p[2] = pos[2];
                        }
                    }
                }
            }
        } else {
            s32 flag;
            v = func_00207920(*(s32 *)(e + 4)) & 0xffff;
            if (v >= 0x2648 || v < 0xc9) flag = 1;
            else flag = (v >= 0x12c0 && v < 0x1451);
            if (!flag) continue;
            if ((func_00151EA0(100) & 0xffff) >= 0x42) continue;
            s0 = 1;
            s5 = ((u32)func_00270500(e) & 0xffff) + 0x8000;
            s5 &= 0xffff;
            p[0] = pos[0] + (f32)func_00BBB990(s5, 0x20);
            p[1] = 0.0f;
            p[2] = pos[2] + (f32)func_00BBB9C0(s5, 0x20);
            d[0] = s3[0] - pos[0];
            *d1 = s3[1] - pos[1];
            *d2 = s3[2] - pos[2];
        }
        if (s0 == 0) continue;
        if (s4 == 0) {
            func_00186430(p, d);
        } else {
            f32 f20;
            s32 n;
            n = (s32)func_001CD9E0(512.0f);
            f20 = (f32)(s32)func_001CD9E0(*d1 * *d1 + d[0] * d[0] + *d2 * *d2) / (f32)n;
            if (!(f20 < 1.5f)) f20 = 1.5f;
            if (f20 <= 0.2f) f20 = 0.2f;
            func_001CD910(q, d);
            func_00186470(p, q, f20);
        }
    }
    func_002871C0(D_00592380);
    for (i = 0; i < 23; i++) {
        f32 *dst = (f32 *)(D_00591E00 + 0xc * (i + 1) + 0x580);
        func_00270530(D_0058E5B0 + i * 0x240, r);
        dst[0] = r[0];
        dst[1] = r[1];
        dst[2] = r[2];
    }
}
