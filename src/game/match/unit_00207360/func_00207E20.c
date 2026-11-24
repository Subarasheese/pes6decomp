/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_clip_playback.h"

s32 func_00207E20(HeadingMotion *playback) {
    s32 sample = 2 * playback->descriptor->eventFrame, hit;
    f32 delta, half;
    if (!playback->clip)
        hit = 0;
    else if (playback->blendTicks && !playback->advance)
        hit = 0;
    else if (playback->wrapped && !playback->advance)
        hit = 0;
    else {
        half = playback->rate / 2.f;
        delta = playback->frame - (f32)sample;
        if (delta < half && !(delta < -half))
            hit = 1;
        else
            hit = 0;
    }
    return hit;
}
