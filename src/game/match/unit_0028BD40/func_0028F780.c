/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_role_masks.h"

extern void func_002CA0F0(void *);

s32 func_0028F780(const SquadPlayerProfile *player, u8 role) {
    SquadRoleSettings settings;
    u32 masks[3];
    func_002CA0F0(&settings);
    getRoleMasks((u8)func_002937A0(role), masks);
    return func_0028F230(&settings, player, role, masks, 100);
}
