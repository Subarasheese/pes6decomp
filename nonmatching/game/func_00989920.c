/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009E1C90(s32);
extern u32 func_00288670(s32, s32, s32);
extern void func_00A99360(void *, s32, s32, s32);
extern void func_00C047D0(void);
extern void func_00C22E20(void);
extern void func_00284380(s32, s32);
extern void func_00988E10(s32);
extern void func_00983660(s32);
extern void func_00907960(void);
extern void func_00907230(void);
extern void func_00906220(void);
extern void func_0098ED90(void);
extern void func_0098EC40(s32);
extern void func_00911160(s32);
extern void func_0091F050(void);
extern void func_0090CFA0(void);
extern void func_00910F70(void);
extern void func_0090F4A0(void);
extern void func_0090D6F0(void);
extern void func_009193C0(void);
extern void func_00920030(void);
extern void func_009155D0(void);
extern void func_00918780(void);
extern void func_00904E20(void);
extern void func_0091F2D0(void);
extern void func_0091C9C0(void);
extern void func_00905AE0(void);
extern void func_00905600(void);
extern void func_0091B030(void);
extern s32 func_009B3070(s32, s32);
extern void func_00918680(void);
extern void func_00918880(void);
extern void func_0091C6F0(void);
extern void func_00918D80(void);
extern void func_00918350(void);
extern void func_00913F80(void);
extern void func_0091DC30(void);
extern void func_00920880(void);
extern void func_00920ED0(void);
extern void func_00921370(void);
extern void func_00287650(void);
extern void func_009189D0(void);
extern void func_0091FDF0(void);
extern void func_00921030(void);
extern void func_00915120(void);
extern s32 func_00C301C0(void);
extern void func_009A1580(void);
extern void func_009A0700(void);
extern s32 func_00B29E50(s32);
extern s32 func_00B29350(void);
extern s32 func_00B29310(void);
extern void func_00984E90(void);
extern void func_00984AD0(void);
extern void func_00985350(void);

extern char *D_003E7574;
extern char D_0058E5B0[];
extern char D_0058E7F0[];
extern char D_0058EA30[];
extern char D_005902F0[];
extern char D_00591BE4[];
extern char D_00591C09[];
extern char D_00591DC4[];
extern char D_00591E00[];
extern char D_00591E4C[];
extern char D_00591E67[];
extern char D_00591E68[];
extern char D_00591F00[];
extern char D_00591F1C[];
extern char D_00591F20[];
extern char D_00591F30[];
extern char D_0059227C[];
extern char D_00592280[];
extern char D_005926D8[];
extern char D_005926DC[];
extern char D_005926DD[];
extern char D_005926DE[];
extern char D_005926DF[];
extern char D_005926E0[];
extern char D_005926E1[];
extern char D_005926E2[];
extern char D_005926E3[];
extern char D_005926E4[];
extern char D_005926E5[];
extern char D_005926E6[];
extern char D_005926E8[];
extern char D_005926EC[];
extern char D_005926EE[];
extern char D_005926F0[];
extern char D_00592980[];
extern char D_00CB52A0[];
extern char D_00CB53BD[];
extern char D_00CB53BE[];
extern char D_00CB56A8[];
extern char D_00CB56B8[];
extern char D_00CB56B9[];

void func_00989920(void) {
    char *p;
    s32 i;
    s32 j;
    s32 a0;
    s32 v1;
    s32 hi;
    s32 s1;
    s32 s0;
    u32 m;
    char *q;
    char *r;
    s32 t;
    s32 lim;

    if ((func_009E1C90(1) & 0xFF) == 1) {
        p = D_0058E7F0;
        for (i = 0; i < 0x16; i++, p += 0x240) {
            s32 a1 = 0x1CAE - (((u8 *)p)[0x5C] << 4);
            a0 = *(s32 *)(p + 0x1C);
            if (a0 >= a1) {
                u8 b = ((u8 *)p)[0x12];
                u32 r2 = func_00288670(((u8 *)(D_00592980 + b * 0x6900 + ((u8 *)p)[0x11] * 0x348))[0x6D] & 0x7F, 0x32, b * 0x69);
                v1 = (s32)(r2 - 0x64) / 6 - 0x27;
            } else {
                s32 x = a1 + (0x1900 - ((u8 *)p)[0x5C] * 12);
                s32 h = x >> 1;
                if (x < 0) h = (x + 1) >> 1;
                if (a0 < h) {
                    if (a0 < 0x1401) {
                        if (a0 >= 0xA01) {
                            u8 b = ((u8 *)p)[0x12];
                            s32 r2 = func_00288670(((u8 *)(D_00592980 + b * 0x6900 + ((u8 *)p)[0x11] * 0x348))[0x6D] & 0x7F, 0x32, b * 0x69);
                            v1 = r2 / 20 + 5;
                        } else {
                            u8 b = ((u8 *)p)[0x12];
                            s32 r2 = func_00288670(((u8 *)(D_00592980 + b * 0x6900 + ((u8 *)p)[0x11] * 0x348))[0x6D] & 0x7F, 0x32, b * 0x69);
                            v1 = r2 / 10 + 10;
                        }
                    } else {
                        u8 b = ((u8 *)p)[0x12];
                        s32 r2 = func_00288670(((u8 *)(D_00592980 + b * 0x6900 + ((u8 *)p)[0x11] * 0x348))[0x6D] & 0x7F, 0x32, b * 0x69);
                        v1 = r2 / 25 + 1;
                    }
                } else {
                    u8 b = ((u8 *)p)[0x12];
                    s32 r2 = func_00288670(((u8 *)(D_00592980 + b * 0x6900 + ((u8 *)p)[0x11] * 0x348))[0x6D] & 0x7F, 0x32, b * 0x69);
                    v1 = (r2 - 0x64) / 14 - 0xD;
                }
            }
            lim = (*(u8 *)D_00591BE4) * 0x3E8;
            q = D_00592980 + ((u8 *)p)[0x12] * 0x6900 + ((u8 *)p)[0x11] * 0x348;
            *(s32 *)(q + 0xE0) = *(s32 *)(q + 0xE0) + v1;
            if (lim < *(s32 *)(q + 0xE0)) *(s32 *)(q + 0xE0) = lim;
            q = D_00592980 + ((u8 *)p)[0x12] * 0x6900 + ((u8 *)p)[0x11] * 0x348;
            if (*(s32 *)(q + 0xE0) < 0) *(s32 *)(q + 0xE0) = 0;
            if (v1 < 0) {
                u8 b = ((u8 *)p)[0x12];
                s32 lo = (*(s32 *)(D_00592980 + b * 0x6900 + ((u8 *)p)[0x11] * 0x348 + 0xE0) * 0x64) / lim;
                if (lo < 0x5B) {
                    t = 0x64 - lo;
                    func_00A99360(p, ((-t) / 11) * 0x64, b * 0x69, b * 0x69);
                    if (lo < 0x29 && *(s32 *)(p + 0x1C) >= 0x1CAE - (((u8 *)p)[0x5C] << 4)) {
                        t = 0x32 - lo;
                        func_00A99360(p, ((-t) / 10) * 0x64, b * 0x69, b * 0x69);
                    }
                }
            }
            *(s32 *)(D_00592980 + ((u8 *)p)[0x12] * 0x6900 + ((u8 *)p)[0x11] * 0x348 + 0xDC) = 0;
        }
    }
    func_00C047D0();
    func_00C22E20();
    if (*(u16 *)(D_003E7574 + 0x84) == 1 && *(u16 *)(D_003E7574 + 0x6E) >= 2) {
        (*(u8 *)D_00CB56A8) = 0;
        (*(f32 *)D_0059227C) = (f32)(*(s32 *)D_00591F1C);
        (*(f32 *)D_00592280) = (f32)(*(s32 *)D_00591F20);
    } else if ((*(u8 *)D_00591E4C) == 0 && (*(s32 *)D_00591F30) != 0x7FFF) {
        if ((*(u8 *)D_00CB56A8) == 0 || ((*(u8 *)D_00CB56A8) % 4) == 1) {
            func_00284380(-0x200, 0);
            (*(f32 *)D_0059227C) = *(f32 *)(D_003E7574 + 0x1454);
            (*(f32 *)D_00592280) = *(f32 *)(D_003E7574 + 0x145C);
        }
        (*(u8 *)D_00CB56A8) = (*(u8 *)D_00CB56A8) + 1;
    } else {
        q = D_003E7574 + (*(u8 *)D_005926E0) * 4;
        (*(f32 *)D_0059227C) = *(f32 *)(q + 0x47C);
        (*(f32 *)D_00592280) = *(f32 *)(q + 0xB7C);
        (*(u8 *)D_00CB56A8) = 0;
    }
    if (!((*(u32 *)D_00591DC4) & 1)) {
        func_00988E10(0xD);
        func_00983660(0xD);
        p = D_005902F0;
    } else {
        func_00988E10(2);
        func_00983660(2);
        p = D_0058EA30;
    }
    if (((*(u8 *)D_00591E67) == (*(u8 *)D_00591E68) && ((*(u32 *)D_00591DC4) & 1)) || ((u8 *)D_00591E67)[((u8 *)p)[0x12]] == 0) {
        func_00907960();
        func_00907230();
        func_00906220();
        func_0098ED90();
    }
    if (((u8 *)D_00591E67)[((u8 *)p)[0x12]] == 1) {
        u16 *pp = (u16 *)(D_00591F00 + ((u8 *)p)[0x13] * 2);
        if (*pp != 0xFF) *pp = *pp + 1;
        *(u16 *)(D_00591F00 + (((u8 *)p)[0x13] ^ 1) * 2) = 0;
    }
    if ((*(u8 *)D_00591E4C) == 0) func_0098EC40(0);
    if ((*(u8 *)D_00CB53BD) > 0) (*(u8 *)D_00CB53BD) = (*(u8 *)D_00CB53BD) - 1;
    if ((*(u8 *)D_00CB53BE) > 0) (*(u8 *)D_00CB53BE) = (*(u8 *)D_00CB53BE) - 1;
    if ((*(u8 *)D_00CB56B8) > 0) (*(u8 *)D_00CB56B8) = (*(u8 *)D_00CB56B8) - 1;
    if ((*(u8 *)D_00CB56B9) > 0) (*(u8 *)D_00CB56B9) = (*(u8 *)D_00CB56B9) - 1;

    if ((func_009E1C90(1) & 0xFF) == 1 && (*(u8 *)0x591F14) == 0) {
        s32 s1v = (*(u8 *)D_005926F0);
        hi = (*(u32 *)D_00591DC4) % (u32)s1v;
        if (hi == (*(u8 *)D_005926DC) || ((*(u8 *)D_005926DC) == s1v && hi == (*(u8 *)D_005926DC))) func_00911160(1);
        if (hi == (*(u8 *)D_005926DE) || ((*(u8 *)D_005926DE) == s1v && hi == (*(u8 *)D_005926DC))) func_0091F050();
        if (hi == (*(u8 *)D_005926E0) || ((*(u8 *)D_005926E0) == s1v && hi == (*(u8 *)D_005926DC))) func_0090CFA0();
        if (hi == (*(u8 *)D_005926E2) || ((*(u8 *)D_005926E2) == s1v && hi == (*(u8 *)D_005926DC))) func_00910F70();
        if (hi == (*(u8 *)D_005926E4) || ((*(u8 *)D_005926E4) == s1v && hi == (*(u8 *)D_005926DC))) func_0090F4A0();
        if (hi == (*(u8 *)D_005926E6) || ((*(u8 *)D_005926E6) == s1v && hi == (*(u8 *)D_005926DC))) func_0090D6F0();
        if (hi == (*(u8 *)D_005926E8) || ((*(u8 *)D_005926E8) == s1v && hi == (*(u8 *)D_005926DC))) func_009193C0();
        if (hi == (*(u8 *)D_005926EC) || ((*(u8 *)D_005926EC) == s1v && hi == (*(u8 *)D_005926DC))) func_00910F70();
        if (hi == (*(u8 *)D_005926EE) || ((*(u8 *)D_005926EE) == s1v && hi == (*(u8 *)D_005926DC))) func_00920030();
    } else {
        s32 a = (*(u8 *)D_005926F0);
        hi = (*(u32 *)D_00591DC4) % (u32)a;
        if (hi == (*(u8 *)D_005926DC) || ((*(u8 *)D_005926DC) == a && hi == (*(u8 *)D_005926DC))) {
            func_00911160(a);
            func_00910F70();
        }
    }
    func_009155D0();
    {
        s32 s2v = (*(u8 *)D_005926E6);
        hi = (*(u32 *)D_00591DC4) % (u32)s2v;
        if (hi == (*(u8 *)D_005926DC) || ((*(u8 *)D_005926DC) == s2v && hi == (*(u8 *)D_005926DC))) func_00918780();
        if (hi == (*(u8 *)D_005926DD) || ((*(u8 *)D_005926DD) == s2v && hi == (*(u8 *)D_005926DC))) {
            func_00904E20();
            func_0091F2D0();
            func_0091C9C0();
        }
        if (hi == (*(u8 *)D_005926DE) || ((*(u8 *)D_005926DE) == s2v && hi == (*(u8 *)D_005926DC))) func_00905AE0();
        if (hi == (*(u8 *)D_005926DF) || ((*(u8 *)D_005926DF) == s2v && hi == (*(u8 *)D_005926DC))) {
            func_00905600();
            func_0091B030();
            r = D_00591E00;
            for (j = 0; j < 2; j++, r += 2) {
                u8 b = ((u8 *)r)[0x4F];
                s32 idx;
                if (b == 0xFF) idx = 1;
                else idx = b % 23;
                q = D_0058E5B0 + idx * 0x240;
                (D_00CB52A0)[((u8 *)q)[0x13] + 0xD2] = 0;
                if ((func_009B3070(*(u16 *)(q + 0x2A), *(u16 *)(q + 0x26)) & 0xFFFF) >= 0x4801)
                    (D_00CB52A0)[((u8 *)q)[0x13] + 0xD2] = 1;
            }
        }
        if (hi == (*(u8 *)D_005926E0) || ((*(u8 *)D_005926E0) == s2v && hi == (*(u8 *)D_005926DC))) func_00918680();
        if (hi == (*(u8 *)D_005926E1) || ((*(u8 *)D_005926E1) == s2v && hi == (*(u8 *)D_005926DC))) func_00918880();
        if (hi == (*(u8 *)D_005926E2) || ((*(u8 *)D_005926E2) == s2v && hi == (*(u8 *)D_005926DC))) {
            func_0091C6F0();
            func_00918D80();
            func_00918350();
            func_00913F80();
        }
        if (hi == (*(u8 *)D_005926E3) || ((*(u8 *)D_005926E3) == s2v && hi == (*(u8 *)D_005926DC))) {
            func_0091DC30();
            func_00920880();
            func_00920ED0();
        }
        if (hi == (*(u8 *)D_005926E4) || ((*(u8 *)D_005926E4) == s2v && hi == (*(u8 *)D_005926DC))) {
            func_00921370();
            func_00287650();
        }
        if (hi == (*(u8 *)D_005926E5) || ((*(u8 *)D_005926E5) == s2v && hi == (*(u8 *)D_005926DC))) {
            func_009189D0();
            func_0091FDF0();
            func_00921030();
            func_00915120();
        }
    }
    if ((*(f32 *)D_005926D8) <= 500.0f) (*(f32 *)D_005926D8) = (*(f32 *)D_005926D8) + 1.0f;
    if (func_00C301C0() != 0) {
        func_009A1580();
        func_009A0700();
    }
    s1 = 1;
    s0 = 1;
    if ((*(u8 *)D_00591C09) == 5) {
        s32 v = func_00B29E50((*(u8 *)D_00591C09));
        if (v == 2 || v == s1) {
            s1 = 0;
            s0 = 0;
        } else if (v == 4 || v == 3) {
        } else if (v == 0) {
            if (func_00B29350() != 0) {
                s1 = 0;
                s0 = 0;
            } else if (func_00B29310() != 0) {
                s1 = 0;
                s0 = 0;
            }
        }
    }
    if (s1 != 0) {
        func_00984E90();
        func_00984AD0();
    }
    if (s0 != 0) func_00985350();
}
