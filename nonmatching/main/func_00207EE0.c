/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E74CC;
extern char D_00375B30[];
void func_00103B88(void *dst, void *mat, void *vec);
void func_001040A0(void *mat, void *src, s32 a2, s32 a3, f32 ang);

f32 func_00207EE0(f32 *out, u8 *obj, s32 a2, s32 a3) {
    f32 res[4] __attribute__((aligned(16)));
    f32 vec[4] __attribute__((aligned(16)));
    f32 lb[4] __attribute__((aligned(16)));
    f32 la[4] __attribute__((aligned(16)));
    f32 mat[12] __attribute__((aligned(16)));
    s16 *pa;
    s16 *pb;
    f32 *g;
    f32 s;
    f32 x, y, z;
    f32 ang;
    s32 lim;

    lim = *(s32 *)((u8 *)D_003E74CC + *(s16 *)(obj + 4) * 4 + 0x2FD8);
    a2 = *(s32 *)(obj + 8);
    if (a2 + 2 < lim && (a2 % 2) != 0) {
        pa = *(s16 **)(obj + 16);
        pb = *(s16 **)(obj + 20);
        if (obj[6] == 0) {
            vec[0] = 0.5f * (f32)(pa[0] + pb[0]);
        } else {
            vec[0] = 0.5f * (f32)(-(pa[0] + pb[0]));
        }
        pa = *(s16 **)(obj + 16);
        pb = *(s16 **)(obj + 20);
        vec[1] = 0.5f * (f32)(-(pa[1] + pb[1]));
        pa = *(s16 **)(obj + 16);
        pb = *(s16 **)(obj + 20);
        vec[2] = 0.5f * (f32)(-(pa[2] + pb[2]));
    } else {
        pa = *(s16 **)(obj + 16);
        if (obj[6] == 0) {
            vec[0] = (f32)pa[0];
        } else {
            vec[0] = (f32)(-pa[0]);
        }
        pa = *(s16 **)(obj + 16);
        vec[1] = (f32)(-pa[1]);
        pa = *(s16 **)(obj + 16);
        vec[2] = (f32)(-pa[2]);
    }
    ang = 9.58738019e-05f * (f32)(s16)(*(u16 *)(obj + 12) + 0x4000);
    func_001040A0(mat, D_00375B30, a2, a3, -ang);
    g = *(f32 **)(*(s32 *)obj + 0x1D8);
    la[0] = -g[0] * 0.2f;
    la[1] = -g[1] * 0.2f;
    la[2] = g[2] * 0.2f;
    la[3] = 1.0f;
    lb[3] = 1.0f;
    lb[0] = la[0];
    lb[1] = la[1];
    lb[2] = la[2];
    y = vec[1];
    z = vec[2];
    x = vec[0];
    vec[2] = z * 0.2f;
    vec[1] = y * 0.2f;
    vec[0] = 0.2f * -x;
    s = 8.0f * *(f32 *)(*(s32 *)obj + 0x8C + *(s16 *)(obj + 14) * 16);
    __asm__ volatile("lqc2 $vf4, 0(%0)\n qmtc2.ni %1, $vf5\n vmulx.xyzw $vf6, $vf4, $vf5x\n sqc2 $vf6, 0(%0)" : : "r"(vec), "r"(s) : "memory");
    vec[3] = 1.0f;
    func_00103B88(res, mat, vec);
    out[0] = 5.0f * -res[0];
    out[1] = -(5.0f * res[1]);
    out[2] = 5.0f * res[2];
    return out[2];
}
