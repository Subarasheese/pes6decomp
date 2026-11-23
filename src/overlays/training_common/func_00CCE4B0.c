/* compiler: mwcc-3.0.1b210 */
#include "pes6/training_step.h"
typedef struct {
    u8 reserved00[0x438];
    TrainingStep step[6];
    s32 enabled;
} TrainingState;
s32 func_00CCE4B0(TrainingState *state) {
    if (!state->step[0].ready && state->step[1].ready && state->step[2].ready &&
        state->step[3].ready && state->step[4].ready && state->step[5].ready && state->enabled &&
        func_00CD5510(state->step[0].task)) {
        func_00C71F40();
        completeTrainingStep(&state->step[0]);
    }
    if (!state->step[1].ready && func_00CD5030(state->step[1].task, 1)) {
        completeTrainingStep(&state->step[1]);
    }
    if (!state->step[2].ready && func_00CD4CB0(state->step[2].task, 6)) {
        completeTrainingStep(&state->step[2]);
    }
    if (!state->step[3].ready && func_00CD4B80(state->step[3].task)) {
        completeTrainingStep(&state->step[3]);
    }
    if (!state->step[4].ready && func_00CD4AB0(state->step[4].task)) {
        completeTrainingStep(&state->step[4]);
    }
    if (!state->step[5].ready && func_00CD4980(state->step[5].task)) {
        completeTrainingStep(&state->step[5]);
    }
    return state->step[0].ready && state->step[1].ready && state->step[2].ready &&
           state->step[3].ready && state->step[4].ready && state->step[5].ready;
}
