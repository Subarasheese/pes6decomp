/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

extern void func_002CA0F0(void *);
extern u8 *func_002CA180(s32);
extern s32 func_002B8DB0(s32);

extern s32 func_002B8CB0(s32), func_002B8C00(s32);

extern void func_0028D140(SquadLineup *, SquadRoleSettings *, void *, s32, s32);

void func_0028D6E0(SquadLineup *team, void *plan, s32 side, s32 mode) {
    SquadRoleSettings settings;
    if (!team->kind) {
        func_002CA0F0(&settings);
    } else {
        settings = *(const SquadRoleSettings *)func_002CA180(side);
        if (func_002B8DB0(side)) {
            switch (func_002B8CB0(side)) {
            case 0:
                settings.settings[0] = 4;
                break;
            case 2:
                settings.settings[0] = 0;
                break;
            default:
                settings.settings[0] = 2;
                break;
            }
            switch (func_002B8C00(side)) {
            case 0:
                settings.settings[1] = 4;
                break;
            case 2:
                settings.settings[1] = 0;
                break;
            default:
                settings.settings[1] = 2;
                break;
            }
        }
    }
    func_0028D140(team, &settings, plan, side, mode);
}
