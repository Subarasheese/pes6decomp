/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u32 func_009E1C90(s32 a);
extern s32 func_00BF6280(void);
extern void *func_00BF6270(void);
extern void *func_00BF6260(void);
extern void *func_00B2A420(void *a);
extern u32 func_009B33A0(void *a, s32 b, s32 c);
extern u32 func_009B3070(u32 a, u32 b);
extern s32 func_00BBB990(u32 a, s32 b);
extern s32 func_00BBB9C0(u32 a, s32 b);
extern s32 func_00BBB8C0(s32 a);
extern void func_00BD4040(void *a, s32 b);
extern char D_00CBCDE2[];
extern char D_00CBCDE3[];
extern char D_00591BE4[];

void func_00B53A10(u8 **self)
{
    u8 **s1, **s2, **s3;
    u8 *A, *S, *B;
    u32 code, r;
    s32 dx, dz, v;
    u16 w;

    if ((func_009E1C90(1) & 0xFF) == 0xC && func_00BF6280() == 2) {
        s3 = func_00B2A420(func_00BF6270());
        s2 = func_00B2A420(func_00BF6260());
    } else {
        s3 = func_00B2A420(*(u8 *)D_00CBCDE2);
        s2 = func_00B2A420(*(u8 *)D_00CBCDE3);
    }
    s1 = func_00B2A420(0);

    A = *self;
    code = *(u16 *)(*(u8 **)(A + 4) + 0x30);

    if (code == 0x409 || code == 0x40A || code == 0x2BD) {
        if ((func_009E1C90(1) & 0xFF) == 0xC) {
            *(u16 *)(*self + 0x18) = 0xC;
            func_00BD4040(self, 3);
        } else {
            *(u8 *)(*self + 0x16) = 0xFD;
            *(u16 *)(*self + 0x18) = 0;
        }
        return;
    }
    if (code == 0x48E || code == 0x38C) {
        if ((func_009E1C90(1) & 0xFF) == 0xC) {
            *(u16 *)(*self + 0x18) = 0xC;
            func_00BD4040(self, 1);
        } else {
            *(u8 *)(*self + 0x16) = 0xFD;
            *(u16 *)(*self + 0x18) = 0;
        }
        return;
    }
    if (code != 0x489 && code != 0x1BF)
        return;

    r = func_009B33A0(A, (s32)*(f32 *)(A + 0x6C), (s32)*(f32 *)(A + 0x70));
    if (r < 0x40001) {
        *(u8 *)(*self + 0x4E) = 0xFF;
        *(u16 *)(*self + 0x18) = 0xD;
        return;
    }

    A = *self;
    S = *s3;
    dx = (s32)(*(f32 *)(A + 0xE0) - *(f32 *)(S + 0xE0));
    dz = (s32)(*(f32 *)(A + 0xE8) - *(f32 *)(S + 0xE8));
    if (dx * dx + dz * dz < 0x640001) {
        if ((func_009B3070(*(u16 *)(A + 0x26), *(u16 *)(S + 0x26)) & 0xFFFF) >= 0x4000) {
            s1 = s3;
            goto tail;
        }
    }
    A = *self;
    S = *s2;
    dx = (s32)(*(f32 *)(A + 0xE0) - *(f32 *)(S + 0xE0));
    dz = (s32)(*(f32 *)(A + 0xE8) - *(f32 *)(S + 0xE8));
    if (dx * dx + dz * dz < 0x640001) {
        if ((func_009B3070(*(u16 *)(A + 0x26), *(u16 *)(S + 0x26)) & 0xFFFF) >= 0x4000) {
            s1 = s2;
            goto tail;
        }
    }
    A = *self;
    S = *s1;
    dx = (s32)(*(f32 *)(A + 0xE0) - *(f32 *)(S + 0xE0));
    dz = (s32)(*(f32 *)(A + 0xE8) - *(f32 *)(S + 0xE8));
    if (dx * dx + dz * dz < 0x640001) {
        if ((func_009B3070(*(u16 *)(A + 0x26), *(u16 *)(S + 0x26)) & 0xFFFF) >= 0x4000)
            goto tail;
    }
    v = func_00BBB8C0(2);
    *(u8 *)(*self + 0x4E) = *(u8 *)D_00591BE4 * (v + 1);
    *(u16 *)(*self + 0x18) = 0xD;
    return;

tail:
    w = (u16)(*(u16 *)(*s1 + 0x26) + 0x3000);
    *(u16 *)(*self + 0x2C) = w;
    A = *self;
    *(f32 *)(A + 0x6C) = *(f32 *)(A + 0xE0) + (f32)func_00BBB990(*(u16 *)(A + 0x2C), 0x500);
    A = *self;
    *(f32 *)(A + 0x70) = *(f32 *)(A + 0xE8) + (f32)func_00BBB9C0(*(u16 *)(A + 0x2C), 0x500);
    B = self[1];
    *(u8 *)(B + 0x4C) = 0x39;
    v = *(u8 *)(self[1] + 0x4C);
    if (v == 0x13) {
        *(u16 *)(*self + 0x18) = 0x14;
    } else if (v == 0x3A || v == 0x39 || v == 0x30 || v == 0x12 || v == 7 || v == 5 || v == 4) {
        *(u16 *)(*self + 0x18) = 0x11;
    } else if (v == 0x2D || v == 0x55 || v == 0x56 || v == 0x51 || v == 0x52 || v == 0x42 ||
               v == 0x41 || v == 0x36 || v == 0x31 || v == 0x1B || v == 0x2C || v == 0x2B ||
               v == 0x2A || v == 0x18 || v == 0x38 || v == 0xF || v == 0x1C) {
        *(u16 *)(*self + 0x18) = 0xF;
    }
}
