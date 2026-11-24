/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_clip_playback.h"

void func_00209720(HeadingMotion *playback, s32 clip, f32 frame) {
    selectClip(playback, clip, 0);
    playback->frame = frame;
}
