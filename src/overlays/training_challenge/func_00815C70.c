/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef s32 (*TrainingHandler)(void *, void *, s32);
extern u8 D_005E3934[];
extern s32 func_00B2A340(void *training);
extern s32 func_00815E30(void *, void *, s32);
extern s32 func_00815E40(void *, void *, s32);
extern s32 func_00815E50(void *, void *, s32);
s32 func_00815C70(void *screen, void *menu, void *event) {
    TrainingHandler handlers[] = {
        0, func_00815E50, func_00815E50, func_00815E50, func_00815E40, func_00815E30, 0};
    s32 result = 0xd;
    if (handlers[func_00B2A340(D_005E3934)])
        result = handlers[func_00B2A340(D_005E3934)](screen, event, 1);
    return result;
}
