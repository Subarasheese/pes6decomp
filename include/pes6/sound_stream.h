#ifndef PES6_SOUND_STREAM_H
#define PES6_SOUND_STREAM_H

#include "types.h"

enum {
    STREAM_PATH_LENGTH = 64,
    STREAM_PLAYLIST_CAPACITY = 48,
    STREAM_PRELOAD_COUNT = 36,
    SOUND_PLAN_ROWS = 8,
    SOUND_PLAN_STEPS = 32
};
typedef struct {
    s32 buffer, id, state, status, entry, flags, active, cacheState, linked[3], pending[3], action,
        reserved3C, field40, operation, hold, group, reserved50, asset;
    char path[STREAM_PATH_LENGTH];
    s32 channel, length, position, elapsedSamples, waitSamples, offset, advance, delay, startTick,
        waitTick, elapsedTicks, waitTicks, volume, direct, source;
} StreamLane;
typedef struct {
    s32 buffer, index, slot, hold, group, asset;
    char path[STREAM_PATH_LENGTH];
    s32 channel, length, position, elapsed, wait, offset, advance, delay, startTick, waitTick,
        elapsedTicks, reserved84, volume, direct, source;
} StreamTicket;
typedef struct {
    s32 current, slots[2], states[2], advance[2], read, write, capacity, count, spare, locked,
        reset;
    StreamTicket tickets[STREAM_PLAYLIST_CAPACITY];
} StreamPlaylist;
typedef struct {
    s32 resource;
    char path[STREAM_PATH_LENGTH];
    s32 owner, state, release, buffer, reserved54, reserved58;
} StreamPreload;
typedef struct {
    s32 command, arg[6];
} SoundStep;
typedef struct {
    s32 reserved00[2], read, write, state;
    SoundStep steps[SOUND_PLAN_STEPS];
} SoundRow;
typedef struct {
    s32 head, write, count, flags;
    SoundRow row[SOUND_PLAN_ROWS];
} SoundPlan;
extern StreamLane D_005850E0[];
extern StreamPreload D_005843F0[STREAM_PRELOAD_COUNT];
extern StreamPlaylist D_00588DB0[];
extern SoundPlan D_00585430[];
extern void func_00254B10(s32 group);

#endif
