/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003E7574;
extern char D_00591E4C[];
extern char D_005926D8[];
extern char D_005926E0[];
extern char D_005926E2[];
extern char D_005926E4[];
extern char D_005926EC[];
extern char D_005926F4[];
extern char D_005926FC[];
extern char D_0058E5B0[];

s32 func_00997EB0(void);
s32 func_009B3070(u16, u16);
s32 func_009B30B0(u16, u16);
u32 func_009B33A0(void *, s32, s32);
s32 func_009B3480(void *, f32, f32);
s32 func_009B34C0(void *, s32, f32, f32, f32, f32);
s32 func_00A0BAC0(void *);
void func_00A11DD0(void *, u16, s32);
s32 func_00A99F00(void *, s32);
void func_00A9EEC0(void *);
void func_00AA8B90(void *, u16, u16, s32, s32);
s32 func_00AB4460(s32, s32);
s32 func_00BBB9C0(s32, s32);
f32 func_001CD9E0(f32);
void func_00207390(void *, s32);
void func_00209A00(void *, s32, s32);

void func_00A507D0(u8 *p, u16 a1) {
    f32 *pf = (f32 *)p;
    u16 *ph = (u16 *)p;
    s32 *pw = (s32 *)p;
    u16 s1 = a1;
    u16 s3;
    s32 s0;
    s32 t, r, idx;
    u32 rb;
    f32 e;
    u8 *g;
    f32 f20, f21;

    p[0x66] = 3;
    if (func_00997EB0() != 0) goto L908;
    t = (s32)pf[0xE8 / 4];
    if (t <= 0) t = -t;
    if (!((f32)t < 8729.0f)) goto L8F0;
    t = (s32)pf[0xE0 / 4];
    if (t <= 0) t = -t;
    if (!((f32)t < 13465.0f)) goto L8F0;
    if ((u32)pw[0x110 / 4] < 0x100001) goto L920;
    if (*(u8 *)D_00591E4C != 0) goto L920;
    if ((func_009B30B0(*(u16 *)(D_003E7574 + 0x58), a1) & 0xFFFF) >= 0x51) goto L920;
L8F0:
    func_00A9EEC0(p);
    p[0x16] = 7;
    ph[0x18 / 2] = 0;
    return;
L908:
    func_00A9EEC0(p);
    p[0x16] = 1;
    ph[0x18 / 2] = 0;
    return;
L920:
    if ((func_009B30B0(ph[0x10C / 2], *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) < 0x31) goto LE54;
    {
        u8 b = *(u8 *)D_005926E0;
        f32 *gf = (f32 *)D_003E7574;
        s1 = func_009B34C0(D_003E7574, b,
                           pf[0xE0 / 4] + pf[0xF0 / 4] * (f32)b,
                           pf[0xE8 / 4] + pf[0xF8 / 4] * (f32)b,
                           gf[0x47C / 4], gf[0xB7C / 4]) & 0xFFFF;
    }
    if (*(u8 *)D_00591E4C == 0) goto LE84;
    {
        u32 v1 = *(u8 *)D_00591E4C;
        if (p[0] == v1) goto LE6C;
        if (v1 != 0xFF) idx = v1 % 23; else idx = 1;
        s0 = 0;
        s3 = *(u16 *)(D_0058E5B0 + idx * 0x240 + 0x2C);
        p[0x62] = 0;
    }
LA44:
    g = D_003E7574;
    rb = func_009B33A0(p, (s32)*(f32 *)(g + *(u8 *)D_005926F4 * 4 + 0x47C),
                       (s32)*(f32 *)(g + *(u8 *)D_005926F4 * 4 + 0xB7C));
    if (rb < 0x40000) goto LF08;
    if (pw[0x1C / 4] < 0xC01) goto LF08;
    if ((func_009B30B0(s3, s1) & 0xFFFF) < 0x7C) goto LF08;
    {
        u32 s4 = s3 & 0xFFFF;
        u32 n = s4 + 0x4000;
        if ((func_009B30B0(ph[0x28 / 2], n & 0xFFFF) & 0xFFFF) >= 0x40) {
            s3 = (s4 - 0x4000) & 0xFFFF;
        } else {
            s3 = n & 0xFFFF;
        }
    }
    goto LADC;
LF08:
    {
        u32 a0 = s3 & 0xFFFF;
        u32 v = ((s1 & 0xFFFF) - a0 + 0x10000) & 0xFFFF;
        if (!((s32)v < 0x8001)) {
            s3 = (a0 + 0x4000) & 0xFFFF;
        } else {
            s3 = (a0 - 0x4000) & 0xFFFF;
        }
    }
LADC:
    t = (s32)pf[0xE0 / 4];
    if (t <= 0) t = -t;
    if (!((f32)t <= 13337.0f)) goto LB4C;
    if (s0 >= 0x281) goto LB4C;
    if (pw[0x1C / 4] < 0x401) {
        if (s0 >= 0x181) goto LB4C;
    }
    if (pw[0x1C / 4] >= 0x1101) {
        if ((func_009B30B0(ph[0x28 / 2], s3) & 0xFFFF) >= 0x50) s3 = ph[0x28 / 2];
    }
    func_00AA8B90(p, s3, s1, 0x1900, 0x400);
    goto LD50;
LB4C:
    e = (f32)*(u8 *)D_005926E4;
    if (*(f32 *)D_005926D8 < e) goto LCE0;
    if (func_009B33A0(p, (s32)pf[0x6C / 4], (s32)pf[0x70 / 4]) < 0x100001) goto LCE0;
    r = func_009B3480(p, pf[0x6C / 4], pf[0x70 / 4]);
    if ((func_009B30B0(r, s1) & 0xFFFF) < 0x41) goto LCE0;
    {
        f32 m = (f32)*(u8 *)D_005926EC;
        pf[0x6C / 4] = pf[0xE0 / 4] + pf[0xF0 / 4] * m;
        m = (f32)*(u8 *)D_005926EC;
        pf[0x70 / 4] = pf[0xE8 / 4] + pf[0xF8 / 4] * m;
    }
    r = func_009B3480(p, pf[0x6C / 4], pf[0x70 / 4]);
    func_00AA8B90(p, r, s1, 0x1900 - p[0x5C] * 12, 0x400);
    p[0x16] = 7;
    ph[0x18 / 2] = 0;
    goto LD50;
LCE0:
    if (func_00A99F00(p, 0) == 0) goto LD50;
    func_00A11DD0(p, s1, 1);
    goto LD54;
LD50:
LD54:
    if (func_00A0BAC0(p) != 0) goto LF5C;
    {
        u16 h = *(u16 *)(*(u8 **)(p + 4) + 0x30);
        if (h == 0xC0 || h == 0xC1 || h == 0x13) goto LF5C;
    }
LD90:
    {
        u32 c = *(u8 *)D_00591E4C;
        if (c == 0) goto LB4;
        if (c != 0xFF) idx = c % 23; else idx = 1;
        {
            u32 v = *(u8 *)(D_0058E5B0 + idx * 0x240 + 0x16);
            if (v == 0xB) {
                r = func_00AB4460(v, idx * 0x240);
                if (r < (s32)*(u8 *)D_005926FC) {
                    p[0x16] = 7;
                    ph[0x18 / 2] = 0;
                }
                return;
            }
            if (v == 3 || v == 0 || v == 1) {
                p[0x16] = 7;
                ph[0x18 / 2] = 0;
            }
            return;
        }
    }
LB4:
    {
        u16 m = *(u16 *)(D_003E7574 + 0x84);
        if (m == 4 || m == 3 || m == 2 || m == 8 || m == 1) return;
        p[0x16] = 7;
        ph[0x18 / 2] = 0;
        return;
    }
LE54:
    func_00A9EEC0(p);
    p[0x16] = 7;
    ph[0x18 / 2] = 0;
    return;
LE6C:
    func_00A9EEC0(p);
    p[0x16] = 1;
    ph[0x18 / 2] = 0;
    return;
LE84:
    g = D_003E7574;
    f21 = pf[0xE0 / 4] - *(f32 *)(g + 0x10);
    f20 = pf[0xE8 / 4] - *(f32 *)(g + 0x18);
    s0 = func_009B3070(s1, (*(u16 *)(g + 0x58) + 0x8000) & 0xFFFF);
    r = func_00BBB9C0(s0, (s32)func_001CD9E0(f20 * f20 + f21 * f21));
    if (r <= 0) r = -r;
    s0 = r;
    s3 = *(u16 *)(D_003E7574 + 0x58);
    goto LA44;
LF5C:
    r = func_009B30B0(ph[0x10C / 2], ph[0x26 / 2]) & 0xFFFF;
    if (r >= 0x29) goto LD90;
    if (pw[0x1C / 4] >= 0x1900) goto LD90;
    {
        u8 *gg = D_003E7574;
        u32 a4 = *(u8 *)D_005926E2;
        s32 x, z;
        f32 fa = (f32)a4;
        x = (s32)((pf[0xE0 / 4] + pf[0xF0 / 4] * fa) - *(f32 *)(gg + a4 * 4 + 0x47C));
        fa = (f32)a4;
        z = (s32)((pf[0xE8 / 4] + pf[0xF8 / 4] * fa) - *(f32 *)(gg + a4 * 4 + 0xB7C));
        if ((s32)(x * x + z * z) >= 0xE101) goto LD90;
        {
            u8 *q = *(u8 **)(p + 4);
            q[0x2D] = (u16)(*(u16 *)(gg + 0x58) - ph[0x10C / 2]) < 0x8001;
        }
        func_00209A00(*(void **)(p + 4), 0x1FA, 4);
        func_00207390(*(void **)(p + 4), 4);
        p[0x16] = 0x12;
        ph[0x18 / 2] = 5;
        return;
    }
}
