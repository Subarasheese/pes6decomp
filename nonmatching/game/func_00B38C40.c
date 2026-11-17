/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBCC70[];
extern char D_00CBCB22[];
extern char D_00CBCD81[];
extern char D_00CBCD8D[];
extern char D_00CBCD8E[];
extern char D_00CBCAF4[];
extern char D_00CBCAF8[];
extern char D_00CBCAFC[];
extern char D_00CBCAFE[];
extern char D_00CBCB00[];
extern char D_00CBCB04[];
extern char D_00CBCD40[];
extern char D_00CBCD10[];
extern char D_00591BEC[];

extern void *func_00BF6270(void *a0);
extern void *func_00B2A420(void *a0);
extern s32 func_00B364C0(void);
extern s32 func_00B364A0(void);
extern void func_00B83E60(void *a0, void *a1, f32 f12, f32 f13, f32 f14);
extern void func_00B83FF0(u32 a0, u32 a1, void *a2, f32 f12, f32 f13, f32 f14, f32 f15, f32 f16);
extern u32 func_009B3480(void *a0, f32 f12, f32 f13);
extern u32 func_009B3070(u32 a0, u32 a1);
extern u32 func_009B33A0(void *a0, s32 a1, s32 a2);
extern u32 func_009B33F0(void *a0, void *a1);
extern f32 func_001CD9E0(f32 f12);
extern s32 func_002AE670(s32 a0);
extern s32 func_00BBB990(u32 a0, u32 a1);
extern s32 func_00BBB9C0(u32 a0, u32 a1);

void func_00B38C40(void **a0, u32 a1) {
    f32 pos[16];
    u32 best;
    u32 bi;
    u32 i;
    u32 s0, s1, s6, s4;
    void **c;
    f32 *p2, *p3;

    c = (void **)func_00B2A420(func_00BF6270(a0));
    best = 0xFFFF;
    i = 0;
    bi = 0;
    if (a1 != 0) {
        f32 *p = pos;
        char *q = D_00CBCC70;
        do {
            if (!(*(u8 *)D_00CBCB22 & ((1 << i) & 0xFF))) {
                s32 r = func_00B364C0();
                if (r == 1) {
                    func_00B83FF0(*(u16 *)D_00CBCAFE, *(u8 *)(*(u8 **)((u8 *)c[0] + 4) + 0x2D), p,
                                  *(f32 *)D_00CBCB00, *(f32 *)D_00CBCB04, *(f32 *)(q + 0x60),
                                  *(f32 *)(q + 0x80), 70.0f);
                } else if (r == 2) {
                    func_00B83FF0(*(u16 *)D_00CBCAFC, *(u8 *)D_00CBCD8E, p,
                                  *(f32 *)D_00CBCAF4, *(f32 *)D_00CBCAF8, *(f32 *)(q + 0x60),
                                  *(f32 *)(q + 0x80), 70.0f);
                } else {
                    func_00B83E60(c, p, *(f32 *)(q + 0x60), *(f32 *)(q + 0x80), 90.0f);
                }
                {
                    u32 k = func_009B3480(a0[0], p[0], p[1]);
                    u32 h = func_009B3070(*(u16 *)((u8 *)a0[0] + 0x26), k & 0xFFFF);
                    if ((h & 0xFFFF) < 0x4001) {
                        u32 r2 = func_009B33A0(a0[0], (s32)p[0], (s32)p[1]);
                        s32 d = (s32)func_001CD9E0((f32)r2);
                        if ((u32)d < best) {
                            best = d;
                            bi = i & 0xFF;
                        }
                    }
                }
            }
            i++;
            p += 2;
            q += 4;
        } while (i < a1);
    }
    if (best == 0xFFFF) {
        bi = 0;
        pos[0] = *(f32 *)((u8 *)c[0] + 0xE0);
        pos[1] = *(f32 *)((u8 *)c[0] + 0xE8);
    }
    s0 = bi & 0xFF;
    if ((*(s8 *)((u8 *)a0[1] + s0 + 0x44) & 0x80) && !*(u8 *)D_00CBCD81 &&
        *(u8 *)((u8 *)c[1] + 0x52)) {
        *(u8 *)D_00CBCD8D = *(u8 *)D_00CBCD8D - 1;
        *(u8 *)((u8 *)a0[1] + 0x51) = 0xFF;
        *(u16 *)((u8 *)a0[0] + 0x18) = 0x7D;
        return;
    }
    p2 = &pos[s0 * 2];
    p3 = &pos[s0 * 2 + 1];
    if (func_00B364C0() == 1) {
        u32 r2 = func_009B33A0(a0[0], (s32)*p2, (s32)*p3);
        s32 d = (s32)func_001CD9E0((f32)r2);
        s32 v = func_002AE670((s32)(0.02f * (f32)d));
        u32 base = *(u16 *)D_00CBCAFE;
        s32 sg = *(u8 *)((u8 *)c[1] + 0x2D) ? -1 : 1;
        u32 t = (u32)(13 * v) << 8;
        u32 t2 = (u32)(25 * v) << 8;
        s6 = (u16)(base + 0x8000);
        s4 = (u16)(base + *(u16 *)(D_00CBCD40 + s0 * 2) * sg);
        s1 = (u32)((f32)t / *(f32 *)D_00591BEC);
        s0 = (u32)((f32)t2 / *(f32 *)D_00591BEC);
    } else if ((func_00B364A0() & 0xFF) == 6) {
        u32 tmp;
        s6 = (u16)func_009B33F0(c[0], a0[0]);
        {
            u32 r2 = func_009B33A0(a0[0], (s32)*p2, (s32)*p3);
            s32 d = (s32)func_001CD9E0((f32)r2);
            s32 v = func_002AE670((s32)(0.02f * (f32)d));
            s32 t = (13 * v) << 8;
            s1 = (u32)((f32)t / *(f32 *)D_00591BEC);
        }
        if (func_00B364C0() == 2) {
            s32 sg = *(u8 *)D_00CBCD8E ? -1 : 1;
            s32 m = *(u16 *)(D_00CBCD10 + s0 * 2) * sg;
            s6 = (u16)((u16)(*(u16 *)D_00CBCAFC + m) + 0x8000);
        } else {
            s32 sum;
            tmp = (u16)(*(u16 *)((u8 *)c[0] + 0x26) + 0x8000);
            sum = tmp + (s6 & 0xFFFF);
            s6 = (u16)(sum / 2);
        }
        s0 = 0;
        s4 = 0;
    } else {
        f32 f;
        void *b;
        u32 m, m2;
        s32 v;
        u32 r2 = func_009B33A0(a0[0], (s32)*p2, (s32)*p3);
        f = (f32)(s32)func_001CD9E0((f32)r2);
        s6 = (u16)func_009B3480(c[0], *p2, *p3);
        v = func_002AE670((s32)(0.02f * f));
        m = *(s32 *)((u8 *)c[0] + 0x1C) * v;
        s1 = (u32)((f32)m / *(f32 *)D_00591BEC);
        m2 = *(s32 *)((u8 *)a0[0] + 0x1C) * v;
        s0 = (u32)((f32)m2 / *(f32 *)D_00591BEC);
        s4 = *(u16 *)((u8 *)c[0] + 0x28);
    }
    {
        f32 f20;
        f20 = *p2 + (f32)func_00BBB990(s6, s1);
        *(f32 *)((u8 *)a0[0] + 0x6C) = f20 + (f32)func_00BBB990(s4, s0);
        f20 = *p3 + (f32)func_00BBB9C0(s6, s1);
        *(f32 *)((u8 *)a0[0] + 0x70) = f20 + (f32)func_00BBB9C0(s4, s0);
    }
}
