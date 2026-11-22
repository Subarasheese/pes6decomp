/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*TrainingHandler)(void *, void *, s32);
extern u8 D_005E3934[];
extern s32 func_00B2A340(void *training);
extern void func_00805C20(void *, void *, s32);
extern void func_00805C30(void *, void *, s32);
extern void func_00806020(void *, void *, s32);
void func_00805810(void *screen, void *menu, void *event) {
    TrainingHandler handlers[] = {
        0, func_00806020, func_00806020, func_00806020, func_00805C30, func_00805C20, 0};
    if (handlers[func_00B2A340(D_005E3934)])
        handlers[func_00B2A340(D_005E3934)](screen, event, 4);
}
