/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_team_details.h"
s32 func_0086A2E0(NetlibPacket *packet, s32 *result, NetlibTeamDetails *team,
                  NetlibTeamEndpointPair *pair, u8 *data, s8 *status, s16 *value, s8 *mode) {
    if (!packet || !result || !team || !pair || !data || !status || !value || !mode)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x6031)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873FD0(packet, result);
    if (*result == 0) {
        netlib_read_team_details(packet, team, pair, data, status, value, mode);
    }
    func_00874460(packet);
    return 0;
}
