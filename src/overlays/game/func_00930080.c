/* compiler: mwcc-3.0.1b151 */
#include "pes6/heading_motion.h"
#include "pes6/match_player.h"
extern const HeadingDescriptor *func_00208310(s32 clip);
extern s32 D_00592260[];
extern s32 func_00A08020(s32 clip), func_009F4DC0(s32 frames, f32 rate);
typedef struct {
    u8 reserved00[0x2fd8];
    s32 counts[0x59a];
} ClipFrameCounts;
static inline s32 animationFrameCount(u16 clip) {
    const ClipFrameCounts *table = (const ClipFrameCounts *)D_003E74CC;
    return *(clip + table->counts);
}
s32 func_00930080(const Pes6MatchPlayer *player, s32 clip, s32 end, f32 frame, f32 rate) {
    const HeadingFrame8 *weights = func_00208330(clip);
    u16 clipId = (u16)clip;
    s32 maxWeight, total;
    f32 last;
    if (clipId < 0x59a) {
        switch (clipId) {
        case 0x1cc:
            end = animationFrameCount(clipId) - 2;
            break;
        case 706:
        case 915:
        case 728:
        case 8:
        case 753:
        case 382:
            if (end)
                break;
            /* Use the descriptor when no end frame was supplied. */
        default:
            end = func_00208310((u16)clip)->eventFrame * 2;
            break;
        }
        if (!func_00A08020(clip)) {
            D_00592260[0] = 256;
            return func_009F4DC0((s32)((f32)end - frame), rate) * 256 + 256;
        }
    }
    total = 0;
    maxWeight = 0;
    last = (f32)end + rate / 2.f;
    for (; frame <= last; frame += rate) {
        s32 weight = weights[(s32)frame / 2].b + 1;
        total += weight;
        if (maxWeight < weight)
            maxWeight = weight;
    }
    D_00592260[0] = maxWeight;
    return total;
}
