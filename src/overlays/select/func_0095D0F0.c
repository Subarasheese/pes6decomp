/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 reserved[0x10];
    s32 flags;
} MenuScene;
extern MenuScene Pes6Scene_Menu_State;
extern s32 D_0053C310[];
extern s32 func_0023B380(s32);
extern void func_0023B3B0(s32, s32);
extern void func_0095C1B0(void);
extern s8 D_00966230[];
extern s8 D_0096D2D0[];
extern s8 D_0096D2D8[];
extern s8 D_0096E516[];
extern s8 D_0096E6BE[];
extern void func_008C2FD0(void *, s8 *), func_008C0EE0(void *, s8 *), func_008C2A80(s8 *),
    func_008C2BF0(s8 *), func_008C0ED0(s8 *);
extern void func_008C2350(s8 *, s8, s32), func_008C1700(s8 *, s8, s32);
void func_0095D0F0(void) {
    MenuScene *state = &Pes6Scene_Menu_State;
    if ((state->flags & 2) == 2) {
        func_0095C1B0();
        func_008C2FD0(D_00966230, D_0096D2D0);
        func_008C2A80(D_0096D2D0);
        if (D_0096D2D0[0] == 11) {
            func_008C1700(D_0096D2D0, D_0096E516[0], 1);
        }
        if ((D_0096D2D0[0] + D_0096D2D8[0] * 13) == 12) {
            func_008C2350(D_0096D2D0, D_0096E6BE[0], 1);
        }
        func_008C0EE0(D_00966230, D_0096D2D0);
        func_008C0ED0(D_0096D2D0);
    }
    if ((state->flags & 4) == 4) {
        func_0095C1B0();
        func_008C2BF0(D_0096D2D0);
        func_008C2A80(D_0096D2D0);
        if (D_0096D2D0[0] == 11) {
            func_008C1700(D_0096D2D0, D_0096E516[0], 1);
        } else {
            func_008C1700(D_0096D2D0, D_0096E516[0], 2);
        }
        if ((D_0096D2D0[0] + D_0096D2D8[0] * 13) == 12) {
            func_008C2350(D_0096D2D0, D_0096E6BE[0], 1);
        } else {
            func_008C2350(D_0096D2D0, D_0096E6BE[0], 2);
        }
        func_008C0EE0(D_00966230, D_0096D2D0);
        func_008C0ED0(D_0096D2D0);
    }
    if (!func_0023B380(0))
        func_0023B3B0(0, 1);
    if (!func_0023B380(1))
        func_0023B3B0(1, 0);
    state->flags = 0;
}
