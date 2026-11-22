/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_connection.h"
extern s32 func_00874D40(NetlibPacket *, void *);
extern s32 func_00875110(NetlibPacket *, void *, void *);
extern s32 func_008751C0(NetlibPacket *, void *);
extern s32 func_00875240(NetlibPacket *, void *, void *);
extern s32 func_00875380(NetlibPacket *, void *);
extern s32 func_00875400(NetlibPacket *, void *);
extern s32 func_008754F0(NetlibPacket *, void *, void *);
extern s32 func_00875610(NetlibPacket *, void *, void *, void *, void *, void *, void *);
extern s32 func_00875720(NetlibPacket *, void *);
extern s32 func_00875800(NetlibPacket *, void *);
extern s32 func_008758E0(NetlibPacket *, void *);
extern s32 func_00875AF0(NetlibPacket *, void *);
extern s32 func_00875BE0(NetlibPacket *, void *);
extern s32 func_00875D60(NetlibPacket *, void *, void *);
extern s32 func_00875EC0(NetlibPacket *, void *);

s32 func_0085F4E0(NetlibConnection *connection, NetlibPacket *packet) {
    s32 status = 0;
    switch (packet->tag) {
    case 0x8101:
        status = func_00875EC0(packet, &connection->error);
        break;
    case 0x9101:
        func_00875D60(packet, ((u8 *)connection + 0x13dcc), &connection->error);
        status = 0;
        break;
    case 0x9102:
        func_00875BE0(packet, ((u8 *)connection + 0x13dcc));
        break;
    case 0x9103:
        status = 0x9103;
        break;
    case 0x9201:
        func_00875AF0(packet, &connection->error);
        break;
    case 0x9202:
        func_008758E0(packet, ((u8 *)connection + 0x14550));
        break;
    case 0x9203:
        status = 0x9203;
        break;
    case 0x9105:
        func_00875800(packet, &connection->error);
        break;
    case 0x9301:
        func_00875720(packet, &connection->error);
        break;
    case 0x9302:
        func_00875610(packet, ((u8 *)connection + 0x152ad), ((u8 *)connection + 0x153ac),
                      ((u8 *)connection + 0x153b8), ((u8 *)connection + 0x153bc),
                      ((u8 *)connection + 0x153c0), ((u8 *)connection + 0x153c4));
        break;
    case 0x9303:
        status = 0x9303;
        break;
    case 0x9311:
        func_008754F0(packet, &connection->error, ((u8 *)connection + 0x153c8));
        break;
    case 0x9313:
        func_00874D40(packet, &connection->error);
        break;
    case 0x9321:
        func_00875400(packet, &connection->error);
        break;
    case 0x9322:
        func_00875380(packet, ((u8 *)connection + 0x152ac));
        break;
    case 0x9323:
        status = 0x9323;
        break;
    case 0x9331:
        func_00875240(packet, &connection->error, ((u8 *)connection + 0x153c8));
        break;
    case 0x9341:
        func_008751C0(packet, &connection->error);
        break;
    case 0x9342:
        func_00875110(packet, ((u8 *)connection + 0x152ae), ((u8 *)connection + 0x153aa));
        break;
    default:
        status = NETLIB_UNEXPECTED_TAG;
        break;
    }
    return status;
}
