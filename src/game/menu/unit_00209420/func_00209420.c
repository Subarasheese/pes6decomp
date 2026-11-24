/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_clip_playback.h"

void func_00209420(HeadingMotion *playback, s32 clip, s32 percent) {
    if (percent > 10000)
        percent = 10000;
    selectClip(playback, clip, 0);
    playback->frame = (f32)func_00207AC0(clip, percent, 1, playback->rate);
}
