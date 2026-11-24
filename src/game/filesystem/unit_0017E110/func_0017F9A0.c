/* compiler: mwcc-3.0.1b151 */
#include "pes6/resource_bank_load.h"
s32 func_0017F9A0(s32 resource, ResourceReady ready, s32 *arguments, s32 argumentBytes,
                  ResourceLoadOptions *options) {
    if (options == 0) {
        ResourceLoadOptions local = {0};
        return func_0017FA50(resource, ready, arguments, argumentBytes, &local);
    }
    return func_0017FA50(resource, ready, arguments, argumentBytes, options);
}
