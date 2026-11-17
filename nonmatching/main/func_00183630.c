/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001A3850(void *);
s32 func_00188EC0(void *, void *, s32, s32);

s32 func_00183630(void *m, f32 *out, f32 *out2, s32 a3, f32 f22) {
    f32 w[4];
    f32 q[4];
    f32 p[4];
    s32 mode[4];
    f32 n[4];
    f32 v[4];
    s32 i;
    f32 k = 0.2f;
    f32 t, x, a, b, c, aw;

    func_001A3850(w);
    if (w[0] <= 0.0f) mode[2] = 1; else mode[2] = 0;
    if (w[2] <= 0.0f) mode[3] = 2; else mode[3] = 3;
    for (i = 0; i < 2; i++) {
        if (func_00188EC0(q, p, mode[i + 2], a3) == 0) continue;
        t = q[1] * k;
        q[1] = t;
        if (!(t <= -1.0f)) continue;
        v[1] = t;
        x = k * -q[0];
        t = q[2] * k;
        q[0] = x;
        v[0] = x;
        q[2] = t;
        v[2] = t;
        __asm__ volatile("lqc2 $vf8, 0(%0)\n lqc2 $vf4, 0(%1)\n lqc2 $vf5, 16(%1)\n lqc2 $vf6, 32(%1)\n lqc2 $vf7, 48(%1)\n vmulax.xyzw ACC, $vf4, $vf8x\n vmadday.xyzw ACC, $vf5, $vf8y\n vmaddaz.xyzw ACC, $vf6, $vf8z\n vmaddw.xyzw $vf8, $vf7, $vf0w\n sqc2 $vf8, 0(%0)" : : "r"(v), "r"(m) : "memory");
        aw = v[3];
        if (aw < 0.0f) aw = -aw;
        aw = (v[3] = aw, aw);
        x = v[0];
        if (!(x <= aw)) continue;
        if (x < -aw) continue;
        a = v[1];
        if (!(a <= aw)) continue;
        if (a < -aw) continue;
        b = v[2];
        if (!(b <= aw)) continue;
        if (b < -aw) continue;
        n[1] = f22;
        out[0] = q[0];
        out[1] = q[1];
        out[2] = q[2];
        n[0] = -p[0];
        n[2] = p[2];
        if (!(0.0f == f22)) {
            __asm__ volatile("lqc2 $vf4, 0(%0)\n vmul.xyz $vf5, $vf4, $vf4\n vaddy.x $vf5, $vf5, $vf5y\n vaddz.x $vf5, $vf5, $vf5z\n vrsqrt Q, $vf0w, $vf5x\n vsub.w $vf4, $vf0, $vf0\n vwaitq\n vmulq.xyz $vf4, $vf4, Q\n sqc2 $vf4, 0(%0)" : : "r"(n) : "memory");
        }
        c = n[2];
        out2[0] = n[0];
        out2[1] = n[1];
        out2[2] = c;
        return 1;
    }
    return 0;
}
