/* compiler: mwcc-3.0.1b151 */

#include "types.h"
extern char *func_00BA9400(s32 side);
extern s32 func_00292BD0(void);
extern u8 D_00591BC4[];
extern u8 D_00591BC5[];

s32 func_009B6A60(s32 side) {
    const char *team = func_00BA9400(side);
    s32 difference, weight, enabled;
    f32 weightF, performance, margin;
    if (!func_00292BD0())
        return 0;
    if (func_00292BD0())
        weight = 6;
    else
        weight = 1;
    difference = D_00591BC4[0] * weight - D_00591BC5[0];
    enabled = func_00292BD0() != 0;
    weightF = func_00292BD0() ? 1.f : 0.f;
    margin = ((f32)difference * weightF / 18.f);
    performance = ((f32)((s8)team[0x15] * enabled + 50) / 99.f - 0.5f);
    return (s8)(s32)(-50.f + 99.f * (0.5f + ((margin + performance) / 2.f)));
}
