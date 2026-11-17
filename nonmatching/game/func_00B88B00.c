/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBCB22[];
extern char D_00CAE840[];
extern char D_00CBCAFE[];
extern char D_00CBCB00[];
extern char D_00CBCB04[];

f32 fabsf(f32 x);
s32 func_00BBB9C0(s32 a, s32 b);
s32 func_00BBB990(s32 a, s32 b);
s32 func_00BBB8C0(s32 a);
s32 func_00B89020(s32 a);
void func_00B35E10(void *p, f32 *x, f32 *y);
s32 func_009B3480(void *o, s64 a1, s64 a2, s64 a3, f32 x, f32 y);
void func_009B3070(s32 a, s32 b);
void func_00B89460(void *p);
void func_00BD3CF0(void *p, s64 a1, s64 a2, s64 a3, f32 x, f32 y);
s32 func_002079F0(void *o, s32 a);
void func_00209A00(void *o, s32 a, s32 b);
void func_00B2A6E0(void *p, f32 *out, void *c, s32 d, f32 x, f32 y);
void func_00B89080(void *p, s64 a, s64 b, f32 x, f32 y);
void func_00B3C3C0(s32 a);
void func_00207390(void *o, s32 a);

void func_00B88B00(u8 **s3) {
    s32 s2, s0, s4;
    u8 s1;
    s32 v, t;
    f32 ox, oy, fy, fx;
    f32 v4[4];
    u8 *o;
    u8 *q;

    if (*(u16 *)(s3[0] + 0x18) == 1) {
        D_00CBCB22[0] = 0;
        o = s3[0];
        v = func_00BBB9C0(*(u16 *)(o + 0x28), 0x800);
        if (v <= 0) v = -v;
        o = s3[0];
        if (8729.0f - fabsf(*(f32 *)(o + 0xE8)) < (f32)v) {
            t = 1;
        } else {
            v = func_00BBB990(*(u16 *)(o + 0x28), 0x800);
            if (v <= 0) v = -v;
            o = s3[0];
            t = 13465.0f - fabsf(*(f32 *)(o + 0xE0)) < (f32)v;
        }
        if (t) {
            t = 2;
        } else {
            u8 k = *(u8 *)(s3[1] + 0xC);
            if (k == 6 || k == 5 || k == 4) t = 8;
            else t = 3;
        }
        v = func_00BBB8C0((s8)t);
        if ((u32)v < 8) {
            if (v == 1) {
                *(u16 *)(s3[1] + 0x3E) = 0x503;
            } else if (v == 2 || v == 3 || v == 4) {
                D_00CBCB22[0] |= 2;
                D_00CBCB22[0] |= 1;
                *(u16 *)(s3[1] + 0x3E) = 0x502;
            } else if (v == 5) {
                *(u16 *)(s3[1] + 0x3E) = 0x4F7;
            } else if (v == 6) {
                *(u16 *)(s3[1] + 0x3E) = 0x4F8;
            } else if (v == 7) {
                *(u16 *)(s3[1] + 0x3E) = 0x4F9;
            } else {
                *(u16 *)(s3[1] + 0x3E) = 0x4F6;
            }
        } else {
            *(u16 *)(s3[1] + 0x3E) = 0x4F6;
        }
        func_00B89460(s3);
        *(u16 *)(s3[0] + 0x18) = 2;
    }

    s2 = (u16)func_00B89020(*(u16 *)(s3[1] + 0x3E));
    s4 = *(u16 *)(s3[1] + 0x3E);
    s1 = 0;
    func_00B35E10(s3, &v4[3], &v4[2]);
    s0 = (u16)func_009B3480(s3[0], 0, 0, 0, v4[3], v4[2]);
    func_009B3070(*(u16 *)(s3[0] + 0x26), s0);
    q = s3[0];
    if (s4 == 0x4F9 || s4 == 0x4F8 || s4 == 0x4F7 || s4 == 0x503 || s4 == 0x502 || s4 == 0x4F6) {
        s1 = !((u16)((u16)s0 - *(u16 *)(s3[0] + 0x26) + 0x10000) < 0x8001);
        q = s3[0];
    }
    if (*(u8 *)(*(u8 **)(q + 4) + 0x2D) != s1) {
        s2 = (u16)((s2 + 0x1388) % 10000);
    }
    func_00BD3CF0(s3, (s64)(s32)q, 0, 0, *(f32 *)(q + 0x6C), *(f32 *)(q + 0x70));
    if (func_002079F0(*(u8 **)(s3[0] + 4), (u16)s2) == 0) {
        s4 = *(u16 *)(s3[1] + 0x3E);
        if (s4 == 0x4F6 || s4 == 0x503) return;
        v = func_00BBB9C0(*(u16 *)(s3[0] + 0x28), 0x800);
        if (v <= 0) v = -v;
        o = s3[0];
        if (8729.0f - fabsf(*(f32 *)(o + 0xE8)) < (f32)v) {
            t = 1;
        } else {
            v = func_00BBB990(*(u16 *)(o + 0x28), 0x800);
            if (v <= 0) v = -v;
            t = 13465.0f - fabsf(*(f32 *)(o + 0xE0)) < (f32)v;
        }
        if (t) *(u16 *)(o + 0x18) = 1;
        return;
    }
    func_00209A00(*(u8 **)(s3[0] + 4), *(u16 *)(s3[1] + 0x3E), 0);
    *(u8 *)(*(u8 **)(s3[0] + 4) + 0x2D) = s1;
    func_00B2A6E0(s3, v4, D_00CBCAFE, 0, *(f32 *)(s3[0] + 0x6C), *(f32 *)(s3[0] + 0x70));
    *(f32 *)D_00CBCB00 = v4[0];
    *(f32 *)D_00CBCB04 = v4[1];
    func_00B89080(s3, *(u16 *)D_00CBCAFE, *(u8 *)(*(u8 **)(s3[0] + 4) + 0x2D), *(f32 *)D_00CBCB00, *(f32 *)D_00CBCB04);
    func_00B3C3C0(*(u16 *)(*(u8 **)(s3[0] + 4) + 0x30));
    func_00207390(*(u8 **)(s3[0] + 4), 0x14);
    *(u8 *)(s3[1] + 0x50) = 1;
    *(u16 *)(s3[0] + 0x18) = 3;
}
