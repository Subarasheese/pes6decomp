/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*TrainingHandler)(void *screen, void *event);
extern s32 func_00B2A340(void *);
extern u8 D_005E3934[];
extern void func_00815950(void *, void *);
extern void func_00815940(void *, void *);
extern void func_008159C0(void *, void *);
void func_00815600(void *screen, void *unused, void *event) {
    TrainingHandler handlers[7] = {
        0, func_008159C0, func_008159C0, func_008159C0, func_00815950, func_00815940, 0};
    if (handlers[func_00B2A340(D_005E3934)])
        handlers[func_00B2A340(D_005E3934)](screen, event);
}
