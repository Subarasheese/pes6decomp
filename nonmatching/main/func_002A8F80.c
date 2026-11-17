/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_005E2200[];
extern char D_005E1A00[];
extern char D_005E1A04[];
extern char D_005E1A08[];
extern char D_005E19F0[];
extern char D_005E19F4[];
extern char D_005E19F8[];
extern char D_005E1A0C[];
extern char D_005E19FC[];
extern char D_005E1A10[];
extern char D_005E19B0[];
extern char D_005E19B2[];
extern char D_005E19B4[];
extern char D_005E19B5[];
extern char D_005E19B6[];
extern char D_005E1A30[];
extern char D_005E1A20[];
extern char D_005E1A24[];
extern char D_005E1A28[];
extern char D_005E1A2C[];
extern char D_005E19A0[];

void func_002A58E0(f32 *out, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 x);
void func_002A11B0(f32 *out, s32 idx);
s32 func_002A1110(s32 a);

void func_002A8F80(u32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    f32 acc[4] __attribute__((aligned(16)));
    f32 t[4];
    f32 *pa1, *pa2, *pt1, *pt2;
    u32 flags = a0 & 0xff;
    s32 n;
    f32 x, y, z;

    if (flags & 4) {
        func_002A58E0(acc, a1, a2, a3, a4, a5, a6, (*(f32 *)D_005E2200));
        y = acc[1];
        x = acc[0];
        z = acc[2];
        if (!(y <= 0.0f)) {
            y = 0.0f;
        }
        (*(f32 *)D_005E1A00) = x;
        (*(f32 *)D_005E1A08) = z;
        (*(s32 *)D_005E1A0C) = 0x43960000;
        (*(f32 *)D_005E19F0) = x;
        (*(f32 *)D_005E1A04) = y;
        (*(f32 *)D_005E19F8) = z;
        (*(s32 *)D_005E19FC) = 0x43960000;
        (*(f32 *)D_005E19F4) = y;
        if (!(y <= -300.0f)) {
            (*(f32 *)D_005E19FC) = -y;
        }
        (*(s32 *)D_005E1A10) = 0x43960000;
        if ((*(u8 *)D_005E19B0) != 0x1c) {
            (*(u16 *)D_005E19B6) = (*(u16 *)D_005E19B6) & 0xfeff;
        }
        (*(u8 *)D_005E19B0) = 0x1c;
        (*(u8 *)D_005E19B4) = 1;
    }
    if (flags & 8) {
        s32 i;
        pa2 = &acc[2];
        pa1 = &acc[1];
        acc[0] = 0;
        *pa2 = 0;
        *pa1 = 0;
        pt1 = &t[1];
        pt2 = &t[2];
        i = 0;
        while (i < (*(u8 *)D_005E19B5)) {
            s32 k = i & 0xff;
            s32 idx;
            if (k < (*(u8 *)D_005E19B5)) {
                idx = ((u8 *)D_005E19A0)[k + 0x12];
            } else {
                idx = 0x1d;
            }
            func_002A11B0(t, idx);
            i++;
            acc[0] = acc[0] + t[0];
            *pa1 = *pa1 + *pt1;
            *pa2 = *pa2 + *pt2;
        }
        if (i >= 2) {
            f32 r = 1.0f / (f32)i;
            __asm__ volatile("lqc2 $vf4, 0x0(%0)\n qmtc2.ni %1, $vf5\n vmulx.xyzw $vf6, $vf4, $vf5x\n sqc2 $vf6, 0x0(%0)" : : "r"(acc), "r"(r) : "memory");
        }
        (*(s32 *)D_005E1A2C) = 0x3f800000;
        (*(f32 *)D_005E1A24) = *pa1;
        (*(f32 *)D_005E1A20) = acc[0];
        (*(f32 *)D_005E1A28) = *pa2;
        (*(u16 *)D_005E1A30) = func_002A1110((*(u8 *)D_005E19B2));
        (*(u8 *)D_005E19B2) = 0x1c;
        (*(u8 *)D_005E19B5) = 1;
    }
}
