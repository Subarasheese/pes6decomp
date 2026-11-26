#ifndef PES6_TRAINING_MOTION_VARIANTS_H
#define PES6_TRAINING_MOTION_VARIANTS_H

#include "pes6/training_motion.h"

typedef struct {
    TrainingMotion motion;
    u8 reserved5C[4];
    float component60;
} TrainingExtendedMotion;

static inline s32 trainingExtendedMotionActive(const TrainingExtendedMotion *motion, s32 first,
                                               s32 second) {
    s32 active = 0;
    float zero = 0.0f;
    if (motion->motion.component[first] != zero || motion->motion.component[second] != zero ||
        motion->component60 != zero)
        active = 1;
    if (D_00591E67[Pes6MatchPlayer_Get(D_00592810[0])->team] == 1)
        active = 1;
    return active;
}

static inline void trainingSelectPlayerSides(TrainingSideSelection *selection, s32 firstOpposite,
                                             s32 secondOpposite) {
    const Pes6MatchPlayer *player = Pes6MatchPlayer_Get(D_00592810[0]);
    selection->first = D_00591E4F[(player->side ^ firstOpposite) * 2];
    selection->second = D_00591E50[(player->side ^ secondOpposite) * 2];
}

#endif
