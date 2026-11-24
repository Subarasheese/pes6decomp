/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_replay.h"

extern u32 D_00591F38[];

void func_009B3E00(void) {
    u16 i;
    Pes6MatchPlayer *actor = Pes6MatchPlayers;
    D_00CBAA00.flags = D_00591F38[0];
    D_00CBAA00.ballPose = Pes6Ball_Current->model->pose;
    for (i = 0; i < REPLAY_SLOTS; i++, actor++) {
        ReplayPlayerState *record = &D_00CBAA00.players[i];
        Pes6PlayerInfo *motion = actor->info;
        record->animation = motion->unk30;
        record->active = motion->active;
        record->time = motion->animationFrame;
        record->paused = motion->field2D;
        record->blend = motion->field4D;
        record->mode = motion->field5B;
        record->modelMode = motion->fieldState->field1C;
        record->modelA = motion->fieldState->field20;
        record->modelB = motion->fieldState->field21;
        record->modelC = motion->fieldState->field22;
        record->poseStyle = func_0027A5F0(actor);
        record->poseValue = func_0027A5A0(actor);
        record->poseActivity = func_0027A510(actor);
        record->poseLow = func_0027A540(actor);
        record->poseHigh = func_0027A530(actor);
    }
}
