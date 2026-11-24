/* compiler: mwcc-3.0.1b210 */

#include "pes6/resource_bank_load.h"
extern void func_001D5050(s32 id, void *file, s32 heap);

void func_001D6130(LoadedResource *resource) {
    func_001D5050(resource->id, resource->file, resource->heap);
}
