/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
extern s32 func_00873EE0(void *packet, void *buffer, s32 size);
extern void *func_001C48E8(void *dest, s32 value, u32 size);
extern s32 func_008740E0(void *, u8 *);
s32 func_00872870(NetlibPacket *packet, s32 expectedId, s32 *result, u8 *data, u8 *first,
                  u8 *second, s8 *field1, s8 *field2, s8 *field3, u8 *flags, char *name) {
    s32 id;
    if (!packet || !result || !data || !first || !second || !field1 || !field2 || !field3 ||
        !flags || !name)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4101)
        return NETLIB_UNEXPECTED_TAG;
    flags[0] = 0;
    flags[1] = 0;
    flags[2] = 0;
    func_00874470(packet);
    func_00873FD0(packet, result);
    if (*result != 0) {
        func_00874460(packet);
        return 0;
    }
    func_00873F60(packet, &id);
    func_001C48E8(data, 0, 32);
    func_00873EE0(packet, data, 32);
    func_008740E0(packet, first);
    func_00874120(packet, field1);
    func_00874120(packet, field2);
    func_00874120(packet, field3);
    func_008740E0(packet, second);
    func_001C48E8(name, 0, 49);
    func_00873EE0(packet, name, 48);
    func_008740E0(packet, &flags[0]);
    func_008740E0(packet, &flags[1]);
    func_008740E0(packet, &flags[2]);
    func_00874460(packet);
    if (expectedId != id)
        *result = -266;
    return 0;
}
