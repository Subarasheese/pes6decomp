/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_packet.h"
#include "pes6/lobby_result_entries.h"
extern void *func_001C48E8(void *dst, s32 value, u32 size);
extern s32 func_00873EE0(void *packet, void *dst, s32 size);
extern s32 func_00873EB0(void *packet);
extern s32 func_00874040(void *packet, s16 *value);
s32 func_00867D40(NetlibPacket *packet, LobbyResultEntry *rows, s32 *result) {
    s32 i;
    s8 slot;
    if (!packet || !rows || !result)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x3012)
        return NETLIB_UNEXPECTED_TAG;
    func_001C48E8(rows, 0, 3 * sizeof(*rows));
    func_00874470(packet);
    func_00873FD0(packet, result);
    for (i = 0; i < 3; i++) {
        LobbyResultEntry *row;
        if (func_00873EB0(packet) == -1)
            break;
        func_00874120(packet, &slot);
        row = &rows[slot];
        row->slot = slot;
        func_00873F60(packet, &row->id);
        func_001C48E8(row->text, 0, sizeof(row->text));
        func_00873EE0(packet, row->text, sizeof(row->text) - 1);
        func_00873FD0(packet, (s32 *)&row->elapsedSeconds);
        func_00874120(packet, &row->field61);
        func_00873F60(packet, &row->field08);
        func_00874040(packet, (s16 *)&row->field62);
        func_00874040(packet, (s16 *)&row->field3E);
    }
    func_00874460(packet);
    return 0;
}
