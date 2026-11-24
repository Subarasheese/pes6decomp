/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_side_settings.h"

void func_002B8C50(s32 side, s32 value) {
    MatchSideSettings *record = matchSideSettings(side);
    if (!record)
        return;
    if (value >= 3)
        return;
    record->field02 = value;
}
