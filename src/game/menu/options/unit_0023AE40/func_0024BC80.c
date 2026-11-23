/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_assignment.h"

extern void *D_0053CD50[];
extern void func_00363DF0(void *, s32);
extern void func_008B31A0(s32, s32);
extern void func_00363D90(void *, s32);
extern void func_008B31E0(s32, s16);
extern s32 func_008B32E0(void *);

void func_0024BC80(s8 pad) {
    s32 side;
    func_00363DF0(D_0053CD50[pad], Pes6PadAssign[pad].assignment - 2);
    side = Pes6PadAssign[pad].side;
    switch (side > 0 ? side : -side) {
    case 1:
    case 2:
        func_008B31A0(D_003E9B18->byPad.assignmentMarkers[pad], 1);
        D_003E9B18->byPad.extraMarkers[pad] =
            func_008B32E0((void *)D_003E9B18->byPad.extraMarkers[pad]);
        func_008B31A0(D_003E9B18->byPad.extraMarkers[pad], 0);
        func_00363D90(D_0053CD50[pad], 1);
        if (Pes6PadAssign[pad].assignment >= 3) {
            func_00363D90(D_0053CD50[pad], 1);
            func_008B31E0(D_003E9B18->byPad.assignmentMarkers[pad], 0);
        } else {
            func_00363D90(D_0053CD50[pad], 0);
            func_008B31E0(D_003E9B18->byPad.assignmentMarkers[pad], 1);
        }
        break;
    default:
        func_008B31A0(D_003E9B18->byPad.assignmentMarkers[pad], 0);
        func_008B31A0(D_003E9B18->byPad.extraMarkers[pad], 0);
        func_00363D90(D_0053CD50[pad], 0);
        break;
    }
}
