/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_side_settings.h"
s32 func_002B8C00(s32 side) {
    MatchSideSettings *record = matchSideSettings(side);
    if (!record)
        return 1;
    return record->field03;
}
