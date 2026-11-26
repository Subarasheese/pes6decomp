/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_match_options.h"
s32 func_0083FA50(const MatchOptions *first, const MatchOptions *second) {
    if (!first || !second)
        return 0;
    if (first->slot[4] != second->slot[4])
        return 1;
    if (first->slot[5] != second->slot[5])
        return 1;
    if (first->slot[6] != second->slot[6])
        return 1;
    if (first->slot[7] != second->slot[7])
        return 1;
    if (first->slot[8] != second->slot[8])
        return 1;
    if (first->slot[9] != second->slot[9])
        return 1;
    if (first->slot[10] != second->slot[10])
        return 1;
    if (first->slot[11] != second->slot[11])
        return 1;
    if (first->slot[12] != second->slot[12])
        return 1;
    if (first->slot[13] != second->slot[13])
        return 1;
    if (first->slot[14] != second->slot[14])
        return 1;
    if (first->slot[15] != second->slot[15])
        return 1;
    return first->slot[19] != second->slot[19];
}
