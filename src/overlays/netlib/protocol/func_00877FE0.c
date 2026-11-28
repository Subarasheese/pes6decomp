/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_profile_list.h"
extern void *func_001C48E8(void *, s32, u32);
extern s32 func_00873EE0(void *, void *, s32);
s32 func_00877FE0(NetlibPacket *packet, s32 *id, char *name, NetlibProfileList *list,
                  s32 *selectedValue, s8 *selectedState, s32 selectedId) {
    s32 i;
    if (!packet || !id || !name || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x5053)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    func_00873F60(packet, id);
    func_001C48E8(name, 0, 49);
    func_00873EE0(packet, name, 48);
    func_00874460(packet);
    for (i = 0; i < 30; i++) {
        LobbyProfile *p = &list->profiles[i];
        if (*id == p->field00 && *id != 0)
            func_001C48E8(p, 0, sizeof(*p));
    }
    if (*id == selectedId && selectedId != 0) {
        *selectedState = 0;
        *selectedValue = 0;
    }
    netlib_sort_profiles(0, list);
    return 0;
}
