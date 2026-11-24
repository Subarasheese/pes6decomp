/* compiler: mwcc-3.0.1b151 */

#include "types.h"

extern f32 D_00591BEC[];
extern f32 func_001CD9E0(f32 value);

s32 func_009631C0(s32 distance, s32 v, s32 acceleration) {
    s32 step = (s32)((f32)(acceleration << 8) / D_00591BEC[0]);
    s32 offset;
    s32 ticks;
    offset = (v / 2) / step;
    {
        f32 travel = (f32)distance * D_00591BEC[0] / (f32)step;
        ticks = (s32)func_001CD9E0(travel - (f32)(offset * offset)) - offset;
    }
    if (ticks < 0)
        ticks = 0;
    return ticks;
}
