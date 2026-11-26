/* compiler: mwcc-3.0.1b210 */
#include "pes6/training_step.h"
extern void func_002648F0(TrainingStep *step), func_002648E0(TrainingStep *step),
    func_002646E0(TrainingStep *step), func_00264790(TrainingStep *step, u8 mode);
extern s32 func_002646D0(TrainingStep *step);
extern s32 func_001BE5B0(s32), func_00CD0BD0(TrainingStep *);
void func_00CD1F60(TrainingStep *step) {
    s32 done = 0;
    func_002648F0(step);
    switch ((u8)func_002646D0(step)) {
    case 0:
        if (func_001BE5B0(0))
            func_002646E0(step);
        break;
    case 1:
        if (func_00CD0BD0(step))
            func_002646E0(step);
        break;
    case 2:
        done = 1;
        break;
    }
    func_002648E0(step);
    if (done)
        func_00264790(step, 31);
}
