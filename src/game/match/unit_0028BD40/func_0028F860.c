/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_role_masks.h"

extern const u8 D_003D9E28[];
extern s32 func_002C7280(const SquadPlayerProfile *, s32);

s32 func_0028F860(const SquadRoleSettings *settings, const SquadPlayerProfile *player, u8 index,
                  s32 condition) {
    u32 masks[3];
    u8 role = D_003D9E28[index];
    switch (role) {
    case 8:
    case 22:
    case 29:
    case 15:
        if (!func_002C7280(player, 1)) {
            switch (role) {
            case 8:
                role = 9;
                break;
            case 22:
                role = 23;
                break;
            case 29:
                role = 30;
                break;
            case 15:
                role = 16;
                break;
            }
        }
        break;
    }
    getRoleMasks((u8)func_002937A0(role), masks);
    return func_0028F230(settings, player, role, masks, condition);
}
