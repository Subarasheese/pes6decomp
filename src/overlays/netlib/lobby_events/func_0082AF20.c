/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/netlib_directory.h"
s32 func_0082AF20(s32 group) {
    if (netlib_directory() == 0)
        return 0;
    if (group < 0 || group >= 9)
        return 0;
    return D_008A6128[group];
}
