/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBD1F0[];
extern char D_00CBD1F1[];
extern char D_00CBD1F2[];
extern char D_00CBD1F4[];
extern char D_00CBD200[];
extern char D_00CBD204[];
extern char D_00CBD208[];
extern char D_00CBD20C[];
extern char D_00CBD210[];
extern char D_00CBD214[];
extern char D_00CBD218[];
extern char D_00CBD21C[];
extern char D_00CBD220[];
extern char D_00CBD224[];
extern char D_00CBD228[];
extern char D_00CBD22C[];
extern char D_00CBD230[];
extern char D_00CBD234[];

void func_002871C0(f32 *);
s32 func_009B4390(void);
s32 func_009B4580(void);
s32 func_00BB70A0(void);
void func_00BB6CA0(void *, s32, s32, f32);
void func_00103D80(f32, void *, void *, void *);
void func_001A5520(f32, f32, f32);
f32 func_00BB6BE0(f32);
f32 func_001A4E00(void);
void func_001A5670(f32, s32);

s32 func_00BB6100(s32 arg0) {
    f32 in[4];
    f32 out[4];
    u16 s1, s0;
    s32 t;
    f32 f5, x, y;

    func_002871C0(in);
    s1 = *(u16 *)D_00CBD1F4 - 0x12;
    s0 = func_009B4390();
    if ((s32)s0 < (s32)(u16)func_009B4580()) {
        s0 = 0x12C - (u16)func_009B4580();
        s0 = s0 + (u16)func_009B4390();
    } else {
        s0 = func_009B4390();
        s0 = s0 - (u16)func_009B4580();
    }

    t = *(u8 *)D_00CBD1F0;
    if (t != 3) {
        if (t == 1 && func_00BB70A0() != 0) {
            *(u8 *)D_00CBD1F0 = 3;
        } else {
            func_00BB6CA0(D_00CBD210, 0, 0, 0.0f);
            if (*(u16 *)D_00CBD1F4 < 0x12C && (s32)s1 < (s32)s0) {
                x = in[0];
                if (x <= 13465.0f) {
                    if (x < -13465.0f) x = -13465.0f;
                } else {
                    x = 13465.0f;
                }
                out[0] = x;
                y = in[1];
                if (y <= -100.0f) {
                    out[1] = y;
                } else {
                    out[1] = -100.0f;
                }
                out[2] = in[2];
                if ((s32)s0 < (s32)s1 + 6) {
                    func_00103D80((f32)((s32)s0 - (s32)s1) / 6.0f, D_00CBD210, out, D_00CBD210);
                } else {
                    *(f32 *)D_00CBD210 = out[0];
                    *(f32 *)D_00CBD214 = out[1];
                    *(f32 *)D_00CBD218 = out[2];
                    *(f32 *)D_00CBD21C = out[3];
                }
            }
        }
    }

    if (*(u8 *)D_00CBD1F0 != 0) {
        func_00103D80(0.05f, D_00CBD200, D_00CBD210, D_00CBD200);
    } else {
        *(f32 *)D_00CBD200 = *(f32 *)D_00CBD210;
        *(f32 *)D_00CBD204 = *(f32 *)D_00CBD214;
        *(f32 *)D_00CBD208 = *(f32 *)D_00CBD218;
        *(f32 *)D_00CBD20C = *(f32 *)D_00CBD21C;
    }
    func_001A5520(*(f32 *)D_00CBD200, *(f32 *)D_00CBD204, *(f32 *)D_00CBD208);

    f5 = 1.0f;
    t = *(u8 *)D_00CBD1F2;
    if (t == 1) {
        t = *(u8 *)D_00CBD1F0;
        if (t == 0) {
            *(f32 *)D_00CBD230 = f5;
        } else {
            if (t == 2) *(s32 *)D_00CBD230 = 0;
            if (*(f32 *)D_00CBD230 < 1.0f) {
                f32 n = 0.0f + *(f32 *)D_00CBD230 + 0.0001f * *(f32 *)D_00CBD234;
                *(f32 *)D_00CBD230 = n;
                if (n < 1.0f) f5 = n;
            }
        }
    } else if (t == 0) {
        t = *(u8 *)D_00CBD1F0;
        if (t == 0) {
            *(f32 *)D_00CBD22C = 30.0f;
        } else {
            if (t == 2) *(s32 *)D_00CBD22C = 0;
            if (*(f32 *)D_00CBD22C < 30.0f) {
                f32 n = *(f32 *)D_00CBD22C + *(f32 *)D_00CBD234;
                *(f32 *)D_00CBD22C = n;
                if (n < 30.0f) {
                    n = n / 30.0f;
                    f5 = n * n;
                }
            }
        }
    }

    if (*(u8 *)D_00CBD1F0 == 0) {
        *(f32 *)D_00CBD224 = *(f32 *)D_00CBD220;
        *(f32 *)D_00CBD228 = func_00BB6BE0(*(f32 *)D_00CBD220);
    } else {
        f32 a = *(f32 *)D_00CBD224;
        f32 b = 1.0f - f5;
        f32 old = *(f32 *)D_00CBD228;
        f32 r = *(f32 *)D_00CBD220 * f5 + a * b;
        *(f32 *)D_00CBD224 = r;
        *(f32 *)D_00CBD228 = 0.05f * func_00BB6BE0(r) + 0.95f * old;
    }

    x = *(f32 *)D_00CBD228 * (0.2f * func_001A4E00()) / 11.2f;
    if (x < 500.0f) {
        x = 500.0f;
    } else if (!(x <= 3000.0f)) {
        x = 3000.0f;
    }
    func_001A5670(x, 0x3E4CCCCD);

    t = *(u8 *)D_00CBD1F0;
    if (t == 2 || t == 0) *(u8 *)D_00CBD1F0 = 1;

    t = *(u8 *)D_00CBD1F1;
    if (t == 2) {
        if ((s32)s1 < (s32)s0) {
            *(u8 *)D_00CBD1F0 = 2;
            *(u8 *)D_00CBD1F1 = 3;
            *(u8 *)D_00CBD1F2 = 0;
            *(f32 *)D_00CBD220 = 10.0f;
        }
    } else if (t == 1) {
        *(u8 *)D_00CBD1F0 = 2;
        *(u8 *)D_00CBD1F1 = 2;
        *(f32 *)D_00CBD220 = 5.0f;
    }

    {
        s32 c = *(u16 *)D_00CBD1F4;
        if (c >= 0x12C) return 0;
        if (!((s32)s1 < (s32)s0)) return 0;
        if (c < (s32)s0) {
            *(f32 *)D_00CBD234 = 0.125f;
            return (c + arg0) < (s32)s0;
        } else {
            f32 u = 1.0f - (f32)((s32)s0 - (s32)s1) / 18.0f;
            *(f32 *)D_00CBD234 = 0.125f + 0.725f * (u * u);
            return 0;
        }
    }
}
