/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
extern u8 func_002374D0(u16);
extern u16 Pes6Team_ResolveSpecialId(u16);
extern const FormationClub *func_0021FBC0(u16);
extern const char *func_0021E4B0(u16, s32, s32, u16);
extern char *strncpy(char *, const char *, u32);
extern void func_003624F0(FormationTeam *, u16);
void func_008BC230(u16 team, FormationTeam *dest) {
    const FormationClub *source;
    if (func_002374D0(team)) {
        func_003624F0(dest, 0x112);
    } else {
        switch (team) {
        case 0x126:
        case 0x127:
            team = Pes6Team_ResolveSpecialId(team);
            break;
        }
        source = func_0021FBC0(team);
        if (source) {
            dest->team = source->team;
            strncpy(dest->name, func_0021E4B0(team, 0, 0, team), 48);
            dest->name[48] = 0;
            dest->plan = source->plan;
        } else
            func_003624F0(dest, team);
    }
}
