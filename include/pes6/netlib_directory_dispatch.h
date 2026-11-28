#ifndef PES6_NETLIB_DIRECTORY_DISPATCH_H
#define PES6_NETLIB_DIRECTORY_DISPATCH_H

#include "pes6/netlib_connection.h"
#include "pes6/netlib_directory_page.h"
#include "pes6/netlib_text_message.h"
#include "pes6/lobby_result_entries.h"

typedef struct {
    s32 id;
    u8 flag;
    char title[65], text[444];
    u8 reserved202[2];
} NetlibBulletinRecord;
typedef struct {
    s32 count;
    NetlibBulletinRecord rows[128];
} NetlibBulletinPage;

typedef struct {
    s32 id, value04, value08, value0C, values10[5];
    s8 field24, field25;
    char text26[20];
    u8 reserved3A[2];
    s32 value3C;
    s16 field40, values42[4];
    u8 reserved4A[2];
} NetlibResultTotals;

typedef struct {
    char text[129];
    u8 first, second;
} NetlibBulletin;

typedef struct {
    NetlibDirectoryPage directory;
    NetlibBulletin bulletins[7];
    u8 reserved37D1[3];
    s32 field37D4, field37D8;
} NetlibDirectoryState;

typedef struct {
    u8 reserved4834[8];
    s32 id;
    char first[17], second[17];
    u8 reserved4862[2];
    NetlibTextMessages *messages;
} NetlibSignInData;

static inline NetlibDirectoryState *netlib_directory_state(NetlibConnection *connection) {
    return (NetlibDirectoryState *)(connection->pad015C + (0x238 - 0x15c));
}

static inline NetlibSignInData *netlib_sign_in_data(NetlibConnection *connection) {
    return (NetlibSignInData *)connection->pad4834;
}

extern s32 func_008688A0(NetlibPacket *packet, s32 *result);
extern s32 func_00868770(NetlibPacket *packet, NetlibTextMessages *messages);
extern s32 func_00868690(NetlibPacket *packet, s32 *id);
extern s32 func_008685A0(NetlibPacket *packet, s32 *id, s32 *result);
extern s32 func_008684C0(NetlibPacket *packet, NetlibBulletin *bulletins);
extern s32 func_00868AD0(NetlibPacket *packet, NetlibDirectoryPage *page, s32 *result);
extern s32 func_00868990(NetlibPacket *packet, NetlibDirectoryPage *page);
extern s32 func_00868310(NetlibPacket *packet, NetlibBulletinPage *page);
extern s32 func_00868430(NetlibPacket *packet, NetlibBulletinPage *page, s32 *result);
extern s32 func_00877570(NetlibConnection *connection, NetlibPacket *packet, s32 *id, char *first,
                         char *second, s32 *result);
extern s32 func_00867D40(NetlibPacket *packet, LobbyResultEntry *rows, s32 *result);
extern s32 func_00867A10(NetlibPacket *packet, s32 *result);
extern s32 func_00867810(NetlibPacket *packet, NetlibResultTotals *totals, s32 *result);
extern s32 func_00866B10(NetlibPacket *packet, s32 *result);
extern s32 func_008669F0(NetlibPacket *packet, NetlibTextMessages *messages);

#endif
