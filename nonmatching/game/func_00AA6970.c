/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00AFF630(void *p, s32 b, s32 c);
extern s32 func_009B3070(s32 a, s32 b);
extern s32 func_009B3220(s32 a, s32 b, s32 c);
extern s32 func_009B32D0(s32 a, s32 b, s32 c);
extern s32 func_009B30B0(s32 a, s32 b);
extern void func_00207BE0(void *o);
extern void func_00930240(void *p);
extern s32 func_0097A6D0(void *p, s32 b);
extern s32 func_00979270(void *p, s32 b);
extern void func_00AFB7C0(void *p, s32 b, s32 c);
extern void func_00209810(void *o);
extern void func_00B00970(void *p, s32 a);
extern s32 func_002079F0(void *o, s32 b);
extern void func_00209A00(void *o, s32 b, s32 c);
extern s32 func_009F4DC0(s32 a, f32 f);
extern void func_00207390(void *o, s32 b);
extern s32 func_00207D10(void *o);
extern s32 func_00A1FE80(s32 a, s32 b);
extern void func_00208610(void *o);
extern void func_00209540(void *o, s32 b, s32 c);
extern s32 func_00BBB8C0(s32 a);
extern s32 func_00A07B40(void);
extern void func_00208970(void *o, s32 b, f32 f);
extern void func_00AFAF60(void *p, s32 a, s32 b, s32 c, s32 d);
extern char *D_003E74CC;
extern char D_00591BE4[];


void func_00AA6970(char *p, s32 b) {
    char *o;
    s32 s1, s2, v, st, sign, a3, t;
    f32 f1;

    if (*(u8 *)(p + 0x41) != 0) {
        if (func_00AFF630(p, b, 0x100) != 0) return;
    }
    (*(s16 *)(p + (0x42))) = (*(u16 *)(p + (0x28)));
    s2 = (*(u16 *)(p + (0x10C)));
    s1 = func_009B3070((*(u16 *)(p + (0x26))), b) & 0xFFFF;
    st = (*(u16 *)(p + (0x3C)));

    if (st == 0x18) goto L6F2C;
    if (st == 0x17) goto L6ECC;
    if (st == 0x86) goto L6E84;
    if (st == 0x85) goto L6E10;
    if (st == 0x84) goto L6DC8;
    if (st == 0x83) goto L6C68;
    if (st == 0x93) goto L6BD4;
    if (st == 0x81) goto L6BB8;
    if (st == 0x82) goto L6B2C;
    if (st == 0x90) goto L6AD4;
    if (st == 0x80) goto L6A54;
    goto L6F44;

L6A54:
    o = (*(char **)(p + 4));
    if (*(u16 *)(o + 0x30) != 0x38C) goto L6F40;
    func_00207BE0(o);
    if (!(s1 < 0x4801)) {
        func_0097A6D0(p, b);
        (*(s16 *)(p + (0x3C))) = 0x81;
        return;
    }
    f1 = *(f32 *)((*(char **)(p + 4)) + 0x38);
    if (!(f1 < (f32)(s32)(*(u8 *)(*(char **)((*(char **)(p + 4)) + 4) + 1) << 1))) {
        if (!(*(s32 *)(p + 0x1C) < 0x340) && !(s1 < 0x800)) {
            (*(s16 *)(p + (0x34))) = b;
            (*(s16 *)(p + (0x3C))) = 0x82;
            func_00AFB7C0(p, 0x533, *(u8 *)(p + 0x5C) + 0x20);
            return;
        }
    }
    if (!(f1 < 12.0f)) {
        (*(s16 *)(p + (0x26))) = func_009B3220(b, (*(u16 *)(p + (0x26))), 0xC0);
        (*(s16 *)(p + (0x28))) = (*(u16 *)(p + (0x26)));
    }
    func_00930240(p);
    return;

L6AD4:
    o = (*(char **)(p + 4));
    if (*(u16 *)(o + 0x30) != 0x393) goto L6F40;
    func_00207BE0(o);
    if (!(s1 < 0x4801)) {
        func_0097A6D0(p, s2);
        (*(s16 *)(p + (0x3C))) = 0x81;
        return;
    }
    f1 = *(f32 *)((*(char **)(p + 4)) + 0x38);
    if (!(f1 < 12.0f)) {
        (*(s16 *)(p + (0x26))) = func_009B3220(b, (*(u16 *)(p + (0x26))), 0xA0);
        (*(s16 *)(p + (0x28))) = (*(u16 *)(p + (0x26)));
    }
    func_00930240(p);
    return;

L6B2C:
    o = (*(char **)(p + 4));
    if (*(u16 *)(o + 0x30) != 0x38C) goto L6F40;
    func_00207BE0(o);
    (*(s16 *)(p + (0x26))) = func_009B3220((*(u16 *)(p + (0x34))), (*(u16 *)(p + (0x26))), 0xA5);
    (*(s16 *)(p + (0x28))) = (*(u16 *)(p + (0x26)));
    func_00930240(p);
    {
        s32 a1 = (*(u16 *)(p + (0x26)));
        s32 v3 = (*(u16 *)(p + (0x34)));
        if (a1 != v3) {
            s32 x = (u16)((b & 0xFFFF) - a1 + 0x10000);
            s32 y = (u16)(v3 - a1 + 0x10000);
            if ((x < 0x8001) != (y < 0x8001)) {
                (*(s16 *)(p + (0x3C))) = 0x80;
            }
        } else {
            (*(s16 *)(p + (0x3C))) = 0x80;
        }
    }
    (*(s16 *)(p + (0x34))) = b;
    return;

L6BB8:
    if (func_00979270(p, 0) != 0) {
        *(s32 *)(p + 0x1C) = 0;
        (*(s16 *)(p + (0x3C))) = 0;
    }
    return;

L6BD4:
    o = (*(char **)(p + 4));
    if (*(u16 *)(o + 0x30) != 0x112) goto L6F40;
    *(f32 *)(o + 0x28) = *(f32 *)(o + 0x28) * 2.0f;
    func_00209810((*(char **)(p + 4)));
    o = (*(char **)(p + 4));
    *(f32 *)(o + 0x28) = *(f32 *)(o + 0x28) / 2.0f;
    func_00B00970(p, (s32)(1024.0f * *(f32 *)D_003E74CC));
    if (*(f32 *)((*(char **)(p + 4)) + 0x38) <= 2.0f) goto L6F40;
    return;

L6C68:
    o = (*(char **)(p + 4));
    if (*(u16 *)(o + 0x30) != 0x391) goto L6F40;
    func_00207BE0(o);
    s1 = b & 0xFFFF;
    (*(s16 *)(p + (0x26))) = func_009B3220((u16)(s1 + 0x8000 + 1), (*(u16 *)(p + (0x26))), 0x400);
    func_00930240(p);
    if (func_002079F0((*(char **)(p + 4)), 0) == 0) return;
    func_00209A00((*(char **)(p + 4)), 0x392, 0);
    *(u8 *)((*(char **)(p + 4)) + 0x2D) = (u16)(s1 - (s2 & 0xFFFF) + 0x10000) < 0x8001;
    (*(s16 *)(p + (0x34))) = b;
    o = (*(char **)(p + 4));
    t = *(s32 *)(D_003E74CC + 0x2FD8 + *(u16 *)(o + 0x30) * 4);
    if (func_009F4DC0(t - (s32)*(f32 *)(o + 0x38), *(f32 *)(o + 0x28)) != 0) {
        o = (*(char **)(p + 4));
        t = *(s32 *)(D_003E74CC + 0x2FD8 + *(u16 *)(o + 0x30) * 4);
        s1 = func_009F4DC0(t - (s32)*(f32 *)(o + 0x38), *(f32 *)(o + 0x28));
        v = func_009B3070((*(u16 *)(p + (0x26))), b) & 0xFFFF;
        v = v / s1;
    } else {
        v = func_009B3070((*(u16 *)(p + (0x26))), b) & 0xFFFF;
    }
    (*(s16 *)(p + (0x38))) = v;
    sign = *(u8 *)((*(char **)(p + 4)) + 0x2D) ? -1 : 1;
    (*(s16 *)(p + (0x26))) = (*(u16 *)(p + (0x26))) - (u16)((*(u16 *)(p + (0x38))) * sign);
    func_00207390((*(char **)(p + 4)), 6);
    (*(s16 *)(p + (0x3C))) = 0x84;
    return;

L6DC8:
    if (*(u16 *)((*(char **)(p + 4)) + 0x30) != 0x392) goto L6F40;
    (*(s16 *)(p + (0x26))) = func_009B32D0((*(u16 *)(p + (0x34))), (*(u16 *)(p + (0x26))), (*(u16 *)(p + (0x38))));
    func_00930240(p);
    if (func_00207D10((*(char **)(p + 4))) != 0) {
        func_00208610((*(char **)(p + 4)));
        (*(s16 *)(p + (0x3C))) = 0x80;
    }
    return;

L6E10:
    if (*(u16 *)((*(char **)(p + 4)) + 0x30) != 0x2C7) goto L6F40;
    *(s32 *)(p + 0x1C) = (*(s32 *)(p + 0x1C) * 97) / 100;
    *(s32 *)(p + 0x1C) = func_00A1FE80(*(s32 *)(p + 0x1C), 0x700);
    if (func_00207D10((*(char **)(p + 4))) != 0) {
        func_00209A00((*(char **)(p + 4)), 0x38C, 0x1C);
        func_00207390((*(char **)(p + 4)), 4);
        (*(s16 *)(p + (0x3C))) = 0x80;
    }
    return;

L6E84:
    if (*(u16 *)((*(char **)(p + 4)) + 0x30) != 0x2EC) goto L6F40;
    (*(s16 *)(p + (0x26))) = func_009B32D0((*(u16 *)(p + (0x34))), (*(u16 *)(p + (0x26))), (*(u16 *)(p + (0x38))));
    func_00930240(p);
    if (func_00207D10((*(char **)(p + 4))) != 0) {
        func_00208610((*(char **)(p + 4)));
        (*(s16 *)(p + (0x3C))) = 0x80;
    }
    return;

L6ECC:
    o = (*(char **)(p + 4));
    if (*(u16 *)(o + 0x30) != 0x2EB) goto L6F40;
    if (func_00207D10(o) != 0) {
        func_00209540((*(char **)(p + 4)), 0x38C, 0);
        (*(s16 *)(p + (0x28))) = (*(u16 *)(p + (0x26)));
        (*(s16 *)(p + (0x3C))) = 0x80;
        return;
    }
    sign = *(u8 *)((*(char **)(p + 4)) + 0x2D) ? -1 : 1;
    (*(s16 *)(p + (0x26))) = (*(u16 *)(p + (0x26))) - (u16)((*(u16 *)(p + (0x38))) * sign);
    func_00930240(p);
    return;

L6F2C:
    if (func_00979270(p, 0) == 0) return;

L6F40:
L6F44:
    a3 = *(u8 *)(p + 0x5C) * 12;
    if (0x1900 - a3 < *(s32 *)(p + 0x1C)) {
        func_00AFAF60(p, (*(u16 *)(p + (0x28))), s2, 0x1500 - a3, 0x800);
        return;
    }
    o = (*(char **)(p + 4));
    if (*(u16 *)(o + 0x30) == 0x12) {
        func_00AFAF60(p, (*(u16 *)(p + (0x28))), s2, 0x1500 - a3, 0x800);
        return;
    }
    if (*(s32 *)(p + 0x1C) < 0x400) {
        if (s1 < 0x2001) {
            if (func_00A07B40() != 0 && *(u16 *)((*(char **)(p + 4)) + 0x30) != 0x38C) {
                o = (*(char **)(p + 4));
                if (*(u16 *)(o + 0x30) != 0x393) {
                    func_00209A00(o, 0x393, 0);
                    func_00207390((*(char **)(p + 4)), 4);
                }
                st = 0x90;
            } else {
                o = (*(char **)(p + 4));
                if (*(u16 *)(o + 0x30) != 0x38C) {
                    func_00209A00(o, 0x38C, 0);
                    func_00207390((*(char **)(p + 4)), 2);
                }
                st = 0x80;
            }
            (*(s16 *)(p + (0x3C))) = st;
            *(s32 *)(p + 0x20) = 0xC00;
            (*(s16 *)(p + (0x28))) = (*(u16 *)(p + (0x26)));
            v = func_00BBB8C0(*(u8 *)D_00591BE4 * 3);
            *(u8 *)(p + 0x62) = *(u8 *)D_00591BE4 + v;
            return;
        }
        if (s1 < 0x6001) {
            func_00209A00(o, 0x2EC, 0);
            func_00207390((*(char **)(p + 4)), 4);
            o = (*(char **)(p + 4));
            *(u8 *)(o + 0x2D) = (u16)((b & 0xFFFF) - (*(u16 *)(p + (0x26))) + 0x10000) < 0x8001;
            (*(s16 *)(p + (0x28))) = b;
            (*(s16 *)(p + (0x34))) = b;
            (*(s16 *)(p + (0x28))) = b;
            s1 = func_009B3070((*(u16 *)(p + (0x26))), b) & 0xFFFF;
            o = (*(char **)(p + 4));
            v = func_009F4DC0(*(s32 *)(D_003E74CC + 0x2FD8 + *(u16 *)(o + 0x30) * 4), *(f32 *)(o + 0x28));
            (*(s16 *)(p + (0x38))) = (s1 & 0xFFFF) / v;
            (*(s16 *)(p + (0x3C))) = 0x86;
            return;
        }
        if (func_00BBB8C0(3) == 0) {
            func_00209A00((*(char **)(p + 4)), 0x391, 0);
            func_00207390((*(char **)(p + 4)), 6);
            *(s32 *)(p + 0x20) = 0x680;
            (*(s16 *)(p + (0x3C))) = 0x83;
            return;
        }
        func_00209A00((*(char **)(p + 4)), 0x2EB, 0);
        func_00207390((*(char **)(p + 4)), 6);
        o = (*(char **)(p + 4));
        *(u8 *)(o + 0x2D) = (u16)((b & 0xFFFF) - (*(u16 *)(p + (0x26))) + 0x10000) < 0x8001;
        (*(s16 *)(p + (0x34))) = b;
        o = (*(char **)(p + 4));
        t = *(s32 *)(D_003E74CC + 0x2FD8 + *(u16 *)(o + 0x30) * 4);
        if (func_009F4DC0(t - (s32)*(f32 *)(o + 0x38), *(f32 *)(o + 0x28)) != 0) {
            o = (*(char **)(p + 4));
            t = *(s32 *)(D_003E74CC + 0x2FD8 + *(u16 *)(o + 0x30) * 4);
            s1 = func_009F4DC0(t - (s32)*(f32 *)(o + 0x38), *(f32 *)(o + 0x28));
            v = func_009B3070((*(u16 *)(p + (0x26))), b) & 0xFFFF;
            v = v / s1;
        } else {
            v = func_009B3070((*(u16 *)(p + (0x26))), b) & 0xFFFF;
        }
        (*(s16 *)(p + (0x38))) = v;
        (*(s16 *)(p + (0x3C))) = 0x17;
        return;
    }
    if (!(s1 < 0x2001) ||
        (func_009B30B0((*(u16 *)(p + (0x26))), (*(u16 *)(p + (0x28)))) & 0xFFFF) >= 0x10) {
        func_0097A6D0(p, s2);
        (*(s16 *)(p + (0x3C))) = 0x81;
        return;
    }
    if (!(*(s32 *)(p + 0x1C) < 0xC01)) {
        func_00209A00((*(char **)(p + 4)), 0x2C7, 0);
        (*(s16 *)(p + (0x3C))) = 0x85;
        return;
    }
    if (func_00A07B40() == 0) {
        o = (*(char **)(p + 4));
        func_00208970(o, 0x38C, *(f32 *)(o + 0x38));
        (*(s16 *)(p + (0x3C))) = 0x80;
    } else {
        o = (*(char **)(p + 4));
        func_00208970(o, 0x393, *(f32 *)(o + 0x38));
        (*(s16 *)(p + (0x3C))) = 0x90;
    }
}
