/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_team_details.h"
s32 func_0086AAC0(NetlibPacket *packet, NetlibTeamDetails *team, NetlibTeamEndpointPair *pair,
                  u8 *data, s8 *status, s16 *value, s8 *mode) {
    if (!packet || !team || !pair || !data || !status || !value || !mode)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4a11)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    netlib_read_team_details(packet, team, pair, data, status, value, mode);
    func_00874460(packet);
    return 0;
}
