/* compiler: mwcc-3.0.1b151 */
#include "pes6/resource_bank_load.h"
extern s32 func_001540C0(void);
extern void func_001D6130(LoadedResource *resource);
static inline void loadBank(s32 id, s32 *args) {
    ResourceLoadOptions options = {0};
    if (findResourceBank(D_003E993C, id))
        return;
    options.id = args[0];
    options.heap = args[0];
    func_0017F9A0(id, func_001D6130, args + 1, 4, &options);
}
void func_001D5E20(s32 id) {
    s32 args[2];
    s32 heap = func_001540C0();
    args[0] = heap;
    args[1] = heap;
    loadBank(id, args);
}
