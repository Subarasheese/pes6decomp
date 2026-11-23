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
extern void func_008BDB30(void);
extern s8 D_008D8580[];
extern s8 D_008E1CE0[];
extern s8 D_008E1CE8[];
extern s8 D_008E35C6[];
extern s8 D_008E1E96[];
extern s8 D_008D84C0[];
extern void func_008C2FD0(void *, s8 *), func_008C0EE0(void *, s8 *), func_008C2A80(s8 *),
    func_008C2BF0(s8 *), func_008C0ED0(s8 *);
extern void func_008C2350(s8 *, s8, s32), func_008C1E40(s8 *, s32, s8, s32),
    func_008C2EB0(void *, s8 *);
void func_008BE9E0(void) {
    MenuScene *state = &Pes6Scene_Menu_State;
    if ((state->flags & 2) == 2) {
        func_008BDB30();
        func_008C2FD0(D_008D8580, D_008E1CE0);
        func_008C2A80(D_008E1CE0);
        func_008C0EE0(D_008D8580, D_008E1CE0);
        func_008C0ED0(D_008E1CE0);
        if ((D_008E1CE0[0] + D_008E1CE8[0] * 13) == 15) {
            func_008C2350(D_008E1CE0, D_008E35C6[0], 1);
        }
        if ((D_008E1CE0[0] + D_008E1CE8[0] * 13) == 1) {
            func_008C1E40(D_008E1CE0, 0, D_008E1E96[0], 1);
        }
    }
    if ((state->flags & 4) == 4) {
        func_008BDB30();
        func_008C2BF0(D_008E1CE0);
        func_008C2A80(D_008E1CE0);
        func_008C0EE0(D_008D8580, D_008E1CE0);
        func_008C0ED0(D_008E1CE0);
        if ((D_008E1CE0[0] + D_008E1CE8[0] * 13) == 15) {
            func_008C2350(D_008E1CE0, D_008E35C6[0], 1);
        } else {
            func_008C2350(D_008E1CE0, D_008E35C6[0], 2);
        }
        if ((D_008E1CE0[0] + D_008E1CE8[0] * 13) == 1) {
            func_008C1E40(D_008E1CE0, 0, D_008E1E96[0], 1);
        } else {
            func_008C1E40(D_008E1CE0, 0, D_008E1E96[0], 2);
        }
    }
    if ((state->flags & 1) == 1) {
        func_008C2EB0(D_008D84C0, D_008E1CE0);
        func_008BDB30();
        func_008C2FD0(D_008D8580, D_008E1CE0);
        func_008C2BF0(D_008E1CE0);
        func_008C2A80(D_008E1CE0);
        func_008C0EE0(D_008D8580, D_008E1CE0);
        func_008C0ED0(D_008E1CE0);
        if ((D_008E1CE0[0] + D_008E1CE8[0] * 13) == 15) {
            func_008C2350(D_008E1CE0, D_008E35C6[0], 1);
        } else {
            func_008C2350(D_008E1CE0, D_008E35C6[0], 2);
        }
        if ((D_008E1CE0[0] + D_008E1CE8[0] * 13) == 1) {
            func_008C1E40(D_008E1CE0, 0, D_008E1E96[0], 1);
        } else {
            func_008C1E40(D_008E1CE0, 0, D_008E1E96[0], 2);
        }
    }
    if (!func_0023B380(0))
        func_0023B3B0(0, 1);
    if (!func_0023B380(1))
        func_0023B3B0(1, 0);
    state->flags = 0;
}
