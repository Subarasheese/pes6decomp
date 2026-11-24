/* compiler: mwcc-3.0.1b210 */
#include "pes6/localized_player_names.h"
u16 *func_0026D880(s32 player, s32 language) {
    u16 index = findPlayerNameIndex((u16)player);
    if (D_0058D814[0]) {
        if (index == PLAYER_NAME_MISSING)
            return 0;
        D_0058D820[0] = playerNameRecord(index);
        if (usesFirstPlayerName(language, func_00221300(player))) {
            return D_0058D820[0]->name[0];
        } else {
            return D_0058D820[0]->name[1];
        }
    } else
        return 0;
}
