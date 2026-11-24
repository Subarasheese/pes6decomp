/* compiler: mwcc-3.0.1b210 */
#include "pes6/team_selection_record.h"

u8 func_001FABB0(s32 team, s32 index, s32 useSpecial) {
    if (index == 0)
        return 2;
    return func_001FAC50(team, useSpecial)->data[index + 9];
}
