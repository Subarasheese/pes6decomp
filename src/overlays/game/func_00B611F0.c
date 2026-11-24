/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
s32 func_00B611F0(Pes6MatchPlayer **player, s32 heading, s32 margin) {
    f32 x = (*player)->x;
    f32 z;
    if (!(x < (13465.f - (f32)margin))) {
        if (heading <= 0x4000 || heading >= 0xc000)
            heading = 0x8000;
    } else if (x <= (-13465.f + (f32)margin) && heading >= 0x4000 && heading <= 0xc000)
        heading = 0;
    z = (*player)->z;
    if (!(z < (8729.f - (f32)margin))) {
        if (heading >= 0x8000 && heading <= 0x10000)
            heading = 0x4000;
    } else if (z <= (-8729.f + (f32)margin) && heading >= 0 && heading <= 0x8000)
        heading = 0xc000;
    if (!(x < (13465.f - (f32)margin)) && !(z < (8729.f - (f32)margin))) {
        if (heading <= 0x4000 || heading >= 0x8000)
            heading = 0x4000;
    } else if (!(x < (13465.f - (f32)margin)) && z <= (-8729.f + (f32)margin)) {
        if (heading <= 0x8000 || heading >= 0xc000)
            heading = 0xc000;
    } else if (x <= (-13465.f + (f32)margin) && !(z < (8729.f - (f32)margin))) {
        if (heading >= 0x4000)
            heading = 0x4000;
    } else if (x <= (-13465.f + (f32)margin) && z <= (-8729.f + (f32)margin)) {
        if (heading <= 0xc000)
            heading = 0xc000;
    }
    return heading;
}
