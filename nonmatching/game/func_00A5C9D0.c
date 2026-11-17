/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009B30B0(s32 a, s32 b);
extern s32 func_009B36C0(void *p, s32 id, s32 c, s32 d, s32 e);
extern s32 func_009B34C0(f32 a, f32 b, f32 c, f32 d);
extern s32 func_009B32D0(s32 a, s32 b, s32 c);
extern s32 func_00B044D0(s32 a, s32 b);
extern f32 func_001CD9E0(f32 x);
extern char D_00591F40[];
extern char D_00591E6C[];
extern char D_00591E74[];
extern char D_00591BEC[];
extern char D_0059226E[];
extern char D_0059225C[];
extern char D_005926E6[];
extern char *D_003E7574;

s32 func_00A5C9D0(char *p, s32 id, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a9)
{
    s32 s0, t, v, x, s7, ang, idx, d, sum, a0v;
    u32 fp;
    f32 dx, dy;
    char *g;

    fp = a5 & 0xFFFF;
    s0 = func_009B30B0(a5, a3) & 0xFFFF;
    t = func_009B30B0(*(u16 *)(p + 0x26), a3) & 0xFFFF;
    v = func_009B30B0(*(u16 *)(p + 0x28), a3) & 0xFFFF;
    if (v >= 0x21 && s0 >= 0x35) goto L_A90;
    if (t >= 0x39 && v >= 0x21) goto L_A90;
    goto L_DC0;

L_A90:
    s0 = id & 0xFFFF;
    if (s0 == 0xAE || s0 == 0xAF || s0 == 0xAC || s0 == 0xA6) goto L_D024;
L_AC4:
    if (s0 == 0xB2 || s0 == 0xB1 || s0 == 0xAC || s0 == 0xAB) goto L_AFC;
    goto L_C44;

L_AFC:
    func_009B36C0(p, id, *(u8 *)D_00591F40, a5, a9 & 0xFF);
    s7 = a4 * 4;
    g = D_003E7574;
    ang = func_009B34C0(*(f32 *)D_00591E6C, *(f32 *)D_00591E74,
                        *(f32 *)(g + s7 + 0x47C), *(f32 *)(g + s7 + 0xB7C));
    g = D_003E7574;
    dx = *(f32 *)D_00591E74 - *(f32 *)(g + s7 + 0xB7C);
    dy = *(f32 *)D_00591E6C - *(f32 *)(g + s7 + 0x47C);
    d = (s32)func_001CD9E0(dx * dx + dy * dy);
    s7 = (s32)(*(f32 *)D_00591BEC * (f32)d / (f32)(a4 + 1));
    if ((func_009B30B0(a5, ang & 0xFFFF) & 0xFFFF) < 0x50) goto L_C40;
    if (s7 < 0x1401) goto L_C40;
    s0 = func_00B044D0(0x23C, 0x5A) & 0xFFFF;
    v = func_009B30B0(a6, a5) & 0xFFFF;
    sum = (v * s0) / 64;
    *(u16 *)D_0059226E = func_009B32D0(a6, a5, sum & 0xFFFF);
    *(s32 *)D_0059225C = a9;
    return 0x23C;

L_C40:
L_C44:
    {
    s32 q;
    q = func_009B30B0(fp, a3) & 0xFFFF;
    x = func_009B30B0(*(u16 *)(p + 0x26), fp) & 0xFFFF;
    if (x >= 0x29) goto L_DA8;
    if (q < 0x19) goto L_DA8;
    if (q >= 0x60) goto L_DA8;
    if ((func_009B30B0(a6, fp) & 0xFFFF) >= 0x21) goto L_DA8;
    if (s7 < 0xC01) goto L_DA8;
    if (s0 == 0xB2 || s0 == 0xB1 || s0 == 0xB0 || s0 == 0xAC || s0 == 0xAB ||
        s0 == 0xAE || s0 == 0xAD || s0 == 0x2FF || s0 == 0xA9 || s0 == 0xA8 ||
        s0 == 0xA6 || s0 == 0xA5 || s0 == 0xA4) {
        a5 = fp & 0xFFFF;
        id = 0xA7;
        a9 = (((a3 & 0xFFFF) - a5 + 0x10000) & 0xFFFF) < 0x8001;
        if (q >= 0x28) goto L_DA8;
        v = a9 ? -1 : 1;
        v = (v * ((0x28 - q) << 8)) & 0xFFFF;
        a5 = (a5 + v) & 0xFFFF;
    }
    }
L_DA8:
    *(u16 *)D_0059226E = a5;
    *(s32 *)D_0059225C = a9;
    return id;

L_DC0:
    if ((func_009B30B0(*(u16 *)(p + 0x26), a3) & 0xFFFF) >= 0x29) goto L_A90;
    if (a2 < 0xE01) goto L_A90;
    func_009B30B0(a6, a5);
    v = id & 0xFFFF;
    if (v == 0x48 || v == 0x231 || v == 0x1D1 || v == 0xAA) { id = 0x16C; goto L_A90; }
    if (v == 0xAF || v == 0xB2 || v == 0xAC) {
        a5 = a3 & 0xFFFF;
        a9 = (((a6 & 0xFFFF) - a5 + 0x10000) & 0xFFFF) < 0x8001;
        x = func_009B30B0(a6, a3) & 0xFFFF;
        goto L_TAIL;
    }
    {
    s32 s1v, r, c;
    a5 = a3 & 0xFFFF;
    s1v = a6 & 0xFFFF;
    a9 = ((s1v - a5 + 0x10000) & 0xFFFF) < 0x8001;
    if (v == 0xB1 || v == 0xAE || v == 0xAB) func_009B30B0(a6, a3);
    r = func_009B30B0(a6, a3) & 0xFFFF;
    c = ((s1v - *(u16 *)(p + 0x26) + 0x10000) & 0xFFFF) < 0x8001;
    if (a9 != c) r = 0;
    x = r & 0xFFFF;
    }
L_TAIL:
    if (x < 0x10) { id = 0xA4; goto L_A90; }
    if (x < 0x30) { id = 0xA5; goto L_A90; }
    a5 = func_009B32D0(a3, a6, 0x4800) & 0xFFFF;
    id = 0xA6;
    goto L_A90;

L_D024:
    func_009B36C0(p, id, *(u8 *)D_00591F40, a5, a9 & 0xFF);
    g = D_003E7574;
    idx = *(u8 *)D_005926E6;
    ang = func_009B34C0(*(f32 *)D_00591E6C, *(f32 *)D_00591E74,
                        *(f32 *)(g + idx * 4 + 0x47C), *(f32 *)(g + idx * 4 + 0xB7C));
    g = D_003E7574;
    idx = *(u8 *)D_005926E6;
    dx = *(f32 *)D_00591E74 - *(f32 *)(g + idx * 4 + 0xB7C);
    dy = *(f32 *)D_00591E6C - *(f32 *)(g + idx * 4 + 0x47C);
    d = (s32)func_001CD9E0(dx * dx + dy * dy);
    s7 = (s32)(*(f32 *)D_00591BEC * (f32)d / 11.0f);
    if (*(s32 *)(p + 0x1C) >= 0x1B00) goto L_AC4;
    if ((func_009B30B0(*(u16 *)(p + 0x10C), a6) & 0xFFFF) >= 0x61) goto L_AC4;
    if ((func_009B30B0(ang & 0xFFFF, *(u16 *)(p + 0x28)) & 0xFFFF) >= 0x29) goto L_AC4;
    if ((func_009B30B0(*(u16 *)(D_003E7574 + 0x58), a6) & 0xFFFF) < 0x18) goto L_AC4;
    if ((func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(p + 0x10C)) & 0xFFFF) >= 0x29) goto L_AC4;
    if ((func_009B30B0(a6, ang & 0xFFFF) & 0xFFFF) < 0x50) goto L_AC4;
    if (s7 >= 0xA01) {
        if (*(s32 *)(p + 0x1C) + 0x600 < s7) goto L_D1AC;
    }
    if (s7 < 0xC01) goto L_AC4;
L_D1AC:
    {
    s32 a3v, a6v, r;
    a3v = a6 & 0xFFFF;
    a6v = (a3v - (a5 & 0xFFFF) + 0x10000) & 0xFFFF;
    a9 = a6v < 0x8001;
    v = a9 ? -1 : 1;
    a5 = (a3v + (v << 14)) & 0xFFFF;
    if ((func_009B30B0(a5, *(u16 *)(p + 0x26)) & 0xFFFF) >= 0x40) {
        a5 = (a5 + 0x7FFF + 1) & 0xFFFF;
        a9 ^= 1;
    }
    r = func_00B044D0(0xA8, 0x32) & 0xFFFF;
    v = a9 ? -1 : 1;
    *(s32 *)D_0059225C = a9;
    *(u16 *)D_0059226E = (a5 & 0xFFFF) - r * v;
    return 0xA8;
    }
}
