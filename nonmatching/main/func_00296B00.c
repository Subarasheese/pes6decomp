/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef unsigned int u128 __attribute__((mode(TI)));

extern char D_00375B30[];
extern char D_003FB060[];
extern char D_003FB070[];
extern char D_003FB080[];

f32 func_0011D238(f32);
void func_00103BB8(void *, void *, void *);
void func_00103F50(void *, void *, f32);
void func_00103FF8(void *, void *, f32);
void func_001040A0(void *, void *, f32);
void func_0017C010(void *, s32, void *);

void func_00296B00(u8 *p, f32 fa, f32 fb, f32 fc) {
    f32 x, y, z, t, u;
    u128 m1[4];
    u128 m2[4];
    u128 m0[4];
    u128 q0, q1, q2, q3;
    u8 *o = *(u8 **)p;
    x = *(f32 *)(p + 0x40);
    y = *(f32 *)(p + 0x44);
    z = *(f32 *)(p + 0x48);
    q0 = *(u128 *)(o + 0x90);
    q1 = *(u128 *)(o + 0xB0);
    q2 = *(u128 *)(o + 0xA0);
    q3 = *(u128 *)(o + 0xC0);
    *(u128 *)(p + 0x10) = q0;
    *(u128 *)(p + 0x20) = q2;
    *(u128 *)(p + 0x30) = q1;
    *(u128 *)(p + 0x40) = q3;
    if (fa != 0.0f) {
        t = 0.15915494f * fa;
        t = t - func_0011D238(t);
        if (t > 0.5f) t = t - 1.0f;
        func_00103FF8(m1, D_00375B30, 3.1415927f * (2.0f * t));
        *(u128 *)D_003FB060 = m1[0];
        *(u128 *)D_003FB070 = m1[1];
        *(u128 *)D_003FB080 = m1[2];
        func_00103BB8(p + 0x10, D_003FB060, p + 0x10);
    }
    if (fc != 0.0f) {
        t = 0.15915494f * fc;
        t = t - func_0011D238(t);
        if (t > 0.5f) t = t - 1.0f;
        func_00103F50(m2, D_00375B30, 3.1415927f * (2.0f * t));
        *(u128 *)D_003FB060 = m2[0];
        *(u128 *)D_003FB070 = m2[1];
        *(u128 *)D_003FB080 = m2[2];
        func_00103BB8(p + 0x10, D_003FB060, p + 0x10);
    }
    if (fb != 0.0f) {
        t = 0.15915494f * fb;
        t = t - func_0011D238(t);
        if (t > 0.5f) t = t - 1.0f;
        func_001040A0(m0, D_00375B30, 3.1415927f * (2.0f * t));
        *(u128 *)D_003FB060 = m0[0];
        *(u128 *)D_003FB070 = m0[1];
        *(u128 *)D_003FB080 = m0[2];
        func_00103BB8(p + 0x10, D_003FB060, p + 0x10);
    }
    *(f32 *)(p + 0x40) = x;
    *(f32 *)(p + 0x44) = y;
    *(f32 *)(p + 0x48) = z;
    *(f32 *)(p + 0x4C) = 1.0f;
    func_0017C010(*(void **)p, 0, p + 0x10);
}
