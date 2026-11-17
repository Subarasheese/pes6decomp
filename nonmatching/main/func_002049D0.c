/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 D_003E99C0;
extern f32 D_003E99C4;
extern char D_00592710[];
extern char D_00592720[];
extern char D_00592736[];
extern char D_00592740[];
extern char D_00592742[];
extern char D_00592743[];
extern char D_0059274E[];
extern char D_005926E6[];

f32 func_001A5660(void);
void func_001A5670(f32);
s32 func_002727B0(void);
void func_00200080(void);
void func_001FFFD0(void);
void func_001A55C0(f32 *);
void func_001A54F0(f32 *);
void func_001A5550(char *);
void func_001A5620(char *);
s32 func_002AE670(s32);

void func_002049D0(void) {
    f32 v[3];
    f32 *p;
    u32 cnt;
    u32 st;
    f32 a, b, c;

    D_003E99C0 = func_001A5660();
    if ((func_002727B0() & 0xFF) == 2) {
        *(u8 *)D_00592742 = 3;
        func_00200080();
        func_001A55C0(v);
        p = (f32 *)D_00592720;
        p[0] = (v[0] + 4.0f * p[0]) / 5.0f;
        p[1] = (v[1] + 4.0f * p[1]) / 5.0f;
        p[2] = (v[2] + 4.0f * p[2]) / 5.0f;
        func_001A5620(D_00592720);
        func_001A54F0(v);
        p = (f32 *)D_00592710;
        p[0] = (v[0] + 4.0f * p[0]) / 5.0f;
        p[1] = (v[1] + 4.0f * p[1]) / 5.0f;
        p[2] = (v[2] + 4.0f * p[2]) / 5.0f;
        func_001A5550(D_00592710);
        return;
    }
    st = *(u8 *)D_00592740;
    if (st == 2) {
        s32 n = func_002AE670(180);
        cnt = *(u16 *)D_00592736;
        n = n - (s32)(cnt >> 1);
        if (D_003E99C0 < 20.0f + D_003E99C4) {
            D_003E99C0 = D_003E99C0 - 1.0f;
        } else {
            f32 x = (f32)n;
            f32 y = (f32)cnt;
            f32 t = D_003E99C4 * y;
            f32 r = t / 2.0f + D_003E99C0 * x;
            D_003E99C0 = r / (f32)func_002AE670(180);
        }
        func_001A5670(D_003E99C0);
        cnt = *(u16 *)D_00592736 + 1;
        *(u16 *)D_00592736 = cnt;
        if ((s32)(cnt & 0xFFFF) < func_002AE670(180) && !(D_003E99C0 <= D_003E99C4))
            return;
        *(u8 *)D_0059274E = 1;
        func_001A55C0((f32 *)D_00592720);
        func_001A54F0((f32 *)D_00592710);
        func_001A5670(D_003E99C4);
        *(u8 *)D_00592740 = 255;
        return;
    }
    if (st == 1) {
        u32 c2 = *(u16 *)D_00592736 + 1;
        *(u16 *)D_00592736 = c2;
        if ((s32)(c2 & 0xFFFF) < (s32)*(u8 *)D_005926E6)
            return;
        *(u16 *)D_00592736 = 0;
        *(u8 *)D_00592740 = st + 1;
        return;
    }
    if (st != 0)
        return;
    {
        u32 f = *(u8 *)D_0059274E;
        *(u16 *)D_00592736 = 0;
        if (f != 0) {
            *(u8 *)D_00592740 = 3;
            return;
        }
        *(u8 *)D_00592742 = 3;
        func_001FFFD0();
        func_001A5550(D_00592710);
        func_001A5620(D_00592720);
        func_001A5670(8800.0f);
        if ((u32)(*(u8 *)D_00592743 - 6) < 2)
            D_003E99C4 = 1960.0f;
        else
            D_003E99C4 = 1430.0f;
        *(u8 *)D_00592740 = 1;
    }
}
