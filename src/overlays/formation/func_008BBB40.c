/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
void func_008BBB40(FormationOptions *opts, const PackedFormation *packed) {
    s32 i;
    for (i = 0; i < FORMATION_SQUAD; i++) {
        opts->tactics.plan.lineup[i] = packed->lineup[i];
    }
    opts->tactics.plan.layouts[0].instructions = packed->instructions;
    {
        s32 j;
        for (i = 0; i < FORMATION_SWAPS; i++) {
            for (j = 0; j < 2; j++) {
                opts->tactics.pairs[i][j] = packed->pairs[i][j];
            }
        }
    }
    opts->tactics.pairCount = packed->pairCount;
    opts->tactics.plan.choices[0] = packed->choices[0];
    opts->tactics.plan.choices[1] = packed->choices[1];
    opts->tactics.plan.choices[2] = packed->choices[2];
    opts->tactics.plan.choices[3] = packed->choices[3];
    opts->tactics.plan.choices[4] = packed->choices[4];
    opts->tactics.plan.levelA = packed->levels.levelA;
    opts->tactics.plan.levelB = packed->levels.levelB;
    opts->tactics.plan.flagC = packed->levels.flagC;
    opts->tactics.plan.flagD = packed->levels.flagD;
    for (i = 0; i < 6; i++) {
        opts->tactics.plan.assignments[i] = packed->assignments[i];
    }
    for (i = 0; i < FORMATION_OUTFIELD; i++) {
        opts->tactics.plan.layouts[opts->tactics.selectedLayout].markingMode[i + 1] =
            packed->markingMode[i];
        opts->tactics.plan.layouts[opts->tactics.selectedLayout].markingTarget[i + 1] =
            packed->markingTarget[i];
    }
    opts->tactics.plan.layouts[0].setting4D = packed->settings.first;
    opts->tactics.plan.layouts[0].setting4F = packed->settings.second;
}
