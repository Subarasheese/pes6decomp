#ifndef PES6_HEADING_MOTION_H
#define PES6_HEADING_MOTION_H

#include "types.h"

typedef struct {
    u8 flags0, phase1, phase2, pad03[5];
    u16 eventFrame, duration;
    u8 pad0C, flags, pad0E[12];
    u16 frameDataOffset;
} HeadingDescriptor;
typedef struct {
    u8 pad00[4];
    HeadingDescriptor *descriptor;
    u8 pad08[32];
    float rate;
    u8 pad2C[4];
    u16 clip;
    u8 pad32[6];
    float frame;
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
