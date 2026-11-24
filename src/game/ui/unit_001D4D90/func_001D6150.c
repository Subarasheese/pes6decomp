/* compiler: mwcc-3.0.1b210 */

#include "pes6/resource_bank_load.h"
extern void func_001D5350(void *file), func_001D51F0(s32 id, void *file, s32 heap);

void func_001D6150(LoadedResource *resource) {
    s32 heap = resource->heap;
    func_001D5350(resource->file);
    func_001D51F0(resource->id, resource->file, heap);
}
