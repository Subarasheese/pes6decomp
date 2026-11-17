/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E7574;
extern char D_0058E5B0[];
extern char D_0058E5B4[];
extern char D_00591BE4[];
extern char D_00591E14[];
extern char D_00592980[];

s32 func_001520F0(void);
void func_00152130(s32, s32);
s32 func_0017F900(void);
void func_001A58E0(s32, s32);
void func_001A5E00(s32);
void func_001A5F50(s32, s32);
void func_001A7250(s32);
void func_001A9970(s32);
void func_001AB650(s32);
void func_001AB960(s32, s32);
void func_001ABA60(s32);
void func_001AC470(void);
void func_001AC550(s32);
s32 func_00207D80(s32, s32);
s32 func_00208250(s32);
void func_00209820(s32);
void func_00209A00(s32, s32, s32);
void func_002727C0(s32);
void func_0027B200(s32, s32, s32);
void func_009B4450(s32);
s32 func_009E1C90(s32);
void func_009E1D30(s32, s32);
void func_00B25C50(s32);
void func_00B27010(s32);
s32 *func_00B2A420(s32);
void func_00B2ACF0(s32 *);
s32 func_00B37960(void);
s32 func_00BA4EC0(void);
s32 func_00BA5040(void);
void func_00BA51F0(void);
s32 func_00BA91C0(void);
s32 func_00BA9430(s32);
void func_00BA9590(void);
void func_00BA95D0(void);
void func_00BF6240(s32);

void func_00BA4910(void)
{
    s32 st, s1, v, *p;
    char *s0;

    st = func_009E1C90(3) & 0xff;
    if (st == 0) {
        func_00BA51F0();
        func_00BA95D0();
        func_001A5F50(5, func_00208250(0xAD));
        func_001A5E00(5);
        func_00B25C50(0);
        func_00B27010(0);
        func_002727C0(0x12);
        *(s32 *)D_00591E14 = 0;
        func_009B4450(0);
        func_009E1D30(3, 1);
        return;
    }
    if (st == 1) {
        func_00BA5040();
        if (func_00B37960() == 0 && func_00BA91C0() == 0) return;
        s0 = D_0058E5B0;
        if (*(f32 *)(D_003E7574 + 0x10) <= 0.0f)
            s1 = func_00BA9430(2);
        else
            s1 = func_00BA9430(1);
        *(u8 *)(*(s32 *)(s0 + 4) + 0x2C) = 0;
        func_001A58E0(**(s32 **)(s0 + 4), 0);
        func_001AB960(**(s32 **)(s0 + 4), s1);
        func_001ABA60(**(s32 **)(s0 + 4));
        func_001A7250(**(s32 **)(s0 + 4));
        func_001A9970(**(s32 **)(s0 + 4));
        if (func_00BA91C0() != 0) {
            func_009E1D30(3, 3);
        } else {
            func_002727C0(0x14);
            func_009E1D30(3, 2);
        }
        return;
    }
    if (st == 2) {
        if (func_00BA5040() == 0 && func_00BA91C0() == 0) return;
        if (func_0017F900() == 0)
            func_009E1D30(3, 3);
        else
            func_009E1D30(3, 5);
        return;
    }
    if (st == 3) {
        func_00152130(1, (960 / *(u8 *)D_00591BE4) & 0xff);
        func_009E1D30(3, 4);
        goto c4;
    }
    if (st == 4) {
c4:
        if (func_001520F0() == 0) {
            func_00BA5040();
            return;
        }
        if (func_0017F900() == 0) return;
        func_00152130(0, (960 / *(u8 *)D_00591BE4) & 0xff);
        func_002727C0(0x14);
        func_009E1D30(3, 4);
        goto c5;
    }
    if (st == 5) {
c5:
        if (func_00BA4EC0() == 0) {
            func_009E1D30(3, 7);
            return;
        }
        func_009E1D30(3, 6);
        goto c6;
    }
    if (st == 6) {
c6:
        func_00BA5040();
        p = func_00B2A420(0);
        s0 = (char *)*p;
        func_00B2ACF0(p);
        s1 = 0;
        func_00209820(*(s32 *)(s0 + 4));
        *(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(s0 + 4)) + 0x10) + 0x18) + 0x38) = 0;
        if (func_00207D80(*(s32 *)(s0 + 4), 0x8C) != 0) s1 = 1;
        if (s1 == 0 && func_00BA91C0() == 0) return;
        func_00BA91C0();
        func_009E1D30(3, 7);
        goto c7;
    }
    if (st == 7) {
c7:
        func_00152130(1, (960 / *(u8 *)D_00591BE4) & 0xff);
        func_009E1D30(3, 8);
        goto c8;
    }
    if (st == 8) {
c8:
        if (func_001520F0() == 0) return;
        s1 = func_00BA9430(0);
        func_0027B200(**(s32 **)D_0058E5B4, 5, 0);
        *(s32 *)(*(s32 *)(*(s32 *)(**(s32 **)D_0058E5B4 + 0x10) + 0x18) + 0x38) = 1;
        *(u8 *)(*(s32 *)D_0058E5B4 + 0x2C) = 0;
        func_001A58E0(**(s32 **)D_0058E5B4, 0);
        func_001AB960(**(s32 **)D_0058E5B4, s1);
        func_001ABA60(**(s32 **)D_0058E5B4);
        func_001A7250(**(s32 **)D_0058E5B4);
        func_001A9970(**(s32 **)D_0058E5B4);
        func_009E1D30(3, 9);
        return;
    }
    if (st == 9) {
        if (func_0017F900() == 0) return;
        func_001AB650(**(s32 **)D_0058E5B4);
        func_001AC550(**(s32 **)D_0058E5B4);
        func_001AC470();
        *(u8 *)(*(s32 *)D_0058E5B4 + 0x2C) = 1;
        func_001A58E0(**(s32 **)D_0058E5B4, 1);
        func_00209A00(*(s32 *)D_0058E5B4, 0, 0);
        *(u8 *)(*(s32 *)D_0058E5B4 + 0x50) = 0;
        for (s1 = 0; s1 < 0x17; s1++) {
            s32 i = (s1 == 0xff) ? 1 : s1 % 0x17;
            s0 = D_0058E5B0 + i * 576;
            if (*(u8 *)(D_00592980 + (u8)s0[0x12] * 26880 + (u8)s0[0x11] * 840 + 0xF8) == 0) {
                func_00209A00(*(s32 *)(s0 + 4), 0, 0);
                *(u8 *)(*(s32 *)(s0 + 4) + 0x50) = 0;
                if (*(u8 *)s0 == 0) {
                    *(u8 *)(s0 + 0x16) = 0xE0;
                    *(s16 *)(s0 + 0x18) = 0;
                } else {
                    *(u8 *)(s0 + 0x16) = 0;
                    *(s16 *)(s0 + 0x18) = 0;
                }
                *(s32 *)(s0 + 0x1C) = 0;
            }
        }
        func_00BA9590();
        func_00B27010(0);
        func_00BF6240(1);
    }
}
