/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_clip_playback.h"

/* The PAL compiler inlines the clip-start test here. */
static inline s32 startingClip(HeadingMotion *playback) {
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

void func_00207BE0(HeadingMotion *playback) {
    if (startingClip(playback)) {
        if (playback->descriptor->flags0 & 1)
            playback->frame = 0.f;
        else {
            s32 first = playback->descriptor->phase1;
            if (first)
                playback->frame = (f32)(s32)(first * 2);
        }
    } else if (!(playback->frame < (f32)(playback->descriptor->phase2 * 2)) &&
               playback->descriptor->phase1 < playback->descriptor->phase2)
        playback->frame = (f32)(playback->descriptor->phase1 * 2);
}
