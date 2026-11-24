/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(3)
#include "pes6/competition_results.h"

s32 func_00235BB0(s32 group, s32 team) {
    u8 slot;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    slot = func_00228ED0(group, team);
    if (slot == 0xff)
        return 0;
    return lastResult(slot);
}
