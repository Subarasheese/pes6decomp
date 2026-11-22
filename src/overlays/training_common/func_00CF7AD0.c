/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_002648F0(s32);
extern s32 func_002646D0(s32);
extern s32 func_002646E0(s32);
extern s32 func_00CD4270(s32);
extern s32 func_00CD4060(s32, s32);
extern void func_002648E0(s32);

s32 func_00CF7AD0(s32 task) {
    u32 state;
    s32 ready;
    s32 finished;
    finished = 0;
    func_002648F0(task);
    state = func_002646D0(task);
    state = state & 0xff;
    switch (state) {
    case 0:
        func_002646E0(task);
        break;

    case 1:
        ready = func_00CD4270(task);
        if (ready != 0) {
            func_002646E0(task);
        }
        break;

    case 2:
        ready = func_00CD4060(task, 0);
        if (ready != 0) {
            func_002646E0(task);
        }
        break;

    case 3:
        finished = 1;
        break;
    }

    func_002648E0(task);
    return finished;
}
