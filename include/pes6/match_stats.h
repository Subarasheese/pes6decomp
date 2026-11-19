#ifndef PES6_MATCH_STATS_H
#define PES6_MATCH_STATS_H

#include "types.h"

/* Each team has 18 statistics records. func_00C17E10 maps a squad slot to an index. */
typedef struct Pes6MatchPlayerStats {
    u8 pad00[0x08];
    s16 value08;
    u8 pad0A[0x02];
    s16 value0C;
    u8 pad0E[0x04];
    s16 value12;
    u8 pad14[0x0C];
    u32 value20;
    u8 pad24[0x04];
} Pes6MatchPlayerStats; /* stride 0x28 */

typedef struct Pes6MatchTeamStats {
    u8 pad00[0x20];
    u32 total20;
    Pes6MatchPlayerStats players[18];
} Pes6MatchTeamStats; /* stride 0x2F4 */

extern Pes6MatchTeamStats *D_00CB3300[];
s32 func_00C17E10(u8 team, u8 slot);

#endif
