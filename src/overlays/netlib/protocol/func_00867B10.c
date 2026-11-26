/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_connection.h"
#include "pes6/netlib_team_details.h"
extern void memclr(void *dst, s32 len);
s32 func_00867B10(NetlibPacket *packet, void *output, void *valueOut, void *resultOut) {
    NetlibTeamData *data = output;
    s32 *value = valueOut;
    s32 *result = resultOut;
    if (!packet || !data || !value || !result)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x3042)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873FD0(packet, result);
    memclr(data->name, sizeof(data->name));
    func_00873EE0(packet, data->name, sizeof(data->name) - 1);
    func_00873F60(packet, &data->secondId);
    func_001C48E8(data->secondName, 0, sizeof(data->secondName));
    func_00873EE0(packet, data->secondName, sizeof(data->secondName) - 1);
    func_00874120(packet, &data->field195);
    func_00874120(packet, &data->field35);
    func_00873F60(packet, &data->field150);
    func_00874040(packet, &data->values36[0]);
    func_00874040(packet, &data->values36[1]);
    func_00874040(packet, &data->values36[2]);
    func_00874040(packet, &data->values36[3]);
    func_00874040(packet, &data->values36[4]);
    func_00874040(packet, &data->values36[5]);
    func_00874040(packet, &data->values36[6]);
    func_00873F60(packet, &data->field154);
    func_00873F60(packet, &data->field158);
    func_001C48E8(data->description, 0, sizeof(data->description));
    func_00873EE0(packet, data->description, sizeof(data->description) - 1);
    func_00873F60(packet, &data->field15C);
    *value = 0;
    func_00873F60(packet, value);
    data->field1A2 = 0;
    func_00874460(packet);
    return 0;
}
