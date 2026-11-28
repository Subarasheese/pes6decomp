#ifndef PES6_MATCH_LINEUP_STATISTICS_H
#define PES6_MATCH_LINEUP_STATISTICS_H

#include "types.h"
typedef struct {
    s32 x, z;
} LineupCentre;
typedef struct {
    u8 side, players[11];
    LineupCentre centre;
} LineupSample;
typedef struct {
    s8 countdown;
    u8 players[11];
    LineupCentre centre;
} TrackedLineup;
typedef struct StatListenerNode {
    struct StatListenerNode *next;
    void (*notify)(s32 event, const void *data);
} StatListenerNode;
typedef struct {
    s32 reserved[2];
    StatListenerNode *head;
} StatListeners;
typedef struct {
    TrackedLineup team[2];
    StatListeners listeners;
} LineupHistory;
extern LineupHistory D_00CCAE00;
extern void func_00C13AB0(StatListeners *listeners, s32 event, const void *data);
typedef struct {
    u8 lineupIndex[2][32], reserved40[0x16], captain[2], captainCount[2][18];
    u16 counters[2];
    u8 actor[2][32], slot[2][18], firstActor[2], reservedE6[2];
    StatListeners listeners;
} LineupMaps;
typedef char check_lineup_maps_size[sizeof(LineupMaps) == 0xf4 ? 1 : -1];
extern LineupMaps D_00CCAE40, *D_003EA7D4;
typedef struct {
    u8 reserved00[6], captain, startingSlots[32];
    u8 reserved27[0x47 - 0x27], selected[11], reserved52[0x8b - 0x52];
} MatchTeamSheet;
typedef char check_match_team_sheet_stride[sizeof(MatchTeamSheet) == 0x8b ? 1 : -1];
extern MatchTeamSheet D_00591A90[];
extern u8 func_00C17DC0(u8 team, u8 slot), func_00C17D70(u8 team, u8 index);
extern void func_00C17160(s32 event, const LineupSample *sample);

#endif
