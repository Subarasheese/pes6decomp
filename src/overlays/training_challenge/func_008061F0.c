/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef s32 (*TrainingHandler)(void *, void *);
extern u8 D_005E3934[];
extern s32 func_00B2A340(void *training);
extern s32 func_00806490(void *, void *);
extern s32 func_008064A0(void *, void *);
extern s32 func_008064C0(void *, void *);
s32 func_008061F0(void *screen, void *menu, void *event) {
    TrainingHandler handlers[] = {
        0, func_008064C0, func_008064C0, func_008064C0, func_008064A0, func_00806490, 0};
    s32 result = 0xd;
    if (handlers[func_00B2A340(D_005E3934)])
        result = handlers[func_00B2A340(D_005E3934)](screen, event);
    return result;
}
