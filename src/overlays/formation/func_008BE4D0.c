/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern void func_0028CB20(SetPieceSelection *);
void func_008BE4D0(FormationOptions *opts, s32 onlyPrimary) {
    SetPieceSelection work;
    s32 i;
    for (i = 0; i < 5; i++)
        work.takers[i] = 0xff;
    for (i = 0; i < 32; i++) {
        work.lineup[i] = opts->tactics.plan.lineup[i];
        work.players[i] = &opts->players[i];
        if (!onlyPrimary) {
            work.eligible[i] = !opts->status[i];
        } else {
            work.eligible[i] = opts->primary[i] && !opts->status[i];
        }
    }
    for (i = 0; i < 11; i++)
        work.roles[i] = opts->tactics.plan.layouts[0].instructions.role[i];
    func_0028CB20(&work);
    for (i = 0; i < 5; i++)
        opts->tactics.plan.assignments[i] = work.takers[i];
}
