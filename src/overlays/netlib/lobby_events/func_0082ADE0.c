/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/netlib_directory.h"
char *func_0082ADE0(s32 group, s32 index) {
    NetlibDirectoryEntry *entry = func_0082AE20(group, index);
    if (entry == 0)
        return 0;
    if (entry->name[0] == 0)
        return 0;
    return entry->name;
}
