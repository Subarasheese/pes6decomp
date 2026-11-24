/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_clip_playback.h"

void func_00209A00(HeadingMotion *playback, u16 clip, s32 frame) {
    u16 current;
    if (playback->clip != clip)
        playback->changed = 1;
    playback->rate = clipLibrary()->rate;
    playback->clip = clip;
    playback->frame = (f32)(u32)frame;
    playback->ticks = 0;
    playback->descriptor = func_00208310(clip);
    current = playback->clip;
    if (!(playback->clip < 0x59a || clipLibrary()->clips[clip]))
        return;
    if (!(playback->frame <= (f32)clipLibrary()->length[current].frames) || playback->frame < 0.f)
        playback->frame = 0.f;
}
