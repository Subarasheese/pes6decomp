/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved[16];
    s32 flags;
} MenuScene;
extern MenuScene Pes6Scene_Menu_State;
extern s32 D_0053C310;
extern void func_008B7FC0(void), func_008B82A0(void), func_008B7DD0(void), func_008B7AE0(void),
    func_008B81B0(void), func_008B8830(void), func_008B79F0(void), func_008B7750(void);
void func_00245B00(void) {
    MenuScene *state = &Pes6Scene_Menu_State;
    if ((D_0053C310 & 2) == 2)
        func_008B7FC0();
    if ((state->flags & 1) == 1)
        func_008B82A0();
    if ((state->flags & 4) == 4) {
        func_008B7DD0();
        func_008B7AE0();
    }
    if ((state->flags & 8) == 8) {
        func_008B81B0();
        func_008B7AE0();
    }
    if ((state->flags & 16) == 16)
        func_008B8830();
    func_008B79F0();
    func_008B7750();
    state->flags = 0;
}
