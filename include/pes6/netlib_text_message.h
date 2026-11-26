#ifndef PES6_NETLIB_TEXT_MESSAGE_H
#define PES6_NETLIB_TEXT_MESSAGE_H

#include "pes6/netlib_packet.h"

typedef struct {
    char text00[20];
    s32 id;
    char name[65];
    s8 field59, field5A;
    char text5B[513];
} NetlibTextMessage;

typedef struct {
    s32 count;
    NetlibTextMessage rows[];
} NetlibTextMessages;

extern s32 func_00873EE0(void *packet, void *buffer, s32 size);
extern void *func_001C48E8(void *dest, s32 value, u32 size);

static inline void netlib_read_text_message(NetlibPacket *packet, NetlibTextMessage *row) {
    func_00873F60(packet, &row->id);
    func_00874120(packet, &row->field59);
    func_00874120(packet, &row->field5A);
    func_001C48E8(row->text00, 0, sizeof(row->text00));
    func_00873EE0(packet, row->text00, sizeof(row->text00) - 1);
    func_001C48E8(row->name, 0, sizeof(row->name));
    func_00873EE0(packet, row->name, sizeof(row->name) - 1);
    func_001C48E8(row->text5B, 0, sizeof(row->text5B));
    func_00873EE0(packet, row->text5B, sizeof(row->text5B) - 1);
}

#endif
