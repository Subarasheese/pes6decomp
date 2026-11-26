/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_profile_reader.h"
s32 func_00879250(NetlibPacket *packet, NetlibProfileList *list, s32 *id, char *name, s32 *change,
                  s32 selectedId, s8 *selectedState) {
    s8 reason = 0;
    LobbyProfile p;
    s32 i;
    if (!packet || !list || !id || !name || !change || !selectedState)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x5111)
        return NETLIB_UNEXPECTED_TAG;
    func_001C48E8(&p, 0, sizeof(p));
    func_00874470(packet);
    func_00873F60(packet, &p.field00);
    func_001C48E8(p.text04, 0, sizeof(p.text04));
    func_00873EE0(packet, p.text04, sizeof(p.text04) - 1);
    *id = p.field00;
    func_001C4730(name, p.text04, sizeof(p.text04));
    *change = 0;
    netlib_read_profile_fields(packet, &p);
    func_00874120(packet, &reason);
    func_00874460(packet);
    if (selectedId == p.field00 && selectedId != 0)
        *selectedState = p.field7D;
    for (i = 0; i < 30; i++) {
        LobbyProfile *old = &list->profiles[i];
        if (p.field00 == old->field00 && old->field00 != 0) {
            if (p.fieldC5 != old->fieldC5) {
                if (p.fieldC5 == 1)
                    *change = 3;
                else
                    *change = 4;
            }
            switch (reason) {
            case 0:
                *change = 1;
                break;
            case 1:
                *change = 2;
                break;
            case 2:
            case 3:
                break;
            default:
                break;
            }
            func_001C4730(old, &p, sizeof(p));
            netlib_sort_profiles(0, list);
            return 0;
        }
    }
    for (i = 0; i < 30; i++) {
        LobbyProfile *empty = &list->profiles[i];
        if (!empty->field00) {
            func_001C4730(empty, &p, sizeof(p));
            list->count++;
            netlib_sort_profiles(0, list);
            return 0;
        }
    }
    return 0;
}
