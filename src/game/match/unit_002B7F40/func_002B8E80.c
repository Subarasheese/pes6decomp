/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_side_settings.h"

void func_002B8E80(s32 value) {
    MatchSideSettings *record = D_005E2F50;
    if (!record)
        return;
    if (value >= 4)
        return;
    record->flags &= 0x3f;
    record->flags |= (u8)(value << 6);
}
