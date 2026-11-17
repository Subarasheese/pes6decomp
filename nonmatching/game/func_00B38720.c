/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00CBCC70[];
extern char D_00CBCB22[];
extern char D_00CBCD81[];
extern char D_00591BEC[];
extern void *func_00BF6270(void);
extern void *func_00B2A420(void *);
extern u32 func_009B33F0(void *, void *);
extern u32 func_009B3480(void *, f32, f32);
extern u32 func_009B3070(u32, u32);
extern u32 func_009B33A0(void *, s32, s32);
extern void func_00B83E60(void *, f32 *, f32, f32, f32);
extern f32 func_001CD9E0(f32);
extern void func_00B89C70(void *);
extern s32 func_002AE670(s32);
extern s32 func_00BBB990(u32, u32);
extern s32 func_00BBB9C0(u32, u32);

void func_00B38720(void *a0, u32 a1) {
    f32 out[16];
    u8 *p = (u8 *)a0;
    void **s4;
    u8 *obj;
    u32 v;
    s32 dir;
    u32 mask;
    u32 i;
    u32 best;
    u32 idx;
    f32 *e;
    f32 f20;
    f32 q1;
    f32 q2;

    s4 = (void **)func_00B2A420(func_00BF6270());
    obj = *(u8 **)s4;
    v = func_009B33F0(obj, *(void **)p) & 0xFFFF;
    obj = *(u8 **)s4;
    v = (*(u16 *)(obj + 0x26) - v) & 0xFFFF;
    dir = 1;
    if (*(u8 *)(*(u8 **)(obj + 4) + 0x2D) != 0) dir = -1;
    if ((s32)v >= 0x7000 && (s32)v >= 0x9001) dir = -dir;
    dir = (s8)dir;

    mask = 1;
    best = 0xFFFF;
    idx = 0;
    for (i = 0; i < a1; i++) {
        if ((*(u8 *)D_00CBCB22 & (mask & 0xFF)) == 0) {
            f32 f2 = *(f32 *)(D_00CBCC70 + i * 4 + 0x60);
            f32 f1 = (f32)dir * f2;
            s32 sel = -1;
            u32 d;
            if (f1 < 0.0f) sel = 1;
            func_00B83E60(s4, &out[i * 2], (f32)sel * f2, *(f32 *)(D_00CBCC70 + i * 4 + 0x80), 80.0f);
            d = func_009B3480(*(void **)p, out[i * 2], out[i * 2 + 1]) & 0xFFFF;
            if ((func_009B3070(*(u16 *)(*(u8 **)p + 0x26), d) & 0xFFFF) < 0x4001) {
                u32 r = func_009B33A0(*(void **)p, (s32)out[i * 2], (s32)out[i * 2 + 1]);
                u32 q = (s32)func_001CD9E0((f32)r);
                if (q < best) {
                    best = q;
                    idx = i & 0xFF;
                }
            }
        }
        mask = (mask << 1) & 0xFF;
    }
    if (best == 0xFFFF) {
        idx = 0;
        out[0] = *(f32 *)(*(u8 **)s4 + 0xE0);
        out[1] = *(f32 *)(*(u8 **)s4 + 0xE8);
    }
    idx &= 0xFF;
    if ((*(s8 *)(*(u8 **)(p + 4) + idx + 0x44) & 0x80) != 0 && *(u8 *)D_00CBCD81 == 0) {
        func_00B89C70(p);
        *(u8 *)D_00CBCB22 = *(u8 *)D_00CBCB22 | (u8)((u32)(1 << idx) & 0xFF);
        return;
    }
    {
        f32 *s1 = &out[idx * 2];
        f32 *s2 = &out[idx * 2 + 1];
        u32 r = func_009B33A0(*(void **)p, (s32)*s1, (s32)*s2);
        u32 dv, sv;
        s32 rnd;
        u32 s6, s3, s0;
        f20 = (f32)(s32)func_001CD9E0((f32)r);
        s6 = func_009B3480(*(void **)s4, *s1, *s2) & 0xFFFF;
        rnd = func_002AE670((s32)(0.02f * f20));
        dv = (u32)rnd * 19 << 8;
        sv = (u32)rnd * 25 << 8;
        q1 = (f32)dv / *(f32 *)D_00591BEC;
        s3 = (u32)q1;
        q2 = (f32)sv / *(f32 *)D_00591BEC;
        s0 = (u32)q2;
        f20 = *s1 + (f32)func_00BBB990(s6, s0);
        *(f32 *)(*(u8 **)p + 0x6C) = f20 + (f32)func_00BBB990(*(u16 *)(*(u8 **)s4 + 0x28), s3);
        f20 = *s2 + (f32)func_00BBB9C0(s6, s0);
        *(f32 *)(*(u8 **)p + 0x70) = f20 + (f32)func_00BBB9C0(*(u16 *)(*(u8 **)s4 + 0x28), s3);
    }
}
