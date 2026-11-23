/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/competition_stage_order.h"

extern u16 func_002290D0(u8 slot);

u16 func_00235360(u8 rank) {
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xffff;
    return func_002290D0(currentStageTeamAtRank(rank));
}
