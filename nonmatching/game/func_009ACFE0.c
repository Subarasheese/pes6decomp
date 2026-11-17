/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001520C0(void);
s32 func_001520F0(void);
s32 func_00270570(void);
void func_002871C0(f32 *out);
s32 func_009A3520(void);
void func_009B03C0(u8 *p, f32 *pos);
void func_009B0870(void);
f32 func_009B6310(void);
s32 func_00BBB990(s32 a, s32 b);
s32 func_00BBB9C0(s32 a, s32 b);
extern s32 D_003E7A14;
extern s32 D_003E7A18;
extern s32 D_003E7574;
extern char D_00CBA9ED[];
extern char D_00CBA918[];
extern char D_00591BEC[];

s32 func_009ACFE0(u8 *p) {
    f32 va[4];
    f32 vb[4];
    f32 vc[4];
    s32 changed;
    s32 s0, v0;
    f32 f;
    u8 *g;
    f32 *s1;

    changed = p[5] != (u8)func_00270570();
    p[4] = 0;
    p[5] = func_00270570();
    p[2] = func_009A3520();
    s0 = func_001520F0();
    v0 = func_001520C0();
    if (s0 == 0 && D_003E7A14 != 0 && D_003E7A18 == 0) {
        *(u8 *)D_00CBA9ED = 1;
    }
    D_003E7A18 = v0;
    D_003E7A14 = s0;
    if (p[2] != 0) {
        *(u8 *)D_00CBA9ED = 1;
        p[4] = 1;
        *(f32 *)(p + 0xD8) = 0;
        if (p[3] == 0 && *(s8 *)p == 0) {
            p[1] = 0;
            return 0;
        }
        return 1;
    }
    if (p[5] != 0) {
        if (changed) *(s8 *)(p + 6) = *(s8 *)p;
        func_009B0870();
        f = func_009B6310();
        *(f32 *)(p + 0xD8) = f;
        if (!(f <= 1.0f && f >= -1.0f)) {
            *(f32 *)(p + 0xD8) = 1.0f;
            p[4] = 1;
        }
        if (*(f32 *)(p + 0xD8) <= 0.0f) p[4] = 1;
        if (p[3] != 0 || *(s8 *)p != 0) return 1;
        p[1] = 0;
        return 0;
    }
    if (changed) *(s8 *)p = *(s8 *)(p + 6);
    *(f32 *)(p + 0x24) = *(f32 *)(p + 0xC);
    *(f32 *)(p + 0x28) = *(f32 *)(p + 0x10);
    *(f32 *)(p + 0x2C) = *(f32 *)(p + 0x14);
    func_002871C0(va);
    *(f32 *)(p + 0xC) = va[0];
    *(f32 *)(p + 0x10) = va[1];
    *(f32 *)(p + 0x14) = va[2];
    func_002871C0(vb);
    if (vb[0] < 0.0f) {
        *(f32 *)(p + 0xC) = *(f32 *)(p + 0xC) * -1.0f;
        *(f32 *)(p + 0x14) = *(f32 *)(p + 0x14) * -1.0f;
    }
    {
        u8 *q = (u8 *)D_003E7574;
        f32 c = *(f32 *)D_00591BEC;
        f32 a, b;
        a = (f32)func_00BBB9C0(*(u16 *)(q + 0x58), *(s32 *)(q + 0x50)) / c;
        q = (u8 *)D_003E7574;
        b = *(f32 *)(q + 0x30) / c;
        c = (f32)func_00BBB990(*(u16 *)(q + 0x58), *(s32 *)(q + 0x50));
        *(f32 *)(p + 0x30) = c / *(f32 *)D_00591BEC;
        *(f32 *)(p + 0x34) = b;
        *(f32 *)(p + 0x38) = a;
    }
    func_002871C0(vc);
    if (vc[0] < 0.0f) {
        *(f32 *)(p + 0x30) = *(f32 *)(p + 0x30) * -1.0f;
        *(f32 *)(p + 0x38) = *(f32 *)(p + 0x38) * -1.0f;
    }
    *(s32 *)(p + 0x3C) = 0;
    *(s32 *)(p + 0x40) = 0;
    *(s32 *)(p + 0x44) = 0;
    g = (u8 *)D_00CBA918;
    if (*(s8 *)g == 0 || !(*(s32 *)(g + 0x18) > 0)) *(s32 *)(g + 0x18) = 0;
    *(f32 *)(p + 0xD8) = 1.0f;
    func_009B03C0(p, (f32 *)(p + 0xC));
    v0 = 1;
    if (*(s8 *)p == 1) {
        f32 x = *(f32 *)(p + 0xC);
        f32 y = *(f32 *)(p + 0x10);
        f32 z = *(f32 *)(p + 0x14);
        if (!(x <= 14430.0f) || y < -960.0f || !(z <= 1902.0f) || z < -1902.0f)
            v0 = 0;
    }
    if (v0 == 0) p[4] = 1;
    if (p[3] != 0 || *(s8 *)p != 0) return 1;
    p[1] = 0;
    return 0;
}
