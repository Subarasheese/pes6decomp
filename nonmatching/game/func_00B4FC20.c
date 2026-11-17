/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *func_00B2A420(u32 id);
extern void func_00B4E560(u8 *s);
extern s32 func_00979270(u8 *a, s32 b);
extern void func_00B4E1E0(u8 *s);
extern void func_00B4DE70(u8 *s);
extern void func_00BD3CF0(u8 *s, f32 a, f32 b);
extern s32 func_00BA87B0(u8 *s, s32 c);
extern s32 func_00BBB8C0(s32 a);
extern void func_00207BE0(u8 *a);
extern void func_00B4DD60(u8 *s);
extern void func_00B2ACF0(u8 *s);
extern void func_00B4C4B0(u8 *s);
extern s32 func_00207D10(u8 *a);
extern void func_00208610(u8 *a);
extern void func_00B4A420(u8 *s);
extern void func_00B4C050(u8 *s);
extern u32 func_00BF6270(void);
extern u32 func_00BB1310(s32 a);
extern void func_00209A00(u8 *a, u32 b, s32 c);
extern void func_00B4B8F0(u8 *s);
extern void func_00B4B520(u8 *s);
extern void func_00B4B330(u8 *s);
extern void func_00B4B0A0(u8 *s);
extern void func_00B4AF20(u8 *s);
extern void func_002075B0(u8 *a, s32 b, s32 c, s32 d);
extern s32 func_00207D80(u8 *a, s32 b);
extern void func_00B4F920(u8 *s);
extern void func_00B53660(u8 *s);
extern u32 func_009E1C90(s32 a);
extern void func_00AA1110(u8 *a);
extern void func_00284E60(u8 *a, u32 b, s32 c, s32 d);
extern char D_00591E18[];
extern char D_00CBCB37[];

void func_00B4FC20(u8 *a0) {
    u8 *s0;
    u8 *p;
    s32 s1;
    s32 v;
    s32 c;
    s32 sel;

    s0 = func_00B2A420(*a0);
    p = *(u8 **)s0;
    v = p[0x66];
    if (v != 0 && v != 0xFF) {
        p[0x66] = 3;
    }
    p = *(u8 **)s0;
    if (*p == *(u8 *)D_00591E18) {
        c = *(s32 *)(p + 0x1C);
        func_00284E60(p, *(u16 *)(p + 0x26), c / 2, 0);
    }
    sel = *(u16 *)(a0 + 0x18);
    if (sel >= 0x18) goto tail;
    if (sel == 0) {
        func_00B4E560(s0);
    }
    else if (sel == 1) {
        if (func_00979270(*(u8 **)s0, 0)) {
            v = *(u8 *)(*(u8 **)(s0 + 4) + 0x4C);
            if (v == 0x13) {
                *(u16 *)(*(u8 **)s0 + 0x18) = 0x14;
            } else if (v == 0x3a || v == 0x39 || v == 0x30 || v == 0x12 || v == 0xd || v == 0x5) {
                *(u16 *)(*(u8 **)s0 + 0x18) = 0x11;
            } else if (v == 0x55 || v == 0x54 || v == 0x53 || v == 0x50 || v == 0x4f || v == 0x4e || v == 0x2f || v == 0x2e || v == 0x1b || v == 0x29 || v == 0x28 || v == 0x27 || v == 0x26 || v == 0x25 || v == 0x24 || v == 0x23 || v == 0x22 || v == 0x1a || v == 0x19 || v == 0x17 || v == 0x38 || v == 0x1d || v == 0x15 || v == 0x14 || v == 0x11 || v == 0x10 || v == 0xf || v == 0xe || v == 0xc || v == 0xb || v == 0xa || v == 0x9 || v == 0x8 || v == 0x6 || v == 0x3 || v == 0x2 || v == 0x1 || v == 0x0) {
                *(u16 *)(*(u8 **)s0 + 0x18) = 0xF;
            }
        }
    }
    else if (sel == 2) {
        func_00B4E1E0(s0);
    }
    else if (sel == 3) {
        func_00B4DE70(s0);
    }
    else if (sel == 4) {
        p = *(u8 **)s0;
        func_00BD3CF0(s0, *(f32 *)(p + 0x6C), *(f32 *)(p + 0x70));
        if (func_00BA87B0(s0, *(u8 *)(*(u8 **)(s0 + 4) + 0x4C))) {
            if (func_00BBB8C0(10) < 6) {
                p = *(u8 **)s0;
                *(u16 *)(p + 0x2C) = *(u16 *)(p + 0x26);
            v = *(u8 *)(*(u8 **)(s0 + 4) + 0x4C);
            if (v == 0x13) {
                *(u16 *)(*(u8 **)s0 + 0x18) = 0x14;
            } else if (v == 0x3a || v == 0x39 || v == 0x30 || v == 0x12 || v == 0xd || v == 0x5) {
                *(u16 *)(*(u8 **)s0 + 0x18) = 0x11;
            } else if (v == 0x55 || v == 0x54 || v == 0x53 || v == 0x50 || v == 0x4f || v == 0x4e || v == 0x2f || v == 0x2e || v == 0x1b || v == 0x29 || v == 0x28 || v == 0x27 || v == 0x26 || v == 0x25 || v == 0x24 || v == 0x23 || v == 0x22 || v == 0x1a || v == 0x19 || v == 0x17 || v == 0x38 || v == 0x1d || v == 0x15 || v == 0x14 || v == 0x11 || v == 0x10 || v == 0xf || v == 0xe || v == 0xc || v == 0xb || v == 0xa || v == 0x9 || v == 0x8 || v == 0x6 || v == 0x3 || v == 0x2 || v == 0x1 || v == 0x0) {
                *(u16 *)(*(u8 **)s0 + 0x18) = 0xF;
            }
            }
        }
    }
    else if (sel == 5) {
        func_00207BE0(*(u8 **)(*(u8 **)s0 + 4));
        if (*(u8 *)D_00CBCB37 == 10) {
            s1 = 0x14;
        } else if (*(u8 *)D_00CBCB37 == 5) {
            s1 = 0x24;
        }
        if (func_00BA87B0(s0, s1)) {
            *(u8 *)(*(u8 **)(s0 + 4) + 0x4C) = s1;
            v = *(u8 *)(*(u8 **)(s0 + 4) + 0x4C);
            if (v == 0x13) {
                *(u16 *)(*(u8 **)s0 + 0x18) = 0x14;
            } else if (v == 0x3a || v == 0x39 || v == 0x30 || v == 0x12 || v == 0xd || v == 0x5) {
                *(u16 *)(*(u8 **)s0 + 0x18) = 0x11;
            } else if (v == 0x55 || v == 0x54 || v == 0x53 || v == 0x50 || v == 0x4f || v == 0x4e || v == 0x2f || v == 0x2e || v == 0x1b || v == 0x29 || v == 0x28 || v == 0x27 || v == 0x26 || v == 0x25 || v == 0x24 || v == 0x23 || v == 0x22 || v == 0x1a || v == 0x19 || v == 0x17 || v == 0x38 || v == 0x1d || v == 0x15 || v == 0x14 || v == 0x11 || v == 0x10 || v == 0xf || v == 0xe || v == 0xc || v == 0xb || v == 0xa || v == 0x9 || v == 0x8 || v == 0x6 || v == 0x3 || v == 0x2 || v == 0x1 || v == 0x0) {
                *(u16 *)(*(u8 **)s0 + 0x18) = 0xF;
            }
        }
    }
    else if (sel == 6) {
        func_00B4DD60(s0);
    }
    else if (sel == 7) {
        func_00B2ACF0(s0);
    }
    else if (sel == 8) {
        func_00B2ACF0(s0);
        if (func_00207D10(*(u8 **)(*(u8 **)s0 + 4))) {
            func_00208610(*(u8 **)(*(u8 **)s0 + 4));
            *(u8 *)(*(u8 **)(s0 + 4) + 0x4C) = 0;
            p = *(u8 **)s0;
            *(u16 *)(p + 0x2C) = *(u16 *)(p + 0x26);
            *(u8 *)(*(u8 **)s0 + 0x66) = 0;
            func_00B4A420(s0);
        }
    }
    else if (sel == 9) {
        func_00B4C4B0(s0);
    }
    else if (sel == 10) {
        func_00B4C050(s0);
    }
    else if (sel == 11) {
        s1 = (s32)func_00B2A420(func_00BF6270());
        func_00B2ACF0(s0);
        if (*(u8 *)D_00CBCB37 != 0x20) {
            if (func_00207D10(*(u8 **)(*(u8 **)s0 + 4))) {
                *(u8 *)(*(u8 **)s0 + 0x66) = 0;
                func_00208610(*(u8 **)(*(u8 **)s0 + 4));
                func_00B4A420(s0);
            }
        } else if (*(u16 *)(*(u8 **)(*(u8 **)s0 + 4) + 0x30) == 0x48E) {
            if (!(*(f32 *)(*(u8 **)(*(u8 **)s1 + 4) + 0x38) < 20.0f)) {
                c = func_00BB1310(0xEE) & 0xFFFF;
                func_00209A00(*(u8 **)(*(u8 **)s0 + 4), c, 0);
            }
        }
    }
    else if (sel == 12) {
        func_00B2ACF0(s0);
    }
    else if (sel == 13) {
        func_00B2ACF0(s0);
        if (func_00207D10(*(u8 **)(*(u8 **)s0 + 4))) {
            func_00208610(*(u8 **)(*(u8 **)s0 + 4));
            func_00B4A420(s0);
        }
    }
    else if (sel == 14) {
        p = *(u8 **)s0;
        func_00BD3CF0(s0, *(f32 *)(p + 0x6C), *(f32 *)(p + 0x70));
    }
    else if (sel == 15) {
        func_00B4B8F0(s0);
    }
    else if (sel == 16) {
        func_00B4B520(s0);
    }
    else if (sel == 17) {
        func_00B4B330(s0);
    }
    else if (sel == 18) {
        func_00B4B0A0(s0);
    }
    else if (sel == 19) {
        s1 = *(s32 *)(*(u8 **)s0 + 0x1C);
        func_00B2ACF0(s0);
        p = *(u8 **)s0;
        v = s1 + 0x200;
        c = *(s32 *)(p + 0x1C);
        if (v < c) {
            *(s32 *)(p + 0x1C) = v;
        } else {
            v = s1 - 0x200;
            if (c < v) {
                *(s32 *)(p + 0x1C) = v;
            }
        }
        if (func_00207D10(*(u8 **)(*(u8 **)s0 + 4))) {
            func_00208610(*(u8 **)(*(u8 **)s0 + 4));
            func_00B4A420(s0);
        }
    }
    else if (sel == 20) {
        p = *(u8 **)s0;
        c = *(u16 *)(p + 0x26) - *(u16 *)(p + 0x2C);
        if (c != 0) {
            c = (c + 0x10000) & 0xFFFF;
            *(u8 *)(*(u8 **)(p + 4) + 0x2D) = c < 0x8001;
        }
        if (*(u8 *)(*(u8 **)(s0 + 4) + 0x4C) == 0x13) {
            func_002075B0(*(u8 **)(*(u8 **)s0 + 4), 0x447, 0, 8);
        }
        *(u16 *)(*(u8 **)s0 + 0x18) = 0x15;
    }
    else if (sel == 21) {
        func_00B4AF20(s0);
    }
    else if (sel == 22) {
        func_00B2ACF0(s0);
        if (func_00207D10(*(u8 **)(*(u8 **)s0 + 4))) {
            func_00208610(*(u8 **)(*(u8 **)s0 + 4));
            if (*(u16 *)(*(u8 **)(*(u8 **)s0 + 4) + 0x30) == 0x44A) {
                v = func_00BBB8C0(3);
                *(u8 *)(*(u8 **)s0 + 0x4E) = v;
            }
            *(u16 *)(*(u8 **)s0 + 0x18) = 0x17;
        }
    }
    else if (sel == 23) {
        func_00B2ACF0(s0);
        p = *(u8 **)s0;
        if (p[0x4E] != 0) {
            u8 *q = *(u8 **)(p + 4);
            if (func_00207D80(q, *(u8 *)(*(u8 **)(q + 4) + 2) * 2)) {
                q = *(u8 **)(*(u8 **)s0 + 4);
                *(f32 *)(q + 0x38) = (f32)(s32)(*(u8 *)(*(u8 **)(q + 4) + 1) * 2);
                p = *(u8 **)s0;
                v = p[0x4E];
                if (v != 0xFF && v != 0) {
                    p[0x4E] = v - 1;
                }
                goto tail;
            }
        }
        if (func_00207D10(*(u8 **)(*(u8 **)s0 + 4))) {
            func_00208610(*(u8 **)(*(u8 **)s0 + 4));
            func_00B4A420(s0);
        }
    }
tail:
    func_00B4F920(s0);
    func_00B53660(s0);
    c = (u8)func_009E1C90(1);
    if (c == 10) {
        func_00AA1110(*(u8 **)s0);
    }
}
