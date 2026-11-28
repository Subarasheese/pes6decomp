/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_profile_list.h"
extern s32 func_008740E0(void *, u8 *);
s32 func_00877D80(NetlibPacket *packet, s32 selectedId, NetlibProfileList *list,
                  s8 *selectedState) {
    u8 state = 0;
    s32 id = 0;
    s32 i;
    if (!packet || !list || !selectedState)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x50d2)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873F60(packet, &id);
    func_008740E0(packet, &state);
    func_00874460(packet);
    for (i = 0; i < 30; i++) {
        LobbyProfile *p = &list->profiles[i];
        if (id == p->field00 && id != 0) {
            if (0 == state)
                p->field7D = 1;
            else
                p->field7D = 2;
        }
    }
    if (id == selectedId && id != 0) {
        if (0 == state)
            *selectedState = 1;
        else
            *selectedState = 2;
    }
    netlib_sort_profiles(0, list);
    return 0;
}
