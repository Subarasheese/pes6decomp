/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_stats.h"
typedef union {
    Pes6MatchPlayerStats stored;
    struct {
        s16 byPeriod[4], total, eventCounts[9];
        s8 cards[2];
        u8 reserved[2];
        u32 value20;
        f32 rating;
    };
} MatchPlayerReport;
typedef union {
    Pes6MatchTeamStats stored;
    struct {
        s16 byPeriod[4], total, eventCounts[9];
        s8 cards[2];
        u8 reserved[2];
        u32 value20;
        MatchPlayerReport players[18];
    };
} MatchTeamReport;
typedef struct {
    MatchTeamReport teams[2];
} MatchReport;
extern MatchReport D_00CBD8E0;
extern u8 func_00C18700(void);
static inline void stat4(MatchTeamReport *team, u8 slot) {
    if ((u8)slot < 18) {
        ++team->eventCounts[4];
        ++team->players[(u8)slot].eventCounts[4];
    }
}
static inline void stat2(MatchTeamReport *team, u8 slot) {
    if ((u8)slot < 18) {
        ++team->eventCounts[2];
        ++team->players[(u8)slot].eventCounts[2];
    }
}
void func_00C10730(u8 side, u8 slot) {
    MatchTeamReport *team = &D_00CBD8E0.teams[(u8)side];
    if ((u8)slot < 18) {
        ++team->eventCounts[3];
        ++team->players[(u8)slot].eventCounts[3];
        stat4(team, slot);
        stat2(team, slot);
    }
}
