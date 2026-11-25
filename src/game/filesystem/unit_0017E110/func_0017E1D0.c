/* compiler: mwcc-3.0.1b151 */
#include "pes6/resource_bank_load.h"
extern void func_00145750(void *), func_001511C0(s32, void *), func_00150FF0(s32, void *),
    Pes6Heap_Free(void *);
void func_0017E1D0(LoadedResource *resource) {
    void *file = resource->file;
    s32 heap = resource->heap;
    if (heap) {
        func_001511C0(heap, file);
        func_00150FF0(heap, file);
        Pes6Heap_Free(file);
    } else {
        func_00145750(file);
    }
}
