/* compiler: mwcc-3.0.1b151-O3 */
#include "pes6/netlib_group_list.h"
s32 func_0086A860(const void *first, const void *second) {
    const NetlibGroupSlot *left = first, *right = second;
    if (!left || !right)
        return 0;
    if (left->id == 0) {
        if (right->id == 0)
            return 0;
        return 1;
    }
    if (right->id == 0) {
        if (left->id == 0)
            return 0;
        return -1;
    }
    if (left->field04 != 0)
        return -1;
    if (right->field04 != 0)
        return 1;
    {
        if (left->field08 < right->field08)
            return -1;
        if (right->field08 < left->field08)
            return 1;
        return 0;
    }
}
