/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_side_settings.h"

static inline s32 sideMode(s32 side) {
    MatchSideSettings *p = matchSideSettings(side);
    if (!(p == 0))
        return p->flags & 7;
    return 3;
}

static inline s32 globalMode(void) {
    MatchSideSettings *p = D_005E2F50;
    if (!(p == 0))
        return ((s32)p->flags >> 6) & 3;
    return 0;
}

static inline s32 commonEnabled(void) {
    s32 mode = globalMode();
    switch (mode) {
    case 1:
    case 2:
    case 3:
        return 1;
    }
    return 0;
}

s32 func_002B8DB0(s32 side) {
    s32 mode = sideMode(side);
    switch (mode) {
    case 0:
    case 1:
        return 1;
    }
    if (commonEnabled())
        return 1;
    return 0;
}
