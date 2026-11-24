/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_role_masks.h"

s32 func_0028F5B0(const SquadRoleSettings *settings, const SquadPlayerProfile *player, u8 role,
                  s32 condition) {
    u32 masks[3];
    getRoleMasks((u8)func_002937A0(role), masks);
    return func_0028F230(settings, player, role, masks, condition);
}
