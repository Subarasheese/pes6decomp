/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
void func_008BE9B0(const FormationOptions *source, FormationOptions *dest) {
    s32 i;
    for (i = 0; i < 11; i++)
        dest->tactics.plan.lineup[i] = source->tactics.plan.lineup[i + 11];
    for (i = 11; i < 22; i++)
        dest->tactics.plan.lineup[i] = source->tactics.plan.lineup[i - 11];
    for (i = 22; i < 32; i++)
        dest->tactics.plan.lineup[i] = source->tactics.plan.lineup[i];
}
