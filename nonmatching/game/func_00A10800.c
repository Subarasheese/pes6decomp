/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_001CD9E0(f32);                             /* extern */
s32 func_00284380(s32, M2C_UNK, s32);               /* extern */
s32 func_009B33A0(void *, s32, s32);                /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BEC[];
extern char D_005926DE[];
extern char Pes6MatchSquads[];

s32 func_00A10800(void *arg0, s32 arg1) {
    f32 temp_f20;
    f32 temp_f21;
    f32 var_f12;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;
    u8 temp_a2;

    temp_a2 = M2C_FIELD(arg0, u8 *, 0x12);
    temp_f21 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
    temp_f20 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
    temp_a0 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a2 * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
    temp_s0 = func_00284380(((temp_a0 * -0x60) / 183) + ((u32) (temp_a0 * -0x60) >> 0x1F), 0, temp_a2 * 0x69);
    temp_v0 = func_009B33A0(arg0, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C));
    if (temp_v0 < 0) {
        var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    } else {
        var_f12 = (f32) temp_v0;
    }
    var_v0 = (s32) (((*(f32 *)D_00591BEC) * (f32) (s32) func_001CD9E0(var_f12)) / (f32) (temp_s0 + (*(u8 *)D_005926DE)));
    if (arg1 < var_v0) {
        var_v0 = arg1;
    }
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = temp_f21;
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = temp_f20;
    return var_v0;
}
