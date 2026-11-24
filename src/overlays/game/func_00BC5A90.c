/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_replay.h"

extern s32 func_00BCC4E0(void);
extern u16 func_009B4420(void);
extern f32 D_00591E60[];

static inline s32 magnitude(s32 value) { return value > 0 ? value : -value; }
s32 func_00BC5A90(const ReplayBuffer *buffer) {
    u16 n;
    s32 frame;
    if (func_00BCC4E0())
        return 0;
    if (!((f32)magnitude((s32)D_00591E60[0]) <= 2344.f))
        return 0;
    {
        frame = (u16)func_009B4420();
        for (n = 0; n < REPLAY_FRAMES; n++) {
            if ((f32)magnitude(buffer->frames[(u16)frame].ballPosition.x) > 13493.f &&
                magnitude(buffer->frames[(u16)frame].ballPosition.y) < 1136 &&
                (f32)magnitude(buffer->frames[(u16)frame].ballPosition.z) < 1707.f)
                return 1;
            frame = (u16)((u16)(frame + 1) % (u32)REPLAY_FRAMES);
        }
    }
    return 0;
}
