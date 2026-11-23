/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    s32 reserved00;
    s32 (*handler)(void *);
    s16 mode;
    u8 reserved0a[2];
    s32 state;
} EditControl;
extern EditControl D_00CE5BD0[];
extern s32 func_00BE5990(void *);
extern void *func_001C48E8(void *, s32, u32);
void func_00BE4CC0(void) {
    func_001C48E8(D_00CE5BD0, 0, sizeof(*D_00CE5BD0));
    D_00CE5BD0->handler = func_00BE5990;
    D_00CE5BD0->mode = 0;
    D_00CE5BD0->state = 0;
}
