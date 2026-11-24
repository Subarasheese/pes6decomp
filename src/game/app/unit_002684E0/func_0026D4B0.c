/* compiler: mwcc-3.0.1b210 */
#include "pes6/localized_player_names.h"
#include "pes6/resource_bank_load.h"
extern void *func_00153FE0(s32 heap, u32 bytes);
extern void func_0026D420(LoadedResource *resource);
void func_0026D4B0(s32 heap) {
    if (!D_0058D810[0])
        D_0058D810[0] = func_00153FE0(heap, func_0017F850(PLAYER_NAME_RESOURCE));
    func_0017F950(PLAYER_NAME_RESOURCE, func_0026D420, (s32 *)D_0058D810[0], 4, 1);
}
