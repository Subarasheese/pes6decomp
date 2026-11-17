/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBBDFE[];
extern char D_00CBBDFD[];
extern char D_00CBBDFB[];
extern char D_00591A90[];
extern char D_0058E5B0[];
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_005924B0[];
extern char D_00592980[];
extern char D_00CB3300[];
extern char D_00CBBE02[];
extern char D_00CBBE04[];
extern char D_00CBBE05[];
extern char D_005900B0[];
extern char D_0058E7F0[];

extern s32 func_001A58E0(s32 a, s32 b);
extern s32 func_001AAF50(s32 a, s32 b, s32 c, s32 d);
extern s32 func_001AAF40(s32 a, s32 b);
extern s32 func_00B94660(void *p);
extern s32 func_00BBB8C0(s32 a);
extern s32 func_002DCA30(void);

void func_009E33B0(void)
{
    u32 count;
    u32 side;
    s32 s0;
    u8 *s1;
    u8 *tbl;
    s32 step;
    s32 a4;
    s32 res;
    u8 *rec;
    u8 *p;
    s32 mode;
    s32 mine;
    s32 other;
    s32 d;
    u8 *s0p;

    count = (u8)D_00CBBDFE[0];
    side = (u8)D_00CBBDFD[0] & 1;
    s0 = (u8)D_00CBBDFB[side] % count;
    tbl = (u8 *)D_00591A90 + side * 0x8B;
    step = side ? 12 : 1;

    while (1) {
        a4 = tbl[s0 + 0x27];
        if (a4 + step == 255) {
            a4 = 1;
        } else {
            a4 = a4 + (step % 23);
        }
        s1 = (u8 *)D_0058E5B0 + a4 * 576;
        rec = *(u8 **)(s1 + 4);
        if (rec[0x2C] != 0) {
            break;
        }
        s0 = (s0 + 1) % count;
    }

    func_001A58E0(**(s32 **)(s1 + 4), 1);
    D_00591E4D[0] = s1[0];
    D_005924B0[0] = s1[0x12];
    func_001AAF50(**(s32 **)(s1 + 4), 0, s1[0x12], s1[0]);
    func_001AAF40(**(s32 **)(s1 + 4), 1);
    func_00B94660(s1);

    D_00CBBDFB[(u8)D_00CBBDFD[0] & 1] = s0 + 1;
    p = (u8 *)D_00592980 + s1[0x12] * 26880 + s1[0x11] * 840;
    if (((p[0x89]) & 7) >= 6) {
        goto call;
    }
    {
        u8 who = s1[0x13];
        char *base = *(char **)D_00CB3300 + 0xC;
        mode = (u8)D_00CBBDFD[0];
        mine = *(s16 *)(base + who * 756);
        other = *(s16 *)(base + ((who ^ 1) & 0xFF) * 756);
    }
    if (mode == 5) {
        goto l3680;
    } else if (mode == 6) {
        goto l364c;
    } else if (mode == 7) {
        goto l3610;
    } else if (mode == 8) {
        s16 a = (s16)mine;
        s16 b = (s16)other;
        if ((s16)(a + 1) < b) {
            res = 1;
            goto done;
        }
        goto l3610;
    } else {
        if (mode < 5) {
            res = 0;
        } else if ((mode & 1) == 0) {
            res = 0;
        } else {
            res = ((s16)((s16)mine + 1) != (s16)other);
        }
        goto done;
    }
l3610:
    d = (s16)((s16)mine + 1) - (s16)other;
    if (d <= 0) d = -d;
    if (d >= 2) {
        res = 1;
        goto done;
    }
l364c:
    if ((s16)other - (s16)((s16)mine + 1) >= 2) {
        res = 1;
        goto done;
    }
l3680:
    d = (s16)((s16)mine + 1) - (s16)other;
    if (d <= 0) d = -d;
    res = (d >= 3);
done:
    if (res == 0) {
        D_00CBBE02[0] = 0;
    } else {
call:
        if (func_00BBB8C0(100) >= 0x4C) {
            D_00CBBE02[0] = 1;
        } else {
            D_00CBBE02[0] = 0;
        }
    }
    if (func_002DCA30() != 0) {
        D_00CBBE02[0] = 0;
    }
    if (((u8)D_00CBBDFD[0] & 1) == 0) {
        s0p = (u8 *)D_005900B0;
    } else {
        s0p = (u8 *)D_0058E7F0;
    }
    func_001A58E0(**(s32 **)(s0p + 4), 1);
    func_001AAF50(**(s32 **)(s0p + 4), 0, 0, 0);
    func_001AAF40(**(s32 **)(s0p + 4), 1);
    D_00591E4E[0] = s0p[0];
    D_00CBBE04[0] = D_00591E4D[0];
    D_00CBBE05[0] = D_00591E4E[0];
}
