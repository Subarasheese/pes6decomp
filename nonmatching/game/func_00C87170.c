/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00C8B210(void);
extern void func_00C89220(s32 a0, s32 a1, s32 a2, s32 a3);
extern s32 func_00C8B0D0(s32 a0);
extern s32 sprintf(char *buf, char *fmt, s32 v);
extern void func_00C89280(s32 a0, char *buf, f32 a, f32 b);
extern f32 func_00C890E0(s32 a0);
extern void func_00C891A0(s32 a0, f32 a, f32 b);
extern void func_00C891E0(s32 a0, s32 a1);
extern s32 D_00CCCDCC[];
extern s32 D_00CCCDC8[];
extern u8 D_00CCCDD0[];
extern s8 D_00591DB5[];
extern char D_00CB4EF0[];
extern f32 D_00CCCDC0[];
extern f32 D_00CCCDC4[];
extern s16 D_003F7794[];

void func_00C87170(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 s0, s1, v1, t3;
    char buf[16];
    f32 f0;

    s0 = func_00C8B210();
    s1 = (*D_00CCCDCC);
    if (s1 != (*D_00CCCDC8)) {
        func_00C89220(2, a1, a2, a3);
        (*D_00CCCDD0) = (*D_00CCCDD0) & ~4;
        (*D_00CCCDC8) = s1;
        (*D_00CCCDD0) = ((*D_00CCCDD0) & ~2) | 2;
    }
    if (((*D_00CCCDD0) & 1) == 1 && !((*D_00CCCDD0) & 4) && !func_00C8B0D0(2) && (*D_00591DB5) == 0) {
        if (s1 >= 1000) s1 = 999;
        else if (s1 < 0) s1 = 0;
        sprintf(buf, D_00CB4EF0, s1);
        func_00C89220(2, a1, a2, a3);
        func_00C89280(2, buf, (*D_00CCCDC0), (*D_00CCCDC4));
        f0 = func_00C890E0(2);
        f0 = ((f32)(*D_003F7794) - f0) / 2.0f;
        func_00C891A0(2, f0 - 256.0f, (*D_00CCCDC4));
    }
    s1 = 0;
    if (((*D_00CCCDD0) & 1) && !((*D_00CCCDD0) & 4)) {
        if (s0 == 0 && func_00C8B0D0(2)) s1 = 1;
    }
    v1 = 1;
    t3 = 0;
    if (((*D_00CCCDD0) & 4) && !((*D_00CCCDD0) & 1)) t3 = 1;
    if (!t3 && !(((*D_00CCCDD0) & 4) && s0 == 1)) v1 = 0;
    if (s1 || v1) (*D_00CCCDD0) = ((*D_00CCCDD0) & ~2) | 2;
    if (!((*D_00CCCDD0) & 2)) return;
    (*D_00CCCDD0) = (*D_00CCCDD0) & ~2;
    if (s1) {
        func_00C891E0(2, 1);
        (*D_00CCCDD0) = ((*D_00CCCDD0) & ~4) | 4;
    } else if (v1) {
        func_00C891E0(2, 0);
        (*D_00CCCDD0) = (*D_00CCCDD0) & ~4;
    }
}
