/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern s32 func_008B9660(void);
static inline s32 useDefaultMode(void) {
    s32 mode = (s16)func_008B9660();
    switch (mode) {
    case 1:
    case 2:
        return 0;
    default:
        return 1;
    }
}
extern void func_008BF530(FormationOptions *, u16, const FormationPlan *, s32, s32);
void func_008BF4A0(FormationOptions *opts, const FormationTeam *source) {
    opts->team = source->team;
    func_008BF530(opts, source->team, &source->plan, useDefaultMode() ? 0 : 2, 0);
}
