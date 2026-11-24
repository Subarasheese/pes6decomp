/* compiler: mwcc-3.0.1b151 */

#include "pes6/resource_bank_load.h"
extern void func_001D6130(LoadedResource *resource);

void func_001D5D80(s32 id, s32 *args) {
    ResourceLoadOptions options = {0};
    if (findResourceBank(D_003E993C, id))
        return;
    options.id = args[0];
    options.heap = args[0];
    func_0017F9A0(id, func_001D6130, args + 1, 4, &options);
}
