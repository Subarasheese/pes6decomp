/* Alternate teams use the player table of team 0x126. */
#include "pes6/lobby_selected_roster.h"

s32 LOBBY_PREPARE_ROSTER(s32 team) {
    s32 lookupTeam = LOBBY_ALTERNATE_ROSTER ? 0x126 : team;
    u16 count = 32;
    u16 i;
    u16 available;
#if !LOBBY_ALTERNATE_ROSTER
    if ((u16)team == 0xdd || ((u16)team >= 0xde && (u16)team < 0xfe))
        return func_00962DB0(team);
#endif
    available = func_00824960(lookupTeam);
    if (available < 32)
        count = available;
    *D_008AB328 = (u16)team;
    *D_008AB32A = (u16)count;
    for (i = 0; i < (u16)count; i++) {
        ((LobbyPlayerSelection *)D_008A5F70)->playerIds[i] = func_00824A60(lookupTeam, (u8)i);
        ((LobbyPlayerSelection *)D_008A5F70)->playerValues[i] = (u8)func_00824A00(lookupTeam, (u8)i);
    }
    return 4;
}

#undef LOBBY_PREPARE_ROSTER
#undef LOBBY_ALTERNATE_ROSTER
