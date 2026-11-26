/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_team_details.h"
extern void memclr(void *dst, s32 len);
extern void *func_001C4730(void *dst, const void *src, u32 len);
s32 func_008700E0(NetlibPacket *packet, NetlibTeamDetails *team, s32 *result, s32 selectedId,
                  s32 *secondId, s8 *status, char *name) {
    s32 i;
    if (!packet || !team || !result || !secondId || !status || !name)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4103)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873FD0(packet, result);
    if (*result) {
        func_00874460(packet);
        return 0;
    }
    func_00873F60(packet, &team->id);
    memclr(team->data.name, sizeof(team->data.name));
    func_00873EE0(packet, team->data.name, sizeof(team->data.name) - 1);
    func_00873F60(packet, &team->data.secondId);
    func_001C48E8(team->data.secondName, 0, sizeof(team->data.secondName));
    func_00873EE0(packet, team->data.secondName, sizeof(team->data.secondName) - 1);
    func_00874120(packet, &team->data.field195);
    func_00874120(packet, &team->data.field35);
    func_00873F60(packet, &team->data.field150);
    func_00874090(packet, &team->data.field14C);
    func_00874040(packet, &team->data.values36[0]);
    func_00874040(packet, &team->data.values36[1]);
    func_00874040(packet, &team->data.values36[2]);
    func_00874040(packet, &team->data.values36[3]);
    func_00874040(packet, &team->data.values36[4]);
    func_00874040(packet, &team->data.values36[5]);
    func_00874040(packet, &team->data.values36[6]);
    func_00873F60(packet, &team->data.field154);
    func_00873F60(packet, &team->data.field158);
    memclr(team->data.description, sizeof(team->data.description));
    func_00873EE0(packet, team->data.description, sizeof(team->data.description) - 1);
    func_00873F60(packet, &team->data.field15C);
    for (i = 0; i < 5; i++) {
        team->rows[i].slot = 0;
        team->rows[i].values[0] = 0;
        team->rows[i].values[1] = 0;
        team->rows[i].values[2] = 0;
    }
    for (i = 0; i < 2; i++) {
        func_00874040(packet, &team->rows[i].values[0]);
        func_00874040(packet, &team->rows[i].values[1]);
        func_00874040(packet, &team->rows[i].values[2]);
    }
    func_00874120(packet, &team->data.field14B);
    func_00874120(packet, &team->data.field196);
    for (i = 0; i < 5; i++)
        func_00874040(packet, &team->data.values198[i]);
    team->data.field1A2 = 0;
    func_00874460(packet);
    if (selectedId && selectedId == team->id) {
        *secondId = team->data.secondId;
        *status = team->data.field195;
        func_001C48E8(name, 0, sizeof(team->data.secondName));
        func_001C4730(name, team->data.secondName, sizeof(team->data.secondName) - 1);
        name[sizeof(team->data.secondName) - 1] = 0;
    }
    return 0x4103;
}
