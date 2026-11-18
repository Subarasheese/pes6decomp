/* compiler: mwcc-3.0.1b210 */
#include "pes6/edit_player_sort.h"

s32 func_00BED5B0(const u16 *leftId, const u16 *rightId)
{
    return func_00BED870(*leftId, *rightId, 12, PES6_EDIT_SORT_ASCENDING);
}
