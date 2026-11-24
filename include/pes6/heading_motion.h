#ifndef PES6_HEADING_MOTION_H
#define PES6_HEADING_MOTION_H

#include "types.h"

typedef struct {
    u8 flags0, phase1, phase2, pad03[5];
    u16 eventFrame, duration;
    u8 pad0C, flags, pad0E[12];
    u16 frameDataOffset;
} HeadingDescriptor;
struct MotionPlaybackOwner;
typedef struct {
    struct MotionPlaybackOwner *owner;
    HeadingDescriptor *descriptor;
    u8 pad08[32];
    float rate;
    u8 pad2C[4];
    u16 clip;
    u8 pad32[2];
    s16 ticks;
    u8 pad36[2];
    float frame;
    u16 previousClip;
    u8 pad3E[2];
    f32 previousFrame;
    u16 previousKey;
    u8 previousFlag, pad47;
    f32 blend;
    u8 blendTicks, advance, active, queued, changed, wrapped;
    u16 backupClip;
    f32 backupFrame;
    u16 backupKey;
    u8 backupFlag, pad5B, sideChanged;
} HeadingMotion;
typedef struct {
    u8 pad00[4];
    HeadingMotion *motion;
    u8 pad08[24];
    s32 duration;
    u8 pad24[2];
    u16 heading;
    u8 pad28[4];
    u16 turnAngle;
    u8 pad2E[32];
    u8 flags4E;
} HeadingActor;
typedef struct {
    u16 a, b;
} HeadingFrame16;
typedef struct {
    u8 a, b;
} HeadingFrame8;
extern float *D_003E74CC;
extern u16 D_00CBCD70[];
extern const HeadingFrame8 *func_00208330(s32 clip);
extern s32 func_00207D80(HeadingMotion *, s32 frame);
extern void func_00209A00(HeadingMotion *, s32 clip, s32 frame);
extern s32 func_00B33F40(HeadingActor *, u16, s32, s32);
extern s32 func_00B340A0(HeadingActor *, s32, s32);
extern s32 func_00B34000(HeadingActor *, s32, s32, s32);
extern void func_00B341F0(HeadingActor *, u16, u16);

#endif
