/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

typedef struct {
    u8 used[32], status[32], unlocked[32];
} SquadSlotSelection;
typedef struct {
    u8 reserved00[0xa4], assigned[11];
} SquadSlotPlan;
extern void *memset(void *, s32, u32);

void func_0028E4E0(const SquadLineup *team, const u8 *fixed, SquadSlotSelection *selection,
                   SquadSlotPlan *plan) {
    s32 i;
    for (i = 0; i < SQUAD_SLOTS; i++) {
        selection->unlocked[i] = 255;
        selection->status[team->lineup[i]] = fixed[i];
        if (!fixed[i])
            selection->unlocked[i] = team->lineup[i];
    }
    for (i = 0; i < SQUAD_SLOTS; i++)
        if (!team->primary[i] || team->status[i])
            selection->status[i] = 0;
    for (i = 0; i < STARTING_ELEVEN; i++)
        plan->assigned[i] = 0;
    memset(selection->used, 0, 32);
}
