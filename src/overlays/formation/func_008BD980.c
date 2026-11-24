/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern s32 func_002937A0(u8);
void func_008BD980(FormationOptions *opts) {
    s32 i;
    for (i = 1; i < 11; i++) {
        switch ((u8)func_002937A0(
            opts->tactics.plan.layouts[opts->tactics.selectedLayout].instructions.role[i])) {
        case 2:
            opts->tactics.plan.layouts[opts->tactics.selectedLayout].markingMode[i] = 0;
            opts->tactics.plan.layouts[opts->tactics.selectedLayout].markingTarget[i] = 0xff;
            break;
        default: {
            u8 *marking = &opts->tactics.plan.layouts[opts->tactics.selectedLayout].markingMode[i];
            if (*marking == 0) {
                *marking = 1;
                opts->tactics.plan.layouts[opts->tactics.selectedLayout].markingTarget[i] = 0xff;
            }
            break;
        }
        }
    }
}
