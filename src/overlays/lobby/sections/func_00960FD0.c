/* compiler: mwcc-3.0.1b198-O3 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
extern s32 func_00960A30(s32 index);
s32 func_00960FD0(void) {
    s32 index, count = 0;
    if (lobby_slot_list() == 0)
        return 0;
    for (index = 0; index < 10; ++index) {
        if (func_00960A30(index) == 2)
            ++count;
    }
    return count;
}
