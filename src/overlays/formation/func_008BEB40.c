/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
void func_008BEB40(FormationOptions *first, s32 pos) {
    s32 i;
    for (; pos < 31; pos++) {
        u8 previous = first->tactics.plan.lineup[pos];
        if (first->status[previous]) {
            for (i = pos + 1; i < 32; i++) {
                u8 *slot = &first->tactics.plan.lineup[i];
                if (!first->status[first->tactics.plan.lineup[i]]) {
                    first->tactics.plan.lineup[pos] = first->tactics.plan.lineup[i];
                    *slot = previous;
                    break;
                }
            }
        }
    }
}
