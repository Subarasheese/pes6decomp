/* compiler: mwcc-3.0.1b151-O3 */
#include "pes6/netlib_packet.h"
typedef struct {
    s32 id;
    char name[49];
} NetlibNameRecord;
typedef struct {
    NetlibNameRecord names[50];
    s32 count;
} NameReply;
extern s32 func_00873EB0(void *packet);
extern s32 func_00873EE0(void *, void *, s32);
extern void *func_001C48E8(void *, s32, u32);
s32 func_0087B200(NetlibPacket *packet, const void *connection, NameReply *reply) {
    s32 i;
    if (!packet || !connection || !reply)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x5022)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    for (i = reply->count; i < 50; i++) {
        NetlibNameRecord *row;
        if (func_00873EB0(packet) == -1)
            break;
        row = &reply->names[i];
        func_00873F60(packet, &row->id);
        func_001C48E8(row->name, 0, sizeof(row->name));
        func_00873EE0(packet, row->name, 0x30);
    }
    func_00874460(packet);
    reply->count = i;
    return 0;
}
