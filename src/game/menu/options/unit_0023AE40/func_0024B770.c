/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_assignment.h"

extern s32 Pes6SaveData_GetUnavailableFlag(void);
extern s32 D_003E9B2C;
extern void func_0023B360(s32, s32);
extern void func_0023B2C0(s32, s32, s32);
extern void func_0024B570(MatchPadSlot *, s8);

void func_0024B770(MatchPadSlot *slots) {
    s32 panel = 12, assignmentLeft = 50, assignmentRight = 58, optionLeft = 66, optionRight = 74;
    s32 i;
    if (Pes6SaveData_GetUnavailableFlag() == 1) {
        panel = 5;
        assignmentLeft = 9;
        assignmentRight = 11;
        optionLeft = 13;
        optionRight = 15;
    }
    func_0024E650();
    for (i = 0; i < MATCH_PAD_COUNT; i++) {
        func_0023B360(i, 1);
        func_0023B360(i + MATCH_PAD_COUNT, 1);
        switch (slots[i].state) {
        default:
            func_0023B360(i, 0);
            func_0023B360(i + MATCH_PAD_COUNT, 0);
            break;
        case 1:
            func_0024B570(slots, i);
            break;
        case 2:
            func_0023B2C0(i, D_003E9B18->handles[panel], assignmentLeft + i);
            func_0023B2C0(i + MATCH_PAD_COUNT, D_003E9B18->handles[panel], assignmentRight + i);
            if (D_003E9B2C == 0) {
                if (slots[i].assignment == 0)
                    func_0023B360(i, 0);
                else if (slots[i].assignment == 10)
                    func_0023B360(i + MATCH_PAD_COUNT, 0);
            } else {
                if (slots[i].assignment == 1)
                    func_0023B360(i, 0);
                else if (slots[i].assignment == 10)
                    func_0023B360(i + MATCH_PAD_COUNT, 0);
            }
            break;
        case 3:
            func_0023B2C0(i, D_003E9B18->handles[panel], optionLeft + i);
            func_0023B2C0(i + MATCH_PAD_COUNT, D_003E9B18->handles[panel], optionRight + i);
            break;
        case 4:
            func_0023B2C0(i, D_003E9B18->handles[3], 34 + i * 2);
            func_0023B2C0(i + MATCH_PAD_COUNT, D_003E9B18->handles[3], 35 + i * 2);
            break;
        }
    }
}
