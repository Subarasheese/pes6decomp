/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00103D80(void *, void *, void *, s32, f32);
f32 func_0011D628(f32, f32);
void func_0012B610(void *, void *, void *, s32, s32, f32);
void func_0012BE80(void *, void *);
void func_0012F4E0(void *, s32, f32);
f32 func_00131B60(f32);

s32 func_0012F250(u8 *a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    f32 *o = (f32 *)a0;
    struct { f32 v50[4]; f32 v60[4]; f32 v70[4]; f32 v80[4]; f32 v90[4]; } t;
    s32 r = 0;
    f32 f20, f21, f12, f13;

    if (*(s32 *)a0 == 0) return 0;
    if (*(s8 *)(a0 + 0x12C) != 0) {
        o[1] = o[1] + func_00131B60(o[2]);
    } else {
        *(u8 *)(a0 + 0x12C) = 1;
    }
    f13 = o[3];
    f12 = o[1];
    if (f12 < f13) {
        if (f12 < 0.0f) {
            if (a1 == 0) {
                o[1] = 0.0f;
            } else {
                o[1] = func_0011D628(f12, f13);
                o[1] = o[1] + o[3];
            }
        }
    } else if (a1 == 0) {
        o[1] = f13;
        r = 1;
    } else {
        o[1] = func_0011D628(f12, f13);
    }
    func_0012F4E0(a0, *(s32 *)a0, o[1]);
    f21 = o[0x120 / 4] / o[0x124 / 4];
    func_0012B610(t.v90, a0 + 0x80, a0 + 0xD0, a3, a4, f21);
    func_0012BE80(a0 + 0x10, t.v90);
    func_00103D80(t.v80, a0 + 0xE0, a0 + 0x90, a3, f21);
    __asm__ volatile(
        "lqc2 $vf8, 0x0(%0)\n"
        "lqc2 $vf4, 0x10(%1)\n"
        "lqc2 $vf5, 0x20(%1)\n"
        "lqc2 $vf6, 0x30(%1)\n"
        "lqc2 $vf7, 0x40(%1)\n"
        "vmulax.xyzw ACC, $vf4, $vf8x\n"
        "vmadday.xyzw ACC, $vf5, $vf8y\n"
        "vmaddz.xyzw $vf8, $vf6, $vf8z\n"
        "sqc2 $vf8, 0x0(%0)\n"
        "lqc2 $vf4, 0x0(%0)\n"
        "qmtc2.ni %2, $vf5\n"
        "vmulx.xyzw $vf6, $vf4, $vf5x\n"
        "sqc2 $vf6, 0x0(%0)\n"
        : : "r"(t.v80), "r"(a0), "r"(0xbf800000) : "memory");
    *(u32 *)&t.v80[3] = 0x3f800000;
    o[0x40 / 4] = t.v80[0];
    o[0x44 / 4] = t.v80[1];
    o[0x48 / 4] = t.v80[2];
    *(u32 *)(a0 + 0x4C) = 0x3f800000;
    t.v70[0] = o[0xB8 / 4];
    t.v70[1] = o[0xBC / 4];
    t.v60[0] = o[0x108 / 4];
    t.v60[1] = o[0x10C / 4];
    func_00103D80(t.v50, t.v60, t.v70, a3, f21);
    f20 = 1.0f - f21;
    o[0x68 / 4] = t.v50[0];
    o[0x6C / 4] = t.v50[1];
    o[0x60 / 4] = o[0x100 / 4] * f21 + o[0xB0 / 4] * f20;
    o[0x64 / 4] = o[0x104 / 4] * f21 + o[0xB4 / 4] * f20;
    func_00103D80(a0 + 0x50, a0 + 0xF0, a0 + 0xA0, a3, f21);
    o[0x70 / 4] = o[0x110 / 4] * f21 + o[0xC0 / 4] * f20;
    o[0x74 / 4] = o[0x114 / 4] * f21 + o[0xC4 / 4] * f20;
    o[0x78 / 4] = o[0x118 / 4] * f21 + o[0xC8 / 4] * f20;
    o[0x7C / 4] = o[0x11C / 4] * f21 + o[0xCC / 4] * f20;
    return r;
}
