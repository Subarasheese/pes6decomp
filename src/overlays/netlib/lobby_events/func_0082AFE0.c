/* compiler: mwcc-3.0.1b198-O3 */
#pragma opt_strength_reduction off
#pragma inline_depth(16)
#include "pes6/netlib_directory.h"
s32 func_0082AFE0(s32 id) {
    s32 i;
    NetlibDirectoryIndex *state;
    if (!id)
        return 0;
    state = netlib_directory_index();
    for (i = 0; i < 100; i++) {
        if (state->identifiers[i] == id)
            return 1;
    }
    return 0;
}
