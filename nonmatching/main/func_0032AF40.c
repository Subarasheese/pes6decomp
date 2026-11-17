/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003B7340[];
extern s32 func_003389D0(void *, s32);
extern void func_0030DCC0(f32 *, f32 *, s32);
extern void func_00311A50(u8 *, u8 *, s32);
extern void func_0030DD90(u8 *, s32);
extern void func_00313A80(void *, s32, void *);
extern void func_003139F0(void *, s32);
extern void func_00313A00(void *, s32);
extern void func_003139B0(void *, s32);
extern void func_0032A6C0(void *, s32, s32, s32, s32, s32, s32, s32, f32, f32);
extern s32 func_00333440(s32, void *, s32);
extern s32 func_003333C0(void);
extern void func_00338930(void *);

s32 func_0032AF40(u8 *a0) {
    u8 *s0 = *(u8 **)(a0 + 0x3c);
    s32 s4 = *(s32 *)(a0 + 0x40);
    s32 s3 = *(s32 *)(a0 + 0x44);
    s32 s2;
    f32 fa8, fa4;
    u8 b_af, b_ae, b_ad;
    u8 buf[0x18];
    u8 aux[8];
    s16 tab[10];
    s32 v, i;
    s16 *src;
    s2 = func_003389D0(a0, 0) & 0xff;
    func_0030DCC0(&fa8, &fa4, s2);
    func_00311A50(&b_af, &b_ae, s2);
    func_0030DD90(&b_ad, s2);
    func_00313A80(buf, 0x40, aux);
    func_003139F0(buf, b_af);
    func_00313A00(buf, s2);
    func_003139B0(buf, s4);
    func_0032A6C0(buf, s2, s4, s3, *(s16 *)(s0 + b_af * 64 + b_ae * 2 + 0x328), b_af, b_ad, s0[0xa], fa8, fa4);
    if (func_00333440(0xab, buf, 1) != 0) {
        v = func_003333C0();
        src = (s16 *)D_003B7340;
        for (i = 0; i < 5; i++) {
            tab[i * 2] = src[i * 2];
            tab[i * 2 + 1] = src[i * 2 + 1];
        }
        *(s16 *)(s0 + b_af * 64 + b_ae * 2 + 0x328) |= tab[v];
        if (v != 10 && v != 0) s0[0xa] = v;
    }
    func_00338930(a0);
    return 1;
}
