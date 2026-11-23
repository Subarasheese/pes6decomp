/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
extern s32 func_00828140(void);
extern s32 func_00827C70(s32);
s32 func_0095E6A0(u16 index) {
    s32 value = lobby_member_value04(index);
    s32 offset = func_00828140();
    return func_00827C70(value + offset);
}
