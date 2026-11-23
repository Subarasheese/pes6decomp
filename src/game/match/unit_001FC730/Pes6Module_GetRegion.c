/* compiler: mwcc-3.0.1b210 */
#include "pes6/overlay_module.h"
s32 Pes6Module_GetRegion(s32 moduleId) {
    Pes6ModuleEntry *entry = Pes6Module_Get(moduleId);
    if (entry == 0)
        return 0;
    return entry->region;
}
