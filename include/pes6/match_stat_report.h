#ifndef PES6_MATCH_STAT_REPORT_H
#define PES6_MATCH_STAT_REPORT_H

#include "pes6/match_stats.h"
#include "pes6/match_event_record.h"
/* The statistics writers and the match-player accessors share these record layouts. */
typedef union {
    Pes6MatchPlayerStats stored;
    struct {
        s16 byPeriod[4], total, eventCounts[9];
        s8 cards[2];
        u8 reserved1E[2];
        u32 value20;
        f32 playerRating;
    };
} MatchPlayerReport;
typedef union {
    Pes6MatchTeamStats stored;
    struct {
        s16 byPeriod[4], total, eventCounts[9];
        s8 cards[2];
        u8 reserved1E[2];
        u32 total20;
        MatchPlayerReport players[18];
    };
} MatchTeamReport;
typedef struct {
    MatchTeamReport teams[2];
} MatchReport;
extern MatchReport D_00CBD8E0;

extern void func_002BD4C0(MatchTeamReport *out, u8 side), func_00C10330(const MatchReport *src);
typedef char check_match_player_report[sizeof(MatchPlayerReport) == 0x28 ? 1 : -1];
typedef char check_match_team_report[sizeof(MatchTeamReport) == 0x2f4 ? 1 : -1];
typedef struct {
    u32 flags;
} MatchStatsState;
extern MatchStatsState D_003E9D48, *D_003E9D4C;
typedef s32 (*MatchEventPredicate)(MatchEvent *);
extern s32 func_002C1D20(s32 first, s32 last, u8 side, s32 filter),
    func_002C2100(s32 first, s32 last, u8 player, s32 filter);
extern void func_002BD6F0(MatchPlayerReport *out, u8 player);
extern u8 func_00C18710(void), func_00C18DA0(s32 period), func_00C222B0(u8 side, u8 slot);
extern s32 func_00C121C0(u8 side), func_00C12150(u8 side, u8 slot);
extern void func_00C121E0(u8 team, u8 outgoing, u8 incoming),
    func_00C122B0(u8 period, u8 team, u8 slot);
typedef struct {
    u8 reserved[2], period;
} StatPeriod;

#endif
