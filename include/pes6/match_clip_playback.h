#ifndef PES6_MATCH_CLIP_PLAYBACK_H
#define PES6_MATCH_CLIP_PLAYBACK_H

#include "pes6/heading_motion.h"

enum { MOTION_LIBRARY_CLIPS = 0x613 };
/* The follow-up clip and its starting percentage are stored in the descriptor's first eight bytes.
 */
typedef struct {
    u8 : 7;
    u8 fullClip : 1;
    u8 pad01[3];
    u16 followPercent, followClip;
} MotionFollowup;
typedef union {
    s32 frames;
    struct {
        u16 low, high;
    } halves;
} MotionLength;
typedef struct {
    f32 rate;
    u8 pad04[0x1788];
    HeadingDescriptor *clips[MOTION_LIBRARY_CLIPS];
    MotionLength length[MOTION_LIBRARY_CLIPS];
} MotionLibrary;
static inline MotionLibrary *clipLibrary(void) { return (MotionLibrary *)D_003E74CC; }
typedef struct {
    u8 pad00[9];
    s8 bits;
} PlaybackFlags;
struct MotionPlaybackOwner {
    u8 pad00[0x10];
    PlaybackFlags *flags;
};
extern s32 func_00208280(s32 clip), func_002082C0(s32 clip), func_002082F0(s32 clip);
extern s32 func_00207AC0(u16 clip, s32 percent, s32 fullClip, f32 rate);
extern void func_00207390(HeadingMotion *motion, s32 ticks);

static inline void selectClip(HeadingMotion *playback, s32 clip, u32 frame) {
    u16 current;
    if (playback->clip != (u16)clip)
        playback->changed = 1;
    playback->rate = clipLibrary()->rate;
    playback->clip = clip;
    playback->frame = (f32)frame;
    playback->ticks = 0;
    playback->descriptor = func_00208310((u16)clip);
    current = playback->clip;
    if (!(playback->clip < 0x59a || clipLibrary()->clips[(u16)clip]))
        return;
    if (!(playback->frame <= (f32)clipLibrary()->length[(u16)current].frames) ||
        playback->frame < 0.f)
        playback->frame = 0.f;
}

static inline void startBlend(HeadingMotion *playback, u16 clip, s32 frame, s32 ticks) {
    playback->rate = clipLibrary()->rate;
    playback->previousClip = playback->backupClip;
    playback->previousFrame = playback->backupFrame;
    playback->previousKey = playback->backupKey;
    playback->previousFlag = playback->backupFlag;
    playback->descriptor = func_00208310((u16)clip);
    playback->clip = clip;
    playback->frame = (f32)(u32)frame;
    playback->ticks = 0;
    ticks = (u8)((u32)(u8)ticks / (s32)clipLibrary()->rate);
    if (playback->blendTicks < (u8)ticks)
        playback->blendTicks = ticks;
    playback->blend = (1.f / (f32)(u32)playback->blendTicks);
    playback->blend += (1.f / (f32)(u32)playback->blendTicks) / 10.f;
    playback->wrapped = 1;
}

#endif
