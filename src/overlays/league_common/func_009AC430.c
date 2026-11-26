/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 func_00236680(u8 stage);
extern u8 func_00229010(u8 index);
extern u16 func_002290D0(u8 index);
void func_009AC430(u8 stage, u8 tab, u16 *outTeamId, u8 *outSlot, u8 *outIndex) {
    u8 slot;
    u8 index;
    u16 teamId;
    index = tab + func_00236680(stage);
    slot = func_00229010(index);
    teamId = func_002290D0(index);
    if (outTeamId)
        *outTeamId = teamId;
    if (outSlot)
        *outSlot = slot;
    if (outIndex)
        *outIndex = index;
}
