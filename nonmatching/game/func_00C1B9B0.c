/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 func_001CD9E0(f32);
extern s32 func_00207390(s32, s32);
extern s32 func_00207D10(s32);
extern s32 func_00209A00(s32, s32, s32);
extern s32 func_0027A600(void *, s32);
extern s32 func_00288670(s32, s32, s32);
extern s32 func_002AE670(s32);
extern s32 func_00930240();
extern s32 func_009B3070(u16, u16);
extern s32 func_009B30B0(u16, u16);
extern u16 func_009B3220(u16, u16, s32);
extern u32 func_009B33A0(void *, s32, s32);
extern s32 func_009B3480(void *, f32, f32);
extern s32 func_009BFEB0(void *);
extern s32 func_009D8F10(void *, void *, s32);
extern s32 func_00A00960(void *, u16);
extern s32 func_00A1FE80(s32, s32);
extern s32 func_00A28A00(void *, u16, s32);
extern s32 func_00A99360(void *, s32);
extern s32 func_00AA3540(void *);
extern s32 func_00B00970(void *, s32);
extern s32 func_00BBB8C0(s32);
extern s32 func_00C1C210(void *, s32, s32);
extern s32 func_00C1C440(void *, s32, s32);
extern s32 func_00C1FA80(void *, u8 *, s32, s32);
extern f32 *D_003E74CC;
extern u8 *D_003E7574;
extern char D_0058E5B0[];
extern u8 D_00591E19;
extern u8 D_00591E4C;
extern char D_00591E4F[];
extern u8 D_00591E79;
extern u8 D_005926DC;
extern char D_00592980[];

void func_00C1B9B0(u8 *arg0) {
    u8 t;
    s32 a1;
    s32 v;
    u8 *s0;
    s32 s1;
    s32 s2;
    u32 r;
    u16 st;
    s32 sgn;

    t = arg0[0];
    if (t != 1 && t != 0xC) {
        goto bad;
    }
    if (arg0[0x10] != 0) {
bad:
        arg0[0x16] = 7;
        *(u16 *)(arg0 + 0x18) = 0;
        return;
    }
    func_00A99360(arg0, -0x12C);
    func_0027A600(arg0, 1);
    arg0[0x66] = 1;
    arg0[0x45] = 0;
    t = *(u8 *)(D_00591E4F + ((arg0[0x13] ^ 1) * 2));
    a1 = 1;
    if (t != 0xFF) {
        a1 = t % 23;
    }
    s0 = (u8 *)(D_0058E5B0 + a1 * 0x240);
    r = func_009B33A0(arg0, (s32)*(f32 *)(D_003E7574 + 0x1454), (s32)*(f32 *)(D_003E7574 + 0x145C));
    s1 = (s32)func_001CD9E0((f32)r);
    s2 = func_009B3480(arg0, *(f32 *)(D_003E7574 + 0x1454), *(f32 *)(D_003E7574 + 0x145C)) & 0xFFFF;
    st = *(u16 *)(arg0 + 0x18);
    if (st == 0x92) {
        func_00930240(arg0, 0x92);
        if (func_00207D10(*(s32 *)(arg0 + 4)) == 0) goto tail;
        if (*(s32 *)(arg0 + 0x20) >= 0x1400) {
            func_009B3070(*(u16 *)(arg0 + s0[0] * 2 + 0x128), *(u16 *)(arg0 + 0x26));
            func_00209A00(*(s32 *)(arg0 + 4), 0x1A3, 0);
            func_00207390(*(s32 *)(arg0 + 4), 8);
            *(s32 *)(arg0 + 0x1C) = (*(s32 *)(arg0 + 0x20) * 0x55) / 100;
            *(s32 *)(arg0 + 0x1C) = func_00A1FE80(*(s32 *)(arg0 + 0x1C), 0x800);
            *(s32 *)(arg0 + 0x20) = *(s32 *)(arg0 + 0x1C);
            goto tail;
        }
        *(s16 *)(arg0 + 0x1CE) = (s32)*(f32 *)(arg0 + 0xE0);
        *(s16 *)(arg0 + 0x1D0) = (s32)*(f32 *)(arg0 + 0xE8);
        func_00209A00(*(s32 *)(arg0 + 4), 0x1A7, 0);
        *(s32 *)(arg0 + 0x1C) = (*(s32 *)(arg0 + 0x1C) * 0x28) / 100;
        *(u16 *)(arg0 + 0x18) = 0;
        goto tail;
    } else if (st == 0x91) {
        func_00A00960(arg0, *(u16 *)(arg0 + 0x38));
        func_00930240(arg0);
        if (func_00207D10(*(s32 *)(arg0 + 4)) == 0) goto tail;
        *(s16 *)(arg0 + 0x1CE) = (s32)*(f32 *)(arg0 + 0xE0);
        *(s16 *)(arg0 + 0x1D0) = (s32)*(f32 *)(arg0 + 0xE8);
        func_00209A00(*(s32 *)(arg0 + 4), 0x1A7, 0);
        *(s32 *)(arg0 + 0x1C) = (*(s32 *)(arg0 + 0x1C) * 0x28) / 100;
        *(u16 *)(arg0 + 0x18) = 0;
        goto tail;
    } else if (st == 0x90) {
        *(u16 *)(arg0 + 0x26) = func_009B3220(*(u16 *)(arg0 + 0x2C), *(u16 *)(arg0 + 0x26), 0x1000);
        func_00930240(arg0);
        if (func_00207D10(*(s32 *)(arg0 + 4)) == 0) goto tail;
        *(s16 *)(arg0 + 0x1CE) = (s32)*(f32 *)(arg0 + 0xE0);
        if (D_00591E79 == 8) {
            if (arg0[0x24] != 0) {
                v = (s32)*(f32 *)(arg0 + 0xE8);
                if (v <= 0) v = -v;
                if (v < 0x80) {
                    *(s16 *)(arg0 + 0x1D0) = (s32)*(f32 *)(arg0 + 0xE8);
                } else {
                    t = arg0[0x12];
                    if (func_00288670(*(u8 *)(D_00592980 + t * 0x6900 + arg0[0x11] * 0x348 + 0x81) & 0x7F, 0x28, t * 0x69) >= 0x4C && func_00BBB8C0(6) == 0) {
                        sgn = (*(f32 *)(D_003E7574 + 0x18) < 0.0f) ? -1 : 1;
                        *(s16 *)(arg0 + 0x1D0) = sgn << 7;
                    } else {
                        *(s16 *)(arg0 + 0x1D0) = (s32)*(f32 *)(arg0 + 0xE8);
                    }
                }
            } else {
                func_009BFEB0(arg0);
                if (*(s32 *)(arg0 + 0xB0) & 0x10000) {
                    sgn = (*(f32 *)(D_003E7574 + 0x18) < 0.0f) ? -1 : 1;
                    *(s16 *)(arg0 + 0x1D0) = sgn << 7;
                } else {
                    *(s16 *)(arg0 + 0x1D0) = (s32)*(f32 *)(arg0 + 0xE8);
                }
            }
        } else {
            *(s16 *)(arg0 + 0x1D0) = (s32)*(f32 *)(arg0 + 0xE8);
        }
        func_00209A00(*(s32 *)(arg0 + 4), 0x1A7, 0);
        func_00B00970(arg0, (s32)(1024.0f * *D_003E74CC));
        *(u16 *)(arg0 + 0x18) = 0;
        goto tail;
    } else if (st == 2) {
        if (func_00C1FA80(arg0, s0, s2, s1) != 0) return;
        t = *(u8 *)(D_00591E4F + arg0[0x13] * 2);
        a1 = 1;
        if (t != 0xFF) {
            a1 = t % 23;
        }
        func_009D8F10(arg0, D_0058E5B0 + a1 * 0x240, 0);
        st = *(u16 *)(arg0 + 0xA8);
        if (func_00AA3540(arg0) < 0x1000001) {
            if (*(f32 *)(D_003E7574 + 0x7FC) < -512.0f) {
                func_00A28A00(arg0, st, 0);
            } else {
                func_00A28A00(arg0, st, 0x1A7);
            }
        } else {
            func_00A28A00(arg0, st, 0x12E);
        }
        func_00C1C210(arg0, s1, s2);
        goto tail;
    } else if (st == 1 || st == 0) {
        if (st == 0) {
            *(s32 *)(arg0 + 0xE4) = 0;
            if (D_00591E4C == 0 && arg0[0x4A] != 2) {
                *(s16 *)(arg0 + 0x1CE) = (s32)*(f32 *)(D_003E7574 + 0x1454);
                *(s16 *)(arg0 + 0x1D0) = (s32)*(f32 *)(D_003E7574 + 0x145C);
            }
            *(s32 *)(arg0 + 0x90) = 0;
            *(s32 *)(arg0 + 0xF4) = 0;
            *(s32 *)(arg0 + 0xE4) = 0;
            arg0[0x3E] = D_005926DC;
            *(u16 *)(arg0 + 0x18) = 1;
        }
        if (func_00C1FA80(arg0, s0, s2, s1) != 0) return;
        func_00C1C440(arg0, s2, s1);
        func_00C1C210(arg0, s1, s2);
        goto tail;
    }
tail:
    if (arg0[0x4C] != 0) {
        v = (s32)*(f32 *)(D_003E7574 + func_002AE670(0xA) * 4 + 0xB7C);
        if (v <= 0) v = -v;
        if ((f32)v <= 5032.0f) goto c1;
    }
    if (arg0[0x46] == D_005926DC) return;
c1:
    if (arg0[0] == D_00591E4C) goto clr;
    if (arg0[0x4C] != 0) {
        if ((func_009B30B0(*(u16 *)(arg0 + 0x26), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) >= 0x11) goto c2;
        if ((func_009B30B0(*(u16 *)(arg0 + 0xA8), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) >= 0x11) goto c2;
        if ((func_009B30B0(*(u16 *)(arg0 + 0x28), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) >= 0x11) goto c2;
        goto clr;
    }
c2:
    if (arg0[0x4C] != 0 && *(u32 *)(arg0 + 0x114) < 0x80 && arg0[0] == D_00591E19) {
clr:
        arg0[0x66] = 0;
    }
}
