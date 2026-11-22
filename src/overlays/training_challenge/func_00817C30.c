/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*TrainingHandler)(void *, void *, s32);
extern u8 D_005E3934[];
extern s32 func_00B2A340(void *training);
extern void func_00817D00(void *, void *, s32);
extern void func_008182C0(void *, void *, s32);
extern void func_00818380(void *, void *, s32);
void func_00817C30(void *screen, void *menu, void *event) {
    TrainingHandler handlers[] = {
        0, func_00818380, func_00818380, func_00818380, func_008182C0, func_00817D00, 0};
    if (handlers[func_00B2A340(D_005E3934)])
        handlers[func_00B2A340(D_005E3934)](screen, event, 0);
}
