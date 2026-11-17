/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00591BEC[];
extern u32 func_009B33A0(void *p, s32 a, s32 b);
extern void func_00BD3BE0(void *p, s32 a);

void func_00B34AE0(void **arg0, s32 arg1, u32 arg2)
{
    f32 d = *(f32 *)D_00591BEC;
    f32 f;
    u32 s6, s4, s3, s2, s1, s7, s5, v;
    u8 *q;

    f = (f32)(arg1 << 13) / d; f = f * f; s6 = (u32)f;
    f = (f32)(arg1 * 29 << 8) / d; f = f * f; s4 = (u32)f;
    f = (f32)(arg1 * 25 << 8) / d; f = f * f; s3 = (u32)f;
    f = (f32)(arg1 * 19 << 8) / d; f = f * f; s2 = (u32)f;
    f = (f32)(arg1 * 13 << 8) / d; f = f * f; s1 = (u32)f;
    f = (f32)(arg1 * 13 << 7) / d; f = f * f; s7 = (u32)f;

    if (arg2 < 7) {
        if (arg2 == 1) s5 = s7;
        else if (arg2 == 2) s5 = s1;
        else if (arg2 == 3) s5 = s2;
        else if (arg2 == 4) s5 = s3;
        else if (arg2 == 5) s5 = s4;
        else if (arg2 == 6) s5 = s6;
    }

    q = (u8 *)*arg0;
    v = func_009B33A0(q, (s32)*(f32 *)(q + 0x6C), (s32)*(f32 *)(q + 0x70));

    if (s5 + 0x10000 < v) {
        if (v < s7) func_00BD3BE0(arg0, 1);
        else if (v < s1) func_00BD3BE0(arg0, 2);
        else if (v < s2) func_00BD3BE0(arg0, 3);
        else if (v < s3) func_00BD3BE0(arg0, 4);
        else if (v < s4) func_00BD3BE0(arg0, 5);
        else func_00BD3BE0(arg0, 6);
    } else if (v < s5) {
        if (s6 < v) func_00BD3BE0(arg0, 6);
        else if (s4 < v) func_00BD3BE0(arg0, 5);
        else if (s3 < v) func_00BD3BE0(arg0, 4);
        else if (s2 < v) func_00BD3BE0(arg0, 3);
        else if (s1 < v) func_00BD3BE0(arg0, 2);
        else func_00BD3BE0(arg0, 1);
    } else {
        func_00BD3BE0(arg0, arg2 & 0xFF);
    }
}
