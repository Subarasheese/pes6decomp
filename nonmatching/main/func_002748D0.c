/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003AB6D0[];
extern char D_003AB720[];
extern char D_00592980[];
extern char D_00592A14[];
extern char D_005929E8[];
extern char D_00592995[];
extern char D_00591E01[];
extern s32 func_00292BD0(void);
extern s32 func_00292BF0(void);
extern void func_002886B0(void *a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5);

void func_002748D0(u32 team, u32 slot)
{
    u16 tbl[36];
    f32 ftbl[32];
    s32 n;
    u32 ti, off;
    u8 *p;
    f32 *src, *dst;
    s16 *ps, *pd;
    s32 *ws, *wd;
    f32 f;
    u32 r;
    s32 s4, s0, s5;

    ti = (team & 0xFF) * 26880;
    off = (slot & 0xFF) * 840;
    p = (u8 *)(D_00592980 + ti + off + 0xF0);

    ps = (s16 *)D_003AB6D0;
    pd = (s16 *)tbl;
    n = 18;
    do {
        s16 a = ps[0];
        s16 b = ps[1];
        n--;
        pd[0] = a;
        pd[1] = b;
        ps += 2;
        pd += 2;
    } while (n > 0);

    ws = (s32 *)D_003AB720;
    wd = (s32 *)ftbl;
    n = 31;
    do {
        s32 a = *ws;
        n--;
        *wd = a;
        ws++;
        wd++;
    } while (n > 0);

    f = (f32)(u32)tbl[p[1] * 6 + p[2]];
    f = ftbl[p[0]] * f;
    r = (u16)(u32)f;
    if ((s32)r <= 0) {
        s4 = 0;
    } else if ((s32)r < 21) {
        s4 = 1;
    } else {
        s4 = 2;
    }

    src = (f32 *)(D_00592A14 + ti + off);
    dst = (f32 *)(D_005929E8 + ti + off);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = src[5];
    dst[6] = src[6];
    dst[7] = src[7];
    dst[8] = src[8];
    dst[9] = src[9];
    dst[10] = src[10];

    s0 = func_00292BD0() != 0;
    if (s0) {
        s0 = *(u8 *)D_00591E01 == (team & 0xFF);
    }
    s5 = p[2] == 2;
    r = func_00292BF0();
    func_002886B0(dst, *(u8 *)(D_00592995 + ti + off), s4, s5, s0 & 0xFF, r & 0xFF);
}
