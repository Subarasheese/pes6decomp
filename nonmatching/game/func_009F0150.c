/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_001520C0(void);
extern void func_001AAF40(s32, s32);
extern void func_00207390(void *, s32);
extern void func_00207BE0(void *);
extern s32 func_00207D10(void *);
extern s32 func_00207D80(void *, s32);
extern void func_00209820(void *);
extern void func_00209A00(void *, s32, s32);
extern void func_002562B0(s32);
extern s32 func_002727B0(void);
extern void func_0027D360(f32, f32);
extern void func_0027D650(s32, s32);
extern void func_00284380(s32, s32);
extern void func_00284980(void);
extern void func_00284AB0(void *, s32, s32, s32, s32);
extern void func_00287120(void *);
extern s64 func_00288670(s32, s32, s32);
extern s32 func_002DCA30(void);
extern void func_00849D10(void *);
extern void func_0084B5B0(void *);
extern void func_00930240(void *);
extern void func_00937180(void *, s32, s32, s32, s32, f32, f32, f32, f32);
extern void func_00944A50(void *);
extern void func_00995B90(void *, s32, s32, s32);
extern void func_0099EAE0(void *, s32, s32, s32);
extern s32 func_009B3070(s32, s32);
extern s32 func_009B32D0(s32, s32, s32);
extern void func_009B4450(s32);
extern void func_009EE050(void *, s32);
extern void func_009EFCA0(void *);
extern s32 func_009F4DC0(s32, f32);
extern s32 func_00A9DFF0(void *, s32);
extern void func_00AA0470(void *, s32, s32, f32, f32);
extern s64 func_00AA32C0(void *);
extern void func_00AADED0(void *, s32, s32, s32);
extern void func_00B790E0(void *);
extern void func_00B798F0(void *, void *, s32);
extern void func_00B79DA0(void);
extern s32 func_00BBB780(s64);
extern s32 func_00BBB7F0(s32);
extern s32 func_00BBB8C0(s32);
extern s32 func_00BC03A0(s32);
extern s32 func_00BC13A0(s32, void *, void *, s32);
extern void func_00BC3A80(void *);
extern void func_00C1EE80(void *);
extern u8 *D_003E7574;
extern char D_0058E5B0[];
extern char D_00591BE4[];
extern char D_00591C09[];
extern char D_00591DB4[];
extern char D_00591DD0[];
extern char D_00591E14[];
extern char D_00591E18[];
extern char D_00591E4C[];
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_00591E4F[];
extern char D_005926D8[];
extern char D_00592742[];
extern char D_0059274E[];
extern char D_00592980[];


void func_009F0150(u8 *s0, s32 a1, s32 a2, s32 a3, s32 a4, f32 f12, f32 f13, f32 f14, f32 f15)
{
    s32 st = *(u16 *)(s0 + 0x18);
    s32 s1;
    s32 v;
    u8 *p;
    u8 *a0;
    s64 r;

    if (st == 3) {
        p = (u8 *)D_00591E4F + s0[0x13] * 2;
        *p = s0[0];
        func_0099EAE0(s0, s0[0], a2, a3);
        func_00209820(*(void **)(s0 + 4));
        s1 = *(u8 *)(*(u8 **)(s0 + 4) + 0x2D) != 0 ? -1 : 1;
        v = func_00A9DFF0(s0, 0x2D);
        *(u16 *)(s0 + 0x26) = *(u16 *)(s0 + 0x26) - ((s1 * v) & 0xFFFF);
        func_00930240(s0);
        if (s0[0x24] == 0) {
            if (*(s32 *)(s0 + 0xB0) & 0x80)
                *(s32 *)(s0 + 0xA0) = *(s32 *)(s0 + 0xA0) + 0x80;
            if (*(s32 *)(s0 + 0xB0) & 0x20)
                *(s32 *)(s0 + 0xA0) = *(s32 *)(s0 + 0xA0) - 0x80;
        }
        if (func_002DCA30() != 0)
            func_00849D10(s0);
        *(s32 *)(s0 + 0xA0) = func_009B32D0(*(u16 *)(s0 + 0xA0), *(u16 *)(s0 + 0x2C), 0x1000) & 0xFFFF;
        if (s0[0x24] != 0)
            *(u8 *)D_00592742 = 3;
        v = func_00BC03A0(*(u16 *)(*(u8 **)(s0 + 4) + 0x30));
        s1 = 0;
        if (v == 0x1E) {
            a0 = *(u8 **)(s0 + 4);
            if (func_00207D80(a0, *(u16 *)(*(u8 **)(a0 + 4) + 8) * 2) != 0) {
                *(s32 *)(D_003E7574 + 0x74) = -0xE00;
                *(s16 *)(D_003E7574 + 0x6A) = 0;
                func_00284AB0(s0, *(u16 *)(s0 + 0x26), 0x500, 8, 0);
                func_00287120(s0);
                D_003E7574[0x67] = 8;
                *(u8 *)D_00591E4C = s0[0];
            }
        } else if (v == 0x1D) {
            a0 = *(u8 **)(s0 + 4);
            if (func_00207D80(a0, *(u16 *)(*(u8 **)(a0 + 4) + 8) * 2) != 0) {
                func_0027D360(*(f32 *)(D_003E7574 + 0x10), *(f32 *)(D_003E7574 + 0x18));
                D_003E7574[0x67] = 8;
            }
        }
        if ((func_002727B0() & 0xFF) == 7) {
            v = *(s32 *)(s0 + 0xB4);
            if (v & 0x4000)
                s1 = 1;
            else if (v & 0x2000)
                s1 = 2;
        }
        if (s1 == 0 && func_00207D10(*(void **)(s0 + 4)) == 0)
            return;
        func_00209A00(*(void **)(s0 + 4), func_00BC13A0(0x10, 0, 0, 0) & 0xFFFF, 0);
        s0[0x16] = 0x2D;
        *(u16 *)(s0 + 0x18) = 1;
        if (s1 != 0) {
            *(u8 *)D_0059274E = 2;
            func_00B798F0(D_003E7574 + 0x10, D_003E7574 + 0x18, *(u8 *)D_00591E4D);
            func_0027D360(*(f32 *)(D_003E7574 + 0x10), *(f32 *)(D_003E7574 + 0x18));
            func_009EE050(s0, *(u16 *)(s0 + 0x2A));
            if (s1 == 1) {
                func_001AAF40(**(s32 **)(s0 + 4), 0);
                *(u8 *)D_0059274E = 2;
                *(u8 *)D_00591DD0 = 1;
                s0[0x221] = 0;
                func_009B4450(1);
                func_009EFCA0(s0);
            } else {
                u8 b12;
                func_001AAF40(**(s32 **)(s0 + 4), 0);
                *(u8 *)D_0059274E = 2;
                func_009B4450(1);
                *(u8 *)D_00591DD0 = 1;
                b12 = s0[0x12];
                *(u8 *)(*(u8 **)(s0 + 4) + 0x2D) = *(u8 *)(D_00592980 + b12 * 0x6900 + s0[0x11] * 0x348 + 0x68) & 1 & 1;
                func_00209A00(*(void **)(s0 + 4), func_00BC13A0(0x1C, D_00592980 + b12 * 0x6900, D_00592980, b12 * 0x69), 0);
                func_00207390(*(void **)(s0 + 4), 6);
                func_00930240(s0);
                *(u16 *)(s0 + 0x18) = 2;
            }
        }
        *(s32 *)D_005926D8 = 0x43000000;
        *(u8 *)D_00591E18 = 0;
        *(s32 *)(s0 + 0x1C) = 0;
        s0[0x45] = 0;
        s0[0x62] = 0;
        return;
    }
    if (st == 2) {
        u8 *o4;
        u8 *o4b;
        func_00937180(s0, st, a2, a3, a4, f12, f13, f14, f15);
        o4 = *(u8 **)(s0 + 4);
        if (func_00207D80(o4, (*(u8 **)(o4 + 4))[1] * 2) != 0) {
            u8 *v1 = *(u8 **)(s0 + 4);
            s32 s2 = *(u16 *)(s0 + 0x2A);
            s32 d = func_009F4DC0((s32)((f32)(*(u16 *)(*(u8 **)(v1 + 4) + 8) * 2) - *(f32 *)(v1 + 0x38)), *(f32 *)(v1 + 0x28));
            func_00AADED0(s0, s2 & 0xFFFF, 0, *(u16 *)(*(u8 **)(*(u8 **)(s0 + 4) + 4) + 8) * 2);
            *(s16 *)(s0 + 0x38) = (s32)(func_009B3070(*(u16 *)(s0 + 0x26), s2 & 0xFFFF) & 0xFFFF) / d;
        }
        o4b = *(u8 **)(s0 + 4);
        if (func_00207D80(o4b, *(u16 *)(*(u8 **)(o4b + 4) + 8) * 2) != 0) {
            s32 s1v, s2v, s3, t;
            s64 r;
            u8 b12;
            *(s32 *)(D_003E7574 + 0x74) = -0x1400 - func_00BBB8C0(0xA00);
            *(s8 *)(D_003E7574 + 0x6C) = func_00BBB8C0(2);
            *(s16 *)(D_003E7574 + 0x6A) = 0xA0 - func_00BBB8C0(0x30);
            s1v = func_00BBB8C0(0x800) + 0x7200;
            s3 = s1v - func_00BBB8C0(s1v / 8);
            if (func_00BBB8C0(4) == 0) {
                b12 = s0[0x12];
                r = func_00288670(*(u8 *)(D_00592980 + b12 * 0x6900 + s0[0x11] * 0x348 + 0x78) & 0x7F, 0x1E, b12 * 0x69);
                if (!(func_00BBB780((r << 48) >> 48) & 0xFF))
                    s3 = (s3 * 0x60) / 100;
            }
            s2v = func_00BBB8C0(5) + 0x38;
            b12 = s0[0x12];
            t = func_00288670(*(u8 *)(D_00592980 + b12 * 0x6900 + s0[0x11] * 0x348 + 0x76) & 0x7F, 0x28, b12 * 0x69);
            s1v = func_00BBB8C0((0x63 - t) / 10 + 8);
            s2v += s1v;
            func_00284AB0(s0, *(u16 *)(s0 + 0xA0), s3 - s1v * (func_00BBB7F0(0x40) + 0xBC), s2v, 0);
            func_00995B90(s0, 0, 0xA, 0);
            func_00287120(s0);
            D_003E7574[0x62] = 4;
            *(s32 *)D_005926D8 = 0;
            func_0027D650(7, 4);
            func_00284980();
            func_00284380(-0x200, 1);
            func_00AA0470(s0, 1, 1, *(f32 *)(D_003E7574 + 0x1454), *(f32 *)(D_003E7574 + 0x145C));
            func_00B79DA0();
            func_00BC3A80(s0);
            *(u8 *)D_00591DB4 = 1;
            func_002562B0(2);
        }
        if (func_00207D10(*(void **)(s0 + 4)) != 0)
            func_00C1EE80(s0);
        return;
    }
    if (st == 1) {
        u8 b12;
        p = (u8 *)D_00591E4F + s0[0x13] * 2;
        *p = s0[0];
        *(u32 *)D_00591E14 = *(u32 *)D_00591E14 + 1;
        func_0099EAE0(s0, (s32)p, s0[0x13] * 2, s0[0]);
        if (s0[0x24] == 0) {
            if (*(s32 *)(s0 + 0xB0) & 0x80)
                *(s32 *)(s0 + 0xA0) = *(s32 *)(s0 + 0xA0) + 0x80;
            if (*(s32 *)(s0 + 0xB0) & 0x20)
                *(s32 *)(s0 + 0xA0) = *(s32 *)(s0 + 0xA0) - 0x80;
        }
        if (func_002DCA30() != 0)
            func_00849D10(s0);
        *(s32 *)(s0 + 0xA0) = func_009B32D0(*(u16 *)(s0 + 0xA0), *(u16 *)(s0 + 0x2C), 0x1000) & 0xFFFF;
        func_00207BE0(*(void **)(s0 + 4));
        func_00930240(s0);
        if (func_001520C0() == 0)
            return;
        if (s0[0x24] != 0) {
            v = *(u8 *)D_00591BE4 * 3;
            if ((u32)(v / 2) < *(u32 *)D_00591E14) {
                if (*(u8 *)D_00591C09 == 5) {
                    if (*(u8 *)D_00591E4E == 0xFF) {
                        v = 0x2000;
                    } else {
                        s1 = 0;
                        if (func_00BBB8C0(8) != 0) {
                            s1 = 1;
                        } else {
                            s32 id = *(u8 *)D_00591E4E != 0xFF ? (s32)*(u8 *)D_00591E4E % 23 : 1;
                            r = func_00AA32C0(D_0058E5B0 + id * 0x240);
                            r = (r << 32) >> 32;
                            if ((u64)r < 0x100001)
                                s1 = 2;
                        }
                        v = s1 != 0 ? 0x2000 : 0x4000;
                    }
                } else {
                    s1 = 0;
                    func_00944A50(s0);
                    s0[0x48] = *(u8 *)D_00591E4E;
                    if (func_00BBB8C0(8) != 0 || s0[0x48] == 0xFF) {
                        s1 = 1;
                    } else {
                        s32 id = s0[0x48] != 0xFF ? (s32)s0[0x48] % 23 : 1;
                        r = func_00AA32C0(D_0058E5B0 + id * 0x240);
                        r = (r << 32) >> 32;
                        if ((u64)r < 0x100001)
                            s1 = 2;
                    }
                    v = s1 != 0 ? 0x2000 : 0x4000;
                }
                *(s32 *)(s0 + 0xB4) = v;
            }
        }
        if (func_002DCA30() != 0)
            func_0084B5B0(s0);
        func_00B790E0(s0);
        v = *(s32 *)(s0 + 0xB4);
        if (v & 0x2000) {
            func_001AAF40(**(s32 **)(s0 + 4), 0);
            *(u8 *)D_0059274E = 2;
            func_009B4450(1);
            *(u8 *)D_00591DD0 = 1;
            b12 = s0[0x12];
            *(u8 *)(*(u8 **)(s0 + 4) + 0x2D) = *(u8 *)(D_00592980 + b12 * 0x6900 + s0[0x11] * 0x348 + 0x68) & 1 & 1;
            func_00209A00(*(void **)(s0 + 4), func_00BC13A0(0x1C, D_00592980 + b12 * 0x6900, D_00592980, b12 * 0x69), 0);
            func_00207390(*(void **)(s0 + 4), 6);
            func_00930240(s0);
            *(u16 *)(s0 + 0x18) = 2;
        } else if (v & 0x4000) {
            func_001AAF40(**(s32 **)(s0 + 4), 0);
            *(u8 *)D_0059274E = 2;
            *(u8 *)D_00591DD0 = 1;
            s0[0x221] = 0;
            func_009B4450(1);
            func_009EFCA0(s0);
        }
        return;
    }
    if (st == 0) {
        *(s32 *)(s0 + 0x1C) = 0;
        if (s0[0] == *(u8 *)D_00591E4E) {
            a0 = *(u8 **)(s0 + 4);
            if (*(u16 *)(a0 + 0x30) != 0)
                func_00209A00(a0, 0, 0);
            func_00209820(*(void **)(s0 + 4));
            if (*(u16 *)(D_003E7574 + 0x84) == 7) {
                s0[0x16] = 7;
                *(u16 *)(s0 + 0x18) = 0;
            }
        } else {
            func_00209A00(*(void **)(s0 + 4), 0, 0);
            func_00207390(*(void **)(s0 + 4), 4);
            s0[0x16] = 7;
            *(u16 *)(s0 + 0x18) = 0;
        }
    }
}
