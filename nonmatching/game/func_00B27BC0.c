/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00188910(f32 *);
extern f32 func_001CD9E0(f32);
extern void func_00209820(void *);
extern void func_00209A00(void *, s32, s32);
extern s32 func_002CA7A0(void *);
extern void func_00928110(void);
extern s32 func_009B33A0(void *, s32, s32);
extern s32 func_009B3480(void *, f32, f32);
extern void func_00AA8B90(void *, s32, s32, s32, s32);
extern void func_00AF8870(void *, s32, s32, s32, s32);
extern s32 func_00AFBA70(u8);
extern s32 func_00AFBAB0(u8);
extern void func_00B00970(void *, s32);
extern s32 func_00B29B50(void);
extern s32 func_00B29CB0(void);
extern s32 func_00B29CE0(void);
extern s32 func_00B29D20(void);
extern s32 func_00B29D60(void);
extern s32 func_00B29DA0(void);
extern s32 func_00BBB8C0(s32);
extern f32 *D_003E74CC;
extern u8 *D_003E7574;
extern char D_00591BEC[];
extern char D_00591E4D[];

void func_00B27BC0(u8 *p) {
    f32 sp50[8], sp70[8], sp90[8];
    f32 f20, f0, f12;
    s32 a, t, v, s0, s2, a1;
    u8 s0b;

    if (func_00B29B50() != 0 && p[0] != 0xC) return;
    p[0x66] = 3;
    if (func_00B29CB0() != 0) {
        f20 = 1280.0f;
    } else {
        func_00188910(sp90);
        if (p[0x13] != 0) f20 = sp90[3]; else f20 = sp90[0];
    }
    a = func_00AFBAB0(p[0]) & 0xFF;
    t = -*(s16 *)(p + 0x14) * (p[0] - a);
    *(f32 *)(D_003E7574 + 0x1454) = f20 + (f32)(t * 200);
    if (func_00B29CB0() != 0) {
        f0 = 9497.0f;
    } else {
        func_00188910(sp70);
        if (p[0x13] != 0) f0 = sp70[5]; else f0 = sp70[2];
    }
    *(f32 *)(D_003E7574 + 0x145C) = f0;
    v = func_009B33A0(p, (s32)*(f32 *)(D_003E7574 + 0x1454), (s32)*(f32 *)(D_003E7574 + 0x145C));
    if (v >= 0) f12 = (f32)v;
    else {
        f12 = (f32)(s32)(((u32)v >> 1) | (v & 1));
        f12 = f12 + f12;
    }
    s0 = (s32)func_001CD9E0(f12);
    if (s0 >= 0x20) {
        func_00209820(*(void **)(p + 4));
        s2 = func_009B3480(p, *(f32 *)(D_003E7574 + 0x10), *(f32 *)(D_003E7574 + 0x18)) & 0xFFFF;
        a1 = func_009B3480(p, *(f32 *)(D_003E7574 + 0x1454), *(f32 *)(D_003E7574 + 0x145C)) & 0xFFFF;
        if (s0 > 0x100)
            func_00AF8870(p, a1, s2, (s32)((f32)s0 * *(f32 *)D_00591BEC), s0);
        else
            func_00AA8B90(p, a1, s2, (s32)((f32)s0 * *(f32 *)D_00591BEC), s0);
    } else {
        s32 w;
        u8 *o;
        if (func_00B29CB0() != 0) {
            w = 0;
        } else {
            func_00188910(sp50);
            w = ((s32 *)sp50)[6];
        }
        o = *(u8 **)(p + 4);
        if (w != 0) {
            if (*(u16 *)(o + 0x30) != 0x457) func_00209A00(o, 0x457, 0);
        } else {
            if (*(u16 *)(o + 0x30) != 0x1BF) func_00209A00(o, 0x1BF, 0);
        }
        *(s16 *)(p + 0x26) = 0x4000;
        func_00B00970(p, (s32)(1024.0f * *D_003E74CC));
        func_00209820(*(void **)(p + 4));
    }
    if (func_002CA7A0(p) == 0) return;
    if (p[0x10] != 0) {
        p[0x16] = 7;
        *(s16 *)(p + 0x18) = 0;
        return;
    }
    if (func_00B29DA0() == 0 && func_00B29D60() == 0 && func_00B29D20() == 0 && func_00B29CE0() == 0) {
        p[0x16] = 0x82;
        *(s16 *)(p + 0x18) = 0;
        return;
    }
    s0b = p[0];
    if (s0b == (func_00AFBA70(*(u8 *)D_00591E4D) & 0xFF)) {
        func_00928110();
    } else {
        *(f32 *)(p + 0x6C) = (f32)*(s16 *)(p + 0x14) * (-9241.0f + (f32)func_00BBB8C0(0x300));
        *(f32 *)(p + 0x70) = (f32)func_00BBB8C0(0x100);
    }
    *(s16 *)(p + 0x1CE) = (s16)(s32)*(f32 *)(p + 0x6C);
    *(s16 *)(p + 0x1D0) = (s16)(s32)*(f32 *)(p + 0x70);
    p[0x16] = 0xA3;
    *(s16 *)(p + 0x18) = 0;
    p[0x45] = 0;
    *(s16 *)(p + 0x3A) = 0;
}
