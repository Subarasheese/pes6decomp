/* compiler: mwcc-3.0.1b198-O3 */
#pragma opt_strength_reduction off
#pragma inline_depth(16)
#include "pes6/netlib_directory.h"
NetlibDirectoryGroup *func_0082AF80(s32 id) {
    NetlibDirectoryOwner *owner = (NetlibDirectoryOwner *)D_008A4398[0];
    s32 i;
    if (!owner)
        return 0;
    for (i = 0; i < 7; ++i) {
        if (owner->groups[i].id == id)
            return &owner->groups[i];
    }
    return 0;
}
