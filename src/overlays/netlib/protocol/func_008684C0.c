/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
extern void *func_001C48E8(void *dst, s32 value, u32 size);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_008740E0(void *packet, u8 *value);
typedef struct {
    char text[129];
    u8 first, second;
} BulletinRow;
s32 func_008684C0(NetlibPacket *packet, BulletinRow *rows) {
    s32 i;
    if (!packet || !rows)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x2202)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    for (i = 0; i < 7; i++) {
        BulletinRow *row = &rows[i];
        func_001C48E8(row, 0, sizeof(*row));
        func_008740E0(packet, &row->first);
        func_008740E0(packet, &row->second);
        func_00873EE0(packet, row->text, sizeof(row->text) - 1);
    }
    func_00874460(packet);
    return 0;
}
