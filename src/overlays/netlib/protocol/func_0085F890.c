/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_connection.h"
extern s32 func_0086A070(NetlibPacket *, void *);
extern s32 func_0086D780(NetlibPacket *, void *);
extern s32 func_0086FFE0(NetlibPacket *, void *);
extern s32 func_008700E0(NetlibPacket *, void *, void *, void *, void *, void *, void *);
extern s32 func_00870460(NetlibPacket *, void *);
extern s32 func_008705F0(NetlibPacket *, void *, void *);
extern s32 func_00870710(NetlibPacket *, void *);
extern s32 func_00870880(NetlibPacket *, void *, void *);
extern s32 func_00870980(NetlibPacket *, void *);
extern s32 func_00870A70(NetlibPacket *, void *);
extern s32 func_00870B60(NetlibPacket *, void *);
extern s32 func_00870CB0(NetlibPacket *, void *);
extern s32 func_00870D30(NetlibPacket *, void *);
extern s32 func_00870E10(NetlibPacket *, void *);
extern s32 func_00870E90(NetlibPacket *, void *);
extern s32 func_00870F80(NetlibPacket *, void *);
extern s32 func_00871000(NetlibPacket *, void *);
extern s32 func_008710F0(NetlibPacket *, void *);
extern s32 func_008711D0(NetlibPacket *, void *);
extern s32 func_008712F0(NetlibPacket *, void *);
extern s32 func_00871410(NetlibPacket *, void *);
extern s32 func_00871500(NetlibPacket *, void *);
extern s32 func_00871610(NetlibPacket *, void *);
extern s32 func_00871710(NetlibPacket *, void *);
extern s32 func_00871870(NetlibPacket *, void *, s32);
extern s32 func_00871970(NetlibPacket *, void *);
extern s32 func_00874E30(NetlibPacket *, void *);
extern s32 func_00874FB0(NetlibPacket *, void *, void *);

#define REPORT_REPLY(call, tag)                                                                    \
    do {                                                                                           \
        status = (call);                                                                           \
        if (status == 0)                                                                           \
            event = (tag);                                                                         \
        else                                                                                       \
            event = status;                                                                        \
    } while (0)

s32 func_0085F890(NetlibConnection *connection, NetlibPacket *packet) {
    s32 event = 0;
    s32 status = 0;
    switch (packet->tag) {
    case 0x4702:
        REPORT_REPLY(func_00871970(packet, &connection->error), 0x4702);
        break;
    case 0x4704:
        event = 0x4704;
        break;
    case 0x4782:
        REPORT_REPLY(
            func_00871870(packet, &connection->error, *(s32 *)((u8 *)connection + 0x13a7c)),
            0x4782);
        break;
    case 0x4784:
        REPORT_REPLY(func_00871710(packet, *(u8 **)((u8 *)connection + 0x13a7c)), 0x4784);
        break;
    case 0x4786:
        event = 0x4786;
        break;
    case 0x4791:
        REPORT_REPLY(func_00871610(packet, &connection->error), 0x4791);
        break;
    case 0x47A1:
        REPORT_REPLY(func_00871500(packet, &connection->error), 0x4791);
        break;
    case 0x3082:
        *(s32 *)((u8 *)connection + 0x4bbc) = 0;
        *(s32 *)((u8 *)connection + 0x4bc0) = 0;
        *(s32 *)((u8 *)connection + 0x4bc4) = 0;
        func_001C48E8(((u8 *)connection + 0x4bc8), 0, 0xf50);
        event = func_00871410(packet, &connection->error);
        break;
    case 0x3084:
        event = func_008712F0(packet, ((u8 *)connection + 0x4bbc));
        break;
    case 0x3086:
        event = 0x3086;
        break;
    case 0x4524:
        REPORT_REPLY(func_008711D0(packet, ((u8 *)connection + 0x4bbc)), 0x4524);
        break;
    case 0x4525:
        REPORT_REPLY(func_008710F0(packet, ((u8 *)connection + 0x4bbc)), 0x4525);
        break;
    case 0x4506:
        REPORT_REPLY(func_00871000(packet, &connection->error), 0x4506);
        break;
    case 0x4507:
        func_00870F80(packet, ((u8 *)connection + 0x161bc));
        event = 0x4507;
        break;
    case 0x4509:
        func_00870E90(packet, &connection->error);
        event = 0x4509;
        break;
    case 0x450A:
        func_00870E10(packet, &connection->error);
        event = 0x450a;
        break;
    case 0x450C:
        func_00870D30(packet, &connection->error);
        event = 0x450c;
        break;
    case 0x450D:
        func_00870CB0(packet, &connection->error);
        event = 0x450d;
        break;
    case 0x4512:
        REPORT_REPLY(func_00870B60(packet, ((u8 *)connection + 0x4bbc)), 0x4512);
        break;
    case 0x4521:
        func_00870A70(packet, &connection->error);
        event = 0x4521;
        break;
    case 0x4523:
        func_00870980(packet, &connection->error);
        event = 0x4523;
        break;
    case 0x4581:
        REPORT_REPLY(func_00870880(packet, ((u8 *)connection + 0x5b18), &connection->error),
                     0x4581);
        break;
    case 0x4582:
        REPORT_REPLY(func_00870710(packet, ((u8 *)connection + 0x5b18)), 0x4582);
        break;
    case 0x4583:
        event = 0x4583;
        break;
    case 0x4601:
        REPORT_REPLY(func_008705F0(packet, *(u8 **)((u8 *)connection + 0x7804), &connection->error),
                     0x4601);
        break;
    case 0x4602:
        REPORT_REPLY(func_00870460(packet, *(u8 **)((u8 *)connection + 0x7804)), 0x4602);
        break;
    case 0x4603:
        event = 0x4603;
        break;
    case 0x4103:
        REPORT_REPLY(func_008700E0(packet, ((u8 *)connection + 0xad3c), &connection->error,
                                   connection->request, ((u8 *)connection + 0x117f0),
                                   ((u8 *)connection + 0x11825), ((u8 *)connection + 0x117f4)),
                     0x4103);
        break;
    case 0x4111:
        REPORT_REPLY(func_0086FFE0(packet, &connection->error), 0x4111);
        break;
    case 0x4116:
        REPORT_REPLY(func_0086D780(packet, &connection->error), 0x4116);
        break;
    case 0x9411:
        event = func_00874FB0(packet, ((u8 *)connection + 0x13dcc), &connection->error);
        break;
    case 0x9412:
        event = func_00874E30(packet, ((u8 *)connection + 0x13dcc));
        break;
    case 0x9413:
        event = 0x9413;
        break;
    case 0x434E:
        REPORT_REPLY(func_0086A070(packet, &connection->error), packet->tag);
        break;
    default:
        event = NETLIB_UNEXPECTED_TAG;
        break;
    }
    return event;
}
