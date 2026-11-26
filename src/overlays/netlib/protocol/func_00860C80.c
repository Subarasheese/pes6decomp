/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_connection.h"
#include "pes6/netlib_room.h"
#include "pes6/netlib_room_summary.h"
#include "pes6/netlib_team_details.h"
extern s32 func_0086A6D0(NetlibPacket *, s32 *);
extern s32 func_0086A650(NetlibPacket *, s32 *);
extern s32 func_0086A2E0(NetlibPacket *, s32 *, NetlibTeamDetails *, NetlibTeamEndpointPair *, u8 *,
                         s8 *, s16 *, s8 *);
extern s32 func_0086A200(NetlibPacket *, s32 *);
extern s32 func_008691C0(NetlibPacket *, s32 *);
extern s32 func_008690F0(NetlibPacket *, s32 *, void *);
extern s32 func_00869E00(NetlibPacket *, s32 *);
extern s32 func_00869530(NetlibPacket *, s32 *);
extern s32 func_00869380(NetlibPacket *, NetlibRoomState *, void *);
extern s32 func_00869620(NetlibPacket *, s32 *);
extern s32 func_00869D10(NetlibPacket *, s32 *);
extern s32 func_00869B90(NetlibPacket *, s32 *, NetlibRoomState *);
extern s32 func_00869A30(NetlibPacket *, NetlibRoomState *);
extern s32 func_00869860(NetlibPacket *, s32 *, NetlibRoomState *);
extern s32 func_00869710(NetlibPacket *, NetlibRoomState *);
extern s32 func_00869030(NetlibPacket *, s8 *, NetlibRoomState *);
extern s32 func_00868E80(NetlibPacket *, s32 *);
extern s32 func_00868EF0(NetlibPacket *, s32 *);
extern s32 func_00868DA0(NetlibPacket *, s32 *);
extern s32 func_00868D20(NetlibPacket *, s32 *);
extern s32 func_0086B570(NetlibPacket *, s32 *, void *);
extern s32 func_0086B200(NetlibPacket *, s32 *);
#define REPORT_REPLY(call, tag)                                                                    \
    do {                                                                                           \
        status = (call);                                                                           \
        if (status == 0)                                                                           \
            event = (tag);                                                                         \
        else                                                                                       \
            event = status;                                                                        \
    } while (0)

s32 func_00860C80(NetlibConnection *connection, NetlibPacket *packet) {
    s32 event = 0, status = 0;
    switch (packet->tag) {
    case 0x6021:
        REPORT_REPLY(func_0086A6D0(packet, &connection->error), packet->tag);
        break;
    case 0x6022:
        REPORT_REPLY(func_0086A650(packet, &connection->error), packet->tag);
        break;
    case 0x6031:
        REPORT_REPLY(func_0086A2E0(packet, &connection->error,
                                   (NetlibTeamDetails *)connection->field153DC,
                                   (NetlibTeamEndpointPair *)connection->field155CC,
                                   connection->field155F8, (s8 *)connection->field153D9,
                                   (s16 *)connection->field101A4, (s8 *)connection->field101A7),
                     packet->tag);
        break;
    case 0x6024:
        REPORT_REPLY(func_0086A200(packet, &connection->error), packet->tag);
        break;
    case 0x6040:
        REPORT_REPLY(func_00869240(packet, (NetlibRoomSummary *)((u8 *)connection + 0x13a84)),
                     packet->tag);
        break;
    case 0x6041:
        REPORT_REPLY(func_008691C0(packet, &connection->error), packet->tag);
        break;
    case 0x6051:
        func_001C48E8(connection->field16118, 0, sizeof(connection->field16118));
        func_008690F0(packet, &connection->error, connection->field16118);
        event = packet->tag;
        break;
    case 0x6061:
        REPORT_REPLY(func_00869E00(packet, &connection->error), packet->tag);
        break;
    case 0x6071:
        REPORT_REPLY(func_00869530(packet, &connection->error), packet->tag);
        break;
    case 0x6072:
        REPORT_REPLY(func_00869380(packet, (NetlibRoomState *)((u8 *)connection + 0xf8a4),
                                   (u8 *)connection + 0x161c0),
                     packet->tag);
        break;
    case 0x6081:
        REPORT_REPLY(func_00869620(packet, &connection->error), packet->tag);
        break;
    case 0x6091:
        REPORT_REPLY(func_00869D10(packet, &connection->error), packet->tag);
        break;
    case 0x60a1:
        REPORT_REPLY(func_00869B90(packet, &connection->error,
                                   (NetlibRoomState *)((u8 *)connection + 0xf8a4)),
                     packet->tag);
        break;
    case 0x60a2:
        REPORT_REPLY(func_00869A30(packet, (NetlibRoomState *)((u8 *)connection + 0xf8a4)),
                     packet->tag);
        break;
    case 0x60b1:
        REPORT_REPLY(func_00869860(packet, &connection->error,
                                   (NetlibRoomState *)((u8 *)connection + 0xf8a4)),
                     packet->tag);
        break;
    case 0x60b2:
        REPORT_REPLY(func_00869710(packet, (NetlibRoomState *)((u8 *)connection + 0xf8a4)),
                     packet->tag);
        break;
    case 0x6073:
        REPORT_REPLY(func_00869030(packet, (s8 *)connection + 0x13a80,
                                   (NetlibRoomState *)((u8 *)connection + 0xf8a4)),
                     0x6073);
        break;
    case 0x60c0:
        REPORT_REPLY(func_00868E80(packet, &connection->error), packet->tag);
        break;
    case 0x60c1:
        REPORT_REPLY(func_00868EF0(packet, &connection->error), packet->tag);
        break;
    case 0x60c3:
        func_00868DA0(packet, &connection->error);
        event = 0x60c2;
        break;
    case 0x60c4:
        REPORT_REPLY(func_00868D20(packet, &connection->error), packet->tag);
        break;
    case 0x60d1:
        func_0086B570(packet, &connection->error, (u8 *)connection + 0x16144);
        event = 0x60d1;
        break;
    case 0x60e0:
    case 0x60f1:
    case 0x60f2:
        event = packet->tag;
        break;
    case 0x6111:
        REPORT_REPLY(func_0086B200(packet, &connection->error), 0x4388);
        break;
    default:
        event = NETLIB_UNEXPECTED_TAG;
        break;
    }
    return event;
}
