/* compiler: mwcc-3.0.1b210 */
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
extern MatchReport *D_003EA7B8;
extern void *func_001C48E8(void *, s32, u32);
extern u32 Pes6Random_Below(s32);
void func_00C10BF0(void) {
    s32 side, slot;
    D_003EA7B8 = &D_00CBD8E0;
    func_001C48E8(&D_00CBD8E0, 0, sizeof(D_00CBD8E0));
    for (side = 0; side < 2; ++side) {
        for (slot = 0; slot < 18; ++slot) {
            (&(&D_00CBD8E0.teams[side])->players[slot])->rating =
                (f32)(128 - (s32)(u16)Pes6Random_Below(256));
        }
    }
}
