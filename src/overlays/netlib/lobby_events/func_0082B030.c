/* compiler: mwcc-3.0.1b198-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_directory.h"
s32 func_0082B030(void) {
    s32 i = 0;
    do {
        netlib_directory_index()->identifiers[i] = 0;
        ++i;
    } while (i < 100);
    return 1;
}
