/* compiler: mwcc-3.0.1b210 */
#include "pes6/resource_bank_load.h"
s32 func_0017FA00(s32 resource, ResourceReady ready, s32 *arguments, s32 argumentBytes) {
    ResourceLoadOptions local = {0};
    return func_0017FA50(resource, ready, arguments, argumentBytes, &local);
}
