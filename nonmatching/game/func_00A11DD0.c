/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591E4C[];
extern char D_005926E8[];
extern char D_005926D8[];
extern u8 *D_003E74CC;
extern char D_005E3934[];

extern s32 func_00B29CB0(void);
extern s32 func_00B2A340(void *p);
extern void func_00930240(void *p);
extern s32 func_00207D10(void *p);
extern void func_00209A00(void *p, s32 a, s32 b);
extern void func_00207390(void *p, s32 a);
extern s32 func_009B30B0(s32 a, s32 b);
extern s32 func_009B3070(s32 a, s32 b);
extern void func_00B00970(void *p, s32 a);
extern s32 func_009F4DC0(s32 a, f32 f);
extern s32 func_00A9DFF0(void *p, s32 a, f32 f);
extern s32 func_00BBB8C0(s32 a);

s32 func_00A11DD0(u8 *self, s32 a1, s32 a2, f32 fa) {
    s32 s0;
    s32 close;
    u8 *obj;
    s32 t;

    if (func_00B29CB0() != 0) {
        if (func_00B2A340(D_005E3934) != 4) return 0;
    }
    if (*(s32 *)(self + 0x1C) == 0) {
        *(u16 *)(self + 0x42) = *(u16 *)(self + 0x26);
    }
    obj = *(u8 **)(self + 4);
    t = *(u16 *)(obj + 0x30);
    if (t == 0x381 || t == 0x383 || t == 0x382) {
        s32 d = (*(u8 *)(obj + 0x2D) != 0) ? -1 : 1;
        *(u16 *)(self + 0x26) = *(u16 *)(self + 0x26) - (u16)(*(u16 *)(self + 0x38) * d);
        func_00930240(self);
        if (func_00207D10(*(void **)(self + 4)) != 0) {
            func_00209A00(*(void **)(self + 4), 0, 0);
            func_00207390(*(void **)(self + 4), 4);
            *(s32 *)(self + 0x1C) = 0;
        }
        if ((u16)func_009B30B0(*(u16 *)(self + 0x34), a1) < 0x21) return 1;
    }
    s0 = (u16)func_009B3070(*(u16 *)(self + 0x26), a1);
    close = 0;
    if (s0 < 0x1801) {
        close = 1;
    } else if (*(u8 *)D_00591E4C == 0) {
        if (*(f32 *)D_005926D8 <= (f32)*(u8 *)D_005926E8 && s0 < 0x4001) close = 1;
    }
    if (close) {
        if (a2 != 0) {
            void *o = *(void **)(self + 4);
            t = *(u16 *)((u8 *)o + 0x30);
            if (t != 0x112 && t != 0 && t != 0x19) {
                func_00209A00(o, 0, 0);
                func_00207390(*(void **)(self + 4), 6);
            }
        }
        func_00B00970(self, (s32)(1024.0f * *(f32 *)D_003E74CC));
        if (*(s32 *)(self + 0x1C) == 0) {
            *(u16 *)(self + 0x28) = *(u16 *)(self + 0x26);
        }
        return 0;
    }
    {
        s32 a2v = *(u16 *)(self + 0x26);
        s32 dd;
        obj = *(u8 **)(self + 4);
        obj[0x2D] = (s32)(((u16)((a1 & 0xFFFF) - a2v + 0x10000)) < 0x8001);
        *(u16 *)(self + 0x34) = a1;
        if (s0 < 0x6000) {
            if (s0 < 0x3000) {
                f32 *pf;
                func_00209A00(*(void **)(self + 4), 0x381, 0);
                func_00207390(*(void **)(self + 4), 4);
                pf = (f32 *)(*(u8 **)(self + 4) + 0x28);
                *pf = *pf * (f32)(func_00BBB8C0(0x32) + 0x64) / 100.0f;
                obj = *(u8 **)(self + 4);
                dd = func_009F4DC0(*(s32 *)(D_003E74CC + *(u16 *)(obj + 0x30) * 4 + 0x2FD8) - 2, *(f32 *)(obj + 0x28));
                *(u16 *)(self + 0x38) = (u16)(func_009B3070(*(u16 *)(self + 0x26), a1) / dd);
            } else {
                func_00209A00(*(void **)(self + 4), 0x383, 0);
                func_00207390(*(void **)(self + 4), 4);
                obj = *(u8 **)(self + 4);
                dd = func_009F4DC0(*(s32 *)(D_003E74CC + *(u16 *)(obj + 0x30) * 4 + 0x2FD8) - 2, *(f32 *)(obj + 0x28));
                *(u16 *)(self + 0x38) = (u16)(s0 / dd);
            }
        } else {
            s32 d;
            func_00209A00(*(void **)(self + 4), 0x382, 8);
            d = (*(u8 *)(*(u8 **)(self + 4) + 0x2D) != 0) ? -1 : 1;
            *(u16 *)(self + 0x26) = *(u16 *)(self + 0x26) - (u16)((d * 5) << 11);
            func_00207390(*(void **)(self + 4), 4);
            *(u16 *)(self + 0x38) = func_00A9DFF0(self, 0xB4, fa);
        }
    }
    return 1;
}
