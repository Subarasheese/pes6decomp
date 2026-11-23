/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/saved_roster.h"

static inline u8 *playerAttributes(u8 slot, u8 index) {
    SavedTeamPlayer *p = savedPlayerAt(slot, index);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!p)
        return 0;
    return p->attributes;
}
s32 func_00224420(u8 slot, u8 index) {
    u8 *p;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (slot >= SAVED_TEAM_COUNT)
        return 0;
    p = playerAttributes(slot, index);
    if (p == 0) {
        return 0;
    } else {
        return *p & 15;
    }
}
