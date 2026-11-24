/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_replay.h"

extern u32 D_00591F38[];

void func_009B3C90(void) {
    u16 i;
    Pes6MatchPlayer *actor;
    D_00591F38[0] = D_00CBAA00.flags;
    Pes6Ball_Current->model->pose = D_00CBAA00.ballPose;
    actor = Pes6MatchPlayers;
    for (i = 0; i < REPLAY_SLOTS; i++, actor++) {
        ReplayPlayerState *record = &D_00CBAA00.players[i];
        Pes6PlayerInfo *motion = actor->info;
        motion->unk30 = record->animation;
        motion->active = record->active;
        motion->animationFrame = record->time;
        motion->field2D = record->paused;
        motion->field4D = record->blend;
        motion->field5B = record->mode;
        motion->appearance = func_00208310(record->animation);
        motion->fieldState->field1C = record->modelMode;
        motion->fieldState->field20 = record->modelA;
        motion->fieldState->field21 = record->modelB;
        motion->fieldState->field22 = record->modelC;
        func_0027A5B0(actor, record->poseValue);
        func_0027A550(actor, record->poseLow, record->poseHigh);
        func_0027A600(actor, record->poseStyle);
        func_0027A520(actor, record->poseActivity);
        func_0027A4A0(actor, 0);
    }
}
