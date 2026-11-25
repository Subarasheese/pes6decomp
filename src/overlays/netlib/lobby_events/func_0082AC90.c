/* compiler: mwcc-3.0.1b198-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_directory.h"
extern s32 func_0082AAD0(s32 group, s32 index);
static inline s32 groupCount(s32 group) {
    if (!netlib_directory())
        return 0;
    if (group < 0 || group >= 9)
        return 0;
    return netlib_directory_index()->groupCounts[group];
}
s32 func_0082AC90(s32 slot, s32 *outGroup, s32 *outIndex) {
    s32 group, index, count, total;
    if (!outGroup || !outIndex)
        return 1;
    total = netlib_directory_count();
    if (!(slot >= 0 && total > slot))
        return 1;
    for (group = 0; group < 9; group++) {
        count = groupCount(group);
        for (index = 0; index < count; index++) {
            if (slot == func_0082AAD0(group, index)) {
                *outGroup = group;
                *outIndex = index;
                return 4;
            }
        }
    }
    return 1;
}
