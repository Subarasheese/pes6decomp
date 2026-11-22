/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x618];
    s32 control;
    u8 pad_61C[0x14];
    s16 count;
} MenuScrollView;

extern s32 func_001F3D10(s32, u8);
extern s32 func_0097F970(s32, s32, float);
extern MenuScrollView *func_00B5B230(void);

void func_00B5D0B0(void) {
    MenuScrollView *view;

    view = func_00B5B230();
    if (view != 0) {
        if (view->count < 6) {
            func_001F3D10(view->control, 0);
        } else {
            func_001F3D10(view->control, 1);
            func_0097F970(view->control, 0, 5.0f / (f32)view->count);
        }
    }
}
