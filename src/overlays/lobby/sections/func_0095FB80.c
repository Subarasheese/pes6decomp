/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
#include "pes6/lobby_clock.h"

s32 func_0095FB80(u16 index) {
    s32 value = lobby_reverse_member_value08(index);
    s32 offset = func_00828140();
    return func_00827C30((s32)((u32)value + (u32)offset));
}
