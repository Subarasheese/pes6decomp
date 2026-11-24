#ifndef PES6_MATCH_SIDE_SETTINGS_H
#define PES6_MATCH_SIDE_SETTINGS_H

#include "types.h"

typedef struct {
    u8 flags, field01, field02, field03, field04, field05, field06;
} MatchSideSettings;
extern MatchSideSettings D_005E2F50[2];

static inline MatchSideSettings *matchSideSettings(s32 side) {
    if (side < 0 || side >= 2)
        return 0;
    return &D_005E2F50[side];
}

#endif
