/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_009B3070(u16, s32);
s32 func_009B34C0(f32, f32, f32, f32);
s32 func_00BBB990(u16, s32);
s32 func_00BBB9C0(u16, s32);
extern void *Pes6Ball_Current;
extern f32 D_00591BEC[];

s32 func_009630D0(void *arg0) {
    f32 temp_f20;
    s32 temp_v0;
    u16 temp_s0;

    temp_s0 = M2C_FIELD(arg0, u16 *, 0x10C);
    temp_f20 = (f32) func_00BBB9C0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), (s32) ((f32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) / D_00591BEC[0]));
    temp_v0 = func_009B3070(temp_s0, func_009B34C0(0.0f, 0.0f, (f32) func_00BBB990(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), (s32) ((f32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) / D_00591BEC[0])) - M2C_FIELD(arg0, f32 *, 0xF0), temp_f20 - M2C_FIELD(arg0, f32 *, 0xF8))) & 0xFFFF;
    if (temp_v0 >= 0x4000) {
        return -(temp_v0 != 0x4000);
    }
    return 1;
}
