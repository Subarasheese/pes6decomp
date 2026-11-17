/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 fabsf(f32 x);
extern s32 func_00129C60();
extern s32 func_00129B60();
extern void func_00103BB8(f32 *a, s32 b, f32 *c);
extern char D_003970B0[];

s32 func_001839A0(s32 arg0, f32 *arg1, s32 arg2) {
    f32 v[4];
    f32 m[16];
    
    f32 *tbl;
    s32 a4, a5, r, bits;
    f32 w, t, u;

    if (arg0 == 0) {
        tbl = (f32 *)((char *)arg1 + 0xC);
        if (arg2 == 2) {
            m[0] = 1.0f; m[5] = 1.0f; m[10] = 1.0f;
            m[12] = arg1[0]; m[13] = arg1[1]; m[14] = arg1[2];
        } else if (arg2 == 1) {
            m[0] = -20.0f; m[5] = -20.0f; m[10] = 20.0f;
            m[12] = 20.0f * -arg1[0];
            m[13] = 20.0f * -arg1[1];
            m[14] = 20.0f * arg1[2];
        } else if (arg2 == 0) {
            m[0] = -0.2f; m[5] = 0.2f; m[10] = 0.2f;
            m[12] = 0.2f * -arg1[0];
            m[13] = 0.2f * arg1[1];
            m[14] = 0.2f * arg1[2];
        }
    } else {
        tbl = (f32 *)D_003970B0;
        if (arg2 == 2) {
            m[12] = arg1[0]; m[13] = arg1[1]; m[14] = arg1[2];
            t = arg1[3];
        } else if (arg2 == 1) {
            m[12] = 20.0f * -arg1[0];
            m[13] = 20.0f * -arg1[1];
            m[14] = 20.0f * arg1[2];
            t = 20.0f * arg1[3];
        } else if (arg2 == 0) {
            m[12] = 0.2f * -arg1[0];
            m[13] = 0.2f * arg1[1];
            m[14] = 0.2f * arg1[2];
            t = 0.2f * arg1[3];
        }
        m[0] = t; m[5] = t; m[10] = t;
    }
    m[15] = 1.0f;
    m[1] = 0; m[2] = 0; m[3] = 0; m[4] = 0;
    m[6] = 0; m[7] = 0; m[8] = 0; m[9] = 0; m[11] = 0;
    func_00103BB8(m, func_00129C60(), m);
    func_00103BB8(m, func_00129B60(), m);
    a5 = 0x3F;
    a4 = 0;
    do {
        f32 *p = (f32 *)((char *)tbl + a4 * 12);
        v[0] = p[0];
        v[1] = p[1];
        v[2] = p[2];
        __asm__ volatile(
            "lqc2 $vf8, 0x0(%0)\n"
            "lqc2 $vf4, 0x0(%1)\n"
            "lqc2 $vf5, 0x10(%1)\n"
            "lqc2 $vf6, 0x20(%1)\n"
            "lqc2 $vf7, 0x30(%1)\n"
            "vmulax.xyzw ACC, $vf4, $vf8x\n"
            "vmadday.xyzw ACC, $vf5, $vf8y\n"
            "vmaddaz.xyzw ACC, $vf6, $vf8z\n"
            "vmaddw.xyzw $vf8, $vf7, $vf0w\n"
            "sqc2 $vf8, 0x0(%0)\n"
            : : "r"(v), "r"(m) : "memory");
        w = fabsf(v[3]);
        v[3] = w;
        r = 0;
        if (v[0] <= w) { if (v[0] < -w) r = 2; } else r = 1;
        if (v[1] <= w) { if (v[1] < -w) r |= 8; } else r |= 4;
        if (v[2] <= w) { if (v[2] < -w) r |= 0x20; } else r |= 0x10;
        a5 &= r;
        if (a5 == 0) return 0;
        a4++;
    } while ((u32)a4 < 8);
    return 1;
}
