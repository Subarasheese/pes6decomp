/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
void func_008BD900(FormationOptions *opts) {
    s32 i;
    for (i = 1; i < 11; i++) {
        u8 *marking = &opts->tactics.plan.layouts[opts->tactics.selectedLayout].markingMode[i];
        if (*marking >= 2) {
            *marking = 1;
            opts->tactics.plan.layouts[opts->tactics.selectedLayout].markingTarget[i] = 0xff;
        }
    }
}
