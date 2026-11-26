/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_group_members.h"
s8 func_009509A0(u32 index, s32 slot) {
    LobbyGroupMember *member = lobby_group_member_at(index, slot);
    if (0 == member)
        return 0;
    return member->field07;
}
