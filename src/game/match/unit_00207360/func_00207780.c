/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_clip_playback.h"

void func_00207780(HeadingMotion *playback, u16 clip, u32 frame, s32 ticks) {
    u32 lowTicks = (u8)ticks;
    startBlend(playback, clip, frame, lowTicks);
}
