/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_003AB6D0[];
extern char D_003AB720[];

s32 func_002730A0(u8 *arg0, s32 arg1) {
    f32 b1[31] __attribute__((aligned(16)));
    s16 a1[36] __attribute__((aligned(16)));
    f32 b3[31] __attribute__((aligned(16)));
    s16 a3[36] __attribute__((aligned(16)));
    f32 b2[31] __attribute__((aligned(16)));
    s16 a2[36] __attribute__((aligned(16)));
    u16 u;
    s32 l1, l2, i, r, k;
    u8 *q = arg0 + 8;

    if (q[0] != 0) return 1;
    if (q[1] != 0) return 2;
    if (arg0[3] > 0) {
        for (k = 0; k < 36; k++) a1[k] = ((s16 *)D_003AB6D0)[k];
        for (k = 0; k < 31; k++) b1[k] = ((f32 *)D_003AB720)[k];
        for (k = 0; k < 36; k++) a2[k] = a1[k];
        for (k = 0; k < 31; k++) b2[k] = b1[k];
        u = ((u16 *)((char *)a2 + arg0[1] * 12))[arg0[2]];
        r = (u16)(s32)(b2[arg0[0]] * (f32)u);
        l1 = r > 0 ? (r < 0x15 ? 1 : 2) : 0;
        for (k = 0; k < 36; k++) a3[k] = a1[k];
        for (k = 0; k < 31; k++) b3[k] = b1[k];
        i = arg0[2] - arg0[3];
        if (i < 0) i = 0;
        u = ((u16 *)((char *)a3 + arg0[1] * 12))[i];
        r = (u16)(s32)(b3[arg0[0]] * (f32)u);
        l2 = r > 0 ? (r < 0x15 ? 1 : 2) : 0;
        if (l1 != l2 && l1 > 0) {
            if (q[2] == 0 || arg1 != 0) return 3;
        }
    }
    return 0;
}
