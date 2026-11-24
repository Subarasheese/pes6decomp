#ifndef PES6_MATCH_REPLAY_H
#define PES6_MATCH_REPLAY_H

#include "types.h"
#include "pes6/ball.h"
#include "pes6/match_player.h"
enum { REPLAY_FRAMES = 300, REPLAY_SLOTS = 23, REPLAY_MISSING = 0x7fff, REPLAY_NO_MARKER = 0xffff };
typedef struct {
    s16 x, y, z;
} ReplayPoint;
typedef struct {
    s16 x, y, z, w;
} ReplayQuaternion;
typedef struct {
    f32 x, y, z, w;
} ReplayPose;
typedef struct {
    f32 x, y, z, w;
} __attribute__((aligned(16))) ReplayActorPosition;
typedef union {
    struct {
        f32 x, y, z;
    } position;
    u32 words[3];
} ReplayBallPosition;
struct Pes6BallModel {
    u8 reserved00[0x40];
    ReplayPose pose;
};
/* The first four bytes belong to the allocation. Each ring node points to a frame after this
 * header. */
typedef struct {
    ReplayPoint position;
    u8 state, reserved07, activity;
    u8 style : 3, value : 5;
    u16 low, high;
    u8 mode;
    u8 blend : 2, paused : 1, flag3 : 1, flag4 : 1, unused : 3;
    u32 primaryClip : 11, flag11 : 1, flag12 : 1, secondaryClip : 11, unused18 : 8;
    u16 facing, otherFacing;
    f32 animationFrame, otherFrame;
    u8 modelMode, modelA, modelB, modelC;
} ReplaySlot;
typedef struct {
    ReplaySlot players[REPLAY_SLOTS];
    ReplayQuaternion ballOrientation;
    ReplayPoint ballPosition;
    u8 ballState, reserved34B;
    u16 marker, otherMarker;
    u8 flag350, flag351, reserved352[2];
} ReplayFrame;
typedef struct {
    u32 header;
    ReplayFrame frames[REPLAY_FRAMES];
} ReplayBuffer;
typedef struct ReplayNode {
    struct ReplayNode *previous;
    ReplayFrame *frame;
    struct ReplayNode *next;
} ReplayNode;
typedef struct {
    ReplayActorPosition position;
    u16 facing, movementAngle, animation;
    u8 active, paused, mode, blend, reserved1A[2];
    f32 time;
    u8 poseStyle, poseValue, poseActivity, reserved23;
    u16 poseLow, poseHigh;
    u8 modelMode, modelA, modelB, modelC, reserved2C[4];
} ReplayPlayerState;
typedef struct {
    u16 current, end, start;
    u8 reserved06, mode, reserved08[6], phase, reserved0F;
    u32 flags;
    f32 cursor, lastCursor;
    ReplayBallPosition ballPosition;
    u8 reserved28[8];
    ReplayPose ballPose;
    ReplayPlayerState players[REPLAY_SLOTS];
} ReplayCameraState;
extern ReplayBuffer *D_003E758C;
extern ReplayNode D_00CBAFD0[];
extern ReplayCameraState D_00CBAA00;
extern u16 D_00CBAA02[], D_00CBAA04[];
extern f32 D_00CBAA14[], D_00CBAA18[];
extern ReplayBallPosition D_00CBAA1C[];
extern s32 func_009B5C10(void), func_009B5CA0(void);
extern void func_009B5D20(void), func_009B5FD0(Pes6MatchPlayer *, u16),
    func_009B6630(s32 mode, f32 step);
typedef char check_replay_frame_size[sizeof(ReplayFrame) == 0x354 ? 1 : -1];
typedef char check_replay_actor_snapshot[sizeof(ReplayPlayerState) == 0x30 ? 1 : -1];
static inline ReplayFrame *replayNeighbor(s32 offset) {
    ReplayFrame *frame;
    switch (offset) {
    default:
        frame = D_00CBAFD0[D_00CBAA00.current].frame;
        break;
    case -1:
        frame = D_00CBAFD0[D_00CBAA00.current].previous->frame;
        break;
    case -2:
        frame = D_00CBAFD0[D_00CBAA00.current].previous->previous->frame;
        break;
    case 1:
        frame = D_00CBAFD0[D_00CBAA00.current].next->frame;
        break;
    case 2:
        frame = D_00CBAFD0[D_00CBAA00.current].next->next->frame;
        break;
    }
    return frame;
}

#endif
