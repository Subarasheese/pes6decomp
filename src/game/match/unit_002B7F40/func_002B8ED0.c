/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_side_settings.h"

void func_002B8ED0(s32 side, s32 value) {
    MatchSideSettings *record = matchSideSettings(side);
    if (!record)
        return;
    if (value >= 6)
        return;
    record->flags &= 0xf8;
    record->flags |= (u8)value;
}
