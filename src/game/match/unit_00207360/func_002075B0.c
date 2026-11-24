/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_clip_playback.h"

void func_002075B0(HeadingMotion *playback, s32 clip, s32 frame, s32 ticks) {
    PlaybackFlags *flags = playback->owner->flags;
    playback->advance = 1;
    playback->active = 1;
    if (!playback->sideChanged) {
        playback->sideChanged = 1;
        flags->bits ^= 1;
    }
    startBlend(playback, clip, frame, (u8)ticks);
    playback->queued = 0;
}
