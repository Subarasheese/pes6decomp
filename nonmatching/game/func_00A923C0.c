/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058E5B0[];
extern char D_00591E00[];
extern char D_00591E7C[];
extern u32 func_00AFBA90(u32 a);
extern u32 func_0099DFF0(void *p);
extern u32 func_009B30B0(u32 a, u32 b);
extern u32 func_009B33A0(void *p, s32 a, s32 b);
extern u32 func_009B33F0(void *p, void *q);
extern s32 func_00BBB8C0(s32 n);
extern f32 func_001CD9E0(f32 x);
extern s32 func_00A13E50(s32 a, s32 b);
extern void func_00987A80(u32 a, u32 b, f32 x, f32 y);
extern u32 func_00AA0060(void *p);

u32 func_00A923C0(u8 *p) {
    u8 buf[4];
    u8 *q;
    u8 *r;
    s32 i;
    s32 n;
    s32 idx;
    s32 v;
    u32 t;
    f32 dx, dz;

    s32 *w = (s32 *)(p + 0x9C);
    n = 0;
    i = 0;
    if ((u8)func_00AFBA90(p[0]) == 0xFF) {
        idx = 1;
    } else {
        idx = (u8)func_00AFBA90(p[0]) % 23;
    }
    q = (u8 *)D_0058E5B0 + idx * 0x240;
    for (; i < 11; i++, q += 0x240) {
        if (p == q) continue;
        v = (s32)(*(f32 *)(q + 0xE0) - *(f32 *)(D_00591E00 + p[0x13] * 4 + 0x80));
        if (v <= 0) v = -v;
        if (v >= 0x801) continue;
        v = (s32)*(f32 *)(q + 0xE8);
        if (v <= 0) v = -v;
        if (!((f32)v <= 5160.0f)) continue;
        if (p[0x24] == 0 && (*(u32 *)(p + 0xB0) & 0x400) == 0 && *(s32 *)D_00591E7C != 0) {
            t = func_0099DFF0(p);
            t = func_009B30B0(t, *(u16 *)(p + q[0] * 2 + 0x128));
            if ((u16)t >= 0x20) continue;
        }
        buf[n] = q[0];
        n++;
        if (n >= 3) break;
    }
    if (n == 1) {
        if (buf[0] == 0xFF) idx = 1; else idx = buf[0] % 23;
        q = (u8 *)D_0058E5B0 + idx * 0x240;
    } else if (n == 0) {
        return 0;
    } else {
        v = func_00BBB8C0(n);
        t = (s32)buf[v];
        if (t == 0xFF) idx = 1; else idx = (s32)t % 23;
        q = (u8 *)D_0058E5B0 + idx * 0x240;
        buf[0] = q[0];
    }
    dz = *(f32 *)(p + 0xE8) - *(f32 *)(q + 0xE8);
    dx = *(f32 *)(p + 0xE0) - *(f32 *)(q + 0xE0);
    v = (s32)func_001CD9E0(dz * dz + dx * dx);
    v = func_00A13E50(v / 8 + 0x400, 0x800);
    w[0] = (s32)(*(f32 *)(q + 0xE0) + (f32)(*(s16 *)(p + 0x14) * v));
    v = func_00BBB8C0(4);
    w[1] = (s32)(*(f32 *)(q + 0xE8) * (f32)(v + 8) / 10.0f);
    { s32 *w2 = (s32 *)((u32)w | (u32)(n >> 8)); t = func_009B33A0(p, w2[0], w2[1]); }
    if (t < 0x400001) {
        f32 a = 12057.0f * (f32)*(s16 *)(p + 0x14);
        s32 sg = (*(f32 *)(p + 0xE8) < 0.0f) ? -1 : 1;
        func_00987A80(p[0x13], 0, a, -2344.0f * (f32)sg / 2.0f);
        if ((u8)func_00AA0060(p) == 0xFF) {
            idx = 1;
        } else {
            idx = (u8)func_00AA0060(p) % 23;
        }
        r = (u8 *)D_0058E5B0 + idx * 0x240;
        if (q == r) return 0;
        t = func_009B33F0(p, r);
        t = func_009B30B0(*(u16 *)(p + 0x26), t);
        if ((u16)t >= 0x61) return 0;
        dz = *(f32 *)(p + 0xE8) - *(f32 *)(r + 0xE8);
        dx = *(f32 *)(p + 0xE0) - *(f32 *)(r + 0xE0);
        v = (s32)func_001CD9E0(dz * dz + dx * dx);
        v = func_00A13E50(v / 8 + 0x400, 0xC00);
        *(s32 *)(p + 0x9C) = (s32)(*(f32 *)(r + 0xE0) + (f32)(*(s16 *)(p + 0x14) * v));
        v = func_00BBB8C0(4);
        *(s32 *)(p + 0xA0) = (s32)(*(f32 *)(r + 0xE8) * (f32)(v + 8) / 10.0f);
        buf[0] = r[0];
    }
    return buf[0];
}
