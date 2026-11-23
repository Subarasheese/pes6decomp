#ifndef PES6_TRAINING_STEP_H
#define PES6_TRAINING_STEP_H

#include "types.h"

typedef struct {
    u8 task[0x18];
    s32 ready;
} TrainingStep;

extern void func_00264840(void *, s32);
extern void func_00C71F40(void);
extern s32 func_00CD5510(void *), func_00CD5320(void *);
extern s32 func_00CD5030(void *, s32), func_00CD4CB0(void *, s32);
extern s32 func_00CD4B80(void *), func_00CD4AB0(void *), func_00CD4980(void *);

static inline void completeTrainingStep(TrainingStep *step) {
    func_00264840(step->task, 0);
    step->ready = 1;
}

#endif
