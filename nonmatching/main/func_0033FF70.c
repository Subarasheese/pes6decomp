/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_003E9F0C;
extern u8 D_003E9F08;
extern u8 D_003E9F48;
extern u8 D_003E9F50;
extern u8 D_003E9F44;
extern u8 D_003E9F40;
extern u8 D_003EA044;
extern char D_003B7530[];
extern char D_003B7534[];
extern char D_003B7538[];
extern char D_003B753C[];
extern char D_003B7540[];
extern char D_003E6028[];
extern char D_0058E5B0[];
extern char D_00592980[];

s32 func_0030F080(s32);
s32 func_0030E830(void);
void func_00333620(s32, s32);
void func_0031BBE0(s32, s32, s32);
void func_003414D0(u8 *, s32, s32);
void func_003389F0(void *, s32, s32);
s32 func_00338AD0(s32, void *, s32, void *);
void func_00338A60(s32, void *);
void func_00338990(s32, void *);
void func_0030F930(void *, void *, s32);
void func_00338600(s32);
void func_00C6C980(s32, s32, s32, s32);
void func_0024ECF0(s32);
s32 func_0036C4E0(s32, s32, s32);
void func_00338770(void *, s32);
void func_003387D0(void *, void *, void *);
s32 func_0030DAF0(s32);
void func_003226A0(s32);
s32 func_00339870(s32, s32, void *);
s32 func_00333600(s32);
s32 func_0030DB60(s32);
s32 func_00333710(void *, s32);
void func_0033FEC0(void);
void func_0033F850(void);
void func_0033E1C0(void);
void func_0033FBD0(void);
s32 func_00341910(s32, s32, s32);
s32 func_0030DA50(void);
void func_00338720(s32, s32);
s32 func_003389D0(void *, s32);
s32 func_00335370(void);
s32 func_0023A170(void);
void func_00342170(s32);
void func_003119B0(u8 *, s32);

s32 func_0033FF70(u8 *p) {
    f32 fl[5];
    f32 fl2[5];
    s16 sh[2];
    u8 b;
    u8 c;
    s32 s1;
    s32 s2;
    s32 s5;
    s32 s0;
    s32 s3;
    s32 r;
    s32 sel;

    sel = func_0030F080((D_003E9F0C != 0) ? 1 : (D_003E9F08 != 0));
    if (sel == 1) {
    s5 = *(s32 *)(p + 0x48);
        s1 = *(s32 *)(p + 0x50);
        s2 = *(s32 *)(p + 0x44);
        s0 = func_0030E830() & 0xFF;
        fl[0] = *(f32 *)D_003B7530;
        fl[1] = *(f32 *)D_003B7534;
        fl[2] = *(f32 *)D_003B7538;
        fl[3] = *(f32 *)D_003B753C;
        fl[4] = *(f32 *)D_003B7540;
        func_00333620(((s32 *)fl)[s0], 1);
        func_0031BBE0(0x1E, *(s32 *)(p + 0x3C), 4);
        func_003414D0(&b, 0, 0xFF);
        func_003389F0(p, 0, b);
        func_00338AD0(0x3C, func_0033FEC0, *(s32 *)(p + 8), D_003E6028);
        s3 = func_00338AD0(0x80000026, func_0033F850, *(s32 *)(p + 8), D_003E6028);
        func_00338A60(s3, p);
        func_00338990(s3, p);
        if (s0 == 1) {
            func_0030F930((void *)(s1 + 0x10), (void *)(s1 + 0x14), 1);
        } else if (s0 == 0) {
            func_0030F930((void *)(s1 + 8), (void *)(s1 + 0xC), 0);
        }
        func_00338600(1);
        func_00C6C980(0, 0, 0, 0);
        func_0024ECF0(1);
        D_003EA044 = 0;
        r = func_0036C4E0(s5, *(s32 *)s2, *(s32 *)(s2 + b * 60 + 0x54) < 5 ? 0 : 1);
        if (r != 0) {
            func_00338770(p, 1);
        }
        func_003387D0(p, func_0033FBD0, D_003E6028);
        return 1;
    }
    if (sel == 2) {
        s1 = *(s32 *)(p + 0x48);
        s0 = *(s32 *)(p + 0x44);
        sh[0] = func_0030DAF0(0);
        sh[1] = func_0030DAF0(1);
        D_003E9F48 = func_0030E830();
        fl2[0] = *(f32 *)D_003B7530;
        fl2[1] = *(f32 *)D_003B7534;
        fl2[2] = *(f32 *)D_003B7538;
        fl2[3] = *(f32 *)D_003B753C;
        fl2[4] = *(f32 *)D_003B7540;
        func_00333620(((s32 *)fl2)[D_003E9F48], 1);
        func_003226A0(s0);
        func_003414D0(&b, 0, 0xFF);
        func_003389F0(p, 0, b);
        r = func_00339870(s0, b, sh);
        func_003389F0(p, 1, r);
        func_00333620(0x14, 1);
        func_0031BBE0(0x1E, *(s32 *)(p + 0x3C), 4);
        if (func_00333600(0x13) != 0) {
            s2 = (s16)func_0030DB60(0);
            if ((s16)func_0030DB60(1) < s2) {
                *(s32 *)(s1 + 0x10) = 0xE;
                *(s32 *)(s1 + 0x14) = 0xC;
            } else {
                *(s32 *)(s1 + 0x14) = 0xE;
                *(s32 *)(s1 + 0x10) = 0xC;
            }
        }
        r = func_00333710((void *)s1, b);
        func_003389F0(p, 2, r);
        s2 = func_00338AD0(0x80000027, func_0033E1C0, *(s32 *)(p + 8), D_003E6028);
        func_00338A60(s2, p);
        func_00338990(s2, p);
        if (func_00341910(1, 5, 10) != 0) {
            if (func_0030DA50() != 0) {
                func_00338720(s2, 10);
            }
        }
        func_00338600(1);
        func_00338AD0(0x3C, func_0033FEC0, *(s32 *)(p + 8), D_003E6028);
        if (func_003389D0(p, 1) == 1) {
            *(s32 *)(func_00335370() + 0x100C) = b;
            *(s32 *)(func_00335370() + 0x1014) = b;
            if ((u8)func_0023A170() > 0) {
                D_003E9F50 = 1;
                func_00342170(1);
            }
        } else {
            D_003E9F50 = 0;
        }
        {
            u8 *q;
            s32 i, n1, n2;
            func_003119B0(&c, b);
            if (c == 0xFF) {
                r = 1;
            } else {
                r = c % 23;
            }
            D_003E9F44 = 0;
            D_003E9F40 = 0;
            n1 = 0;
            n2 = 0;
            q = (u8 *)D_0058E5B0 + r * 0x240;
            for (i = 0; i < 11; i++) {
                u32 v = ((u8 *)D_00592980)[q[0x12] * 26880 + q[0x11] * 840 + 0x15];
                if (v < 6) {
                    if (v < 2) {
                        n1 = (u8)n1 + 1;
                        D_003E9F44 = n1;
                    } else if (v >= 3) {
                        n2 = (u8)n2 + 1;
                        D_003E9F40 = n2;
                    }
                }
                q += 0x240;
            }
            func_00C6C980(0, n1, n2, 0);
        }
        func_0024ECF0(1);
        D_003EA044 = 0;
        func_0036C4E0(s1, *(s32 *)s0, *(s32 *)((u8 *)s0 + b * 60 + 0x54) < 5 ? 0 : 1);
        func_003387D0(p, func_0033FBD0, D_003E6028);
        return 0;
    }
    return 0;
}
