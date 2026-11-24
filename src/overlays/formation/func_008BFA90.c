/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern void *memset(void *, s32, u32);
void func_008BFA90(FormationDisplayData *out, const FormationOptions *opts) {
    s32 i;
    memset(out, 0, sizeof(*out));
    out->kind = 0;
    for (i = 0; i < 32; i++) {
        out->lineup[i] = opts->tactics.plan.lineup[i];
        out->primary[i] = opts->primary[i];
        out->flags[i] = 0;
        out->status[i] = opts->status[i];
        out->players[i] = &opts->players[i];
        out->condition[i] = opts->condition[i];
        out->field147[i] = opts->field93[i];
        out->field167[i] = opts->fieldB3[i];
    }
    for (i = 0; i < 11; i++) {
        out->role[i] = opts->tactics.plan.layouts[0].instructions.role[i];
        if (i > 0) {
            out->positions[i - 1] = opts->tactics.plan.layouts[0].instructions.outfield[i - 1];
        }
    }
    out->field03 = opts->field06;
    out->field04 = opts->field07;
    out->field02 = opts->field05;
}
