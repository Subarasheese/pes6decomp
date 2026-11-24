/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern const char *func_0021E4B0(u16, s32, s32, u16);
const char *func_008BC370(const FormationTeam *team) {
    u16 id = team->team;
    if (id == 0x11e)
        return team->name;
    return func_0021E4B0(id, 0, 0, id);
}
