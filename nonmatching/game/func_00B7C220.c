/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_005926E6[];
extern u8 D_005926E4[];
extern u8 D_00591E4C[];
extern u8 *D_003E7574;
extern u8 *D_003E74CC;

u32 func_009B3480(f32 a, f32 b);
u32 func_009B3070(u32 a, u32 b);
s32 func_00BBB8C0(s32 a);
s32 func_002AE670(s32 a);
s32 func_009B33A0(void *p, s32 a, s32 b);
s32 func_00A09950(void *p);
u32 func_009B30B0(u32 a, u32 b);
s32 func_00207920(void);
u32 func_009B34C0(void *o, f32 a, f32 b, f32 c, f32 d);
void func_00209420(void *o, s32 a, s32 b);
void func_00207390(void *o, s32 a);

void func_00B7C220(u8 *p) {
    f32 f20, f21, f2, f1;
    u32 s1, s0, s5;
    s32 s2, s3, v, i, code, ang;
    u8 *base;
    u8 *o;

    base = D_003E7574;
    f21 = *(f32 *)(base + *(u8 *)D_005926E6 * 4 + 0x47C);
    f20 = *(f32 *)(base + *(u8 *)D_005926E6 * 4 + 0xB7C);
    s1 = func_009B3480(f21, f20) & 0xFFFF;
    s0 = func_009B3070(*(u16 *)(p + 0x26), s1) & 0xFFFF;
    *(u16 *)(p + 0x2C) = s1;
    v = func_00BBB8C0(16);
    if (v + 8 < 0x21) {
        v = func_00BBB8C0(16);
        v = D_005926E4[v];
    } else {
        v = func_00BBB8C0(16);
        v = func_002AE670(v + 8);
    }
    *(u8 *)(p + 0x62) = v;
    s5 = (u32)func_009B33A0(p, (s32)f21, (s32)f20);
    s2 = 0;
    if (*(u8 *)(p + 0x10) == 0 && *(u8 *)D_00591E4C != 0) {
        if (func_00A09950(p) == 1) {
            if ((func_009B30B0(*(u16 *)(p + 0xA8), *(u16 *)(D_003E7574 + 0x5C)) & 0xFFFF) < 0x31)
                s5 = 0;
        }
    }
    if (!(s5 < 0x64000))
        s2 = 1;
    if (s0 < 0x5000) {
        if (s0 < 0x2400)
            s3 = 2;
        else
            s3 = 1;
    } else {
        s3 = 0;
    }
    f20 = 0.0f;
    if (*(u8 *)(p + 0x10) == 0) {
        s2 = 0;
        if (s3 == 2) {
            if ((*(u32 *)(p + 0xB0) & 0x10000) &&
                (func_009B30B0(*(u16 *)(p + 0x26), *(u16 *)(p + 0xA8)) & 0xFFFF) < 0x21) {
                s2 = 1;
            } else if (s5 < 0x240001) {
                s2 = 1;
            }
        }
    }
    if (*(u16 *)(*(u8 **)(p + 4) + 0x30) == 0x29E) {
        f20 = (f32)func_00207920();
    }
    if (s2) {
        f2 = *(f32 *)(p + 0xE0);
        i = (s32)f2;
        if (i <= 0) i = -i;
        f1 = (f32)i;
        if (!(f1 < 12057.0f)) {
            i = (s32)*(f32 *)(p + 0xE8);
            if (i <= 0) i = -i;
            f1 = (f32)i;
            if (f1 <= 2344.0f) {
                i = (f2 < 0.0f) ? -1 : 1;
                v = func_009B34C0(*(u8 **)(p + 4), 0.0f, 0.0f, (f32)i, 0.0f) & 0xFFFF;
                if ((func_009B30B0(*(u16 *)(p + 0x2C), v) & 0xFFFF) < 0x31)
                    s2 = 0;
            }
        }
    }
    if (s2) {
        if (s3 == 2) {
            goto l5f4;
        } else if (s3 == 1) {
            code = 0x2A0; ang = 7;
        } else if (s3 == 0) {
            code = 0x29F; ang = 9;
        } else {
            goto l5f4;
        }
        goto common_div;
    } else {
        if (s3 == 2) {
            goto l730;
        } else if (s3 == 1) {
            code = 0x2A3; ang = 3;
        } else if (s3 == 0) {
            code = 0x2A2; ang = 4;
        } else {
            goto l730;
        }
        goto common_div;
    }
common_div:
    o = *(u8 **)(p + 4);
    *(u8 *)(o + 0x2D) = ((((u32)s1 - *(u16 *)(p + 0x26) + 0x10000) & 0xFFFF) >= 0x8001);
    func_00209420(*(u8 **)(p + 4), code, (s32)f20);
    o = *(u8 **)(p + 4);
    v = *(s32 *)(D_003E74CC + *(u16 *)(o + 0x30) * 4 + 0x2FD8);
    *(s16 *)(p + 0x38) = (s32)s0 / (v - 2);
    *(u8 *)(p + 0x16) = 0x11;
    *(s16 *)(p + 0x18) = ang;
    goto tail;
l5f4:
    o = *(u8 **)(p + 4);
    if (*(u16 *)(o + 0x30) != 0x29E)
        func_00209420(o, 0x29E, (s32)f20);
    *(u8 *)(p + 0x16) = 0x11;
    *(s16 *)(p + 0x18) = 6;
    goto tail;
l730:
    func_00209420(*(u8 **)(p + 4), 0x2A1, (s32)f20);
    *(u8 *)(p + 0x16) = 0x11;
    *(s16 *)(p + 0x18) = 2;
tail:
    func_00207390(*(u8 **)(p + 4), 8);
    *(s32 *)(p + 0x1C) = 0;
    *(s32 *)(p + 0xE4) = 0;
    *(u16 *)(p + 0x28) = *(u16 *)(p + 0x26);
}
