#ifndef PES6_MATCH_EVENT_INDEX_H
#define PES6_MATCH_EVENT_INDEX_H

#include "pes6/match_event_statistics.h"

typedef struct {
    u16 sideCount[2];
    MatchEvent *minute[121];
    MatchEvent *period[4];
    MatchEvent *sideEvent[2][32];
} MatchEventIndex;

extern MatchEventIndex D_00CCB350;
extern MatchEventIndex *D_003EA7F0;
extern u8 func_00C18DC0(s32 time);
extern MatchEvent *func_00C137F0(void);

#endif
