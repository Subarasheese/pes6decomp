/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad00[8];
    u8 display[0x25C];
    u8 view[8];
    u32 value;
} MenuState;

extern s32 D_003E9FC0;
extern MenuState *D_003E9FC4[1];
extern void func_002D5630(void *view, u32 value);
extern void func_0035C5C0(void);
extern void func_002D5930(void *display, s32 intensity, s32 flags);

s32 func_0035BA20(void) {
    MenuState *state = D_003E9FC4[D_003E9FC0];
    func_002D5630(state->view, state->value);
    func_0035C5C0();
    func_002D5930(D_003E9FC4[D_003E9FC0]->display, 255, 0);
    return 1;
}
