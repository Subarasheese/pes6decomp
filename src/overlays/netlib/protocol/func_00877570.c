/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_connection.h"
extern void func_00873CF0(void *context, void *packet, s32 mode);
extern s32 func_00873EE0(void *packet, void *data, s32 size);
s32 func_00877570(NetlibConnection *connection, NetlibPacket *packet, s32 *id, char *first,
                  char *second, s32 *result) {
    if (!packet || !id || !first || !result)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x3008)
        return NETLIB_UNEXPECTED_TAG;
    func_00873CF0(&connection->packets, packet, 1);
    func_00874470(packet);
    func_00873FD0(packet, result);
    if (*result) {
        func_00874460(packet);
        return 0;
    }
    func_001C48E8(first, 0, 17);
    func_001C48E8(second, 0, 17);
    func_00873F60(packet, id);
    func_00873EE0(packet, first, 16);
    func_00873EE0(packet, second, 16);
    func_00874460(packet);
    return 0;
}
