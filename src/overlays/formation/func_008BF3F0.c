/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern const char *func_0021E4B0(u16, s32, s32, u16);
extern char *strncpy(char *, const char *, u32);
void func_008BF3F0(const FormationOptions *opts, FormationClub *dest) {
    dest->plan = opts->tactics.plan;
    strncpy(dest->shortName, func_0021E4B0(opts->team, 1, 0, opts->sourceTeam), 3);
    dest->shortName[3] = 0;
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
