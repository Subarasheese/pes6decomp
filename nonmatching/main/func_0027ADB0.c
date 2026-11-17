/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 D_003E74CC;
extern s32 D_003E9CBC;
extern s32 func_0017E140(void *a, void *b);
extern void func_001AFD80(void *a, void *b, f32 f);
extern void func_001314F0(void *a, s32 b);
extern void func_00131B90(void *a, void *b, void *c, f32 f);

void func_0027ADB0(u8 *arg)
{
    u8 *p, *s0, *s1, *s2, *s3;
    s32 *tbl;
    void *s5, *s7;
    s32 s6;
    f32 f1;
    s32 sel;

    p = *(u8 **)(arg + 4);
    tbl = (s32 *)(D_003E74CC + 0x178C);
    s0 = *(u8 **)p;
    s1 = *(u8 **)(s0 + 0x10);
    s7 = (void *)tbl[*(u16 *)(p + 0x3C)];
    s5 = (void *)tbl[*(u16 *)(p + 0x30)];
    s6 = 1;
    if (func_0017E140(tbl, p) == 0) return;
    p = *(u8 **)(arg + 4);
    if (p[0x5D] != 0) return;
    p[0x5C] = 0;
    if ((*(u8 **)(*(u8 **)(arg + 4)))[1] != 2) return;

    {
        s32 a0 = *(s8 *)(s1 + 9);
        u8 *v1 = *(u8 **)(s1 + 0xC);
        s32 off = a0 * 8;
        u8 *base;
        s32 z;
        *(u8 **)(s1 + 0x24) = v1 + off;
        z = (*(s32 *)(s1 + 0xC) == 0);
        f1 = *(f32 *)(s0 + 0x1CC);
        base = *(u8 **)(s1 + 0xC) + 4;
        s2 = *(u8 **)(base + z * 8);
        s1 = *(u8 **)(*(u8 **)(s1 + 0x10) + 4);
        s3 = *(u8 **)(base + off);
    }
    if (f1 < -128.0f || 128.0f < f1) {
        if (D_003E9CBC == 0) s6 = 0;
    }

    {
        u8 *a2 = *(u8 **)(arg + 4);
        if (a2[0x4C] != 0 && s0[5] == 0 && s6 == 1) {
            func_001AFD80(s1, s5, *(f32 *)(a2 + 0x38));
            s1[0x1F] = (*(u8 **)(arg + 4))[0x2D];
            func_001314F0(s1, 0);
            a2 = *(u8 **)(arg + 4);
            if (a2[0x4D] != 1) {
                if (*(void **)(s2 + 4) == s7 && *(f32 *)(a2 + 0x40) == *(f32 *)(s2 + 8)) {
                } else {
                    func_001AFD80(s2, s7, *(f32 *)(a2 + 0x40));
                    s2[0x1F] = (*(u8 **)(arg + 4))[0x46];
                    func_001314F0(s2, 0);
                }
            }
            *(void **)(s2 + 4) = *(void **)(s1 + 4);
            s3[0x1F] = 0;
            s2[0x1F] = 0;
            s1[0x1F] = 0;
            func_00131B90(s3, s2, s1, *(f32 *)(*(u8 **)(arg + 4) + 0x48));
        } else if (s0[0x1BA] < 2 && *(u16 *)(a2 + 0x52) != *(u16 *)(a2 + 0x30)
                   && a2[0x50] != 0 && s0[5] != 1 && s6 == 1) {
            func_001AFD80(s2, s5, *(f32 *)(a2 + 0x38));
            s2[0x1F] = (*(u8 **)(arg + 4))[0x2D];
            func_001314F0(s2, 0);
            *(void **)(s3 + 4) = *(void **)(s2 + 4);
            s3[0x1F] = 0;
            s2[0x1F] = 0;
            func_00131B90(s3, s3, s2, 0.5f);
        } else {
            func_001AFD80(s3, s5, *(f32 *)(a2 + 0x38));
            s3[0x1F] = (*(u8 **)(arg + 4))[0x2D];
            func_001314F0(s3, 0);
            if (s0[5] != 0) func_00131B90(s2, s3, s3, 0.0f);
        }
    }

    {
        u8 *a1 = *(u8 **)(arg + 4);
        u16 a0 = *(u16 *)(arg + 0x26);
        u16 v1 = *(u16 *)(a1 + 0x44);
        if (a1[0x4C] != 0 && s0[5] == 0 && v1 != a0 && *(f32 *)(a1 + 0x48) != 0.0f) {
            *(s16 *)(s0 + 0x1F0) = a0 - v1;
            sel = *(s16 *)(s0 + 0x1F0);
            *(s16 *)(s0 + 0x1F0) = (s32)(*(f32 *)(*(u8 **)(arg + 4) + 0x48) * (f32)sel);
            sel = *(s16 *)(s0 + 0x1F0) + *(s16 *)(*(u8 **)(arg + 4) + 0x44);
            *(s16 *)(s0 + 0x1F0) = sel;
        } else {
            *(u16 *)(s0 + 0x1F0) = *(u16 *)(arg + 0x26);
        }
        (*(u8 **)(arg + 4))[0x5D] = 1;
    }
}
