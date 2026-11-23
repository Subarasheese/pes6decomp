#ifndef PES6_TRAINING_MOTION_H
#define PES6_TRAINING_MOTION_H
#include "pes6/match_player.h"

typedef struct {
    u8 reserved[0x48];
    float component[5];
} TrainingMotion;
typedef struct {
    s32 reserved[2];
    s32 first;
    s32 second;
} TrainingSideSelection;

extern u8 D_00592810[];
extern u8 D_00591E67[];
extern u8 D_00591E4F[];
extern u8 D_00591E50[];

static inline s32 trainingMotionActive(const TrainingMotion *motion, int first, int second) {
    s32 active = 0;
    float zero = 0.0f;
    if (motion->component[first] != zero || motion->component[second] != zero)
        active = 1;
    if (D_00591E67[Pes6MatchPlayer_Get(D_00592810[0])->team] == 1)
        active = 1;
    return active;
}

static inline void trainingReadSideSelection(TrainingSideSelection *selection) {
    const Pes6MatchPlayer *player = Pes6MatchPlayer_Get(D_00592810[0]);
    selection->first = D_00591E4F[player->side * 2];
    selection->second = D_00591E50[player->side * 2];
}
#endif
