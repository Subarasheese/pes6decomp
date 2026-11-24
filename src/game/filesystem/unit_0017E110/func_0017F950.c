/* compiler: mwcc-3.0.1b210 */
#include "pes6/resource_bank_load.h"
s32 func_0017F950(s32 resource, ResourceReady ready, s32 *arguments, s32 argumentBytes, u32 flags) {
    ResourceLoadOptions local = {0};
    local.flags = flags;
    return func_0017FA50(resource, ready, arguments, argumentBytes, &local);
}
