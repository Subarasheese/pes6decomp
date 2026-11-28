/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
#include "pes6/lobby_directories.h"
extern void *func_001C48E8(void *dst, s32 value, u32 size);
s32 func_0087AF10(NetlibPacket *packet, s32 *result, LobbyContactList *list) {
    if (!packet || !result || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x5027)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873FD0(packet, result);
    if (!*result) {
        s32 previous = list->field7B78;
        func_001C48E8(list, 0, sizeof(*list));
        list->count = 0;
        func_00873F60(packet, &list->field7B74);
        list->field7B78 = previous;
    }
    func_00874460(packet);
    return 0;
}
