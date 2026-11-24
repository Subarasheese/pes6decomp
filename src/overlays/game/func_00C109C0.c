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
static inline void periodGoal(MatchTeamReport *team, u8 slot, u8 period) {
    if ((u8)slot < 18) {
        ++team->total;
        ++team->byPeriod[(u8)period];
        ++team->players[(u8)slot].total;
        ++team->players[(u8)slot].byPeriod[(u8)period];
    }
}
void func_00C109C0(u8 side, u8 slot) {
    u8 period;
    MatchTeamReport *team = &D_00CBD8E0.teams[(u8)side];
    if ((u8)slot < 18) {
        ++team->eventCounts[0];
        ++team->players[(u8)slot].eventCounts[0];
        period = (u8)func_00C18700();
        periodGoal(team, slot, period);
    }
}
