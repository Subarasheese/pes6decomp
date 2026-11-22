/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s8 D_00591F14[];
typedef s32 (*TrainingHandler)(void *, void *);
extern u8 D_005E3934[];
extern s32 func_00B2A340(void *training);
extern s32 func_00818800(void *, void *);
extern s32 func_00818810(void *, void *);
extern s32 func_008188D0(void *, void *);
s32 func_008183A0(void *screen, void *menu, void *event) {
    TrainingHandler handlers[] = {
        0, func_008188D0, func_008188D0, func_008188D0, func_00818810, func_00818800, 0};
    s32 result = 0xd;
    D_00591F14[0] = 0;
    if (handlers[func_00B2A340(D_005E3934)])
        result = handlers[func_00B2A340(D_005E3934)](screen, event);
    return result;
}
