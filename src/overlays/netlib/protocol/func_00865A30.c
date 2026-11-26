/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(16)
#include "pes6/netlib_directory_dispatch.h"
s32 func_00865A30(NetlibConnection *connection) {
    s32 status = 0;
    s32 event = 0;
    NetlibPacket *packet = &connection->packets[2];
    switch (packet->tag) {
    case 0x0004:
    case 0x0005:
    case 0x4401:
    case 0x0006:
        status = func_00862040(connection, packet);
        break;
    case 0x3002:
    case 0x3004:
        status = func_00861F40(connection, packet, 2);
        break;
    case 0x3008:
        status = func_00877570(connection, packet, &netlib_sign_in_data(connection)->id,
                               netlib_sign_in_data(connection)->first,
                               netlib_sign_in_data(connection)->second, &connection->error);
        break;
    case 0x3012:
        connection->channelResult = 0;
        status = func_00867D40(packet, (LobbyResultEntry *)connection->pad486C, &connection->error);
        break;
    case 0x3022:
        status = func_00867A10(packet, &connection->error);
        break;
    case 0x3042:
        status = func_00867B10(packet, connection->field49EC, connection->field153B4,
                               &connection->error);
        break;
    case 0x3052:
        status = func_00867810(
            packet, (NetlibResultTotals *)(connection->pad486C + sizeof(LobbyResultEntry) * 3),
            &connection->error);
        break;
    case 0x3062:
        status = func_00867670(packet, connection->field4B8C, &connection->error);
        break;
    case 0x3071:
        status = func_00867570(packet, &connection->error, connection->channel);
        break;
    case 0x3072:
        status = func_008672B0(packet, connection->channel, &connection->error);
        break;
    case 0x3073:
        status = func_00867250(packet, &connection->error, connection->channel,
                               &connection->channelResult);
        break;
    case 0x3087:
    case 0x3088:
    case 0x3089:
    case 0x308b:
    case 0x308d:
        status = func_0085F780(connection, packet);
        break;
    case 0x3091:
        status = func_00866D00(packet, &connection->error);
        break;
    case 0x3101:
        status = func_00866C00(packet, &connection->error);
        break;
    case 0x3121:
        status = func_00866B10(packet, &connection->error);
        if (netlib_sign_in_data(connection)->messages)
            netlib_sign_in_data(connection)->messages->count = 0;
        break;
    case 0x3122:
        status = func_008669F0(packet, netlib_sign_in_data(connection)->messages);
        break;
    case 0x3123:
        status = 0x3123;
        break;
    case 0x3131:
        status = func_00866820(packet, &connection->error);
        break;
    case 0x3133:
        if (connection->session != 0) {
            status = func_00866970(packet, &connection->error);
            break;
        }
        connection->error = -27;
        status = -27;
        break;
    case 0x3134:
        if (!connection->session) {
            status = -27;
            connection->error = -27;
        } else
            status = func_008668A0(packet, connection->session + sizeof(NetlibBulletinPage));
        break;
    case 0x3135:
        if (!connection->session) {
            status = -27;
            connection->error = -27;
        } else
            status = 0x3135;
        break;
    default:
        event = NETLIB_UNEXPECTED_TAG;
        status = event;
        break;
    }
    if (status >= 0)
        connection->pending = 0;
    return event;
}
