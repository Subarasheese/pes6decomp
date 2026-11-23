/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    s32 active;
    u8 reserved04[0x14];
    s32 nextId;
    s32 selection;
    s32 state;
} EditMenu;
extern EditMenu *func_00BD6D70(s32);
extern EditMenu *D_00CE56A0;
extern s32 D_00CE56AC[];
void func_00BD6A00(void) {
    if (D_00CE56A0->active != 0) {
        D_00CE56A0->state = 0;
        D_00CE56AC[0] = D_00CE56A0->selection;
        D_00CE56A0 = func_00BD6D70(D_00CE56A0->nextId);
    }
}
