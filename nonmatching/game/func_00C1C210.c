/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_001CD9E0(f32);                             /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_009B33A0(s32, s32);                        /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
s32 func_00A0FC40(void *, s32, s32);                /* extern */
s32 func_00A9B100(void *);                          /* extern */
extern void *Pes6Ball_Current;

void func_00C1C210(void *arg0) {
    f32 var_f12;
    s16 var_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a2;
    s32 var_s1;
    s32 var_v0;
    u16 temp_s0;

    temp_v0 = func_009B33A0((s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C));
    if (temp_v0 >= 0) {
        var_f12 = (f32) temp_v0;
    } else {
        var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    }
    var_s1 = (s32) func_001CD9E0(var_f12);
    temp_s0 = func_009B3480(arg0, M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C)) & 0xFFFF;
    var_v0 = (s32) M2C_FIELD(arg0, f32 *, 0xE0);
    if (var_v0 > 0) {

    } else {
        var_v0 = -var_v0;
    }
    if ((f32) var_v0 < 939.0f) {
        if (((func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), temp_s0) & 0xFFFF) < 0x31) && (var_s1 >= 0x81) && (var_s1 < 0x100) && ((func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), M2C_FIELD(Pes6Ball_Current, u16 *, 0x5C)) & 0xFFFF) >= 0x30) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0xA8), temp_s0) & 0xFFFF) < 0x61) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x801)) {
            var_s1 = 0x200;
        }
    }
    if (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 4) {
        if (((f32) M2C_FIELD(arg0, s16 *, 0x14) * M2C_FIELD(arg0, f32 *, 0xE0)) < -13209.0f) {
            var_a2 = 0x50;
        } else {
            var_a2 = 0xA0;
        }
    } else {
        temp_v0_2 = func_00A9B100(arg0);
        var_a2 = temp_v0_2 >> 1;
        if (temp_v0_2 < 0) {
            var_a2 = (s32) (temp_v0_2 + 1) >> 1;
        }
    }
    if (func_00A0FC40(arg0, var_s1, var_a2) == 0) {
        var_v1 = 1;
    } else {
        var_v1 = 2;
    }
    M2C_FIELD(arg0, s16 *, 0x18) = var_v1;
}
