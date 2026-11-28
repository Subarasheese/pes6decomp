/* compiler: mwcc-3.0.1b151 */
#include "pes6/netlib_connection.h"
#include "pes6/netlib_room_peers.h"
#include "pes6/netlib_room_round.h"
#include "pes6/netlib_team_details.h"
#include "pes6/netlib_room_data.h"
#include "pes6/lobby_profiles.h"
extern s32 func_00872870(NetlibPacket *, s32, s32 *, u8 *, u8 *, u8 *, s8 *, s8 *, s8 *, u8 *,
                         char *);
extern s32 func_008726E0(NetlibPacket *, void *);
extern s32 func_00872590(NetlibPacket *, s32 *);
extern s32 func_008724B0(NetlibPacket *, s32 *);
extern s32 func_008722C0(NetlibPacket *, LobbyProfileList *);
extern s32 func_008720B0(NetlibPacket *, LobbyProfileList *);
extern s32 func_00871F40(NetlibPacket *, LobbyProfileList *);
extern s32 func_00871CD0(NetlibPacket *, LobbyProfileList *, NetlibRoomState *);
extern s32 func_0086FC60(NetlibPacket *, void *, s32);
extern s32 func_0086D800(NetlibPacket *, void *, s32, NetlibRoomState *, s32);
extern s32 func_0086DDE0(NetlibPacket *, void *);
extern s32 func_0086F490(NetlibPacket *, NetlibRoomPeers *, char *, s32 *, u8 *, s8 *);
extern s32 func_0086F730(NetlibPacket *, s32 *);
extern s32 func_0086FA50(NetlibPacket *, s32 *, NetlibRoomState *, s32);
extern s32 func_0086D630(NetlibPacket *, s32 *, NetlibRoomPeers *);
extern s32 func_0086F7B0(NetlibPacket *, NetlibTeamDetails *, const void *);
extern s32 func_0086F6B0(NetlibPacket *, s32 *);
extern s32 func_0086F630(NetlibPacket *, s32 *);
extern s32 func_0086EF00(NetlibPacket *, s32 *, NetlibRoomState *, LobbyProfileList *);
extern s32 func_0086D450(NetlibPacket *, s32 *, NetlibRoomState *);
extern s32 func_0086D3D0(NetlibPacket *, s32 *);
extern s32 func_0086D350(NetlibPacket *, s32 *);
extern s32 func_0086ED30(NetlibPacket *, s8 *, NetlibRoomRound *);
extern s32 func_0086EBB0(NetlibPacket *, s32 *, NetlibRoomState *);
extern s32 func_0086E770(NetlibPacket *, NetlibRoomState *, LobbyProfileList *);
extern s32 func_0086E5D0(NetlibPacket *, s32 *, NetlibRoomState *);
extern s32 func_0086E470(NetlibPacket *, s32 *, s32, NetlibRoomState *);
extern s32 func_0086E340(NetlibPacket *, s32 *, s32, NetlibRoomState *);
extern s32 func_0086E240(NetlibPacket *, NetlibRoomState *);
extern s32 func_0086D260(NetlibPacket *, s32 *);
extern s32 func_0086D0B0(NetlibPacket *, NetlibRoomRound *, char *);
extern s32 func_0086D050(NetlibPacket *);
extern s32 func_0086CF50(NetlibPacket *, s32 *);
extern s32 func_0086CE60(NetlibPacket *, s32 *);
extern s32 func_0086CD70(NetlibPacket *, s32 *);
extern s32 func_0086CC90(NetlibPacket *, s32 *);
extern s32 func_0086CC10(NetlibPacket *, s32 *);
extern s32 func_0086CB90(NetlibPacket *, s32 *);
extern s32 func_0086CA50(NetlibPacket *, s32 *);
extern s32 func_0086C8C0(NetlibPacket *, NetlibRoomData *);
extern s32 func_0086C840(NetlibPacket *, s32 *);
extern s32 func_0086C760(NetlibPacket *, s32 *);
extern s32 func_0086C560(NetlibPacket *, NetlibRoomState *);
extern s32 func_0086C3D0(NetlibPacket *, s32 *, s32, NetlibRoomState *);
extern s32 func_0086C260(NetlibPacket *, NetlibRoomState *, s32);
extern s32 func_0086C0F0(NetlibPacket *, s32 *, s32, NetlibRoomState *);
extern s32 func_0086BFF0(NetlibPacket *, NetlibRoomState *);
extern s32 func_0086BE70(NetlibPacket *, s32 *, NetlibRoomState *);
extern s32 func_0086BC90(NetlibPacket *, NetlibRoomState *);
extern s32 func_0086BAC0(NetlibPacket *, s32 *, NetlibRoomState *);
extern s32 func_0086B970(NetlibPacket *, NetlibRoomState *);
extern s32 func_0086B040(NetlibPacket *, s8 *, NetlibRoomRound *);
extern s32 func_00869F80(NetlibPacket *, s32 *, NetlibRoomState *);
extern s32 func_00869F00(NetlibPacket *, s32 *, NetlibRoomState *);
extern s32 func_0086B770(NetlibPacket *, s32 *, void *);
extern s32 func_0086B480(NetlibPacket *, s32 *);
extern s32 func_0086B390(NetlibPacket *, s32 *);
extern s32 func_0086B2F0(NetlibPacket *, s32 *, s8 *);
typedef struct {
    u8 reserved00000[0xf8a0];
    s32 currentRoom;
    union {
        u8 storage[0x900];
        NetlibRoomRound round;
        NetlibRoomState state;
        NetlibRoomPeers peers;
        struct {
            u8 reserved000[0x878];
            s8 firstOption;
            u8 reserved879[0x85];
            u8 memberCount;
            u8 selection;
        } status;
    } room;
    u8 reserved101a4[2];
    s8 mode;
} NetlibRoomDirectoryConnection;

#define REPORT_REPLY(call, tag)                                                                    \
    do {                                                                                           \
        status = (call);                                                                           \
        if (status == 0)                                                                           \
            event = (tag);                                                                         \
        else                                                                                       \
            event = status;                                                                        \
    } while (0)

s32 func_008611C0(NetlibConnection *connection, NetlibPacket *packet) {
    NetlibRoomDirectoryConnection *dir = (NetlibRoomDirectoryConnection *)connection;
    s32 event = 0, status = 0;
    switch (packet->tag) {
    case 0x4101: {
        dir->currentRoom = 0;
        event =
            func_00872870(packet, (s32)connection->request, &connection->error,
                          (u8 *)((u8 *)connection + 0x7808), (u8 *)((u8 *)connection + 0x139a9),
                          (u8 *)((u8 *)connection + 0x37dc), (s8 *)((u8 *)connection + 0x16228),
                          (s8 *)((u8 *)connection + 0x16229), (s8 *)((u8 *)connection + 0x1622a),
                          (u8 *)((u8 *)connection + 0x16244), (char *)((u8 *)connection + 0x161f1));
        break;
    }
    case 0x4201: {
        event = func_008726E0(packet, (void *)((u8 *)connection + 0x7828));
        break;
    }
    case 0x4203: {
        func_001C48E8((void *)((u8 *)connection + 0xaf2c), 0, 0x4974);
        func_001C48E8((LobbyProfileList *)((u8 *)connection + 0x79a8), 0, sizeof(LobbyProfileList));
        event = func_00872590(packet, &connection->error);
        break;
    }
    case 0x4211: {
        func_001C48E8((LobbyProfileList *)((u8 *)connection + 0x79a8), 0, sizeof(LobbyProfileList));
        event = func_008724B0(packet, &connection->error);
        break;
    }
    case 0x4212: {
        event = func_008722C0(packet, (LobbyProfileList *)((u8 *)connection + 0x79a8));
        break;
    }
    case 0x4213: {
        event = 0x4213;
        break;
    }
    case 0x4220: {
        REPORT_REPLY(func_008720B0(packet, (LobbyProfileList *)((u8 *)connection + 0x79a8)),
                     0x4220);
        break;
    }
    case 0x4221: {
        REPORT_REPLY(func_00871F40(packet, (LobbyProfileList *)((u8 *)connection + 0x79a8)),
                     0x4221);
        break;
    }
    case 0x4222: {
        REPORT_REPLY(func_00871CD0(packet, (LobbyProfileList *)((u8 *)connection + 0x79a8),
                                   &dir->room.state),
                     0x4222);
        break;
    }
    case 0x4301: {
        func_001C48E8((void *)((u8 *)connection + 0xaf2c), 0, 0x4974);
        event = 0;
        break;
    }
    case 0x4302: {
        event = func_0086FC60(packet, (void *)((u8 *)connection + 0xaf2c),
                              *(u8 *)((u8 *)connection + 0x37dc));
        break;
    }
    case 0x4303: {
        event = 0x4303;
        break;
    }
    case 0x4306: {
        REPORT_REPLY(func_0086D800(packet, (void *)((u8 *)connection + 0xaf2c),
                                   *(u8 *)((u8 *)connection + 0x37dc),
                                   &dir->room.state,
                                   dir->currentRoom),
                     0x4306);
        break;
    }
    case 0x4305: {
        REPORT_REPLY(func_0086DDE0(packet, (void *)((u8 *)connection + 0xaf2c)), 0x4305);
        break;
    }
    case 0x4321: {
        func_001C48E8(dir->room.storage, 0,
                      sizeof(dir->room.storage));
        dir->room.status.memberCount = 0;
        dir->room.status.firstOption = 0;
        status = func_0086F490(packet, &dir->room.peers,
                               (char *)((u8 *)connection + 0x155d0), &connection->error,
                               connection->field155F8, (s8 *)((u8 *)connection + 0x101a6));
        if (status == 0) {
            event = 0x4321;
        } else {
            event = status;
            dir->currentRoom = 0;
            *(s8 *)((u8 *)connection + 0x1011c) =
                dir->mode;
        }
        break;
    }
    case 0x4326: {
        status = func_0086F730(packet, &connection->error);
        if (status == 0) {
            event = 0x4326;
            dir->currentRoom = 0;
        } else {
            event = status;
        }
        break;
    }
    case 0x4311: {
        status =
            func_0086FA50(packet, &connection->error,
                          &dir->room.state, (s32)connection->request);
        if (status == 0) {
            event = 0x4311;
            dir->currentRoom = 0;
        } else {
            event = status;
            func_001C48E8(dir->room.storage, 0,
                          sizeof(dir->room.storage));
            dir->room.status.memberCount = 0;
            dir->currentRoom = 0;
        }
        break;
    }
    case 0x432b: {
        status = func_0086D630(packet, &connection->error,
                               &dir->room.peers);
        if (status == 0) {
            event = 0x432b;
            dir->currentRoom = 0;
        } else {
            event = status;
        }
        break;
    }
    case 0x4322: {
        REPORT_REPLY(func_0086F7B0(packet, (NetlibTeamDetails *)connection->field153DC,
                                   (const void *)((u8 *)connection + 0x155d0)),
                     0x4322);
        break;
    }
    case 0x4327: {
        REPORT_REPLY(func_0086F6B0(packet, &connection->error), 0x4327);
        break;
    }
    case 0x4324: {
        REPORT_REPLY(func_0086F630(packet, &connection->error), 0x4324);
        break;
    }
    case 0x4330: {
        REPORT_REPLY(func_0086EF00(packet, &connection->error,
                                   &dir->room.state,
                                   (LobbyProfileList *)((u8 *)connection + 0x79a8)),
                     0x4330);
        break;
    }
    case 0x4331: {
        REPORT_REPLY(func_0086D450(packet, &connection->error,
                                   &dir->room.state),
                     0x4331);
        break;
    }
    case 0x4341: {
        REPORT_REPLY(func_0086D3D0(packet, &connection->error), 0x4341);
        break;
    }
    case 0x4342: {
        status = func_0086D350(packet, &connection->error);
        if (status == 0) {
            event = 0x4342;
            dir->currentRoom = 0;
        } else {
            event = status;
        }
        break;
    }
    case 0x4344: {
        REPORT_REPLY(func_0086ED30(packet, (s8 *)((u8 *)connection + 0x13a80),
                                   &dir->room.round),
                     0x4344);
        break;
    }
    case 0x4346: {
        REPORT_REPLY(func_0086EBB0(packet, &connection->error,
                                   &dir->room.state),
                     0x4346);
        break;
    }
    case 0x4347: {
        REPORT_REPLY(func_0086E770(packet, &dir->room.state,
                                   (LobbyProfileList *)((u8 *)connection + 0x79a8)),
                     0x4347);
        break;
    }
    case 0x4348: {
        REPORT_REPLY(func_0086E5D0(packet, &connection->error,
                                   &dir->room.state),
                     0x4348);
        break;
    }
    case 0x434a: {
        REPORT_REPLY(func_0086E470(packet, &connection->error, (s32)connection->request,
                                   &dir->room.state),
                     0x434a);
        break;
    }
    case 0x434b: {
        REPORT_REPLY(func_0086E340(packet, &connection->error, (s32)connection->request,
                                   &dir->room.state),
                     0x434b);
        break;
    }
    case 0x434c: {
        REPORT_REPLY(func_0086E240(packet, &dir->room.state), 0x434c);
        break;
    }
    case 0x4370: {
        REPORT_REPLY(func_0086D260(packet, &connection->error), 0x4370);
        break;
    }
    case 0x4371: {
        connection->error = 0;
        REPORT_REPLY(func_0086D0B0(packet, &dir->room.round,
                                   (char *)connection + 0x161c0),
                     0x4371);
        break;
    }
    case 0x4372: {
        REPORT_REPLY(func_0086D050(packet), 0x4372);
        break;
    }
    case 0x4374: {
        REPORT_REPLY(func_0086CF50(packet, &connection->error), 0x4374);
        break;
    }
    case 0x4376: {
        REPORT_REPLY(func_0086CE60(packet, &connection->error), 0x4376);
        break;
    }
    case 0x4378: {
        REPORT_REPLY(func_0086CD70(packet, &connection->error), 0x4378);
        break;
    }
    case 0x437c: {
        func_0086CC90(packet, &connection->error);
        event = 0x437c;
        break;
    }
    case 0x437d: {
        func_0086CC10(packet, &connection->error);
        event = 0x437d;
        break;
    }
    case 0x437e: {
        func_0086CB90(packet, &connection->error);
        event = 0x437e;
        break;
    }
    case 0x4350: {
        REPORT_REPLY(func_0086CA50(packet, (s32 *)((u8 *)connection + 0x13a84)), 0x4350);
        break;
    }
    case 0x4351: {
        REPORT_REPLY(func_0086C8C0(packet, (NetlibRoomData *)((u8 *)connection + 0x13acc)), 0x4351);
        break;
    }
    case 0x4352: {
        REPORT_REPLY(func_0086C840(packet, &connection->error), 0x4352);
        break;
    }
    case 0x4361: {
        REPORT_REPLY(func_0086C760(packet, &connection->error), 0x4361);
        break;
    }
    case 0x4362: {
        REPORT_REPLY(func_0086C560(packet, &dir->room.state), 0x4362);
        break;
    }
    case 0x4364: {
        REPORT_REPLY(func_0086C3D0(packet, &connection->error, (s32)connection->request,
                                   &dir->room.state),
                     0x4364);
        break;
    }
    case 0x4365: {
        REPORT_REPLY(func_0086C260(packet, &dir->room.state,
                                   *(u8 *)((u8 *)connection + 0x37dc)),
                     0x4365);
        break;
    }
    case 0x4367: {
        REPORT_REPLY(func_0086C0F0(packet, &connection->error, (s32)connection->request,
                                   &dir->room.state),
                     0x4367);
        break;
    }
    case 0x4368: {
        REPORT_REPLY(func_0086BFF0(packet, &dir->room.state), 0x4368);
        break;
    }
    case 0x436a: {
        REPORT_REPLY(func_0086BE70(packet, &connection->error,
                                   &dir->room.state),
                     0x436a);
        break;
    }
    case 0x436b: {
        REPORT_REPLY(func_0086BC90(packet, &dir->room.state), 0x436b);
        break;
    }
    case 0x436d: {
        REPORT_REPLY(func_0086BAC0(packet, &connection->error,
                                   &dir->room.state),
                     0x436d);
        break;
    }
    case 0x436e: {
        REPORT_REPLY(func_0086B970(packet, &dir->room.state), 0x436e);
        break;
    }
    case 0x437f: {
        func_0086B040(packet, (s8 *)((u8 *)connection + 0x13a80),
                      &dir->room.round);
        event = 0x437f;
        break;
    }
    case 0x4381: {
        REPORT_REPLY(func_00869F80(packet, &connection->error,
                                   &dir->room.state),
                     0x436d);
        break;
    }
    case 0x4382: {
        REPORT_REPLY(func_00869F00(packet, &connection->error,
                                   &dir->room.state),
                     0x436d);
        break;
    }
    case 0x4384: {
        func_0086B770(packet, &connection->error, (void *)((u8 *)connection + 0x16144));
        event = 0x4384;
        break;
    }
    case 0x4386: {
        REPORT_REPLY(func_0086B480(packet, &connection->error), 0x4386);
        break;
    }
    case 0x4388: {
        REPORT_REPLY(func_0086B390(packet, &connection->error), 0x4388);
        break;
    }
    case 0x4389: {
        s8 slot = 0;
        REPORT_REPLY(func_0086B2F0(packet, &connection->error, &slot), 0x4389);
        break;
    }
    default:
        event = NETLIB_UNEXPECTED_TAG;
        break;
    }
    return event;
}
