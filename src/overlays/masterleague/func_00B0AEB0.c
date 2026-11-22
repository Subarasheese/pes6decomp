/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x330];
    void *control;
    u8 pad_334[0x8F4];
    s32 mode;
} MenuSelection;

extern s32 func_00972040(void *, s32, s32);
extern void func_009720E0(void *, s64);
extern MenuSelection *func_00B15370(void);

void func_00B0AEB0(s32 selection) {
    MenuSelection *view;

    view = func_00B15370();
    if (view != 0) {
        if (view->mode == 5) {
            func_009720E0(view->control, 1);
        } else {
            func_009720E0(view->control, 0);
            func_00972040(view->control, 0, selection & 0xFF);
        }
    }
}
