/* compiler: mwcc-3.0.1b210 */
#include "pes6/sound_stream.h"

void func_00254B10(s32 group) {
    s32 i, j;
    SoundPlan *plan = &D_00585430[group];
    D_00585430[group].flags = 0;
    D_00585430[group].write = 0;
    D_00585430[group].head = 0;
    D_00585430[group].count = 0;
    for (i = 0; i < SOUND_PLAN_ROWS; i++) {
        for (j = 0; j < SOUND_PLAN_STEPS; j++) {
            plan->row[i].steps[j].command = 0;
            plan->row[i].steps[j].arg[0] = 0;
            plan->row[i].steps[j].arg[1] = 0;
            plan->row[i].steps[j].arg[2] = 0;
            plan->row[i].steps[j].arg[3] = 0;
            plan->row[i].steps[j].arg[4] = 0;
            plan->row[i].steps[j].arg[5] = 0;
        }
        plan->row[i].read = 0;
        plan->row[i].state = 0;
        plan->row[i].write = 0;
    }
}
