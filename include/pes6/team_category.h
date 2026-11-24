#ifndef PES6_TEAM_CATEGORY_H
#define PES6_TEAM_CATEGORY_H

#include "types.h"

typedef struct {
    u16 category;
    u8 reserved02[14];
} TeamCategory;
extern TeamCategory D_003DF3AE[];
static inline s32 teamCategoryGroup(u16 team) { return (D_003DF3AE[team].category >> 12) & 15; }

#endif
