/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001D5A10(s32 a);
extern s32 func_001D7F90(s32 a);
extern void func_001D7E40(s32 a, s32 b);
extern void func_001D7840(s32 a, s32 b);
extern void func_001D7D60(s32 a, s32 b);
extern void func_001D7D80(s32 a, s32 b);
extern s32 func_002DCA30(void);
extern s32 func_001F08B0(s32 a);
extern char *func_001D6E70(s32 a, s32 b, s32 c);
extern void func_001DEF30(s32 a, s32 b);
extern s32 func_0021E4B0(s32 a, s32 b, s32 c, s32 d);
extern void func_001D7A20(s32 a, void *b, s32 c);
extern char *func_001D6820(s32 a, s32 b);
extern s32 func_0020B830(s32 a, void *b, s32 c);
extern void func_001EDA30(s32 a, s32 b);
extern void func_001ED840(s32 a, s32 b);
extern void func_001B5260(void *a, s32 b, s32 c, s32 d, f32 e, f32 f);
extern f32 func_001D79A0(s32 a, s32 b);
extern void func_001D7F10(s32 a);

extern char D_00CCD570[]; extern char D_00CCD6FC[];
extern char D_00CCD898[]; extern char D_00CCD89C[];
extern char D_00CCD88E[]; extern char D_00CCD894[]; extern char D_00CCD890[];
extern char D_00591BB0[]; extern char D_00591BB2[];
extern s8 D_00CA8940[]; extern s8 D_00CA894A[];

void func_00C8EFA0(void) {
    char *s1 = D_00CCD570;
    char *s0 = D_00CCD6FC;
    s32 s2, s3, s4, v, d, i;
    char *p;
    f32 f;
    u8 v90[16];
    u8 v80[16];
    u8 v70[16];
    u8 v60[16];
    s32 w_ac;
    s32 w_a8;
    struct E { u8 a; u8 b; s8 c; s8 *p; } e;
    struct E *ep;

    v = func_001D5A10(0x1024E);
    *(s32 *)D_00CCD898 = v;
    s2 = func_001D7F90(v);
    if (s2 != 0) {
        func_001D7E40(s2, 0);
        func_001D7840(s2, 3);
        func_001D7D60(s2, 1);
    }
    *(s32 *)D_00CCD89C = s2;
    if (func_002DCA30() != 0) {
        func_001D7D80(s2, 1);
    }
    v = func_001F08B0(0x430000);
    p = func_001D6E70(s2, 2, v);
    if (p != 0) func_001DEF30(*(s32 *)(p + 0xC), 3);
    v = func_0021E4B0(*(u16 *)D_00591BB0, 0, 0, 0xFFFF);
    p = func_001D6E70(s2, 0, v);
    if (p != 0) func_001DEF30(*(s32 *)(p + 0xC), 3);
    v = func_0021E4B0(*(u16 *)D_00591BB2, 0, 0, 0xFFFF);
    p = func_001D6E70(s2, 1, v);
    if (p != 0) func_001DEF30(*(s32 *)(p + 0xC), 3);

    s2 = func_001D7F90(*(s32 *)D_00CCD898);
    if (s2 != 0) {
        func_001D7E40(s2, 1);
        func_001D7840(s2, 3);
        func_001D7D60(s2, 1);
    }
    *(s32 *)(s1 + 0x180) = s2;
    if (func_002DCA30() != 0) {
        func_001D7D80(s2, 0xC);
    }
    func_001D7A20(s2, s1 + 0xA4, 2);
    func_001D7A20(s2, v80, 3);
    func_001D7A20(s2, v90, 4);
    d = (s32)(*(f32 *)(v80 + 4) - *(f32 *)(v90 + 4));
    if (d <= 0) d = -d;
    *(u8 *)D_00CCD88E = d;

    s3 = func_001D7F90(*(s32 *)D_00CCD898);
    if (s3 != 0) {
        func_001D7E40(s3, 9);
        func_001D7840(s3, 3);
        func_001D7D60(s3, 1);
    }
    if (s3 != 0) {
        char *q;
        if (func_002DCA30() != 0) {
            func_001D7D80(s3, 1);
        }
        q = func_001D6820(s3, 0xA);
        s4 = func_0020B830(0, &w_ac, 0);
        if (q != 0 && s4 != 0) {
            func_001D7A20(s3, v70, 0xA);
            func_001EDA30(*(s32 *)(q + 0xC), 1);
            func_001ED840(*(s32 *)(q + 0xC), 3);
            func_001B5260(v70, w_ac, *(s32 *)(q + 0xC), s4, 0.0f, 0.0f);
        }
    }
    *(s32 *)(s1 + 0x188) = s3;

    s3 = func_001D7F90(*(s32 *)D_00CCD898);
    if (s3 != 0) {
        func_001D7E40(s3, 0xA);
        func_001D7840(s3, 3);
        func_001D7D60(s3, 1);
    }
    if (s3 != 0) {
        char *q;
        if (func_002DCA30() != 0) {
            func_001D7D80(s3, 1);
        }
        q = func_001D6820(s3, 0xB);
        s4 = func_0020B830(1, &w_a8, 0);
        if (q != 0 && s4 != 0) {
            func_001D7A20(s3, v60, 0xB);
            func_001EDA30(*(s32 *)(q + 0xC), 1);
            func_001ED840(*(s32 *)(q + 0xC), 3);
            func_001B5260(v60, w_a8, *(s32 *)(q + 0xC), s4, 0.0f, 0.0f);
        }
    }
    *(s32 *)(s0 + 0x188) = s3;

    s2 = func_001D7F90(*(s32 *)D_00CCD898);
    if (s2 != 0) {
        func_001D7E40(s2, 2);
        func_001D7840(s2, 3);
        func_001D7D60(s2, 1);
    }
    *(s32 *)(s0 + 0x180) = s2;
    if (func_002DCA30() != 0) {
        func_001D7D80(s2, 0xC);
    }
    func_001D7A20(s2, s0 + 0xA4, 5);

    e.a = 0xB; e.b = 0; e.c = 5; e.p = D_00CA8940;
    ep = &e;
    if (ep != 0 && ep->p != 0) {
        s32 a = ep->a;
        s32 h = func_001D7F90(*(s32 *)D_00CCD898);
        if (h != 0) {
            func_001D7E40(h, a);
            func_001D7840(h, 3);
            func_001D7D60(h, 1);
        }
        func_001D7D80(h, ep->b);
        if (ep->c > 0) {
            s32 n = 0;
            s32 o = 0;
            do {
                s8 *t = ep->p + o;
                func_001D7A20(h, s1 + t[0] * 16 + 0x24, t[1]);
                n++;
                o += 2;
            } while (n < ep->c);
        }
        f = func_001D79A0(h, ep->p[7]);
        *(f32 *)D_00CCD894 = f;
        func_001D7F10(h);
    }
    f = *(f32 *)(v80 + 4);
    *(f32 *)(s1 + 0x38) = *(f32 *)(s1 + 0x38) + f;
    *(f32 *)(s1 + 0x48) = *(f32 *)(s1 + 0x48) + f;
    *(f32 *)(s1 + 0x28) = *(f32 *)(s1 + 0x28) + f;
    *(f32 *)(s1 + 0x58) = *(f32 *)(s1 + 0x58) + f;
    *(f32 *)(s1 + 0x68) = *(f32 *)(s1 + 0x68) + f;

    s2 = func_001D7F90(*(s32 *)D_00CCD898);
    if (s2 != 0) {
        func_001D7E40(s2, 4);
        func_001D7840(s2, 3);
        func_001D7D60(s2, 1);
    }
    func_001D7A20(s2, s1 + 0x74, 7);
    func_001D7F10(s2);

    s2 = func_001D7F90(*(s32 *)D_00CCD898);
    if (s2 != 0) {
        func_001D7E40(s2, 3);
        func_001D7840(s2, 3);
        func_001D7D60(s2, 1);
    }
    if (func_002DCA30() != 0) {
        func_001D7D80(s2, 2);
    }
    func_001D7A20(s2, s1 + 0x84, 6);
    if (func_002DCA30() != 0) {
        func_001D7D80(s2, 3);
    } else {
        func_001D7D80(s2, 1);
    }
    func_001D7A20(s2, s1 + 0x94, 6);
    f = func_001D79A0(s2, 6);
    *(f32 *)D_00CCD890 = f;
    func_001D7F10(s2);

    ep->a = 0xC; ep->b = 0; ep->c = 5; ep->p = D_00CA894A;
    ep = &e;
    if (ep != 0 && ep->p != 0) {
        s32 a = ep->a;
        s32 h = func_001D7F90(*(s32 *)D_00CCD898);
        if (h != 0) {
            func_001D7E40(h, a);
            func_001D7840(h, 3);
            func_001D7D60(h, 1);
        }
        func_001D7D80(h, ep->b);
        if (ep->c > 0) {
            s32 n = 0;
            s32 o = 0;
            do {
                s8 *t = ep->p + o;
                func_001D7A20(h, s0 + t[0] * 16 + 0x24, t[1]);
                n++;
                o += 2;
            } while (n < ep->c);
        }
        f = func_001D79A0(h, ep->p[7]);
        *(f32 *)D_00CCD894 = f;
        func_001D7F10(h);
    }
    f = *(f32 *)(v80 + 4);
    *(f32 *)(s0 + 0x38) = *(f32 *)(s0 + 0x38) + f;
    *(f32 *)(s0 + 0x48) = *(f32 *)(s0 + 0x48) + f;
    *(f32 *)(s0 + 0x28) = *(f32 *)(s0 + 0x28) + f;
    *(f32 *)(s0 + 0x58) = *(f32 *)(s0 + 0x58) + f;
    *(f32 *)(s0 + 0x68) = *(f32 *)(s0 + 0x68) + f;

    s2 = func_001D7F90(*(s32 *)D_00CCD898);
    if (s2 != 0) {
        func_001D7E40(s2, 6);
        func_001D7840(s2, 3);
        func_001D7D60(s2, 1);
    }
    func_001D7A20(s2, s0 + 0x74, 9);
    func_001D7F10(s2);

    s2 = func_001D7F90(*(s32 *)D_00CCD898);
    if (s2 != 0) {
        func_001D7E40(s2, 5);
        func_001D7840(s2, 3);
        func_001D7D60(s2, 1);
    }
    if (func_002DCA30() != 0) {
        func_001D7D80(s2, 2);
    }
    func_001D7A20(s2, s0 + 0x84, 8);
    if (func_002DCA30() != 0) {
        func_001D7D80(s2, 3);
    } else {
        func_001D7D80(s2, 1);
    }
    func_001D7A20(s2, s0 + 0x94, 8);
    func_001D7F10(s2);
}
