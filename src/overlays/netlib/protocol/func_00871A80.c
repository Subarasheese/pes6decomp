/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_connection.h"
#include "pes6/netlib_packet.h"
extern void *func_001C48E8(void *dst, s32 value, u32 size);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
typedef struct {
    s32 id, sender;
    char name[49];
    s8 field39, field3A;
    char text[129];
} NetlibNotice;
s32 func_00871A80(NetlibPacket *packet, void *output) {
    NetlibNotice *notice = output;
    if (!packet || !notice)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4402)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00874120(packet, &notice->field39);
    func_00874120(packet, &notice->field3A);
    func_00873F60(packet, &notice->id);
    func_00873F60(packet, &notice->sender);
    func_001C48E8(notice->name, 0, sizeof(notice->name));
    func_00873EE0(packet, notice->name, sizeof(notice->name) - 1);
    func_001C48E8(notice->text, 0, sizeof(notice->text));
    func_00873EE0(packet, notice->text, sizeof(notice->text) - 1);
    func_00874460(packet);
    return 0x4402;
}
