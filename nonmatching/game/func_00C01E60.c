/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00A09690(void);
extern s32 func_0027D0B0(void *a, s32 b);
extern s32 func_009B3480(void *a, f32 x, f32 y);
extern s32 func_009B30B0(s32 a, s32 b);
extern void func_00209A00(void *a, s32 b, s32 c);
extern void func_00207390(void *a, s32 b);
extern s32 func_00288670(s32 a, s32 b);
extern s32 func_00A9DFF0(void *a, s32 b);
extern void func_0027D650(s32 a);
extern void func_00AB3390(void);
extern char D_00591E6C[];
extern char D_00591E74[];
extern char D_00592980[];
extern char D_00591E4C[];
extern char D_00591BE4[];
extern char D_00592294[];
extern char D_00592295[];
extern s32 D_003E74CC;

void func_00C01E60(u8 *p, u32 k, s32 flag)
{
    s32 s2, s5, s6, s7, s1, s0;
    u8 *q;
    s32 r;

    s5 = 0;
    s2 = 0;
    p[0x16] = 20;
    *(s16 *)(p + 0x18) = 0;
    s6 = func_00A09690() & 0xFFFF;
    p[0x66] = 3;
    if (k < 0x11) {
        if (k == 0) { s1 = 0x253; s2 = 8; s0 = 0x21; }
        else if (k == 1) { s1 = 0x24C; s5 = 2; s2 = 8; s0 = 0x22; }
        else if (k == 2) { s1 = 0x254; s2 = 6; s0 = 0x20; }
        else if (k == 3) { s1 = 0x17D; s5 = 4; s2 = 8; s0 = 0x23; }
        else if (k == 4) { s1 = 0x24F; s5 = 6; s2 = 8; s0 = 0x30; }
        else if (k == 5) { s1 = 0x254; s2 = 6; s0 = 0x20; }
        else if (k == 6) { s1 = 0x125; s5 = 0xC; s2 = 8; s0 = 0x31; }
        else if (k == 7) { }
        else if (k == 8) { s1 = 0x251; s5 = 8; s2 = 4; s0 = 0x33; }
        else if (k == 9) {
            func_0027D0B0(p, 12);
            r = func_009B3480(p, *(f32 *)D_00591E6C, *(f32 *)D_00591E74);
            if ((func_009B30B0(s6, r) & 0xFFFF) < 0x39) {
                flag = 0;
            } else {
                func_0027D0B0(p, 13);
                r = func_009B3480(p, *(f32 *)D_00591E6C, *(f32 *)D_00591E74);
                if ((func_009B30B0(s6, r) & 0xFFFF) < 0x39) flag = 1;
            }
            s1 = 0x12A; s5 = 0; s2 = 10; s0 = 0x3A;
        }
        else if (k == 10) { s1 = 0x184; s2 = 10; s0 = 0x38; }
        else if (k == 14) { s1 = 0x16D; s2 = 10; s0 = 0x39; }
        else if (k == 16) { s1 = 0x2AA; s2 = 8; s0 = 0x10; }
        else goto dflt;
    } else {
dflt:
        s1 = 0x182; s5 = 2; s2 = 8; s0 = 0x34;
        if (k == 12) {
            s32 a = 1;
            if (*(u8 *)(*(u8 **)(p + 4) + 0x2D) != 0) a = -1;
            *(s16 *)(p + 0x26) = *(u16 *)(p + 0x26) - (((a << 12)) & 0xFFFF);
        }
    }
    func_00209A00(*(void **)(p + 4), s1 & 0xFFFF, s5 & 0xFFFF);
    func_00207390(*(void **)(p + 4), s2);
    *(s16 *)(p + 0x28) = s6;
    *(s16 *)(p + 0x26) = s6;
    (*(u8 **)(p + 4))[0x2D] = flag;
    *(s32 *)(p + 0x20) = *(s32 *)(p + 0x1C);
    *(s16 *)(p + 0x18) = s0;
    if (k < 0x11) {
        if (k == 0 || k == 2 || k == 5) {
            q = *(u8 **)(p + 4);
            *(f32 *)(q + 0x28) = *(f32 *)(q + 0x28) * 1.1f;
            q = *(u8 **)(p + 4);
            r = func_00288670(((u8 *)D_00592980)[p[0x12] * 26880 + p[0x11] * 840 + 0x6A] & 0x7F, 20);
            *(f32 *)(q + 0x28) = *(f32 *)(q + 0x28) * (f32)(r / 5 + 0x5A) / 100.0f;
            if (k != 0) {
                *(s32 *)(p + 0x20) = *(u16 *)(*(u8 **)(*(u8 **)(p + 4) + 4) + 0xA);
                if (*(s32 *)(p + 0x1C) < 0x681) {
                    *(s16 *)(p + 0x38) = func_00A9DFF0(p, 0x2D);
                } else {
                    *(s16 *)(p + 0x38) = func_00A9DFF0(p, 0xF);
                    s7 = *(s32 *)(p + 0x1C) / 2 + 0x400;
                    if (s7 >= 0x1000) s7 = 0x1000;
                }
                *(s32 *)(p + 0x20) = *(s32 *)(p + 0x20) + s7;
            }
        }
        else if (k == 4) {
            s32 v = *(s32 *)(p + 0x20);
            if (v < 0x2201) v = 0x2200;
            *(s32 *)(p + 0x20) = v;
            v = *(s32 *)(p + 0x20);
            if (v >= 0x1900) v = 0x1900;
            *(s32 *)(p + 0x20) = v;
        }
        else if (k == 8) {
            f32 f = 16384.0f / (f32)(*(s32 *)((u8 *)D_003E74CC + *(u16 *)(*(u8 **)(p + 4) + 0x30) * 4 + 0x2FD8) - s5);
            *(u16 *)(p + 0x38) = (u32)f;
            *(u16 *)(p + 0x38) = (u32)((f32)(u32)*(u16 *)(p + 0x38) * *(f32 *)(*(u8 **)(p + 4) + 0x28));
        }
        else if (k == 10) {
            if (*(s32 *)(p + 0x1C) < 0x1200) *(s32 *)(p + 0x1C) = 0x1200;
        }
        else if (k == 1 || k == 3 || k == 6 || k == 11 || k == 12 || k == 13) {
            s32 a1, a0;
            if (k == 3) *(s16 *)(p + 0x38) = func_00A9DFF0(p, 0x3C);
            if (k == 1) a1 = 0x1000;
            else a1 = *(u16 *)(*(u8 **)(*(u8 **)(p + 4) + 4) + 0xA);
            a0 = *(s32 *)(p + 0x1C);
            if (a1 - 0x400 < a0) *(s32 *)(p + 0x20) = a0;
            else *(s32 *)(p + 0x20) = a1;
        }
        else if (k == 14) *(s16 *)(p + 0x38) = func_00A9DFF0(p, 0x9B);
        else if (k == 9) *(s16 *)(p + 0x38) = func_00A9DFF0(p, 0x82);
        else if (k == 16) {
            s32 a0 = *(u16 *)(*(u8 **)(*(u8 **)(p + 4) + 4) + 0xA) - 0x600;
            s32 v = *(s32 *)(p + 0x20);
            s32 a1;
            if (a0 < v) a0 = v;
            *(s32 *)(p + 0x20) = a0;
            a1 = *(u16 *)(*(u8 **)(*(u8 **)(p + 4) + 4) + 0xA) + 0x600;
            a0 = *(s32 *)(p + 0x20);
            if (a0 < a1) a1 = a0;
            *(s32 *)(p + 0x20) = a1;
        }
    }
    if (p[0] == *(u8 *)D_00591E4C) {
        func_0027D650(14);
        func_00AB3390();
        *(u8 *)D_00592294 = *(u8 *)D_00591BE4 << 1;
        *(u8 *)D_00592295 = p[0];
    }
}
