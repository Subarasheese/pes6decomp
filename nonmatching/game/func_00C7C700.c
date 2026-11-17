/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00CCBF90[];
extern char D_00CCBF50[];
extern s32 D_00CB4CB0[];
extern s32 func_00C7C940(s32 a);
extern s32 func_00C7C830(s32 a);
extern s32 func_001F08B0(s32 a);
extern void func_001C78F8(void *a, s32 b, s32 c, s32 d);
char *func_00C7C700(s32 a0) {
    s32 x, v, p, q, r, s;
    x = func_00C7C940(*(s32 *)D_00CCBF90);
    v = func_00C7C830(*(s32 *)D_00CCBF90);
    if (!(x < 16 && x >= 8)) {
        x = 11;
    }
    if (!(v < 16 && v >= 8)) {
        v = 10;
    }
    p = D_00CB4CB0[x - 8];
    q = D_00CB4CB0[v - 8];
    if (a0 != 0) {
        r = func_001F08B0(q);
        s = func_001F08B0(p);
        func_001C78F8(D_00CCBF50, a0, r, s);
    } else {
        r = func_001F08B0(0xB004A);
        s = func_001F08B0(q);
        v = func_001F08B0(p);
        func_001C78F8(D_00CCBF50, r, s, v);
    }
    return D_00CCBF50;
}
