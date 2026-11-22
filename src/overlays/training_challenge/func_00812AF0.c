/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*TrainingHandler)(void *screen, void *event);
extern s32 func_00B2A340(void *);
extern u8 D_005E3934[];
extern void func_00812D40(void *, void *);
extern void func_00812BD0(void *, void *);
extern void func_00812BC0(void *, void *);
void func_00812AF0(void *screen, void *unused, void *event) {
    TrainingHandler handlers[7] = {
        0, func_00812D40, func_00812D40, func_00812D40, func_00812BD0, func_00812BC0, 0};
    if (handlers[func_00B2A340(D_005E3934)])
        handlers[func_00B2A340(D_005E3934)](screen, event);
}
