/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_lineup.h"
extern u16 Pes6MatchContext[];
extern s32 Pes6SceneStack[];
extern u16 Pes6Team_GetPlayerId(u16, u8, s32);
extern void Pes6MatchSetup_FillSquads(void);
void Pes6MatchSetup_BuildLineups(void) {
    s32 side, slot;
    u16 *team = Pes6MatchContext;
    for (side = 0; side < MATCH_SIDES; ++side) {
        for (slot = 0; slot < LINEUP_SLOTS; ++slot) {
            if (Pes6SceneStack[0] == 12)
                setLineupPlayer(side, slot, Pes6Team_GetPlayerId(*team, slot, 2));
            else
                setLineupPlayer(side, slot, Pes6Team_GetPlayerId(*team, slot, 0));
        }
        team++;
    }
    Pes6MatchSetup_FillSquads();
}
