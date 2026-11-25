/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/netlib_directory.h"
s32 func_0082AAD0(s32 group, s32 index) {
    s32 count = netlib_directory_count();
    NetlibDirectory *list = netlib_directory();
    s32 slot, groupStart;
    if (list == 0)
        return -1;
    if (group < 0 || group >= 9)
        return -1;
    if (!(index >= 0 && D_008A6128[group] > index))
        return -1;
    groupStart = D_008A614C[group];
    slot = D_008A6170[groupStart + index];
    if (!(slot >= 0 && slot < 200 && count > slot))
        return -1;
    return slot;
}
