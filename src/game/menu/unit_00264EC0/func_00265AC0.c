/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    void *next, *previous;
    s32 value;
    void *owner;
    s32 references;
    void *listEntry, *resource;
} ResourceRef;
extern void *D_0058D454[];
extern void **func_001DB310(void *, void *);
extern s32 func_001E6C50(void *);
extern void func_001BB080(void *), Pes6Heap_Free(void *);
s32 func_00265AC0(ResourceRef *ref) {
    s32 remaining = --ref->references;
    if (remaining <= 0) {
        void *entry = ref->listEntry;
        if (entry)
            func_001DB310(D_0058D454[0], entry);
        else
            func_001E6C50(ref->resource);
        func_001BB080(ref);
        Pes6Heap_Free(ref);
    }
    return remaining;
}
