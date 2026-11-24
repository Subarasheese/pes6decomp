/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern void func_008BE9B0(const FormationOptions *, FormationOptions *),
    func_008BFA90(FormationDisplayData *, const FormationOptions *),
    func_0028D6E0(FormationDisplayData *, u8 *, s32, s32);
void func_008BE810(FormationOptions *first, FormationOptions *second) {
    u8 fixed[32];
    FormationDisplayData work;
    s32 i;
    func_008BE9B0(first, second);
    func_008BFA90(&work, second);
    for (i = 0; i < 32; i++) {
        if (i >= 11 && i < 22)
            fixed[i] = 0;
        else
            fixed[i] = 1;
        work.condition[i] = 0;
    }
    work.field03 = 0xff;
    work.field04 = 0xff;
    func_0028D6E0(&work, fixed, 1, 1);
    for (i = 0; i < 32; i++)
        second->tactics.plan.lineup[i] = work.lineup[i];
    for (i = 0; i < 11; i++)
        first->tactics.plan.lineup[i + 11] = second->tactics.plan.lineup[i];
    for (i = 22; i < 32; i++)
        first->tactics.plan.lineup[i] = second->tactics.plan.lineup[i];
}
