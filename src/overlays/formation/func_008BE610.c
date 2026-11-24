/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern void func_0028CB20(SetPieceSelection *);
extern u8 func_0028C460(const SetPieceSelection *);
void func_008BE610(FormationOptions *opts, s32 onlyPrimary) {
    SetPieceSelection work;
    s32 i;
    for (i = 0; i < 5; i++)
        work.takers[i] = opts->tactics.plan.assignments[i];
    work.captain = opts->tactics.plan.assignments[5];
    for (i = 0; i < 32; i++) {
        work.lineup[i] = opts->tactics.plan.lineup[i];
        if (!onlyPrimary) {
            work.eligible[i] = work.captainEligible[i] = !opts->status[i];
        } else {
            work.eligible[i] = work.captainEligible[i] = opts->primary[i] && !opts->status[i];
            if (opts->playerForm[i] == 12 && !opts->status[i])
                work.captainEligible[i] = 1;
        }
        work.players[i] = &opts->players[i];
    }
    for (i = 0; i < 11; i++)
        work.roles[i] = opts->tactics.plan.layouts[0].instructions.role[i];
    func_0028CB20(&work);
    opts->tactics.plan.assignments[5] = func_0028C460(&work);
    for (i = 0; i < 5; i++)
        opts->tactics.plan.assignments[i] = work.takers[i];
}
