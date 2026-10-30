/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3350(void *, s32, s32);
extern void func_00285080(s32);
extern void *Pes6Ball_Current;

s32 func_00AD23F0(void *arg0, s16 arg1, s32 arg2, s32 arg3) {
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;

    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1458) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x14);
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x18);
    M2C_FIELD(Pes6Ball_Current, s16 *, 0x1450) = arg1;
    M2C_FIELD(Pes6Ball_Current, u16 *, 0x144C) = (u16) M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A);
    M2C_FIELD(Pes6Ball_Current, u8 *, 0x144E) = (u8) M2C_FIELD(Pes6Ball_Current, u8 *, 0x6C);
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x1444) = arg2;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x1440) = (s32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x74);
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1448) = (f32) (arg3 * -0xBC);
    M2C_FIELD(Pes6Ball_Current, s8 *, 0x144F) = 4;
    temp_s0 = func_009B3350(Pes6Ball_Current, (s32) (14489.0f * (f32) M2C_FIELD(arg0, s16 *, 0x14)), 0);
    var_s1 = 0;
loop_1:
    func_00285080(4);
    temp_f0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
    if (temp_f0 <= 0) {
        var_v0 = -temp_f0;
    } else {
        var_v0 = temp_f0;
    }
    if ((f32) var_v0 <= 13529.0f) {
        temp_f0_2 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
        if (temp_f0_2 <= 0) {
            var_v0_2 = -temp_f0_2;
        } else {
            var_v0_2 = temp_f0_2;
        }
        if (((f32) var_v0_2 <= 8793.0f) && ((u32) temp_s0 >= func_009B3350(Pes6Ball_Current, temp_f0, temp_f0_2))) {
            var_s1 += 1;
            if (var_s1 < 0x40) {
                goto loop_1;
            }
        }
    }
    return var_s1 * 4;
}
