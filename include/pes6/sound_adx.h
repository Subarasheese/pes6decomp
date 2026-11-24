#ifndef PES6_SOUND_ADX_H
#define PES6_SOUND_ADX_H

#include "types.h"

typedef struct {
    u8 active, done, pad[2];
    s32 (*poll)(void);
    void (*notify)(void);
} SoundCallback;
enum { SOUND_ADX_TRACKS = 4 };
typedef struct _adx_talk *SoundAdxTrack;
extern SoundCallback D_0053CF10[];
extern SoundAdxTrack D_00583330[SOUND_ADX_TRACKS];
extern s32 D_003E9B34;
extern SoundAdxTrack ADXT_Create(s32 channels, void *work, s32 size);
extern s32 ADXT_GetStat(SoundAdxTrack track);
extern void ADXT_Pause(SoundAdxTrack track, s32 pause);
extern void func_00168638(SoundAdxTrack track, void *buffer);
extern void func_001685D8(SoundAdxTrack track, char *path);
extern void ADXT_StartAfs(SoundAdxTrack track, s32 archive, s32 entry);
extern void func_0024F030(s32 channel, u32 asset, void *buffer);
extern void func_0024EEF0(s32 pause);
extern s32 func_0024EFC0(s32 channel);
static inline s32 audioUnavailable(void) { return !D_003E9B34; }

#endif
