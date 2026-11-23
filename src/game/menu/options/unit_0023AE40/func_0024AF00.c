/* compiler: mwcc-3.0.1b210-sdata4 */
#include "pes6/match_pad_setup.h"

extern s32 func_008B2E20(s32);
extern void func_008B2E90(u32 *, s32);
extern void func_008B2EE0(s32, u32);

void func_0024AF00(void) {
    s32 assignmentMessages[4] = {0x1000A, 0x10022, 0x6C0016, 0x6C0018};
    s32 optionMessages[2] = {0x6C000F, 0x6C000E};
    u32 disabledNumber, disabledOption, normalNumber, normalOption;
    s32 i;
    for (i = 0; i < MATCH_PAD_COUNT; i++) {
        s32 side = Pes6PadAssign[i].side;
        switch (matchPadSideKind(side)) {
        case 1:
        case 2:
            if (!D_003E9B14[25 + i])
                D_003E9B14[25 + i] = func_008B2F50(D_003E9B18->byPad.assignmentMarkers[i], 19);
            switch (Pes6PadAssign[i].assignment) {
            case 2:
                func_008B2F10(D_003E9B14[25 + i], assignmentMessages[2]);
                break;
            case 1:
                func_008B2F10(D_003E9B14[25 + i], assignmentMessages[1]);
                break;
            case 0:
                func_008B2F10(D_003E9B14[25 + i], assignmentMessages[0]);
                break;
            default:
                func_008B2F10(D_003E9B14[25 + i], assignmentMessages[3]);
                break;
            }
            if (!D_003E9B14[41 + i])
                D_003E9B14[41 + i] = func_008B2F50(D_003E9B18->byPad.assignmentMarkers[i], 20);
            func_008B2F10(D_003E9B14[41 + i], optionMessages[Pes6PadAssign[i].option]);
            if (Pes6PadAssign[i].assignment == 0) {
                func_008B2E90(&disabledNumber, 4);
                func_008B2EE0(D_003E9B14[33 + i], disabledNumber);
                func_008B2E90(&disabledOption, 4);
                func_008B2EE0(D_003E9B14[41 + i], disabledOption);
            } else {
                func_008B2E90(&normalNumber, 2);
                func_008B2EE0(D_003E9B14[33 + i], normalNumber);
                func_008B2E90(&normalOption, 2);
                func_008B2EE0(D_003E9B14[41 + i], normalOption);
            }
            break;
        default:
            if (D_003E9B14[25 + i])
                D_003E9B14[25 + i] = func_008B2E20(D_003E9B14[25 + i]);
            if (D_003E9B14[33 + i])
                D_003E9B14[33 + i] = func_008B2E20(D_003E9B14[33 + i]);
            if (D_003E9B14[41 + i])
                D_003E9B14[41 + i] = func_008B2E20(D_003E9B14[41 + i]);
            break;
        }
    }
}
