/* compiler: mwcc-3.0.1b151 */
#include "types.h"

/* Advance a scene actor through its clip, applying the course-specific speed and turns. */

typedef struct {
    float x, y, z;
} ScenePosition;
typedef struct {
    u8 pad00[0x1F];
    u8 mirror;
} SceneTrack;
typedef struct {
    u8 pad00[4];
    SceneTrack *track;
} SceneTrackOwner;
typedef struct {
    u8 pad00[0x24];
    SceneTrackOwner *anim;
} SceneModel;
typedef struct {
    u8 pad00[0x10];
    SceneModel *model;
    u8 pad14[0x1D8 - 0x14];
    ScenePosition *position;
    u8 pad1DC[0x1F0 - 0x1DC];
    u16 heading;
} SceneActor;
typedef struct {
    SceneActor *actor;
    u8 active, pad05[3];
    s32 speed, baseSpeed;
    u16 clip;
    u8 mirror, pad13;
    u16 heading, direction;
    float rate;
    ScenePosition pos, velocity;
    float frame;
} SceneMotion;
typedef struct {
    float rate;
    u8 pad04[0x178C - 4];
    void *tracks[];
} SceneMotionBank;
typedef struct {
    u8 direction, speed;
} SceneFrame;
extern SceneMotionBank *D_003E74CC;
extern float D_00591BEC[];
extern SceneFrame *func_00208330(s32 clip);
extern s32 func_001A5F20(s32 category);
extern s32 func_00208210(s32 course);
extern s32 func_00BBB990(u16 direction, s32 speed);
extern s32 func_00BBB9C0(u16 direction, s32 speed);
extern void func_001AFD80(SceneTrack *track, void *clip, float frame);
extern void func_00132280(SceneTrack *track);
extern void func_001B36A0(SceneActor *actor, void *clip, s32 frame, u32 mirror);
static inline s32 scene_turn(SceneMotion *motion, s32 start, s32 stop, s32 degrees) {
    s32 frame = (s32)motion->frame;
    s32 delta = 0;
    s32 steps = (s32)(((float)((stop - start) / 2) / motion->rate) / D_003E74CC->rate);
    if (steps == 0)
        steps = 1;
    if (frame >= start && frame < stop) {
        delta = (motion->mirror == 0 ? 1 : -1) * (((degrees * 1000 / steps) * 182) / 2000);
    }
    return delta;
}
#define APPLY_PAIRED_CLIPS()                                                                       \
    switch (motion->clip) {                                                                        \
    case 0x5A2:                                                                                    \
        motion->baseSpeed = 0x500;                                                                 \
        motion->heading += (u16)scene_turn(motion, 68, 134, 115);                                  \
        motion->heading += (u16)scene_turn(motion, 212, 328, -180);                                \
        motion->heading += (u16)scene_turn(motion, 480, 520, 65);                                  \
        break;                                                                                     \
    case 0x5A1:                                                                                    \
        motion->baseSpeed = 0x600;                                                                 \
        motion->heading += (u16)scene_turn(motion, 88, 216, -110);                                 \
        motion->heading += (u16)scene_turn(motion, 240, 328, 125);                                 \
        break;                                                                                     \
    }

void func_00297DF0(SceneMotion *motion) {
    s32 prev = (s32)motion->frame;
    SceneFrame *frames = func_00208330(motion->clip);
    s32 course = func_00208210(func_001A5F20(5));
    s32 direction;
    u8 speed;
    SceneTrack *track;
    if (!motion->actor || !motion->active)
        return;
    motion->frame += motion->rate;
    switch (course) {
    case 0x5D:
        switch (motion->clip) {
        case 0x5A2:
            motion->baseSpeed = 0;
            break;
        case 0x5A3:
            motion->baseSpeed = 0;
            break;
        case 0x5A0:
            motion->baseSpeed = 0;
            break;
        case 0x5A1:
            motion->baseSpeed = 0;
            break;
        case 0x59D:
            motion->baseSpeed = 0;
            break;
        case 0x59F:
            motion->baseSpeed = 0;
            break;
        case 0x59C:
            motion->baseSpeed = 0;
            break;
        case 0x59E:
            motion->baseSpeed = 0;
            break;
        default:
            return;
        }
        break;
    case 173:
        switch (motion->clip) {
        case 0x59A:
            motion->baseSpeed = 0x700;
            motion->heading += (u16)scene_turn(motion, 96, 148, 90);
            break;
        }
        break;
    case 1:
        APPLY_PAIRED_CLIPS();
        break;
    case 2:
        APPLY_PAIRED_CLIPS();
        break;
    case 3:
        APPLY_PAIRED_CLIPS();
        break;
    case 4:
        APPLY_PAIRED_CLIPS();
        break;
    case 5:
        APPLY_PAIRED_CLIPS();
        break;
    case 6:
        APPLY_PAIRED_CLIPS();
        break;
    case 7:
        switch (motion->clip) {
        case 0x5A0:
            motion->baseSpeed = 0x500;
            motion->heading += (u16)scene_turn(motion, 164, 288, -202);
            break;
        }
        break;
    case 8:
        switch (motion->clip) {
        case 0x59C:
            motion->baseSpeed = 0x500;
            motion->heading += (u16)scene_turn(motion, 164, 288, -202);
            break;
        }
        break;
    case 9:
        switch (motion->clip) {
        case 0x59C:
            motion->baseSpeed = 0x500;
            motion->heading += (u16)scene_turn(motion, 164, 288, -202);
            break;
        }
        break;
    case 10:
        switch (motion->clip) {
        case 0x5A0:
            motion->baseSpeed = 0x700;
            motion->heading += (u16)scene_turn(motion, 280, 336, -166);
            break;
        }
        break;
    case 11:
        switch (motion->clip) {
        case 0x59C:
            motion->baseSpeed = 0x700;
            motion->heading += (u16)scene_turn(motion, 280, 336, -166);
            break;
        }
        break;
    case 12:
        switch (motion->clip) {
        case 0x59C:
            motion->baseSpeed = 0x700;
            motion->heading += (u16)scene_turn(motion, 280, 336, -166);
            break;
        }
        break;
    case 16:
        switch (motion->clip) {
        case 0x59C:
            motion->baseSpeed = 0x500;
            motion->heading += (u16)scene_turn(motion, 164, 288, -202);
            break;
        case 0x59E:
            motion->baseSpeed = 0x700;
            motion->heading += (u16)scene_turn(motion, 280, 336, -166);
            break;
        }
        break;

    default:
        return;
    }
    speed = frames[prev / 2].speed;
    direction = frames[prev / 2].direction * 256;
    if (motion->mirror)
        direction = 65536 - direction;
    if (direction < 32768)
        motion->direction = motion->heading + direction;
    else {
        direction = 65536 - direction;
        motion->direction = motion->heading - direction;
    }
    motion->speed = (motion->baseSpeed * speed) / 256;
    if (motion->speed == 0) {
        motion->velocity.x = 0;
        motion->velocity.z = 0;
    } else {
        motion->velocity.x = (float)func_00BBB990(motion->direction, motion->speed) / D_00591BEC[0];
        motion->velocity.z = (float)func_00BBB9C0(motion->direction, motion->speed) / D_00591BEC[0];
        motion->pos.x += motion->velocity.x;
        motion->pos.z += motion->velocity.z;
    }
    motion->actor->position->x = motion->pos.x;
    motion->actor->position->z = motion->pos.z;
    motion->actor->heading = motion->heading;
    func_001AFD80(motion->actor->model->anim->track, D_003E74CC->tracks[motion->clip],
                  motion->frame);
    track = motion->actor->model->anim->track;
    track->mirror = motion->mirror;
    if (motion->mirror)
        func_00132280(track);
    {
        void *clipTrack = D_003E74CC->tracks[motion->clip];
        SceneActor *sceneActor = motion->actor;
        func_001B36A0(sceneActor, clipTrack, (s32)motion->frame, motion->mirror);
    }
}
