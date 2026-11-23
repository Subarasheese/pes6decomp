/* compiler: mwcc-3.0.1b210 */
#include "pes6/training_step.h"
typedef struct {
    u8 reserved00[124];
    TrainingStep step[4];
} TrainingState;
s32 func_00CF6E80(TrainingState *state) {
    if (!state->step[0].ready && func_00CD5030(state->step[0].task, 1)) {
        completeTrainingStep(&state->step[0]);
    }
    if (!state->step[1].ready && func_00CD4CB0(state->step[1].task, 6)) {
        completeTrainingStep(&state->step[1]);
    }
    if (!state->step[2].ready && func_00CD4B80(state->step[2].task)) {
        completeTrainingStep(&state->step[2]);
    }
    if (!state->step[3].ready && func_00CD4AB0(state->step[3].task)) {
        completeTrainingStep(&state->step[3]);
    }
    return state->step[0].ready && state->step[1].ready && state->step[2].ready && state->step[3].ready;
}
