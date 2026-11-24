/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_clip_playback.h"

s32 func_00207D10(HeadingMotion *playback) {
    if (playback->ticks == 0x7fff)
        return 1;
    if (playback->blendTicks)
        return 0;
    if (playback->wrapped)
        return 0;
    if (playback->frame < playback->rate / clipLibrary()->rate && !playback->changed)
        return 1;
    return 0;
}
