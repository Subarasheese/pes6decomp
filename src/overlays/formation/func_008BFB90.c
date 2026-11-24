/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern void func_001DC980(void *);
void func_008BFB90(FormationOptions *opts) {
    s32 i;
    for (i = 0; i < FORMATION_SQUAD; i++) {
        if (opts->owned[i]) {
            func_001DC980(opts->handles[i]);
            opts->handles[i] = 0;
        }
    }
}
