/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"

typedef struct {
    void *handle;
} ConnectMenuEntry;
typedef struct {
    ConnectMenuEntry *primary;
    void *secondary;
    ConnectMenuEntry *caption;
} ConnectMenuParts;
extern void func_001EDD90(void *);
extern void func_00AEDE30(void *);
extern void func_00AED800(ConnectMenuEntry *);
extern void Pes6Heap_Free(void *);
void func_00AE91C0(ConnectMenuParts *parts) {
    if (parts) {
        ConnectMenuEntry *caption = parts->caption;
        if (caption)
            func_001EDD90(caption->handle);
        func_00AEDE30(parts->secondary);
        func_00AED800(parts->primary);
        Pes6Heap_Free(parts->caption);
        Pes6Heap_Free(parts);
    }
}
