/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_team_details.h"
s32 func_0086F7B0(NetlibPacket *packet, NetlibTeamDetails *team, const void *context) {
    s32 i, packed;
    if (!packet || !team || !context)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4322)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873F60(packet, &team->id);
    func_001C48E8(team->data.name, 0, sizeof(team->data.name));
    func_00873EE0(packet, team->data.name, sizeof(team->data.name) - 1);
    func_00874120(packet, &team->data.field35);
    func_00873F60(packet, &team->data.field150);
    func_00874040(packet, &team->data.values36[0]);
    func_00874040(packet, &team->data.values36[1]);
    func_00874040(packet, &team->data.values36[2]);
    func_00874040(packet, &team->data.values36[3]);
    func_00874040(packet, &team->data.values36[4]);
    func_00874040(packet, &team->data.values36[5]);
    func_00874040(packet, &team->data.values36[6]);
    func_00873F60(packet, &team->data.field154);
    func_00873F60(packet, &team->data.field158);
    func_00874040(packet, &team->data.value44);
    func_00873F60(packet, &packed);
    team->data.value46 = (s16)packed;
    team->data.value48 = (s16)((u32)packed >> 16);
    func_00873F60(packet, &team->data.field15C);
    for (i = 0; i < 5; i++) {
        func_00874040(packet, &team->rows[i].values[0]);
        func_00874040(packet, &team->rows[i].values[1]);
        func_00874040(packet, &team->rows[i].values[2]);
    }
    func_00874120(packet, &team->data.field1A2);
    func_00874120(packet, &team->data.field14B);
    func_00874120(packet, &team->data.field196);
    func_00874460(packet);
    return 0;
}
