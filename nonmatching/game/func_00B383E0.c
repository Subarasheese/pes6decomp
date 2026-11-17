/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBCCD0[];
extern char D_00CBCCF0[];
extern char D_00CBCD10[];
extern char D_00CBCAF4[];
extern char D_00CBCAF8[];
extern char D_00CBCAFC[];
extern char D_00CBCD8E[];
extern char D_00591BEC[];

s32 func_00BF6270(void);
s32 *func_00B2A420(s32 a);
u32 func_009B33F0(s32 a, void *b);
s32 func_00B364C0(void);
s32 func_009B33A0(void *o, s32 x, s32 y);
f32 func_001CD9E0(f32 x);
s32 func_002AE670(s32 x);
s32 func_00BBB990(u32 a, u32 b);
s32 func_00BBB9C0(u32 a, u32 b);
void func_00B83FF0(u16 a, u8 b, f32 *p, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4);
void func_00B83E60(u32 a, f32 *p, f32 f0, f32 f1, f32 f2);

void func_00B383E0(void **a0) {
    f32 arr[8][2];
    u32 s1;
    u32 s3;
    u32 idx;
    s32 *t;
    s32 r;

    t = func_00B2A420(func_00BF6270());
    s3 = (u32)t;
    s1 = (u16)func_009B33F0(*t, a0[0]);
    if (((u8 *)a0[1])[0x51] >= 9) return;
    idx = (u8)(((u8 *)a0[1])[0x51] - 1);
    r = func_00B364C0();
    if (r == 2) {
        s32 sg = D_00CBCD8E[0] ? -1 : 1;
        func_00B83FF0(*(u16 *)D_00CBCAFC, *(u8 *)D_00CBCD8E, arr[idx],
                      *(f32 *)D_00CBCAF4, *(f32 *)D_00CBCAF8,
                      *(f32 *)(D_00CBCCD0 + idx * 4), *(f32 *)(D_00CBCCF0 + idx * 4), 100.0f);
        s3 = (u16)((u16)(*(u16 *)D_00CBCAFC + *(u16 *)(D_00CBCD10 + idx * 2) * sg) + 0x8000);
    } else {
        func_00B83E60(s3, arr[idx], *(f32 *)(D_00CBCCD0 + idx * 4), *(f32 *)(D_00CBCCF0 + idx * 4), 90.0f);
        s3 = (u16)(((s32)(u16)((u16)*(u16 *)(*(u8 **)s3 + 0x26) + 0x8000) + (s32)(u16)s1) / 2);
    }
    {
        f32 *px = &arr[idx][0];
        f32 *py = &arr[idx][1];
        u32 v;
        f32 fv, g;
        s32 w, q, a;
        u32 s4;
        v = func_009B33A0(a0[0], (s32)*px, (s32)*py);
        fv = func_001CD9E0((f32)v);
        w = (s32)(0.02f * (f32)(s32)fv);
        q = func_002AE670(w);
        g = (f32)(q * 13 * 256) / *(f32 *)D_00591BEC;
        s4 = (u32)g;
        a = func_00BBB990(s3, s4);
        *(f32 *)((u8 *)a0[0] + 0x6c) = *px + (f32)a;
        a = func_00BBB9C0(s3, s4);
        *(f32 *)((u8 *)a0[0] + 0x70) = *py + (f32)a;
    }
}
