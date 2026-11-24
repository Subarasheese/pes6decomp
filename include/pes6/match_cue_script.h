#ifndef PES6_MATCH_CUE_SCRIPT_H
#define PES6_MATCH_CUE_SCRIPT_H

#include "types.h"
typedef struct {
    s32 opcode, first, second, third, fourth;
} CueCommand;
typedef struct {
    const CueCommand *commands;
} CueTrack;
typedef struct {
    u32 flags;
    f32 duration;
    u32 frame;
    f32 zoom, distance, parameter, offset, angle;
    u8 mode;
    s8 selection, style, focus, camera;
    u8 threshold, interval, pad27;
    f32 x, y, z;
    u8 effects[0x100];
    s32 moveMode, moveParameter;
    f32 moveDuration;
    u8 selectionState[12];
} CueRuntime;
typedef struct {
    u32 frame;
    f32 parameter, distance;
    s8 actor;
    s8 selection;
    u8 unused[2];
} CameraHistory;
typedef struct {
    const CueTrack *program;
    u32 dirty;
    u8 reserved08[0x208];
    CameraHistory history[4];
    f32 elapsed, duration;
    u8 reserved258[0xac];
    f32 defaultDuration;
    u32 defaultFlags, excluded, seen;
    u8 previous[4], reserved318, mode, limit[2], option[4];
    s8 weights[29];
    u8 order[29];
    s8 alternateWeights[29];
    u8 alternateOrder[29];
    u8 threshold, interval;
} CueDirector;

extern CueDirector D_005E2F70;
extern CueRuntime D_005E2FA0;
extern CameraHistory D_005E3180[4];
extern s32 D_005E2F78[], D_005E2F7C[], D_005E2F8C[];
extern u8 D_005E2F9C[], D_005E30E1[], D_005E30E2[], D_005E30E3[];
extern u32 D_005E3178[], D_005E317C[], D_005E2FA8[];
extern f32 D_005E2FA4[], D_005E30E4[];
extern void func_002BBD00(const CueTrack *const *tracks), func_002BB910(void), func_002BC540(void);

extern u32 D_005E2F74[];
extern s8 D_005E3290[], D_005E32CA[];
extern u8 D_005E32AD[], D_005E32E7[];
extern void func_002ADD60(u8 *, const s8 *, u8);
static inline void playTrack(const CueTrack *track) {
    const CueTrack *list[2] = {0};
    if (track != 0) {
        list[0] = track;
        if (D_005E2F74[0] & 1)
            func_002ADD60(D_005E32AD, D_005E3290, 29);
        if (D_005E2F74[0] & 2)
            func_002ADD60(D_005E32E7, D_005E32CA, 29);
        D_005E2F74[0] &= ~3u;
        func_002BC540();
        D_005E2F78[0] = -1;
        func_002BBD00(list);
    }
}

#endif
