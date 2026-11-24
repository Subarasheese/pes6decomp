#ifndef PES6_SOUND_PLAYBACK_H
#define PES6_SOUND_PLAYBACK_H

#include "types.h"

typedef struct {
    u32 asset;
    void *buffer;
    s32 channel, field0C, kind, frames, command, field1C, followPause, baseVolume, useGroupGain,
        option2C, stopOnEnd;
} PlaybackRequest;
typedef struct {
    PlaybackRequest request;
    s32 gap34, phase, cooldown, attackDuration, releaseDuration, attackFrame, releaseFrame;
    s32 dirty, gain, level, fadeTarget, fadeActive, current, fadeTicks, step, direction,
        accumulator, previous;
} PlaybackChannel;

enum { SOUND_PLAYBACK_CHANNELS = 8 };
enum {
    SOUND_FIELD_FRAMES,
    SOUND_FIELD_KIND,
    SOUND_FIELD_FOLLOW_PAUSE,
    SOUND_FIELD_BASE_VOLUME,
    SOUND_FIELD_LEVEL,
    SOUND_FIELD_COMMAND,
    SOUND_FIELD_STOP_ON_END,
    SOUND_FIELD_USE_GROUP_GAIN,
    SOUND_FIELD_ATTACK_FRAME,
    SOUND_FIELD_RELEASE_FRAME,
    SOUND_FIELD_ATTACK_DURATION,
    SOUND_FIELD_RELEASE_DURATION,
    SOUND_FIELD_PHASE,
    SOUND_FIELD_GAIN,
    SOUND_FIELD_DIRTY,
    SOUND_FIELD_PENDING_START,
    SOUND_FIELD_COOLDOWN,
    SOUND_FIELD_FADE_TARGET,
    SOUND_FIELD_FADE_ACTIVE,
    SOUND_FIELD_FADE_LEVEL,
    SOUND_FIELD_FADE_TICKS,
    SOUND_FIELD_FADE_STEP,
    SOUND_FIELD_FADE_DIRECTION,
    SOUND_FIELD_FADE_ACCUMULATOR,
    SOUND_FIELD_FADE_START
};
extern PlaybackChannel D_00583F80[SOUND_PLAYBACK_CHANNELS];
extern s32 func_00250E70(s32 channel, s32 field);
extern void func_002511D0(s32 channel, s32 field, s32 value);
extern void func_002503E0(s32 channel);
extern void func_0024EDC0(s32 channel, s32 setting);
extern void func_00250740(void);
extern void func_00250830(void);
extern void func_0024FF10(void);

#endif
