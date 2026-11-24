#ifndef PES6_MATCH_CAMERA_PLAYBACK_H
#define PES6_MATCH_CAMERA_PLAYBACK_H

#include "pes6/match_player.h"
/* The info pointer is four bytes into each 0x240-byte match player entry. */
typedef struct {
    Pes6PlayerInfo *info;
    u8 reserved[sizeof(Pes6MatchPlayer) - sizeof(Pes6PlayerInfo *)];
} PlayerInfoSlot;
extern PlayerInfoSlot D_0058E5B4[];
typedef struct {
    u8 mode, actor, other, preset;
    s8 target;
    u8 reserved05[3];
    f32 duration, elapsed;
    u8 reserved10[0x18];
    f32 parameter;
    u8 reserved2C[0x40];
} MatchCameraState;
typedef struct {
    f32 x, y, z;
} MatchPosition;
typedef struct {
    u32 reserved[3];
    u32 flags;
    u32 reserved10;
} MatchCameraPreset;
extern MatchCameraState D_005E24B0;
extern u8 D_00591BE4[];
extern void *func_001C48E8(void *dest, s32 value, u32 size);
extern void func_00297390(void), func_002A96D0(void), func_00295C90(void), func_00295D40(void),
    func_00295DE0(void), func_002A6B20(void);
extern void func_002A9470(u8 actor), func_002A7A30(s32 preset), func_002A8830(s32 mode),
    func_002A94D0(s32 target), func_002A9570(s32 view), func_001A4800(s32 enabled);
extern void func_002A8940(f32 parameter), func_002A8C00(f32 amount), func_002A9210(f32 x),
    func_002A9200(f32 y), func_002A91F0(f32 z);
extern f32 func_002A95A0(void);
extern s32 func_00BBB8C0(s32 limit);
extern void Pes6MatchObj28_SetPosition(f32 x, f32 y, f32 z), func_002ABF20(u8 actor, u8 target);
extern void func_002A11B0(MatchPosition *position, u8 actor), func_002A7D00(u8 flags, u8 target),
    func_002A7F30(u8 flags, s32 mode, s8 target, s32 view, u16 frames);
extern u8 *func_002A96B0(s32 preset);
extern void func_00BBC060(u8 actor, u8 target, u8 flags, s32 view);
extern void func_00BBC290(u8 actor, s8 target, u8 flags, s32 view, f32 duration);
extern void func_00BBC510(u8 actor, u8 other, u8 preset, f32 parameter, f32 duration);
extern void func_00BBBD40(u8 actor, f32 duration);
static inline u32 matchPresetTracksActor(u8 preset) {
    const MatchCameraPreset *entry = (const MatchCameraPreset *)func_002A96B0(preset);
    return (entry->flags & 0x20) != 0;
}
static inline void setActorCameraOffsets(void) {
    func_002A8C00(0.6f);
    func_002A9210(0.0f);
    func_002A9200(0.2f);
    func_002A91F0(-0.4f);
}
static inline void resetMatchCamera(void) {
    switch (D_005E24B0.mode) {
    case 1:
    case 2:
    case 3:
    case 4:
        break;
    case 5:
        func_00297390();
        break;
    }
    func_001C48E8(&D_005E24B0, 0, sizeof(D_005E24B0));
    D_005E24B0.elapsed = 0.0f;
    D_005E24B0.actor = D_005E24B0.other = 23;
    D_005E24B0.preset = 43;
}

extern s32 func_00BBBFA0(u8 actor, u8 target);
extern void func_00BBBF40(u8 actor, u8 target), func_00BBBEE0(u8 actor, u8 target);
#endif
