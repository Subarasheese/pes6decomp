/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_side_settings.h"

void func_002B8A30(s32 side, u8 value) {
    MatchSideSettings *record = matchSideSettings(side);
    if (!record)
        return;
    if ((u8)value > 32 && (u8)value != 255)
        value = 31;
    record->field05 = value;
}
