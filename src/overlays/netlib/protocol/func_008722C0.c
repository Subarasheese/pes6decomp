/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_room_profiles.h"
extern s32 func_00873EB0(void *packet);
s32 func_008722C0(NetlibPacket *packet, LobbyProfileList *list) {
    s32 i;
    if (!packet || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x4212)
        return NETLIB_UNEXPECTED_TAG;
    netlib_limit_profile_count(&list->count, 0, 100);
    i = list->count;
    func_00874470(packet);
    for (; i < 100; i++) {
        if (func_00873EB0(packet) == -1)
            break;
        {
            LobbyProfile *row = &list->rows[i];
            func_00873F60(packet, &row->id);
            func_001C48E8(row->name, 0, sizeof(row->name));
            func_00873EE0(packet, row->name, sizeof(row->name) - 1);
            func_00873F60(packet, &row->field40);
            func_001C48E8(row->secondName, 0, sizeof(row->secondName));
            func_00873EE0(packet, row->secondName, sizeof(row->secondName) - 1);
            func_00874120(packet, &row->status);
            func_00874120(packet, &row->mode);
            func_00873F60(packet, &row->value38);
            func_00873F60(packet, &row->value3C);
            func_00874090(packet, &row->field4A);
            func_00874040(packet, &row->value7E);
            func_00874040(packet, &row->field44);
            func_00874040(packet, &row->field46);
            func_00874040(packet, &row->field48);
            func_00874120(packet, &row->field80);
            func_00874120(packet, &row->field32);
            func_00874120(packet, &row->field81);
        }
    }
    func_00874460(packet);
    list->count = i;
    netlib_limit_profile_count(&list->count, 0, 100);
    return 0;
}
