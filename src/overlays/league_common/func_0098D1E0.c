/* compiler: mwcc-3.0.1b198 */
#include "pes6/competition_records.h"

extern LeagueCompetition *D_003E77B4;
extern s32 func_00226710(void);
extern u8 func_00226240(void);

static inline void advanceStage(s32 limit) {
    if (D_003E77B4->currentStage < limit)
        ++D_003E77B4->currentStage;
}

void func_0098D1E0(void) {
    u8 mode = func_00226710();
    switch (mode) {
    case 0x1c:
    case 0x20:
    case 0x0f:
        return;
    case 36:
        advanceStage(8);
        break;
    case 37:
        advanceStage(12);
        break;
    case 16:
        advanceStage(5);
        break;
    case 40:
        advanceStage(-1);
        break;
    case 41:
        advanceStage(1);
        break;
    case 44:
        advanceStage(9);
        break;
    case 47:
        advanceStage(1);
        break;
    case 50:
        advanceStage(7);
        break;
    case 51:
        advanceStage(9);
        break;
    case 0x38:
        switch (func_00226240()) {
        case 0:
            advanceStage(9);
            break;
        case 1:
            advanceStage(17);
            break;
        case 2:
            advanceStage(8);
            break;
        case 3:
            advanceStage(8);
            break;
        case 4:
            advanceStage(9);
            break;
        }
        break;
    default:
        if (D_003E77B4->stageCount < 2) {
            D_003E77B4->currentStage = 0;
        } else {
            ++D_003E77B4->currentStage;
            D_003E77B4->currentStage %= D_003E77B4->stageCount;
        }
        break;
    }
}
