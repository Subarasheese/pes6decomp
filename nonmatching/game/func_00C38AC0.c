/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591BEC[];
f32 func_001CD9E0(f32);
u32 func_009B33A0(s32, s32, s32);
s32 func_00B2A420(s32);
void func_00B83FF0(s32, s32, f32 *, f32, f32, f32, f32, f32);
s32 func_00BBB990(s32, s32);
s32 func_00BBB9C0(s32, s32);
s32 func_00C36F20(s32, s32);
void func_00C37530(s32, s32 *, s32 *, u16 *);
s32 func_00C375E0(s32);
s32 func_00C37640(s32);
s32 func_00C37790(s32, s32);
s32 func_00C37850(s32);

void func_00C38AC0(f32 *dst, u8 *obj) {
    u16 h;
    s32 p, q;
    f32 out[2];
    u8 *s1, *s3, *s6;
    s32 s0, s2, idx;
    u16 ang;
    u32 a1, cnt, k;
    f32 f20;

    s1 = (u8 *)func_00C375E0(*(u8 *)(*(u8 **)(obj + 4) + 0x54));
    idx = func_00C37790(*(u8 *)(*(u8 **)(obj + 4) + 0x54), (s32)obj);
    s6 = *(u8 **)(s1 + 4) + idx * 20;
    s3 = (u8 *)func_00B2A420(func_00C37850(*(u8 *)(*(u8 **)(obj + 4) + 0x54)));
    s2 = func_00C37640(*(u8 *)(*(u8 **)(obj + 4) + 0x54)) & 0xff;
    if (func_00C36F20(*(u8 *)(*(u8 **)(obj + 4) + 0x54), 0) != 0) {
        func_00C37530(*(u8 *)(*(u8 **)(obj + 4) + 0x54), &p, &q, &h);
    } else {
        h = *(u16 *)(*(u8 **)s3 + 0x26);
    }
    func_00B83FF0(h, s2, out,
                  *(f32 *)(*(u8 **)s3 + 0xe0), *(f32 *)(*(u8 **)s3 + 0xe8),
                  *(f32 *)(*(u8 **)(s1 + 4) + idx * 20 + 4),
                  *(f32 *)(*(u8 **)(s1 + 4) + idx * 20 + 8), 80.0f);
    {
        f32 dir = (s2 & 0xff) ? -1.0f : 1.0f;
        f32 m = *(s16 *)(s6 + 12);
        f32 t = 182.04444885f * m;
        ang = (u16)(u32)((0.0f + (f32)(u32)h) + t * dir);
    }
    s2 = (u16)(ang + 0x8000);
    a1 = (u32)(s32)func_001CD9E0((f32)func_009B33A0(*(s32 *)obj, (s32)out[0], (s32)out[1]));
    s6 = (u8 *)(a1 / 3);
    cnt = (u32)((f32)a1 * (*(f32 *)D_00591BEC) / 1664.0f);
    k = (u32)((f32)(u32)(*(s32 *)(*(u8 **)s3 + 0x1c) * (s32)cnt) / (*(f32 *)D_00591BEC));
    f20 = out[0] + (f32)func_00BBB990(*(u16 *)(*(u8 **)s3 + 0x28), k);
    *(f32 *)(*(u8 **)obj + 0x6c) = f20 + (f32)func_00BBB990(s2, (s32)s6);
    f20 = out[1] + (f32)func_00BBB9C0(*(u16 *)(*(u8 **)s3 + 0x28), k);
    *(f32 *)(*(u8 **)obj + 0x70) = f20 + (f32)func_00BBB9C0(s2, (s32)s6);
    dst[0] = out[0];
    dst[1] = out[1];
}
