/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009B3480(void *a, s32 a1, s32 a2, s32 a3);
extern s32 func_00BD6530(void *s, s32 a1, s32 a2, s32 a3, f32 a, f32 b);
extern s32 func_00BD40A0(void *s, s32 a1, s32 a2, s32 a3);
extern s32 func_00BD44E0(void *s, s32 n);
extern void func_00BD3BE0(void *s, s32 n);
extern s32 func_00BD60B0(void *s, s32 a1, s32 a2);
extern s32 func_00BD6290(void *s, s32 a1, s32 a2, s32 a3, f32 a, f32 b);
extern void func_00B2ACF0(void *s, s32 a1, s32 a2);
extern void func_00B35340(void *s);
extern s32 func_00207D10(void *a);
extern void func_00208610(void *a);
extern void func_00BD3BA0(void *s, s32 a, s32 b);

s32 func_00BD5DB0(u8 **s, s32 a1, s32 a2, s32 a3, f32 fa, f32 fb) {
    s32 ret = 0;
    s32 mode;
    s32 keep;
    s32 r;
    s32 v;
    u8 *a;
    u32 st;

    st = s[1][0x10];
    if (st > 8) return ret;
    if (st == 0) goto c0;
    if (st == 1) goto c1;
    if (st == 2) goto c2;
    if (st == 3) goto c3;
    if (st == 4) goto c4;
    if (st == 5) goto c5;
    if (st == 6) goto c6;
    if (st == 7) goto c7;
    goto c8;
c0:
    *(s16 *)(s[0] + 0x2C) = func_009B3480(s[0], a1, a2, a3);
    s[1][0x10]++;
c1:
    if (func_00BD6530(s, a1, a2, a3, fa, fb)) {
        s[1][0x10] = 7;
        return ret;
    }
    s[1][0x10]++;
c2:
    if (!func_00BD40A0(s, a1, a2, a3)) return ret;
    s[1][0x10]++;
c3:
    s[1][0x10]++;
c4:
    s[1][0x12] = 4;
    keep = s[1][0xC];
    r = func_00BD44E0(s, 2);
    if (r == 0) {
        a = s[0];
        v = *(u16 *)(*(u8 **)(a + 4) + 0x30);
        mode = 0;
        if (v == 0x1BF || v == 0) *(s32 *)(a + 0x1C) = 0;
    } else if (r == 2 || r == 1) {
        mode = 2;
    }
    a1 = mode;
    func_00BD3BE0(s, a1);
    s[1][0xD] = keep;
    s[1][0x12] = 1;
    s[1][0x10]++;
c5:
    if (!func_00BD60B0(s, a1, a2)) return ret;
    s[1][0x10]++;
c6:
    if (func_00BD6290(s, a1, a2, a3, fa, fb)) s[1][0x10] = 7;
    else s[1][0x10] = 8;
    return ret;
c7:
    func_00B2ACF0(s, a1, a2);
    func_00B35340(s);
    if (!func_00207D10(*(u8 **)(s[0] + 4))) return ret;
    a = *(u8 **)(s[0] + 4);
    v = *(u16 *)(a + 0x30);
    if (v == 0x582 || v == 0x581 || v == 0x4D6 || v == 0x586 || v == 0x585 ||
        v == 0x403 || v == 0x402 || v == 0x400 || v == 0x3FF) {
        *(u16 *)(s[1] + 6) = *(u16 *)(*(u8 **)(a + 4) + 6);
    }
    func_00208610(*(u8 **)(s[0] + 4));
    *(u16 *)(s[0] + 0x28) = *(u16 *)(s[0] + 0x26);
    s[1][0x10] = 8;
    return ret;
c8:
    func_00BD3BA0(s, 4, 0);
    ret = 1;
    *(u16 *)(s[0] + 0x3C) = 0;
    return ret;
}
