/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *D_003E98B8;

void func_001ABF00(void *arg0) {
    f32 var_f6;
    f32 f7, f5, t0, t1, t2, r0, r1, r2;
    s32 base;
    u8 *e0;
    u8 *e1;

    var_f6 = M2C_FIELD(arg0, f32 *, 0x60);
    f7 = M2C_FIELD(arg0, f32 *, 0x64);
    f5 = M2C_FIELD(arg0, f32 *, 0x5C);
    base = M2C_FIELD(D_003E98B8, s32 *, 8);
    if (var_f6 < 0.87f) {
        var_f6 = ((var_f6 - 0.87f) / 2.0f) + 0.87f;
    }
    if (!(var_f6 <= 1.006f)) {
        var_f6 = ((var_f6 - 1.006f) / 2.0f) + 1.006f;
    }
    e0 = (u8 *)base + M2C_FIELD(arg0, u8 *, 0x3C) * 0xC;
    e1 = (u8 *)base + M2C_FIELD(arg0, u8 *, 0x3D) * 0xC;
    t1 = M2C_FIELD(e1, f32 *, 4);
    t2 = M2C_FIELD(e0, f32 *, 8);
    t0 = M2C_FIELD(e0, f32 *, 0);
    r0 = f5 * (1.07f * t0);
    r1 = var_f6 * (1.11f * t1);
    r2 = f7 * (1.07f * t2);
    M2C_FIELD(arg0, f32 *, 0x70) = r0;
    M2C_FIELD(arg0, f32 *, 0x74) = r1;
    M2C_FIELD(arg0, f32 *, 0x78) = r2;
    M2C_FIELD(arg0, f32 *, 0x7C) = M2C_FIELD(arg0, f32 *, 0x60);
}
