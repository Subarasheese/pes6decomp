/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/competition_stage_order.h"

u8 func_002355C0(u8 rank) {
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    return stageTeamAtRank(rank, currentStageNumber());
}
