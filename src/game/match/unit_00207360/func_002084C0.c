/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_clip_playback.h"

void func_002084C0(HeadingMotion *playback) {
    const MotionFollowup *d = (const MotionFollowup *)playback->descriptor;
    s32 percent = d->followPercent;
    s32 clip = d->followClip;
    s32 whole;
    if (percent > 10000)
        percent %= 10000;
    whole = d->fullClip;
    selectClip(playback, clip, 0);
    playback->frame = (f32)func_00207AC0((u16)clip, percent, whole, playback->rate);
    func_00207390(playback, 4);
}
