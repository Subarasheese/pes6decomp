/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern s32 func_008BEC20(u8, u8, const FormationLayout *);
s32 func_008BEBD0(u8 side, u8 slot, const FormationOptions *opts) {
    if (!opts)
        return 0;
    return func_008BEC20(side, slot, &opts->tactics.plan.layouts[opts->tactics.selectedLayout]);
}
