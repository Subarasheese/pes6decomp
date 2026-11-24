/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
void func_008BE7D0(FormationOptions *opts) {
    s32 i;
    for (i = 0; i < 11; i++) {
        if (opts->status[opts->tactics.plan.lineup[i]])
            opts->tactics.starterFlags[i] = 0;
    }
}
