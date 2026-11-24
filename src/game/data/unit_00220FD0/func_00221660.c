/* compiler: mwcc-3.0.1b210 */
#include "pes6/roster_player_flags.h"
extern u16 Pes6Team_GetPlayerId(u16 team, u8 slot, s32 mode);
s32 func_00221660(u16 team, u8 slot, s32 mode, s32 index) {
    return hasPlayerFlag((u16)Pes6Team_GetPlayerId(team, slot, mode), index);
}
