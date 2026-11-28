/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(16)
#include "pes6/netlib_directory_dispatch.h"
s32 func_00865E00(NetlibConnection *connection) {
    s32 status = 0;
    NetlibPacket *packet = &connection->packets[1];
    switch (packet->tag) {
    case 0x0004:
    case 0x0005:
    case 0x4401:
    case 0x0006:
        status = func_00862040(connection, packet);
        break;
    case 0x2002:
        status = func_00868AD0(packet, &netlib_directory_state(connection)->directory,
                               &connection->error);
        break;
    case 0x2003:
        status = func_00868990(packet, &netlib_directory_state(connection)->directory);
        break;
    case 0x2004:
        status = 0x2004;
        break;
    case 0x2009:
        status = func_008688A0(packet, &connection->error);
        if (netlib_sign_in_data(connection)->messages)
            netlib_sign_in_data(connection)->messages->count = 0;
        break;
    case 0x200a:
        status = func_00868770(packet, netlib_sign_in_data(connection)->messages);
        break;
    case 0x200b:
        status = 0x200b;
        break;
    case 0x2007:
        status = func_00868690(packet, &netlib_directory_state(connection)->field37D4);
        break;
    case 0x2201:
        status = func_008685A0(packet, &netlib_directory_state(connection)->field37D8,
                               &connection->error);
        break;
    case 0x2202:
        status = func_008684C0(packet, netlib_directory_state(connection)->bulletins);
        break;
    case 0x2203:
        status = 0x2203;
        break;
    case 0x2101:
        if (!connection->session) {
            status = -27;
            connection->error = -27;
        } else
            status = func_00868430(packet, (NetlibBulletinPage *)connection->session, &connection->error);
        break;
    case 0x2102:
        if (!connection->session) {
            status = -27;
            connection->error = -27;
        } else
            status = func_00868310(packet, (NetlibBulletinPage *)connection->session);
        break;
    case 0x2103:
        if (!connection->session) {
            status = -27;
            connection->error = -27;
        } else
            status = 0x2103;
        break;
    default:
        status = NETLIB_UNEXPECTED_TAG;
        break;
    }
    if (status >= 0)
        connection->pending = 0;
    return status;
}
