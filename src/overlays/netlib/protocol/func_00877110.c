/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
#include "pes6/lobby_team_roster.h"
extern s32 func_00874320(void *packet, const u16 *value);
s32 func_00877110(void *connection, const LobbyTeamRoster *teams) {
    NetlibPacket packet;
    u16 team, player;
    if (connection && teams) {
        netlib_begin_packet(&packet, 0x8112);
        for (team = 0; team < 3; team++)
            func_00874320(&packet, &teams[team].teamId);
        for (team = 0; team < 3; team++)
            func_00874320(&packet, &teams[team].count);
        for (team = 0; team < 3; team++) {
            const LobbyTeamRoster *roster = &teams[team];
            for (player = 0; player < roster->count; player++) {
                func_00874320(&packet, &roster->playerIds[player]);
                func_008743E0(&packet, &roster->playerValues[player]);
            }
        }
        return netlib_send_packet(&packet, connection);
    }
    return NETLIB_SEND_FAILED;
}
