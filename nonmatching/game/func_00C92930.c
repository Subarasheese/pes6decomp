/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u8 *D_003EA8AC;
extern char D_00CA8A80[];
extern char D_00CA8A84[];
extern char D_00CA8A8C[];
extern s32 func_00C8B210(void);
extern s32 func_00C72100(s32 a);
extern void func_00C89590(s32 a, f32 *v);
extern void func_00C897C0(s32 a, s32 b);
extern void func_00C896E0(s32 a, s32 b, f32 x, f32 y);
extern void func_00C72290(s32 a, s32 b);

void func_00C92930(void) {
    u8 *s1 = D_003EA8AC;
    s32 s2 = func_00C8B210();
    s32 s0 = 0, s3 = 0, s4, t;
    f32 f20;
    f32 vec[4];
    do {
        s32 v = func_00C72100(s0);
        if (s2 == 1 || v == 0 || !(s1[9] & 1)) {
            if (!(*(f32 *)(s1 + 0x10) <= 0.0f)) {
                *(f32 *)(s1 + 0x10) = 0.0f;
                s1[8] = (s1[8] & ~2) | 2;
            }
        }
        f20 = 0.0f;
        if ((s1[8] >> 1) & 1) {
            s1[8] = s1[8] & ~2;
            f20 = *(f32 *)(s1 + 0x10);
        }
        s4 = s0 ? 0x49 : 0x48;
        vec[0] = *(f32 *)D_00CA8A80;
        vec[1] = *(f32 *)D_00CA8A84;
        vec[3] = *(f32 *)D_00CA8A8C;
        vec[2] = *(f32 *)D_003EA8AC * f20;
        func_00C89590(s4, vec);
        func_00C897C0(s4, f20 > 0.0f);
        if (!(f20 <= 0.0f)) {
            u8 *g = D_003EA8AC;
            if (g && (u32)s0 < 2) {
                u8 *p = g + s3;
                p[9] = (p[9] & ~8) | 8;
                p[8] = (p[8] & ~1) | 1;
            }
        } else {
            u8 *g = D_003EA8AC;
            if (g && (u32)s0 < 2) {
                u8 *p = g + s3;
                p[9] = p[9] & ~8;
                p[8] = (p[8] & ~1) | 1;
            }
        }
        t = s1[8];
        if ((t >> 2) & 1) s1[8] = s1[8] & ~4;
        if ((s1[8] >> 3) & 1) {
            func_00C896E0(s0 ? 0x49 : 0x48, t, *(f32 *)(s1 + 0x14), *(f32 *)(s1 + 0x18));
            s1[8] = s1[8] & ~8;
        }
        if (s1[8] & 1) {
            u8 b = s1[9];
            s32 a5 = ((b >> 2) & 1) & ((b >> 1) & 1);
            s4 = ((b >> 3) & 1) & ((b >> 1) & 1);
            if (D_003EA8AC) func_00C897C0(s0 ? 0x49 : 0x48, a5);
            func_00C72290(s0, s4);
            s1[8] = s1[8] & ~1;
        }
        s0++;
        s1 += 0x14;
        s3 += 0x14;
    } while (s0 < 2);
}
