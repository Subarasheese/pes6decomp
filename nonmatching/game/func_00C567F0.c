/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003E7574;
extern char D_0059226E[];
extern char D_005926EC[];
extern char D_005926DE[];
extern char D_00591E4F[];
extern char D_00591E7C[];
extern char D_0058E5B0[];
extern char D_00592274[];
extern char D_00592278[];

u32 func_00C549E0(void *, s32, u32, s32);
u32 func_009B33A0(void *, s32, s32);
f32 func_001CD9E0(f32);
u32 func_009B3480(void *, f32, f32);
s32 func_00BBB990(u32, s32);
s32 func_00BBB9C0(u32, s32);
s32 func_009D9B50(void *);
s32 func_00990750(s32, s32, f32, f32);
s32 func_009B30B0(u32, u32);
s32 func_009B34C0(f32, f32, f32, f32);
s32 func_00A2A010(void *, void *, s32, s32);
void func_00C55C50(void *, void *);
s32 func_00C565C0(void *);
void func_009DA300(void *, void *);
void func_00C552F0(void *, s32, s32);
void func_00AAC070(void);
void func_0099E470(void);
s32 func_0099DFF0(void);


void func_00C567F0(u8 *a0, s32 in1, s32 in2, s32 a3) {
    u8 *s2 = a0;
    u32 a2 = *(u16 *)D_0059226E;
    s32 a1 = *(s16 *)(s2 + 0x14);
    f32 f20 = -13529.0f * (f32)a1;
    u32 sel = s2[0x4A];
    s32 s0;
    u32 s1;
    s32 v;
    u32 u;
    f32 zero = 0.0f;

    if (sel == 7) {
        (*(f32 *)(D_003E7574 + 0x1454)) = (f32)*(s16 *)(s2 + 0x1CE);
        (*(f32 *)(D_003E7574 + 0x145C)) = (f32)*(s16 *)(s2 + 0x1D0);
        u = func_009B33A0(a0, (s32)(*(f32 *)(D_003E7574 + 0x1454)), (s32)(*(f32 *)(D_003E7574 + 0x145C)));
        s0 = (s32)func_001CD9E0((f32)u);
        s1 = func_009B3480(s2, (*(f32 *)(D_003E7574 + 0x1454)), (*(f32 *)(D_003E7574 + 0x145C))) & 0xFFFF;
        if (s0 >= 0x181) {
            v = func_00BBB990(s1, 0x180);
            (*(f32 *)(D_003E7574 + 0x1454)) = *(f32 *)(s2 + 0xE0) + (f32)v;
            v = func_00BBB9C0(s1, 0x180);
            (*(f32 *)(D_003E7574 + 0x145C)) = *(f32 *)(s2 + 0xE8) + (f32)v;
            *(s16 *)(s2 + 0x1CE) = (s32)(*(f32 *)(D_003E7574 + 0x1454));
            *(s16 *)(s2 + 0x1D0) = (s32)(*(f32 *)(D_003E7574 + 0x145C));
        }
        goto end;
    }
    if (sel >= 11 && sel <= 19) {
        goto move;
    }
    if (sel == 4) {
        func_00C549E0(a0, a1, a2, a3);
        goto move;
    }
    if (sel == 6) {
        s0 = func_009B34C0(f20, 0.0f, *(f32 *)D_00592274, *(f32 *)D_00592278) & 0xFFFF;
        v = func_00BBB990(s0, 0x800);
        (*(f32 *)(D_003E7574 + 0x1454)) = f20 + (f32)v;
        v = func_00BBB9C0(s0, 0x800);
        (*(f32 *)(D_003E7574 + 0x145C)) = (f32)v;
        v = (s32)(*(f32 *)(D_003E7574 + 0x145C));
        v = v / 12;
        if (v <= 0) v = -v;
        v = *(s16 *)(s2 + 0x14) * v;
        (*(f32 *)(D_003E7574 + 0x1454)) = (*(f32 *)(D_003E7574 + 0x1454)) + (f32)v;
        *(s16 *)(s2 + 0x3A) = 4;
        s2[0x3E] = *(u8 *)D_005926DE;
        *(s32 *)(s2 + 0xB0) = 0x10000;
        goto end;
    }
    if (sel == 5) {
        u32 i1 = D_00591E4F[(s2[0x13] ^ 1) * 2];
        u8 *p1;
        u32 i2;
        f32 f21, fy;
        if (i1 == 0xFF) i1 = 1; else i1 = i1 % 0x17;
        p1 = (u8 *)D_0058E5B0 + i1 * 0x240;
        i2 = s2[0x1D5];
        if (i2 == 0xFF) i2 = 1; else i2 = i2 % 0x17;
        f21 = *(f32 *)(p1 + 0xE0);
        fy = *(f32 *)(p1 + 0xE8);
        (*(f32 *)(D_003E7574 + 0x1454)) = f21;
        (*(f32 *)(D_003E7574 + 0x145C)) = fy;
        s0 = func_00A2A010(s2, (u8 *)D_0058E5B0 + i2 * 0x240, 0x50, a3) + 0x180;
        {
            f32 dx = fy - zero;
            f32 dz = (zero + f21) - -13465.0f * (f32)*(s16 *)(s2 + 0x14);
            v = (s32)func_001CD9E0(dx * dx + dz * dz);
        }
        v = (v * 3) / 4;
        if (v < s0) s0 = v;
        s1 = func_009B3480(p1, 13465.0f * (f32)*(s16 *)(p1 + 0x14), 0.0f) & 0xFFFF;
        v = func_00BBB990(s1, s0);
        (*(f32 *)(D_003E7574 + 0x1454)) = f21 + (f32)v;
        v = func_00BBB9C0(s1, s0);
        (*(f32 *)(D_003E7574 + 0x145C)) = fy + (f32)v;
        goto end;
    }
    if (sel == 2) {
        u32 i = s2[0x1D5];
        if (i == 0xFF) i = 1; else i = i % 0x17;
        func_00C55C50(s2, (u8 *)D_0058E5B0 + i * 0x240);
        goto end;
    }
    if (sel == 20) {
        func_0099E470();
        if (*(s32 *)D_00591E7C != 0) {
            s0 = func_0099DFF0() & 0xFFFF;
            v = func_00BBB990(s0, 0x400);
            (*(f32 *)(D_003E7574 + 0x1454)) = *(f32 *)(s2 + 0xE0) + (f32)v;
            v = func_00BBB9C0(s0, 0x400);
            (*(f32 *)(D_003E7574 + 0x145C)) = *(f32 *)(s2 + 0xE8) + (f32)v;
        } else {
            f32 f3 = *(f32 *)(s2 + 0xF0);
            f32 f2 = (f32)(u32)*(u8 *)D_005926DE;
            (*(f32 *)(D_003E7574 + 0x1454)) = (zero + *(f32 *)(s2 + 0xE0)) + f3 * f2;
            f3 = *(f32 *)(s2 + 0xF8);
            f2 = (f32)(u32)*(u8 *)D_005926DE;
            (*(f32 *)(D_003E7574 + 0x145C)) = (zero + *(f32 *)(s2 + 0xE8)) + f3 * f2;
        }
        if ((*(f32 *)(D_003E7574 + 0x1454)) <= 13465.0f) {
            if ((*(f32 *)(D_003E7574 + 0x1454)) < -13465.0f) (*(f32 *)(D_003E7574 + 0x1454)) = -13433.0f;
        } else {
            (*(f32 *)(D_003E7574 + 0x1454)) = 13433.0f;
        }
        if ((*(f32 *)(D_003E7574 + 0x145C)) <= 8729.0f) {
            if ((*(f32 *)(D_003E7574 + 0x145C)) < -8729.0f) (*(f32 *)(D_003E7574 + 0x145C)) = -8697.0f;
        } else {
            (*(f32 *)(D_003E7574 + 0x145C)) = 8697.0f;
        }
        goto end;
    }
    if (sel >= 21 && sel <= 25) {
        v = func_00C565C0(a0);
        func_00C552F0(s2, v, s2[0x4A]);
        goto end;
    }
    if (sel == 9) {
        func_00AAC070();
        goto end;
    }
    *(s32 *)(s2 + 0xB0) = 0;
    s0 = func_00C565C0(s2);
    func_009DA300(s2, s2 + 0x4F);
    func_00C552F0(s2, s0, s2[0x4F]);
    goto end;

move:
    u = func_009B33A0(a0, (s32)(*(f32 *)(D_003E7574 + 0x1454)), (s32)(*(f32 *)(D_003E7574 + 0x145C)));
    s0 = (s32)func_001CD9E0((f32)u);
    {
        u8 *P = D_003E7574;
        s32 lim = *(s32 *)(P + P[0x68] * 4 + 0x10BC);
        if (lim <= 0) lim = -lim;
        if (*(s32 *)(P + P[0x68] * 4 + 0xFC) < lim) {
            if (func_009D9B50(s2)) {
                P = D_003E7574;
                if (P[0x68] >= *(u8 *)D_005926EC) {
                    if ((f32)*(s16 *)(s2 + 0x14) * (*(f32 *)(P + 0x1454)) > -13337.0f) {
                        if (*(s32 *)(P + 0x50) >= 0x1801) {
                            if (func_00990750(s2[0x13] ^ 1, 0x200, (*(f32 *)(P + 0x1454)), (*(f32 *)(P + 0x145C)))) {
                                if (s0 >= 0x140 &&
                                    (func_009B30B0(*(u16 *)(s2 + 0xA8), *(u16 *)(D_003E7574 + 0x58)) & 0xFFFF) < 0x70) {
                                    goto end;
                                }
                                v = func_00BBB990(*(u16 *)(D_003E7574 + 0x58), 0xA0);
                                (*(f32 *)(D_003E7574 + 0x1454)) = (*(f32 *)(D_003E7574 + 0x1454)) + (f32)v;
                                v = func_00BBB9C0(*(u16 *)(D_003E7574 + 0x58), 0xA0);
                                (*(f32 *)(D_003E7574 + 0x145C)) = (*(f32 *)(D_003E7574 + 0x145C)) + (f32)v;
                            }
                        }
                    }
                }
            }
        }
    }
end:
    *(f32 *)(s2 + 0x6C) = (*(f32 *)(D_003E7574 + 0x1454));
    *(f32 *)(s2 + 0x70) = (*(f32 *)(D_003E7574 + 0x145C));
}
