#ifndef PES6_TEAM_SELECTION_RECORD_H
#define PES6_TEAM_SELECTION_RECORD_H

#include "types.h"

typedef struct {
    u8 data[0x34];
} TeamSelection;
extern TeamSelection *func_001FAC50(s32 team, s32 useSpecial);

#endif
