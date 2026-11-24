/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern void *memset(void *, s32, u32);
void func_008BBE60(PackedFormation *packed, s32 enabled, const FormationOptions *opts) {
    s32 i;
    memset(packed, 0, sizeof(*packed));
    packed->enabled = enabled;
    for (i = 0; i < FORMATION_SQUAD; i++) {
        packed->lineup[i] = opts->tactics.plan.lineup[i];
    }
    packed->instructions = opts->tactics.plan.layouts[0].instructions;
    {
        s32 j;
        for (i = 0; i < FORMATION_SWAPS; i++) {
            for (j = 0; j < 2; j++) {
                packed->pairs[i][j] = opts->tactics.pairs[i][j];
            }
        }
    }
    packed->pairCount = opts->tactics.pairCount;
    packed->choices[0] = opts->tactics.plan.choices[0];
    packed->choices[1] = opts->tactics.plan.choices[1];
    packed->choices[2] = opts->tactics.plan.choices[2];
    packed->choices[3] = opts->tactics.plan.choices[3];
    packed->choices[4] = opts->tactics.plan.choices[4];
    packed->levels.levelA = opts->tactics.plan.levelA;
    packed->levels.levelB = opts->tactics.plan.levelB;
    packed->levels.flagC = opts->tactics.plan.flagC;
    packed->levels.flagD = opts->tactics.plan.flagD;
    for (i = 0; i < 6; i++) {
        packed->assignments[i] = opts->tactics.plan.assignments[i];
    }
    for (i = 0; i < FORMATION_OUTFIELD; i++) {
        packed->markingMode[i] =
            opts->tactics.plan.layouts[opts->tactics.selectedLayout].markingMode[i + 1];
        packed->markingTarget[i] =
            opts->tactics.plan.layouts[opts->tactics.selectedLayout].markingTarget[i + 1];
    }
    packed->settings.first = *(const u8 *)&opts->tactics.plan.layouts[0].setting4D;
    packed->settings.second = *(const u8 *)&opts->tactics.plan.layouts[0].setting4F;
}
