/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_clip_playback.h"

s32 func_00207920(HeadingMotion *playback) {
    s32 first = func_002082F0(playback->clip);
    s32 last, duration, result;
    if ((s32)playback->frame <= first)
        result = 0;
    else {
        last = func_002082C0(playback->clip);
        if (!last || (s32)playback->frame < last) {
            duration = func_00208280(playback->clip);
            result = (((s32)playback->frame - first) * 10000) / duration;
        } else
            result = 10000;
    }
    return result;
}
