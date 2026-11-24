/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
typedef struct {
    u8 first, second, reserved02[2], pairs[7][2], pairCount;
    FormationPlan plan;
} FormationSnapshot;
typedef char assert_formation_snapshot[sizeof(FormationSnapshot) == 0x17a ? 1 : -1];
extern void *memset(void *, s32, u32);
void func_008BF130(const FormationOptions *opts, FormationSnapshot *snap) {
    s32 i, j;
    memset(snap, 0, sizeof(*snap));
    snap->plan = opts->tactics.plan;
    snap->first = 0xff;
    snap->second = 0xff;
    for (i = 0; i < FORMATION_STARTERS; i++) {
        if (opts->tactics.plan.lineup[i] == opts->tactics.selectedPlayers[0])
            snap->first = i;
        if (opts->tactics.plan.lineup[i] == opts->tactics.selectedPlayers[1])
            snap->second = i;
    }
    snap->pairCount = opts->tactics.pairCount;
    for (i = 0; i < FORMATION_SWAPS; i++) {
        snap->pairs[i][0] = opts->tactics.pairs[i][0];
        snap->pairs[i][1] = opts->tactics.pairs[i][1];
    }
}
