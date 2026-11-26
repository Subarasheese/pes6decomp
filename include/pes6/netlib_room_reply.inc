/* The two lobby protocols use the same reply layout under different tags. */
#include "pes6/netlib_packet.h"
typedef struct {
    s32 id, value04;
    s16 values08[4], value10, value12, value14, reserved16;
} ReplyMember;
typedef struct {
    s32 id, value04;
    s16 value08, reserved0A;
} ReplySlot;
typedef struct {
    ReplyMember members[4];
    ReplySlot slots[2];
} RoomReply;
extern s32 func_00874040(void *, s16 *);
extern s32 func_00874090(void *, s16 *);
s32 NETLIB_REPLY_HANDLER(NetlibPacket *packet, s32 *result, RoomReply *reply) {
    s32 i;
    if (!packet || !result || !reply)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != NETLIB_REPLY_TAG)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873FD0(packet, result);
    if (*result == 0) {
        for (i = 0; i < 4; i++) {
            ReplyMember *row = &reply->members[i];
            func_00873F60(packet, &row->id);
            func_00874040(packet, &row->value10);
            func_00873F60(packet, &row->value04);
            func_00874040(packet, &row->values08[0]);
            func_00874040(packet, &row->values08[1]);
            func_00874040(packet, &row->values08[2]);
            func_00874040(packet, &row->values08[3]);
            func_00874090(packet, &row->value14);
            func_00874090(packet, &row->value12);
        }
        for (i = 0; i < 2; i++) {
            func_00873F60(packet, &reply->slots[i].id);
            func_00874040(packet, &reply->slots[i].value08);
            func_00873F60(packet, &reply->slots[i].value04);
        }
    }
    func_00874460(packet);
    return 0;
}

#undef NETLIB_REPLY_HANDLER
#undef NETLIB_REPLY_TAG
