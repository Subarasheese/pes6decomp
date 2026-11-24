/* compiler: mwcc-3.0.1b210 */
#include "pes6/localized_player_names.h"
extern u32 func_001CDA50(s32 index);
extern s32 func_00334980(s32 group, s32 slot);
static inline s32 defaultPlayerCallName(void) { return func_00334980(func_001CDA50(0), 0); }
s32 func_0026D520(s32 player, s32 language) {
    u16 index = findPlayerNameIndex((u16)player);
    s32 result;
    if (D_0058D814[0]) {
        if (index == PLAYER_NAME_MISSING)
            return defaultPlayerCallName();
        D_0058D820[0] = playerNameRecord(index);
        if (usesFirstPlayerName(language, func_00221300(player))) {
            result = D_0058D820[0]->code[0];
            if (result != PLAYER_NAME_MISSING)
                return result;
            return defaultPlayerCallName();
        } else {
            result = D_0058D820[0]->code[1];
            if (result != PLAYER_NAME_MISSING)
                return result;
            return defaultPlayerCallName();
        }
    } else
        return defaultPlayerCallName();
}
