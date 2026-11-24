/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern void func_008BEB40(FormationOptions *, s32),
    func_008BE9B0(const FormationOptions *, FormationOptions *);
void func_008BEAA0(FormationOptions *first, FormationOptions *second) {
    s32 i;
    u8 previous = first->tactics.plan.lineup[11];
    if (first->status[previous]) {
        for (i = 12; i < 32; i++) {
            u8 *slot = &first->tactics.plan.lineup[i];
            if (!first->status[first->tactics.plan.lineup[i]]) {
                first->tactics.plan.lineup[11] = first->tactics.plan.lineup[i];
                *slot = previous;
                break;
            }
        }
    }
    func_008BEB40(first, 11);
    func_008BE9B0(first, second);
}
