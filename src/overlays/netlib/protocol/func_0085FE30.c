/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_connection.h"
extern s32 func_008777D0(NetlibPacket *, void *, void *);
extern s32 func_008779C0(NetlibPacket *, void *, void *);
extern s32 func_00877AD0(NetlibPacket *, void *);
extern s32 func_00877BE0(NetlibPacket *, void *);
extern s32 func_00877C60(NetlibPacket *, void *);
extern s32 func_00877D80(NetlibPacket *, void *, void *, void *);
extern s32 func_00877EE0(NetlibPacket *, void *);
extern s32 func_00877FE0(NetlibPacket *, void *, void *, void *, void *, void *, void *);
extern s32 func_00878160(NetlibPacket *, void *, void *, void *, void *, void *);
extern s32 func_00878250(NetlibPacket *, void *);
extern s32 func_00878370(NetlibPacket *, void *, void *);
extern s32 func_00878420(NetlibPacket *, void *, void *);
extern s32 func_00878510(NetlibPacket *, void *, void *);
extern s32 func_00878620(NetlibPacket *);
extern s32 func_00878680(NetlibPacket *, void *);
extern s32 func_00878770(NetlibPacket *, void *);
extern s32 func_00878860(NetlibPacket *, void *);
extern s32 func_00878950(NetlibPacket *, void *);
extern s32 func_008789D0(NetlibPacket *, void *);
extern s32 func_00878AF0(NetlibPacket *, void *, void *);
extern s32 func_00878CA0(NetlibPacket *, void *, void *);
extern s32 func_00878D60(NetlibPacket *, void *);
extern s32 func_00878DE0(NetlibPacket *, void *);
extern s32 func_00878EC0(NetlibPacket *, void *);
extern s32 func_00878F40(NetlibPacket *, void *, void *);
extern s32 func_00878FF0(NetlibPacket *, void *);
extern s32 func_008790E0(NetlibPacket *, void *);
extern s32 func_00879160(NetlibPacket *, void *);
extern s32 func_00879250(NetlibPacket *, void *, void *, void *, void *, void *, void *);
extern s32 func_008795F0(NetlibPacket *, void *, void *);
extern s32 func_008797E0(NetlibPacket *, void *, void *);
extern s32 func_008798F0(NetlibPacket *, void *);
extern s32 func_00879970(NetlibPacket *, void *);
extern s32 func_00879A50(NetlibPacket *, void *);
extern s32 func_00879AD0(NetlibPacket *, void *);
extern s32 func_00879B50(NetlibPacket *, void *);
extern s32 func_00879C40(NetlibPacket *, void *);
extern s32 func_00879CC0(NetlibPacket *, void *);
extern s32 func_00879DB0(NetlibPacket *, void *, void *);
extern s32 func_00879EB0(NetlibPacket *, void *, void *);
extern s32 func_00879FC0(NetlibPacket *, void *, void *, void *);
extern s32 func_0087A270(NetlibPacket *, void *, void *, void *, void *, void *);
extern s32 func_0087A380(NetlibPacket *, void *);
extern s32 func_0087A4B0(NetlibPacket *, void *);
extern s32 func_0087A590(NetlibPacket *, void *, void *, void *, void *, void *);
extern s32 func_0087A680(NetlibPacket *, void *);
extern s32 func_0087A700(NetlibPacket *, void *);
extern s32 func_0087A7F0(NetlibPacket *, void *, void *, void *, void *);
extern s32 func_0087A930(NetlibPacket *, void *, void *, void *, void *, void *);
extern s32 func_0087AAB0(NetlibPacket *, void *, void *, void *, void *, void *);
extern s32 func_0087AC10(NetlibPacket *, void *, void *, void *, void *);
extern s32 func_0087ADD0(NetlibPacket *, void *, void *);
extern s32 func_0087AF10(NetlibPacket *, void *, void *);
extern s32 func_0087AFE0(NetlibPacket *, void *, void *, s32, void *);
extern s32 func_0087B200(NetlibPacket *, void *, void *);
extern s32 func_0087B2F0(NetlibPacket *, void *, void *);

#define REPORT_REPLY(call, tag)                                                                    \
    do {                                                                                           \
        status = (call);                                                                           \
        if (status == 0)                                                                           \
            event = (tag);                                                                         \
        else                                                                                       \
            event = status;                                                                        \
    } while (0)

s32 func_0085FE30(NetlibConnection *connection, NetlibPacket *packet) {
    s32 event = 0;
    s32 status = 0;
    switch (packet->tag) {
    case 0x5021:
        REPORT_REPLY(func_0087B2F0(packet, &connection->error, ((u8 *)connection + 0x101a8)),
                     packet->tag);
        break;
    case 0x5022:
        REPORT_REPLY(func_0087B200(packet, &connection->error, ((u8 *)connection + 0x101a8)),
                     packet->tag);
        break;
    case 0x5023:
        event = packet->tag;
        break;
    case 0x5025:
        REPORT_REPLY(func_0087AFE0(packet, &connection->error, ((u8 *)connection + 0x11560),
                                   *(s32 *)((u8 *)connection + 0x117f0),
                                   ((u8 *)connection + 0x11828)),
                     packet->tag);
        break;
    case 0x5027:
        REPORT_REPLY(
            func_0087AF10(packet, &connection->error, *(u8 **)((u8 *)connection + 0x139a4)),
            packet->tag);
        break;
    case 0x5028:
        REPORT_REPLY(
            func_0087ADD0(packet, &connection->error, *(u8 **)((u8 *)connection + 0x139a4)),
            packet->tag);
        break;
    case 0x5029:
        event = packet->tag;
        break;
    case 0x5031:
        REPORT_REPLY(func_0087A700(packet, &connection->error), packet->tag);
        break;
    case 0x5033:
        REPORT_REPLY(func_0087A4B0(packet, &connection->error), packet->tag);
        break;
    case 0x5034:
        REPORT_REPLY(func_0087A680(packet, &connection->error), packet->tag);
        break;
    case 0x5035:
        REPORT_REPLY(func_0087A590(packet, &connection->error, ((u8 *)connection + 0x139a8),
                                   ((u8 *)connection + 0x161f1), ((u8 *)connection + 0x117f0),
                                   ((u8 *)connection + 0x11825)),
                     packet->tag);
        break;
    case 0x5037:
        REPORT_REPLY(func_0087A380(packet, &connection->error), packet->tag);
        break;
    case 0x5038:
        REPORT_REPLY(func_0087A270(packet, &connection->error, ((u8 *)connection + 0x139a8),
                                   ((u8 *)connection + 0x161f1), ((u8 *)connection + 0x117f0),
                                   ((u8 *)connection + 0x11825)),
                     packet->tag);
        break;
    case 0x5039:
        REPORT_REPLY(func_00879FC0(packet, ((u8 *)connection + 0x161bc),
                                   ((u8 *)connection + 0x11828), ((u8 *)connection + 0x12230)),
                     packet->tag);
        break;
    case 0x503B:
        REPORT_REPLY(func_00879EB0(packet, &connection->error, ((u8 *)connection + 0x11aac)),
                     packet->tag);
        break;
    case 0x503C:
        REPORT_REPLY(func_00879DB0(packet, &connection->error, ((u8 *)connection + 0x11aac)),
                     packet->tag);
        break;
    case 0x503D:
        event = packet->tag;
        break;
    case 0x5041:
        REPORT_REPLY(func_00879CC0(packet, &connection->error), packet->tag);
        break;
    case 0x5042:
        REPORT_REPLY(func_00879C40(packet, ((u8 *)connection + 0x161bc)), packet->tag);
        break;
    case 0x5044:
        REPORT_REPLY(func_00879B50(packet, &connection->error), packet->tag);
        break;
    case 0x5045:
        REPORT_REPLY(func_00879A50(packet, &connection->error), packet->tag);
        break;
    case 0x5046:
        REPORT_REPLY(func_00879AD0(packet, &connection->error), packet->tag);
        break;
    case 0x5048:
        REPORT_REPLY(func_00879970(packet, &connection->error), packet->tag);
        break;
    case 0x5049:
        REPORT_REPLY(func_008798F0(packet, &connection->error), packet->tag);
        break;
    case 0x5051:
        REPORT_REPLY(func_00878250(packet, &connection->error), packet->tag);
        break;
    case 0x5052:
        REPORT_REPLY(func_00878160(packet, ((u8 *)connection + 0x161bc),
                                   ((u8 *)connection + 0x161c0), ((u8 *)connection + 0x12230),
                                   ((u8 *)connection + 0x117f0), ((u8 *)connection + 0x11825)),
                     packet->tag);
        break;
    case 0x5053:
        REPORT_REPLY(func_00877FE0(packet, ((u8 *)connection + 0x161bc),
                                   ((u8 *)connection + 0x161c0), ((u8 *)connection + 0x12230),
                                   ((u8 *)connection + 0x117f0), ((u8 *)connection + 0x11825),
                                   connection->request),
                     packet->tag);
        break;
    case 0x5061:
        REPORT_REPLY(func_008797E0(packet, &connection->error, ((u8 *)connection + 0x12230)),
                     packet->tag);
        break;
    case 0x5062:
        REPORT_REPLY(func_008795F0(packet, &connection->error, ((u8 *)connection + 0x12230)),
                     packet->tag);
        break;
    case 0x5063:
        event = packet->tag;
        break;
    case 0x5071:
        REPORT_REPLY(
            func_008779C0(packet, &connection->error, *(u8 **)((u8 *)connection + 0x117e4)),
            packet->tag);
        break;
    case 0x5072:
        REPORT_REPLY(
            func_008777D0(packet, &connection->error, *(u8 **)((u8 *)connection + 0x117e4)),
            packet->tag);
        break;
    case 0x5073:
        event = packet->tag;
        break;
    case 0x5081:
        REPORT_REPLY(
            func_00878CA0(packet, &connection->error, *(u8 **)((u8 *)connection + 0x117e8)),
            packet->tag);
        break;
    case 0x5082:
        REPORT_REPLY(
            func_00878AF0(packet, &connection->error, *(u8 **)((u8 *)connection + 0x117e8)),
            packet->tag);
        break;
    case 0x5083:
        event = packet->tag;
        break;
    case 0x5085:
        REPORT_REPLY(func_008789D0(packet, &connection->error), packet->tag);
        break;
    case 0x5086:
        REPORT_REPLY(func_00878950(packet, ((u8 *)connection + 0x117ec)), packet->tag);
        break;
    case 0x5088:
        REPORT_REPLY(func_00878860(packet, &connection->error), packet->tag);
        break;
    case 0x508A:
        REPORT_REPLY(func_00878770(packet, &connection->error), packet->tag);
        break;
    case 0x508C:
        REPORT_REPLY(func_00878680(packet, &connection->error), packet->tag);
        break;
    case 0x508D:
        REPORT_REPLY(func_00878620(packet), packet->tag);
        break;
    case 0x508F:
        REPORT_REPLY(func_00878510(packet, &connection->error, ((u8 *)connection + 0x10c9c)),
                     packet->tag);
        break;
    case 0x5090:
        REPORT_REPLY(func_00878420(packet, &connection->error, ((u8 *)connection + 0x10c9c)),
                     packet->tag);
        break;
    case 0x5091:
        event = packet->tag;
        break;
    case 0x5093:
        REPORT_REPLY(func_00878370(packet, &connection->error, ((u8 *)connection + 0x117ec)),
                     packet->tag);
        break;
    case 0x50F3:
        REPORT_REPLY(func_00877AD0(packet, &connection->error), packet->tag);
        break;
    case 0x5100:
        break;
    case 0x5111:
        REPORT_REPLY(func_00879250(packet, ((u8 *)connection + 0x12230),
                                   ((u8 *)connection + 0x161bc), ((u8 *)connection + 0x161c0),
                                   ((u8 *)connection + 0x16224), connection->request,
                                   ((u8 *)connection + 0x11825)),
                     packet->tag);
        break;
    case 0x50A1:
        REPORT_REPLY(func_00879160(packet, &connection->error), packet->tag);
        break;
    case 0x50A2:
        REPORT_REPLY(func_008790E0(packet, ((u8 *)connection + 0x161bc)), packet->tag);
        break;
    case 0x50A4:
        REPORT_REPLY(func_00878FF0(packet, &connection->error), packet->tag);
        break;
    case 0x50A5:
        REPORT_REPLY(func_00878EC0(packet, &connection->error), packet->tag);
        break;
    case 0x50A6:
        REPORT_REPLY(func_00878F40(packet, &connection->error, ((u8 *)connection + 0x11825)),
                     packet->tag);
        break;
    case 0x50A8:
        REPORT_REPLY(func_00878DE0(packet, &connection->error), packet->tag);
        break;
    case 0x50A9:
        REPORT_REPLY(func_00878D60(packet, &connection->error), packet->tag);
        break;
    case 0x50B1:
        REPORT_REPLY(func_0087A930(packet, &connection->error, ((u8 *)connection + 0x11828),
                                   ((u8 *)connection + 0x117f0), ((u8 *)connection + 0x11825),
                                   ((u8 *)connection + 0x12230)),
                     packet->tag);
        break;
    case 0x50B2:
        REPORT_REPLY(func_0087A7F0(packet, ((u8 *)connection + 0x11828),
                                   ((u8 *)connection + 0x161bc), ((u8 *)connection + 0x161c0),
                                   ((u8 *)connection + 0x12230)),
                     packet->tag);
        break;
    case 0x50C1:
        REPORT_REPLY(func_0087AAB0(packet, &connection->error, ((u8 *)connection + 0x11828),
                                   ((u8 *)connection + 0x117f0), ((u8 *)connection + 0x11825),
                                   ((u8 *)connection + 0x12230)),
                     packet->tag);
        break;
    case 0x50D1:
        REPORT_REPLY(func_00877EE0(packet, &connection->error), packet->tag);
        break;
    case 0x50D2:
        REPORT_REPLY(func_00877D80(packet, connection->request, ((u8 *)connection + 0x12230),
                                   ((u8 *)connection + 0x11825)),
                     packet->tag);
        break;
    case 0x50E1:
        REPORT_REPLY(func_00877C60(packet, &connection->error), packet->tag);
        break;
    case 0x50E2:
        REPORT_REPLY(func_00877BE0(packet, ((u8 *)connection + 0x139a8)), packet->tag);
        break;
    case 0x50F1:
        REPORT_REPLY(func_0087AC10(packet, &connection->error, ((u8 *)connection + 0x11828),
                                   ((u8 *)connection + 0x117f0), ((u8 *)connection + 0x11825)),
                     packet->tag);
        break;
    default:
        event = NETLIB_UNEXPECTED_TAG;
        break;
    }
    return event;
}
