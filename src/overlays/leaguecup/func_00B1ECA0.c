/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x2EC];
    void *control;
    u8 pad_2F0[0x3C];
    s32 mode;
} CupSelection;

extern s32 func_00972040(void *, s32, s32);
extern void func_009720E0(void *, s64);
extern CupSelection *func_00B1E100(void);

void func_00B1ECA0(s32 selection) {
    CupSelection *view;

    view = func_00B1E100();
    if (view != 0) {
        if (view->mode == 0) {
            func_009720E0(view->control, 0);
        } else {
            func_009720E0(view->control, 1);
            func_00972040(view->control, 0, selection & 0xFF);
        }
    }
}
