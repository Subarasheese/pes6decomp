/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_0032F890(s32 *a, s32 *b, s32 c, s32 d);
extern u8 *func_002211F0(void);
extern u8 *func_00335370(void);
extern char D_00592980[];
extern char D_00592990[];

s32 func_0032FBD0(s32 *out, s32 a1, u32 idx, s32 kind, s32 a4) {
    s32 x, y;
    u32 s1;
    u32 lim;
    u8 mode;
    u8 *p;
    if (idx == 5) {
        *out = -1;
        return 0;
    }
    if (func_0032F890(&x, &y, kind, a4) == 0) {
        *out = -1;
        return 0;
    }
    idx = idx - 1;
    mode = func_002211F0()[6];
    if (mode == 2) {
        if (kind == 0x19 || idx >= 2) {
            s1 = -1;
        } else {
            p = func_00335370();
            s1 = *(u8 *)(D_00592990 + x * 26880 + y * 840) + *(u32 *)(p + idx * 4 + 4);
        }
    } else if (mode == 1) {
        s1 = -1;
    } else if (mode == 0) {
        if (kind == 0x19) {
            p = func_00335370();
            if (p[0x1040] == 1) {
                s1 = *(u32 *)(func_00335370() + 0x1044);
            } else {
                s1 = *(u32 *)(func_00335370() + 0x1048);
            }
        } else {
            s1 = *(u32 *)(D_00592980 + x * 26880 + y * 840 + idx * 4);
        }
    }
    lim = *(u32 *)(func_00335370() + idx * 4 + 4);
    if (s1 >= lim && s1 <= *(u32 *)(func_00335370() + idx * 4 + 4) + 99) {
        if (a1 == 2 || a1 == 3) s1 = -1;
    }
    *out = s1;
    return s1 != -1;
}
