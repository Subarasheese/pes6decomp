/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_player_ranks.h"

typedef struct {
    u8 reserved00[0x2c];
    u8 teams[2];
} MatchTeams;
extern MatchTeams *D_003E77B0;

CompetitionPlayerSlot *func_0022C2D0(u8 team, u8 index, u8 kind) {
    CompetitionPlayerStats *data = competitionPlayerStats();
    CompetitionPlayerSlot *selected = 0;
    u8 side, i;
    if (!data)
        return 0;
    if (index >= 88)
        return 0;
    if (D_003E77B0->teams[0] == team)
        side = 0;
    else if (D_003E77B0->teams[1] == team)
        side = 1;
    else
        return 0;
    for (i = 0; i < 88; ++i) {
        CompetitionPlayerSlot *slot = &data->playerSlots[side][i];
        if (index == slot->index) {
            switch (kind) {
            case 0:
            case 1:
                if (slot->kind < 2U)
                    selected = slot;
                break;
            case 2:
                if (slot->kind == 2)
                    selected = slot;
                break;
            default:
                return 0;
            }
            if (selected)
                break;
        }
    }
    return selected;
}
