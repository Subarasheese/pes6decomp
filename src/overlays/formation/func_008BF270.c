/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern const char *func_0021E4B0(u16, s32, s32, u16);
extern char *strncpy(char *, const char *, u32);
void func_008BF270(const FormationOptions *opts, FormationTeam *dest, s32 slot) {
    dest->plan = opts->tactics.plan;
    switch (slot) {
    case 1:
    case 2:
        if (dest->plan.layouts[slot].enabled) {
            dest->plan.layouts[0] = dest->plan.layouts[slot];
            dest->plan.layouts[1] = dest->plan.layouts[0];
            dest->plan.layouts[2] = dest->plan.layouts[0];
        }
        break;
    }
    strncpy(dest->name, func_0021E4B0(opts->team, 0, 0, opts->sourceTeam), 48);
    dest->name[48] = 0;
    switch (opts->sourceTeam) {
    case 0x126:
    case 0x127:
        dest->team = 0x11e;
        break;
    default:
        dest->team = opts->team;
        break;
    }
}
