/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 reserved[0x10];
    s32 flags;
} MenuScene;
extern MenuScene Pes6Scene_Menu_State;
extern s32 func_0023B380(s32);
extern void func_0023B3B0(s32, s32);
extern void func_008B59F0(void);
extern void func_008C0ED0(s8 *);
extern void func_008C0EE0(void *, s8 *);
extern void func_008C1700(s8 *, s8, s32);
extern void func_008C2350(s8 *, s8, s32);
extern void func_008C2860(s8 *, s8, s32);
extern void func_008C2A80(s8 *);
extern void func_008C2BF0(s8 *);
extern void func_008C2EB0(void *, s8 *);
extern void func_008C2FD0(void *, s8 *);
extern s8 D_008D1D60[];
extern s8 D_008D2C50[];
extern s8 D_008DC310[];
extern s8 D_008DC318[];
extern s8 D_008DD8A6[];
extern s8 D_008DDBF6[];
extern s8 D_008DEADE[];
void func_008B70A0(void) {
    MenuScene *state = &Pes6Scene_Menu_State;
    if ((state->flags & 2) == 2) {
        func_008B59F0();
        func_008C2FD0(D_008D1D60, D_008DC310);
        func_008C2A80(D_008DC310);
        if ((D_008DC318[0] == 0) && (D_008DC310[0] == 0xD)) {
            func_008C1700(D_008DC310, D_008DD8A6[0], 1);
        }
        if ((D_008DC310[0] + (D_008DC318[0] * 0xD)) == 0xF) {
            func_008C2350(D_008DC310, D_008DDBF6[0], 1);
        }
        if ((D_008DC310[0] + (D_008DC318[0] * 0xD)) == 0x18) {
            func_008C2860(D_008DC310, D_008DEADE[0], 1);
        }
        func_008C0EE0(D_008D1D60, D_008DC310);
    }
    if ((state->flags & 4) == 4) {
        func_008B59F0();
        func_008C2BF0(D_008DC310);
        func_008C2A80(D_008DC310);
        if ((D_008DC318[0] == 0) && (D_008DC310[0] == 0xD)) {
            func_008C1700(D_008DC310, D_008DD8A6[0], 1);
        } else {
            func_008C1700(D_008DC310, D_008DD8A6[0], 2);
        }
        if ((D_008DC310[0] + (D_008DC318[0] * 0xD)) == 0xF) {
            func_008C2350(D_008DC310, D_008DDBF6[0], 1);
        } else {
            func_008C2350(D_008DC310, D_008DDBF6[0], 2);
        }
        if ((D_008DC310[0] + (D_008DC318[0] * 0xD)) == 0x18) {
            func_008C2860(D_008DC310, D_008DEADE[0], 1);
        } else {
            func_008C2860(D_008DC310, D_008DEADE[0], 2);
        }
        func_008C0EE0(D_008D1D60, D_008DC310);
    }
    if ((state->flags & 1) == 1) {
        func_008C2EB0(D_008D2C50, D_008DC310);
        func_008B59F0();
        func_008C2FD0(D_008D1D60, D_008DC310);
        func_008C2BF0(D_008DC310);
        func_008C2A80(D_008DC310);
        func_008C0EE0(D_008D1D60, D_008DC310);
        func_008C0ED0(D_008DC310);
        if ((D_008DC318[0] == 0) && (D_008DC310[0] == 0xD)) {
            func_008C1700(D_008DC310, D_008DD8A6[0], 1);
        } else {
            func_008C1700(D_008DC310, D_008DD8A6[0], 2);
        }
        if ((D_008DC310[0] + (D_008DC318[0] * 0xD)) == 0xF) {
            func_008C2350(D_008DC310, D_008DDBF6[0], 1);
        } else {
            func_008C2350(D_008DC310, D_008DDBF6[0], 2);
        }
        if ((D_008DC310[0] + (D_008DC318[0] * 0xD)) == 0x18) {
            func_008C2860(D_008DC310, D_008DEADE[0], 1);
        } else {
            func_008C2860(D_008DC310, D_008DEADE[0], 2);
        }
    }
    if (func_0023B380(0) == 0) {
        func_0023B3B0(0, 1);
    }
    if (func_0023B380(1) == 0) {
        func_0023B3B0(1, 0);
    }
    state->flags = 0;
}
