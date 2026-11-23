/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x10];
    s16 action;
    s16 phase;
} TrainingEvent;
typedef struct {
    s16 mode;
    u8 reserved02[0x2];
    void *view;
} TrainingSession;
extern void func_00C99A40(s32);
extern void func_00C99AD0(void *, s32);
extern TrainingSession *D_003AE9D0;
extern s8 D_0058D7A7[];
extern s8 D_00591DB4[];
extern s8 D_00591DD8[];
s32 func_0092C780(s32 arg0, TrainingEvent *record, s32 selection) {
    func_00C99A40(arg0);
    if (((record->phase == 2) && (record->action == 1)) && (D_003AE9D0->mode != 1)) {
        func_00C99AD0(D_003AE9D0->view, -1);
        D_0058D7A7[0] = 5;
    } else {
        func_00C99AD0(D_003AE9D0->view, selection);
        D_00591DB4[0] = 0;
        D_00591DD8[0] = 1;
    }
    return 2;
}
