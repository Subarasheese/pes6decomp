/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_connection.h"
s32 func_00862800(NetlibConnection *connection) {
    s32 status = 0, event = 0;
    NetlibPacket *packet = &connection->packets[6];
    switch (packet->tag) {
    case 0x4:
    case 0x5:
    case 0x4401:
    case 0x6:
        status = func_00862040(connection, packet);
        break;
    case 0x3002:
    case 0x3004:
        status = func_00861F40(connection, packet, 6);
        break;
    case 0x8101:
    case 0x9101:
    case 0x9102:
    case 0x9103:
    case 0x9201:
    case 0x9202:
    case 0x9203:
    case 0x9105:
    case 0x9301:
    case 0x9302:
    case 0x9303:
    case 0x9311:
    case 0x9313:
    case 0x9321:
    case 0x9322:
    case 0x9323:
    case 0x9331:
    case 0x9341:
    case 0x9342:
        status = func_0085F4E0(connection, packet);
        break;
    case 0x4704:
        event = 0x4704;
        break;
    default:
        event = NETLIB_UNEXPECTED_TAG;
        status = event;
        break;
    }
    if (status >= 0) {
        connection->pending = 0;
        event = status;
    }
    return event;
}
